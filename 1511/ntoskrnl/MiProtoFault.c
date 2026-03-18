/*
 * XREFs of MiProtoFault @ 0x1400EA824
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiRetainSubsection @ 0x1400EAAA4 (MiRetainSubsection.c)
 *     MiFaultPteIntact @ 0x1400EAB10 (MiFaultPteIntact.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiProtoFault(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        char a6,
        __int64 *a7)
{
  unsigned __int64 BugCheckParameter4; // rcx
  unsigned int v9; // edi
  ULONG_PTR v11; // r10
  unsigned __int8 *v12; // rsi
  __int64 v13; // rbx
  KIRQL v14; // r15
  __int64 v15; // rbp
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  int v20; // eax
  char *v22; // rcx
  __int64 *v23; // rdx
  unsigned int v24; // ebx
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int8 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // [rsp+40h] [rbp-78h] BYREF
  __int64 v34; // [rsp+48h] [rbp-70h] BYREF
  char v35; // [rsp+50h] [rbp-68h] BYREF

  BugCheckParameter4 = a5;
  v9 = 0;
  v11 = a3;
  v12 = (unsigned __int8 *)a2;
  *a7 = 0LL;
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 && a4 != qword_1402FE6A8 )
  {
    if ( !a5 )
    {
      BugCheckParameter4 = MiLocateAddress(a3);
      if ( !BugCheckParameter4 )
      {
        LOBYTE(v28) = *v12;
        MiUnlockWorkingSetExclusive(a1, v28, v29);
        return 3221225495LL;
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x8000) != 0 )
      KeBugCheckEx(0x1Au, 0x61944uLL, v11, a4, BugCheckParameter4);
    MiGetProtoPteAddress(BugCheckParameter4, v11 >> 12, 0, &v33);
    v13 = v33;
    MiRetainSubsection(v33);
    *a7 = v13;
  }
  LOBYTE(a2) = *v12;
  MiUnlockWorkingSetExclusive(a1, a2, a3);
  v14 = ExAcquireSpinLockExclusive(&dword_1402FF980);
  *v12 = v14;
  if ( a6 == 1 )
  {
    v22 = &v35;
    v23 = &v34;
    v24 = 2;
    v25 = 2LL;
    v34 = ((a4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    do
    {
      v26 = (unsigned __int64)*v23++ >> 9;
      *(_QWORD *)v22 = (v26 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v22 += 8;
      --v25;
    }
    while ( v25 );
    ExAcquireSpinLockSharedAtDpcLevel(&dword_1402FE9C8);
    while ( 1 )
    {
      v27 = MI_READ_PTE_LOCK_FREE(*(&v34 + v24));
      if ( (v27 & 1) == 0 )
        goto LABEL_34;
      if ( !v24 )
        break;
      --v24;
    }
    if ( v27 < 0
      || a4 + 0x400000000000LL > 0xF7FFFFFFFFFLL
      && (!qword_1402FE8F0
       || a4 < qword_1402FE8F0
       || a4 >= qword_1402FE8F0 + (qword_1402FE8D0 << 21)
       || (*(_BYTE *)(48 * ((*(_QWORD *)(((a4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                    - 0x57FFFFFFFDALL) & 0xF0) != 0x70) )
    {
LABEL_34:
      ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
      LOBYTE(v31) = *v12;
      MiUnlockWorkingSetExclusive((__int64)&dword_1402FF980, v31, v32);
      return 0LL;
    }
    v15 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = MI_READ_PTE_LOCK_FREE(v15);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
    if ( (v19 & 1) == 0 )
    {
      if ( (unsigned int)MiFaultPteIntact(v19) )
        goto LABEL_8;
      v9 = -1073741819;
      goto LABEL_27;
    }
    if ( (v19 & 0x200) != 0 )
    {
      v30 = *v12;
      goto LABEL_26;
    }
  }
  else
  {
    v15 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = MI_READ_PTE_LOCK_FREE(v15);
    LOWORD(v19) = v16;
    if ( (v16 & 1) == 0 )
    {
LABEL_8:
      if ( (v19 & 0x402) != 0x402 )
        return 3221225494LL;
      v20 = MiResolveDemandZeroFault(0LL, a4, 0LL, v15, (__int64)&dword_1402FF980, *v12, 0);
      if ( v20 >= 0 )
        return 3221225494LL;
      v9 = v20;
      goto LABEL_27;
    }
    if ( (v16 & 0x200) != 0 )
    {
      v30 = v14;
LABEL_26:
      MiCopyOnWriteEx(a4, v15, -1LL, v30, 0);
    }
  }
LABEL_27:
  LOBYTE(v17) = *v12;
  MiUnlockWorkingSetExclusive((__int64)&dword_1402FF980, v17, v18);
  return v9;
}
