/*
 * XREFs of NtAreMappedFilesTheSame @ 0x1403E8334
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiDereferenceVad @ 0x1401E1DB4 (MiDereferenceVad.c)
 *     MiVadIsCfgBitmap @ 0x1403E8974 (MiVadIsCfgBitmap.c)
 */

NTSTATUS __stdcall NtAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int *v5; // rax
  __int64 v6; // rdi
  unsigned int *v7; // rax
  __int64 v8; // rsi
  unsigned __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // r14
  __int64 *v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // ebx
  ULONG_PTR v17; // rax
  NTSTATUS v19; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVad((__int64)File1MappedAsAnImage, &v19);
  v6 = (__int64)v5;
  if ( !v5 )
    return -1073741503;
  MiUnlockVad((__int64)CurrentThread, (__int64)v5);
  v7 = MiObtainReferencedVad((__int64)File2MappedAsFile, &v19);
  v8 = (__int64)v7;
  if ( !v7 )
  {
    MiLockVad((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVad((PVOID)v6);
    return -1073741503;
  }
  if ( (unsigned int *)v6 == v7 )
  {
    MiDereferenceVad(v6);
    MiUnlockAndDereferenceVad((PVOID)v8);
    return 0;
  }
  else if ( (unsigned int)MiVadIsCfgBitmap(v6) == 1 || (unsigned int)MiVadIsCfgBitmap(v8) == 1 )
  {
    MiUnlockAndDereferenceVad((PVOID)v8);
    MiLockVad((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVad((PVOID)v6);
    return -1073741800;
  }
  else
  {
    if ( File1MappedAsAnImage > File2MappedAsFile )
    {
      v9 = (unsigned __int64 *)(v6 + 40);
    }
    else
    {
      MiUnlockVad((__int64)CurrentThread, v8);
      MiLockVad((__int64)CurrentThread, v6);
      v9 = (unsigned __int64 *)(v8 + 40);
    }
    v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    if ( MiVadDeleted(v6) || MiVadDeleted(v8) )
    {
      v19 = -1073741503;
    }
    else if ( (*(_DWORD *)(v6 + 48) & 0x8000) == 0
           && (*(_DWORD *)(v8 + 48) & 0x8000) == 0
           && (v12 = *(__int64 **)(v6 + 72)) != 0LL
           && (v13 = *(__int64 **)(v8 + 72)) != 0LL
           && (v14 = *v12, v15 = *v13, v14)
           && v15
           && *(_QWORD *)(v14 + 64)
           && *(_QWORD *)(v15 + 64) )
    {
      v16 = -1073741612;
      v17 = MI_REFERENCE_CONTROL_AREA_FILE(v15);
      if ( v14 == *(_QWORD *)(*(_QWORD *)(v17 + 40) + 16LL) )
        v16 = 0;
      v19 = v16;
      MI_DEREFERENCE_CONTROL_AREA_FILE(v15, v17);
    }
    else
    {
      v19 = -1073741800;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40));
    KeAbPostRelease(v8 + 40);
    MiUnlockAndDereferenceVad((PVOID)v6);
    MiLockVad((__int64)CurrentThread, v8);
    MiUnlockAndDereferenceVad((PVOID)v8);
    return v19;
  }
}
