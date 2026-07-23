/*
 * XREFs of HvlpStartLogicalProcessor @ 0x1401BC5A4
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1401BB610 (HvlpEnableNextLogicalProcessor.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpStartLogicalProcessor(int a1, int a2, unsigned __int16 a3, _OWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  PHYSICAL_ADDRESS v12; // r8
  PHYSICAL_ADDRESS v13; // rdx
  __int16 v14; // ax
  __int16 v15; // bx
  PHYSICAL_ADDRESS v16[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v17[4]; // [rsp+40h] [rbp-38h] BYREF

  memset(a4, 0, 0x38uLL);
  while ( 1 )
  {
    result = HvlpDepositPages(a3);
    if ( (_DWORD)result )
      break;
    v9 = HvlpAcquireHypercallPage(v16, 1, 0LL, 24LL);
    v10 = HvlpAcquireHypercallPage(v17, 2, 0LL, 56LL);
    *(_QWORD *)(v9 + 16) = 0LL;
    v11 = v10;
    v12 = v17[3];
    *(_DWORD *)v9 = a1;
    *(_DWORD *)(v9 + 4) = a2;
    *(_DWORD *)(v9 + 8) = *(_DWORD *)(KeNodeBlock[a3] + 160);
    v13 = v16[3];
    *(_DWORD *)(v9 + 12) = -2147483647;
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
            118LL,
            (PHYSICAL_ADDRESS)v13.QuadPart,
            (PHYSICAL_ADDRESS)v12.QuadPart);
    v15 = v14;
    if ( v14 != 11 )
    {
      *a4 = *(_OWORD *)v11;
      a4[1] = *(_OWORD *)(v11 + 16);
      a4[2] = *(_OWORD *)(v11 + 32);
      *((_QWORD *)a4 + 6) = *(_QWORD *)(v11 + 48);
      *(_WORD *)a4 = v14;
    }
    HvlpReleaseHypercallPage((__int64)v16);
    HvlpReleaseHypercallPage((__int64)v17);
    if ( v15 != 11 )
      return v15 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
