/*
 * XREFs of ?Initialize@CRateInfo@@QEAAJ_K@Z @ 0x180061748
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180067C24 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     GetPrimaryVBlankRate @ 0x180061658 (GetPrimaryVBlankRate.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180128D60 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CRateInfo::Initialize(CRateInfo *this, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0x10000003CLL;
  if ( !GetPrimaryVBlankRate(0xFFFFFFFF, (DWORD *)&v9) )
    GetPrimaryVBlankRate(0xFFFFFFFE, (DWORD *)&v9);
  if ( !HIDWORD(v9) )
    AssertW(
      0LL,
      L"rate.uiDenominator > 0",
      L"GetPrimaryVBlankRateAndPeriod",
      L"windows\\dwm\\common\\shared\\utils.cpp",
      0x98u);
  v4 = (unsigned int)v9;
  v5 = 10000000LL * HIDWORD(v9);
  *((_DWORD *)this + 8) = 1;
  v6 = v5 / v4;
  v7 = v9;
  *((_QWORD *)this + 2) = v6;
  *((_QWORD *)this + 1) = v6;
  *((_QWORD *)this + 7) = v6;
  *((_QWORD *)this + 6) = v6;
  *(_QWORD *)this = v7;
  *(_QWORD *)((char *)this + 36) = v7;
  *((_QWORD *)this + 8) = a2;
  *((_QWORD *)this + 3) = a2 * (v6 / 0x989680) + a2 * (v6 % 0x989680) / 0x989680;
  return 0LL;
}
