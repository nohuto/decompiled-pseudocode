/*
 * XREFs of ExpGetLookasideInformation @ 0x140262C20
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpGetLookasideInformation(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // esi
  unsigned int v4; // r14d
  int v5; // r12d
  _DWORD *v6; // r13
  __int64 *v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rcx
  volatile signed __int64 *v10; // rdi
  unsigned __int8 CurrentIrql; // r15
  signed __int8 v12; // cf
  __int64 *v13; // rcx
  __int64 *v14; // rcx
  _DWORD *v15; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+68h] [rbp+38h]
  __int64 v18; // [rsp+80h] [rbp+50h] BYREF
  struct _MDL *v19; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2 >> 5;
  v5 = 0;
  v6 = a3;
  if ( (unsigned int)a2 >> 5 )
  {
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    v5 = ExLockUserBuffer(a1, a2, a3, 1LL, &v18, &v19);
    if ( v5 >= 0 )
    {
      v7 = (__int64 *)ExPoolLookasideListHead;
      v8 = v18;
      v5 = 0;
      while ( v7 != &ExPoolLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v7 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v7 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v7 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v7 - 11) - *((_DWORD *)v7 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v7 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v7 - 9) - *((_DWORD *)v7 - 8);
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v7 - 7);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v7 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v7 - 5);
        if ( v3 == v4 )
          goto LABEL_36;
        v7 = (__int64 *)*v7;
        v8 += 32LL;
        v18 = v8;
      }
      v9 = (__int64 *)ExSystemLookasideListHead;
      while ( v9 != &ExSystemLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v9 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v9 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v9 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v9 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v9 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v9 - 8);
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v9 - 7);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v9 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v9 - 5);
        if ( v3 == v4 )
          goto LABEL_36;
        v9 = (__int64 *)*v9;
        v8 += 32LL;
        v18 = v8;
      }
      v10 = &ExNPagedLookasideLock;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExNPagedLookasideLock);
      }
      else
      {
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&ExNPagedLookasideLock, 0LL);
        if ( v12 )
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExNPagedLookasideLock);
        v8 = v18;
      }
      v13 = (__int64 *)ExNPagedLookasideListHead;
      while ( v13 != &ExNPagedLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v13 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v13 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v13 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v13 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v13 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v13 - 8);
        *(_DWORD *)(v8 + 20) = 0;
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v13 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v13 - 5);
        if ( v3 == v4 )
          goto LABEL_32;
        v13 = (__int64 *)*v13;
        v8 += 32LL;
        v18 = v8;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(&ExNPagedLookasideLock, retaddr);
      }
      else
      {
        _InterlockedAnd64(&ExNPagedLookasideLock, 0LL);
        v8 = v18;
      }
      __writecr8(CurrentIrql);
      v10 = &ExPagedLookasideLock;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExPagedLookasideLock);
      }
      else
      {
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&ExPagedLookasideLock, 0LL);
        if ( v12 )
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExPagedLookasideLock);
        v8 = v18;
      }
      v14 = (__int64 *)ExPagedLookasideListHead;
      if ( (__int64 *)ExPagedLookasideListHead != &ExPagedLookasideListHead )
      {
        v15 = (_DWORD *)(v8 + 4);
        do
        {
          ++v3;
          *((_WORD *)v15 - 2) = *((_WORD *)v14 - 32);
          *((_WORD *)v15 - 1) = *((_WORD *)v14 - 24);
          *v15 = *((_DWORD *)v14 - 11);
          v15[1] = *((_DWORD *)v14 - 10);
          v15[2] = *((_DWORD *)v14 - 9);
          v15[3] = *((_DWORD *)v14 - 8);
          v15[4] = 1;
          v15[5] = *((_DWORD *)v14 - 6);
          v15[6] = *((_DWORD *)v14 - 5);
          if ( v3 == v4 )
            break;
          v14 = (__int64 *)*v14;
          v15 += 8;
        }
        while ( v14 != &ExPagedLookasideListHead );
      }
LABEL_32:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v10, retaddr);
      else
        _InterlockedAnd64(v10, 0LL);
      __writecr8(CurrentIrql);
LABEL_36:
      ExUnlockUserBuffer(v19);
    }
  }
  result = (unsigned int)v5;
  *v6 = 32 * v3;
  return result;
}
