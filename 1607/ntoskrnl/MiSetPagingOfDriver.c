/*
 * XREFs of MiSetPagingOfDriver @ 0x140083DC4
 * Callers:
 *     MmPageEntireDriver @ 0x14047DC74 (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x140553BF4 (MiEnablePagingOfDriver.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiDriverPageMustStayResident @ 0x140083FBC (MiDriverPageMustStayResident.c)
 *     MiTrimSystemImagePages @ 0x140084004 (MiTrimSystemImagePages.c)
 *     MiInsertTbFlushEntry @ 0x1400E0240 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F2594 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 *v4; // rsi
  __int64 v6; // r15
  unsigned __int64 *v7; // r14
  __int64 v8; // rdi
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  __int16 v15; // cx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 result; // rax
  KIRQL v19; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v20; // [rsp+28h] [rbp-D8h] BYREF
  char *AnyMultiplexedVm; // [rsp+30h] [rbp-D0h]
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v23; // [rsp+44h] [rbp-BCh]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]

  v4 = a2;
  v24 = 20LL;
  v6 = (__int64)((_QWORD)a2 << 25) >> 16;
  v7 = 0LL;
  v22 = 0;
  v23 = 0;
  v8 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v19 = v10;
  if ( (unsigned __int64)v4 <= a3 )
  {
    do
    {
      if ( !(unsigned __int8)MiDriverPageMustStayResident(a1, v4) )
      {
        v12 = MI_READ_PTE_LOCK_FREE(v4);
        v20 = v12;
        if ( (v12 & 1) != 0 )
        {
          v13 = MI_GET_PFN_FROM_PTE(&v20);
          if ( !*(_QWORD *)v13 || (*(_BYTE *)(v13 + 35) & 8) != 0 )
          {
            v15 = *(_WORD *)(v13 + 32);
            if ( v15 == 1 || v15 == 2 && (*(_BYTE *)(v13 + 34) & 8) != 0 )
            {
              if ( !v7 )
                v7 = v4;
              v20 = v14 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              *v4 = v20;
              if ( (unsigned int)MiPteInShadowRange(v4, v11) )
                MiWritePteShadow(v16, v17);
              MiInsertTbFlushEntry(&v22, v6, 1LL);
            }
          }
        }
        else if ( (v12 & 0x400) != 0 && v7 )
        {
          MiFlushTbList(&v22);
          v8 += MiTrimSystemImagePages(v7, v4 - 1);
          v7 = 0LL;
        }
      }
      ++v4;
      v6 += 4096LL;
    }
    while ( (unsigned __int64)v4 <= a3 );
    if ( v7 )
    {
      MiFlushTbList(&v22);
      v8 += MiTrimSystemImagePages(v7, a3);
    }
    v10 = v19;
  }
  LOBYTE(v11) = v10;
  result = MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v11);
  if ( v8 )
  {
    result = *(_QWORD *)(a1 + 48);
    if ( result == PsNtosImageBase || result == PsHalImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140326868 + 2, v8);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140326868 + 3, v8);
  }
  return result;
}
