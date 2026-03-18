/*
 * XREFs of MiLockVadRange @ 0x1403E8728
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140021060 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x1403E8528 (MmAssignProcessToJob.c)
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140063C70 (MiReferenceVad.c)
 *     MiWaitForVadDeletion @ 0x1401E1DD8 (MiWaitForVadDeletion.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1401E1E5C (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     MiVadIsCfgBitmap @ 0x1403E8974 (MiVadIsCfgBitmap.c)
 */

__int64 __fastcall MiLockVadRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v5; // r15d
  __int64 v6; // rbp
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  unsigned __int64 Address; // r14
  __int64 i; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 k; // rbx
  _QWORD *j; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 *v22; // rsi
  __int64 v23; // r14
  unsigned __int64 *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  _QWORD *m; // rax
  __int64 n; // rbx
  __int64 v31; // rcx
  _OWORD v32[5]; // [rsp+20h] [rbp-58h] BYREF
  int v33; // [rsp+80h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 1;
  v6 = 0LL;
  v33 = 1;
  v7 = 0LL;
  v8 = a3;
  v32[0] = 0LL;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  while ( 2 )
  {
    if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
      return 0LL;
    if ( v3 == -1LL )
    {
      v21 = *(_QWORD **)(a1 + 1552);
      Address = 0LL;
      while ( v21 )
      {
        Address = (unsigned __int64)v21;
        v21 = (_QWORD *)*v21;
      }
    }
    else
    {
      Address = MiLocateAddress(v3);
    }
    for ( i = Address; ; i = v11 )
    {
      if ( !i )
      {
        v18 = (__int64)CurrentThread;
        goto LABEL_29;
      }
      v11 = *(_QWORD *)(i + 8);
      v12 = i;
      if ( v11 )
      {
        for ( j = *(_QWORD **)v11; j; j = (_QWORD *)*j )
          v11 = (unsigned __int64)j;
      }
      else
      {
        for ( k = *(_QWORD *)(i + 16); ; k = *(_QWORD *)(v11 + 16) )
        {
          v11 = k & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v11 || *(_QWORD *)v11 == v12 )
            break;
          v12 = v11;
        }
      }
      if ( v8 != -1LL )
      {
        v20 = *(unsigned int *)(i + 28);
        if ( v8 <= (v20 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12 )
        {
          v11 = 0LL;
          goto LABEL_15;
        }
        if ( v11 )
        {
          if ( (v20 | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1 == (*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32)) )
            goto LABEL_15;
          v11 = 0LL;
        }
        v5 = 0;
        v33 = 0;
      }
LABEL_15:
      if ( (unsigned int)MiVadIsCfgBitmap(i) != 1 )
        break;
      *((_QWORD *)v32 + v7) = i;
      v7 = (unsigned int)(v7 + 1);
LABEL_25:
      ;
    }
    if ( v6 )
    {
      v15 = KeAbPreAcquire(i + 40, 0LL, 0LL);
      v16 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(i + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(i + 40), v15, i + 40);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      v8 = a3;
    }
    else
    {
      MiLockVad((__int64)CurrentThread, i);
    }
    v5 = v33;
    if ( !MiVadDeleted(i) && v33 )
    {
      ++v6;
      goto LABEL_25;
    }
    MiReferenceVad(v17);
    if ( Address != i )
    {
      do
      {
        v27 = *(_QWORD *)(Address + 8);
        v28 = Address;
        if ( v27 )
        {
          for ( m = *(_QWORD **)v27; m; m = (_QWORD *)*m )
            v27 = (unsigned __int64)m;
        }
        else
        {
          for ( n = *(_QWORD *)(Address + 16); ; n = *(_QWORD *)(v27 + 16) )
          {
            v27 = n & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v27 || *(_QWORD *)v27 == v28 )
              break;
            v28 = v27;
          }
        }
        if ( !(unsigned int)MiVadIsCfgBitmap(Address) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Address + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(Address + 40));
          KeAbPostRelease(Address + 40);
        }
        Address = v27;
      }
      while ( v27 != i );
    }
    v18 = (__int64)CurrentThread;
    UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED((__int64)CurrentThread, a1);
    if ( MiVadDeleted(i) )
      MiWaitForVadDeletion(v31);
    MiUnlockAndDereferenceVad((PVOID)i);
    v6 = 0LL;
    if ( v33 )
    {
      v7 = 0LL;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      v3 = a2;
      v8 = a3;
      continue;
    }
    break;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
LABEL_29:
  if ( v5 == 1 && (_DWORD)v7 )
  {
    v22 = (__int64 *)v32;
    v23 = (unsigned int)v7;
    do
    {
      if ( v6 )
      {
        v24 = (unsigned __int64 *)(*v22 + 40);
        v25 = KeAbPreAcquire((ULONG_PTR)v24, 0LL, 0LL);
        v26 = v25;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v24, 0LL) )
          ExfAcquirePushLockExclusiveEx(v24, v25, (ULONG_PTR)v24);
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        v18 = (__int64)CurrentThread;
      }
      else
      {
        MiLockVad(v18, *v22);
      }
      ++v6;
      ++v22;
      --v23;
    }
    while ( v23 );
  }
  return v6;
}
