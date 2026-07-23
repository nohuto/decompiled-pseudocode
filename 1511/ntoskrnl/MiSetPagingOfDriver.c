/*
 * XREFs of MiSetPagingOfDriver @ 0x14001A3D0
 * Callers:
 *     MmPageEntireDriver @ 0x1403CF37C (MmPageEntireDriver.c)
 *     MiEnablePagingOfDriver @ 0x140520BB0 (MiEnablePagingOfDriver.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDriverPageMustStayResident @ 0x14001A5D0 (MiDriverPageMustStayResident.c)
 *     MiTrimSystemImagePages @ 0x14001A618 (MiTrimSystemImagePages.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

PVOID __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 *v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rdi
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int16 v14; // ax
  unsigned __int64 v15; // rbx
  PVOID result; // rax
  KIRQL v17; // [rsp+20h] [rbp-B9h]
  unsigned __int64 v18; // [rsp+28h] [rbp-B1h] BYREF
  int v19; // [rsp+30h] [rbp-A9h] BYREF
  __int16 v20; // [rsp+34h] [rbp-A5h]
  int v21; // [rsp+38h] [rbp-A1h]
  int v22; // [rsp+3Ch] [rbp-9Dh]
  __int64 v23; // [rsp+40h] [rbp-99h]
  __int64 v24; // [rsp+48h] [rbp-91h]

  v3 = 0LL;
  v21 = 20;
  v22 = 0;
  v19 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v6 = a2;
  v7 = (__int64)((_QWORD)a2 << 25) >> 16;
  v8 = 0LL;
  v20 = 0;
  v9 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
  v17 = v9;
  if ( (unsigned __int64)v6 <= a3 )
  {
    do
    {
      if ( !(unsigned __int8)MiDriverPageMustStayResident(a1, v6) )
      {
        v12 = MI_READ_PTE_LOCK_FREE(v6);
        v18 = v12;
        if ( (v12 & 1) != 0 )
        {
          v13 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v18) - 0x58000000000LL;
          if ( !*(_QWORD *)v13 || (*(_BYTE *)(v13 + 35) & 8) != 0 )
          {
            v14 = *(_WORD *)(v13 + 32);
            v10 = 1LL;
            if ( v14 == 1 || v14 == 2 && (*(_BYTE *)(v13 + 34) & 8) != 0 )
            {
              if ( !v3 )
                v3 = v6;
              v15 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v18 = v15;
              *v6 = v15;
              if ( (unsigned int)MiPteInShadowRange(v6) )
                MiWritePteShadow(v6, v15);
              MiInsertTbFlushEntry(&v19, v7, 1LL, 0LL);
            }
          }
        }
        else if ( (v12 & 0x400) != 0 && v3 )
        {
          MiFlushTbList(&v19, v10, v11);
          v8 += MiTrimSystemImagePages(v3, v6 - 1);
          v3 = 0LL;
        }
      }
      ++v6;
      v7 += 4096LL;
    }
    while ( (unsigned __int64)v6 <= a3 );
    if ( v3 )
    {
      MiFlushTbList(&v19, v10, v11);
      v8 += MiTrimSystemImagePages(v3, a3);
    }
    v9 = v17;
  }
  LOBYTE(v10) = v9;
  result = (PVOID)MiUnlockWorkingSetExclusive(&dword_1402FFA80, v10);
  if ( v8 )
  {
    result = *(PVOID *)(a1 + 48);
    if ( result == PsNtosImageBase || result == PsHalImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_1402FE598 + 2, v8);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_1402FE598 + 3, v8);
  }
  return result;
}
