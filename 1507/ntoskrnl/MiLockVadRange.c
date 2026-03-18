/*
 * XREFs of MiLockVadRange @ 0x1404B1C28
 * Callers:
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 *     MmAssignProcessToJob @ 0x14041AD30 (MmAssignProcessToJob.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14008964C (MiVadDeleted.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiReferenceVad @ 0x1400896D4 (MiReferenceVad.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiWaitForVadDeletion @ 0x14022F098 (MiWaitForVadDeletion.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x14022F11C (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     MiVadIsCfgBitmap @ 0x1404B1E5C (MiVadIsCfgBitmap.c)
 */

__int64 __fastcall MiLockVadRange(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  int v6; // r15d
  __int64 v7; // rbp
  __int64 v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *Address; // r14
  __int64 i; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 k; // rbx
  _QWORD *j; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rsi
  _QWORD *v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // r14
  unsigned __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  _QWORD *v32; // rax
  _QWORD *m; // rax
  __int64 n; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _OWORD v38[5]; // [rsp+20h] [rbp-58h] BYREF
  int v39; // [rsp+80h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  v4 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = 1;
  v7 = 0LL;
  v39 = 1;
  v8 = 0LL;
  v9 = a3;
  v38[0] = 0LL;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, a3, a4);
  while ( 2 )
  {
    if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
      return 0LL;
    if ( v4 == -1LL )
    {
      v25 = *(_QWORD **)(a1 + 1544);
      Address = 0LL;
      while ( v25 )
      {
        Address = v25;
        v25 = (_QWORD *)*v25;
      }
    }
    else
    {
      Address = MiLocateAddress(v4);
    }
    for ( i = (__int64)Address; ; i = v14 )
    {
      if ( !i )
      {
        v19 = (__int64)CurrentThread;
        goto LABEL_23;
      }
      v14 = *(_QWORD *)(i + 8);
      v15 = i;
      if ( v14 )
      {
        for ( j = *(_QWORD **)v14; j; j = (_QWORD *)*j )
          v14 = (unsigned __int64)j;
      }
      else
      {
        for ( k = *(_QWORD *)(i + 16); ; k = *(_QWORD *)(v14 + 16) )
        {
          v14 = k & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v14 || *(_QWORD *)v14 == v15 )
            break;
          v15 = v14;
        }
      }
      if ( v9 != -1LL )
      {
        v21 = *(unsigned int *)(i + 28);
        if ( v9 <= (v21 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12 )
        {
          v14 = 0LL;
          goto LABEL_15;
        }
        if ( v14 )
        {
          if ( (v21 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1 == (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) )
            goto LABEL_15;
          v14 = 0LL;
        }
        v6 = 0;
        v39 = 0;
      }
LABEL_15:
      if ( (unsigned int)MiVadIsCfgBitmap(i) != 1 )
        break;
      *((_QWORD *)v38 + v8) = i;
      v8 = (unsigned int)(v8 + 1);
LABEL_21:
      ;
    }
    if ( v7 )
    {
      v22 = KeAbPreAcquire(i + 40, 0LL, 0LL, v11);
      v24 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(i + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(i + 40), v22, i + 40, v23);
      if ( v24 )
        *(_BYTE *)(v24 + 26) |= 1u;
      v9 = a3;
    }
    else
    {
      MiLockVad((__int64)CurrentThread, i, v10, v11);
    }
    v6 = v39;
    if ( (unsigned int)MiVadDeleted(i) != 1 && v39 )
    {
      ++v7;
      goto LABEL_21;
    }
    MiReferenceVad(v18);
    if ( Address != (_QWORD *)i )
    {
      do
      {
        v31 = Address[1];
        v32 = Address;
        if ( v31 )
        {
          for ( m = *(_QWORD **)v31; m; m = (_QWORD *)*m )
            v31 = (unsigned __int64)m;
        }
        else
        {
          for ( n = Address[2]; ; n = *(_QWORD *)(v31 + 16) )
          {
            v31 = n & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v31 || *(_QWORD **)v31 == v32 )
              break;
            v32 = (_QWORD *)v31;
          }
        }
        if ( !(unsigned int)MiVadIsCfgBitmap(Address) )
        {
          if ( (_InterlockedExchangeAdd64(Address + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(Address + 5);
          KeAbPostRelease((ULONG_PTR)(Address + 5));
        }
        Address = (_QWORD *)v31;
      }
      while ( v31 != i );
    }
    v19 = (__int64)CurrentThread;
    UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED((__int64)CurrentThread, a1);
    if ( (unsigned int)MiVadDeleted(i) == 1 )
      MiWaitForVadDeletion(v35);
    MiUnlockAndDereferenceVad((char *)i);
    v7 = 0LL;
    if ( v39 )
    {
      v8 = 0LL;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, v36, v37);
      v4 = a2;
      v9 = a3;
      continue;
    }
    break;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, v36, v37);
LABEL_23:
  if ( v6 == 1 && (_DWORD)v8 )
  {
    v26 = (__int64 *)v38;
    v27 = (unsigned int)v8;
    do
    {
      if ( v7 )
      {
        v28 = (unsigned __int64 *)(*v26 + 40);
        v29 = KeAbPreAcquire((ULONG_PTR)v28, 0LL, 0LL, v11);
        v30 = v29;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
          ExfAcquirePushLockExclusiveEx(v28, v29, (ULONG_PTR)v28, v11);
        if ( v30 )
          *(_BYTE *)(v30 + 26) |= 1u;
        v19 = (__int64)CurrentThread;
      }
      else
      {
        MiLockVad(v19, *v26, v10, v11);
      }
      ++v7;
      ++v26;
      --v27;
    }
    while ( v27 );
  }
  return v7;
}
