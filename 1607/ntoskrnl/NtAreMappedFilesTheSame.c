/*
 * XREFs of NtAreMappedFilesTheSame @ 0x1405293B4
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockVad @ 0x1400144A0 (MiUnlockVad.c)
 *     MiDereferenceControlAreaFile @ 0x140026640 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     MiUnlockAndDereferenceVad @ 0x14002BDA0 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x14002BFB0 (MiLockVad.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     MiVadDeleted @ 0x14002C370 (MiVadDeleted.c)
 *     MiObtainReferencedVad @ 0x14003E320 (MiObtainReferencedVad.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiDereferenceVad @ 0x1401F76FC (MiDereferenceVad.c)
 *     MiVadIsCfgBitmap @ 0x1404F3B20 (MiVadIsCfgBitmap.c)
 */

NTSTATUS __stdcall NtAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 *v9; // rbp
  _BYTE *v10; // rax
  _BYTE *v11; // rbx
  __int64 *v12; // r14
  __int64 *v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // ebx
  ULONG_PTR v17; // rax
  NTSTATUS v19; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVad((__int64)File1MappedAsAnImage, &v19);
  v6 = v5;
  if ( !v5 )
    return -1073741503;
  MiUnlockVad((__int64)CurrentThread, v5);
  v7 = MiObtainReferencedVad((__int64)File2MappedAsFile, &v19);
  v8 = v7;
  if ( !v7 )
  {
    MiLockVad((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVad((char *)v6);
    return -1073741503;
  }
  if ( v6 == v7 )
  {
    MiDereferenceVad(v6);
    MiUnlockAndDereferenceVad((char *)v8);
    return 0;
  }
  else if ( (unsigned int)MiVadIsCfgBitmap(v6) == 1 || (unsigned int)MiVadIsCfgBitmap(v8) == 1 )
  {
    MiUnlockAndDereferenceVad((char *)v8);
    MiLockVad((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVad((char *)v6);
    return -1073741800;
  }
  else
  {
    if ( File1MappedAsAnImage <= File2MappedAsFile )
    {
      MiUnlockVad((__int64)CurrentThread, v8);
      MiLockVad((__int64)CurrentThread, v6);
      v9 = (unsigned __int64 *)(v8 + 40);
    }
    else
    {
      v9 = (unsigned __int64 *)(v6 + 40);
    }
    v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      v11[26] |= 1u;
    if ( (unsigned int)MiVadDeleted(v6) || (unsigned int)MiVadDeleted(v8) )
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
      v17 = MiReferenceControlAreaFile(v15);
      if ( v14 == *(_QWORD *)(*(_QWORD *)(v17 + 40) + 16LL) )
        v16 = 0;
      v19 = v16;
      MiDereferenceControlAreaFile(v15, v17);
    }
    else
    {
      v19 = -1073741800;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 40));
    KeAbPostRelease(v8 + 40);
    MiUnlockAndDereferenceVad((char *)v6);
    MiLockVad((__int64)CurrentThread, v8);
    MiUnlockAndDereferenceVad((char *)v8);
    return v19;
  }
}
