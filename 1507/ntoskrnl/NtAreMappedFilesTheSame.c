/*
 * XREFs of NtAreMappedFilesTheSame @ 0x140551204
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiVadDeleted @ 0x14008964C (MiVadDeleted.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiDereferenceVad @ 0x14022F078 (MiDereferenceVad.c)
 *     MiVadIsCfgBitmap @ 0x1404B1E5C (MiVadIsCfgBitmap.c)
 */

NTSTATUS __stdcall NtAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 *v18; // r14
  __int64 *v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rbp
  int v22; // ebx
  ULONG_PTR v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  NTSTATUS v29; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVad((__int64)File1MappedAsAnImage, &v29);
  v6 = v5;
  if ( !v5 )
    return -1073741503;
  MiUnlockVad((__int64)CurrentThread, v5);
  v7 = MiObtainReferencedVad((__int64)File2MappedAsFile, &v29);
  v10 = v7;
  if ( !v7 )
  {
    MiLockVad((__int64)CurrentThread, v6, v8, v9);
    MiUnlockAndDereferenceVad((char *)v6);
    return -1073741503;
  }
  if ( v6 == v7 )
  {
    MiDereferenceVad(v6);
    MiUnlockAndDereferenceVad((char *)v10);
    return 0;
  }
  else if ( (unsigned int)MiVadIsCfgBitmap(v6) == 1 || (unsigned int)MiVadIsCfgBitmap(v10) == 1 )
  {
    MiUnlockAndDereferenceVad((char *)v10);
    MiLockVad((__int64)CurrentThread, v6, v27, v28);
    MiUnlockAndDereferenceVad((char *)v6);
    return -1073741800;
  }
  else
  {
    if ( File1MappedAsAnImage > File2MappedAsFile )
    {
      v14 = (unsigned __int64 *)(v6 + 40);
    }
    else
    {
      MiUnlockVad((__int64)CurrentThread, v10);
      MiLockVad((__int64)CurrentThread, v6, v12, v13);
      v14 = (unsigned __int64 *)(v10 + 40);
    }
    v15 = KeAbPreAcquire((ULONG_PTR)v14, 0LL, 0LL, v11);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
      ExfAcquirePushLockExclusiveEx(v14, v15, (ULONG_PTR)v14, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    if ( (unsigned int)MiVadDeleted(v6) || (unsigned int)MiVadDeleted(v10) )
    {
      v29 = -1073741503;
    }
    else if ( (*(_DWORD *)(v6 + 48) & 0x8000) == 0
           && (*(_DWORD *)(v10 + 48) & 0x8000) == 0
           && (v18 = *(__int64 **)(v6 + 72)) != 0LL
           && (v19 = *(__int64 **)(v10 + 72)) != 0LL
           && (v20 = *v18, v21 = *v19, v20)
           && v21
           && *(_QWORD *)(v20 + 64)
           && *(_QWORD *)(v21 + 64) )
    {
      v22 = -1073741612;
      v23 = MI_REFERENCE_CONTROL_AREA_FILE(v21);
      if ( v20 == *(_QWORD *)(*(_QWORD *)(v23 + 40) + 16LL) )
        v22 = 0;
      v29 = v22;
      MI_DEREFERENCE_CONTROL_AREA_FILE(v21, v23);
    }
    else
    {
      v29 = -1073741800;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 40));
    KeAbPostRelease(v10 + 40);
    MiUnlockAndDereferenceVad((char *)v6);
    MiLockVad((__int64)CurrentThread, v10, v24, v25);
    MiUnlockAndDereferenceVad((char *)v10);
    return v29;
  }
}
