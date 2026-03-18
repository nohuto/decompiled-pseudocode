/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x1401DF5F4
 * Callers:
 *     MiGetWorkingSetInfo @ 0x1401DF478 (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x140628988 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x140665400 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiIdentifyPfnWrapper @ 0x140050BC0 (MiIdentifyPfnWrapper.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiGetPfnProtection @ 0x1400BB6C0 (MiGetPfnProtection.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(PEX_SPIN_LOCK SpinLock, _QWORD *a2, unsigned __int64 a3, int a4)
{
  unsigned int v4; // ebx
  PEX_SPIN_LOCK v8; // rsi
  PEX_SPIN_LOCK v9; // rdi
  char *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 *v14; // r14
  __int64 v15; // r13
  __int64 v16; // rcx
  char *v17; // rbp
  __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // r11
  unsigned __int8 PfnProtection; // al
  __int64 v27; // r11
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  KIRQL v31; // [rsp+20h] [rbp-98h]
  int v32; // [rsp+24h] [rbp-94h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  $D4FCF91253F76F57393CBFE908971F67 v36; // [rsp+40h] [rbp-78h] BYREF

  v4 = 0;
  v32 = 0;
  v8 = SpinLock;
  v9 = 0LL;
  if ( (SpinLock[54] & 7) == 0 )
  {
    v9 = SpinLock - 320;
    if ( (PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process != SpinLock - 320 )
    {
      KiStackAttachProcess((_KPROCESS *)(SpinLock - 320), 0LL, (__int64)&v36);
      v32 = 1;
    }
  }
  v35 = *((_QWORD *)v8 + 23);
  v10 = *(char **)(v35 + 496);
  v31 = ExAcquireSpinLockExclusive(v8);
  if ( v9 && (v9[193] & 0x20) != 0 )
  {
    v4 = -1073741558;
    goto LABEL_29;
  }
  v13 = *((_QWORD *)v8 + 13);
  if ( a4 )
  {
    *a2 = v13;
    v14 = a2 + 1;
    v15 = 0LL;
    if ( 8 * v13 + 8 > a3 )
    {
LABEL_9:
      v4 = -1073741820;
      goto LABEL_29;
    }
  }
  else
  {
    v16 = v13 - *((_QWORD *)v8 + 14);
    v15 = (__int64)(a2 + 2);
    a2[1] = v16;
    v14 = 0LL;
    if ( 32 * v16 + 16 > a3 )
      goto LABEL_9;
    if ( !v16 )
      goto LABEL_29;
  }
  v11 = 0x800000000000LL;
  v12 = 0x98000000000LL;
  v17 = &v10[*(unsigned int *)(v35 + 64) * *(_QWORD *)(v35 + 16)];
  do
  {
    v18 = *(_QWORD *)v10;
    if ( (*(_QWORD *)v10 & 1) != 0 )
    {
      v19 = (v18 & 0x800000000000LL) != 0 ? v18 | 0xFFFF000000000000uLL : v18 & 0xFFFFFFFFFFFFLL;
      if ( v19 + 0x98000000000LL > 0x7FFFFFFFFFLL )
      {
        v20 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL;
        if ( a4 )
        {
          v21 = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)*v14) & 0xFFF;
          *v14 = v21;
          v22 = v21 ^ ((unsigned __int16)v21 ^ (*(_QWORD *)(v20 + 40) >> 58 << 9)) & 0xE00;
          *v14 = v22;
          v23 = v22 ^ ((unsigned __int16)v22 ^ (((*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0) << 8)) & 0x100;
          *v14 = v23;
          if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0 )
          {
            LOBYTE(v25) = 7;
            if ( (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
              v25 = *(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            *v14 = v23 ^ (unsigned __int8)(v23 ^ (32 * v25)) & 0xE0;
            PfnProtection = MiGetPfnProtection(v20, v10);
            *v14 = v27 ^ ((unsigned __int8)v27 ^ PfnProtection) & 0x1F;
          }
          else
          {
            v24 = v23 & 0xFFFFFFFFFFFFFF1FuLL;
            *v14 = v24;
            *v14 = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v20 + 16) >> 5)) & 0x1F;
          }
          ++v14;
        }
        else if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0 )
        {
          MiIdentifyPfnWrapper(v20, v15);
          v29 = *(_QWORD *)v10;
          v11 = 0x800000000000LL;
          if ( (*(_QWORD *)v10 & 0x800000000000LL) != 0 )
            v30 = v29 | 0xFFFF000000000000uLL;
          else
            v30 = v29 & 0xFFFFFFFFFFFFLL;
          *(_QWORD *)(v15 + 24) = v30 & 0xFFFFFFFFFFFFF000uLL;
          v15 += 32LL;
          goto LABEL_26;
        }
        v11 = 0x800000000000LL;
LABEL_26:
        v12 = 0x98000000000LL;
      }
    }
    v10 += *(unsigned int *)(v35 + 64);
  }
  while ( v10 <= v17 );
  v8 = SpinLock;
LABEL_29:
  LOBYTE(v11) = v31;
  MiUnlockWorkingSetExclusive((__int64)v8, v11, v12);
  if ( v32 == 1 )
    KiUnstackDetachProcess(&v36, 0LL);
  return v4;
}
