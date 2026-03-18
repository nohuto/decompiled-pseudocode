/*
 * XREFs of MiProtoFault @ 0x1400A3E68
 * Callers:
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001DD60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateAddress @ 0x14001F090 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiResolveDemandZeroFault @ 0x14003AA90 (MiResolveDemandZeroFault.c)
 *     MiGetProtoPteAddress @ 0x140042460 (MiGetProtoPteAddress.c)
 *     MiRetainSubsection @ 0x1400A4194 (MiRetainSubsection.c)
 *     MiFaultPteIntact @ 0x1400A44BC (MiFaultPteIntact.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400EA3E0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiProtoFault(
        char *AnyMultiplexedVm,
        __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        char a6,
        __int64 **a7)
{
  unsigned __int64 BugCheckParameter4; // rcx
  unsigned int v9; // edi
  ULONG_PTR v11; // r10
  char *v12; // r15
  __int64 v13; // rdx
  __int64 *v14; // rbx
  int v15; // ebp
  LONG *SharedVm; // rbx
  KIRQL v17; // al
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // rdx
  __int64 v20; // r8
  char v21; // al
  unsigned __int64 v22; // rbp
  __int64 v23; // rbx
  __int16 v24; // ax
  int v25; // eax
  __int64 *v27; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v28[3]; // [rsp+48h] [rbp-70h] BYREF

  BugCheckParameter4 = a5;
  v9 = 0;
  v11 = a3;
  v12 = (char *)a2;
  *a7 = 0LL;
  if ( (AnyMultiplexedVm[184] & 7) == 0 && a4 != qword_140326988 && (!qword_140326990 || a4 != qword_140326990) )
  {
    if ( !a5 )
    {
      BugCheckParameter4 = MiLocateAddress(a3);
      if ( !BugCheckParameter4 )
      {
        v9 = -1073741801;
LABEL_36:
        LOBYTE(v13) = *v12;
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v13);
        return v9;
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x8000) != 0 )
      KeBugCheckEx(0x1Au, 0x61944uLL, v11, a4, BugCheckParameter4);
    MiGetProtoPteAddress(BugCheckParameter4, v11 >> 12, 0, &v27);
    v14 = v27;
    MiRetainSubsection(v27);
    *a7 = v14;
  }
  LOBYTE(a2) = *v12;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, a2);
  v15 = 2;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v17 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *v12 = v17;
  if ( a6 == 1 )
  {
    v18 = ((a4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v19 = v28;
    v20 = 3LL;
    do
    {
      *v19 = v18;
      v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v19;
      --v20;
    }
    while ( v20 );
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140326D38);
    while ( 1 )
    {
      v21 = MI_READ_PTE_LOCK_FREE(v28[v15]);
      if ( (v21 & 1) == 0 || v21 < 0 )
        goto LABEL_29;
      if ( !v15 )
        break;
      --v15;
    }
    if ( (a4 < qword_140327F30 || a4 >= qword_140327F30 + 0xF8000000000LL)
      && (!qword_140326C30
       || a4 < qword_140326C30
       || a4 >= qword_140326C30 + (qword_140326C10 << 21)
       || (*(_BYTE *)(48 * ((*(_QWORD *)(((a4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                    - 0x57FFFFFFFDALL) & 0xF0) != 0x70) )
    {
LABEL_29:
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D38);
      goto LABEL_36;
    }
    v22 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23 = MI_READ_PTE_LOCK_FREE(v22);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D38);
    if ( (v23 & 1) == 0 )
    {
      if ( (unsigned int)MiFaultPteIntact(v23) )
        goto LABEL_33;
      v9 = -1073741819;
      goto LABEL_36;
    }
    if ( (v23 & 0x200) == 0 )
      goto LABEL_36;
LABEL_26:
    MiCopyOnWriteEx(a4, 0);
    goto LABEL_36;
  }
  v22 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = MI_READ_PTE_LOCK_FREE(v22);
  LOWORD(v23) = v24;
  if ( (v24 & 1) != 0 )
  {
    if ( (v24 & 0x200) == 0 )
      goto LABEL_36;
    goto LABEL_26;
  }
LABEL_33:
  if ( (v23 & 0x402) == 0x402 )
  {
    v25 = MiResolveDemandZeroFault(a4, v22, 0LL, (__int64)AnyMultiplexedVm, 0LL, 0LL, *v12);
    if ( v25 < 0 )
    {
      v9 = v25;
      goto LABEL_36;
    }
  }
  return 3221225494LL;
}
