/*
 * XREFs of PspSetJobRateControl @ 0x140680B0C
 * Callers:
 *     PspSetNetRateControl @ 0x140680CC4 (PspSetNetRateControl.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetRateControlHeaderPtr @ 0x140468298 (PspGetRateControlHeaderPtr.c)
 *     PspFreeRateControl @ 0x1404B57B4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1404B57F8 (PspAllocateRateControl.c)
 *     PspModifyAncestorBits @ 0x140680688 (PspModifyAncestorBits.c)
 *     PspRemoveRateControl @ 0x14068088C (PspRemoveRateControl.c)
 */

__int64 __fastcall PspSetJobRateControl(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rsi
  bool v4; // r14
  __int64 v5; // rcx
  char v6; // r9
  _QWORD *RateControlHeaderPtr; // r15
  char v8; // r8
  _QWORD *RateControl; // rax
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-20h]
  int v16; // [rsp+50h] [rbp-10h]
  char v17; // [rsp+54h] [rbp-Ch]

  v2 = 0;
  v3 = 0LL;
  v4 = (*(_DWORD *)(a1 + 1304) & 0x2000000) != 0;
  RateControlHeaderPtr = (_QWORD *)PspGetRateControlHeaderPtr(a1, 0);
  if ( (v8 & 1) != 0 )
  {
    if ( !v6 )
    {
      if ( v4 )
      {
        v2 = -1073741637;
        goto LABEL_15;
      }
      RateControl = PspAllocateRateControl(0LL);
      v3 = (__int64)RateControl;
      if ( !RateControl )
      {
        v2 = -1073741801;
        goto LABEL_15;
      }
      *RateControlHeaderPtr = RateControl;
      _InterlockedOr((volatile signed __int32 *)(a1 + 1304), 0x4000000u);
      PspModifyAncestorBits(a1, 0x2000000u, 1);
    }
    v13 = 0LL;
    v14 = 0LL;
    *(_QWORD *)&v15 = 0LL;
    v16 = 0;
    *((_QWORD *)&v15 + 1) = a1;
    v17 = 1;
    v2 = PspEnumJobsAndProcessesInJobHierarchy(
           (_QWORD *)a1,
           (int)PspSetRateControlJobPreCallback,
           0,
           (int)PspSetRateControlProcessCallback,
           (__int64)&v13,
           5);
  }
  else
  {
    if ( !v6 )
    {
      v2 = -1073741811;
      goto LABEL_15;
    }
    PspRemoveRateControl(v5);
  }
  if ( v2 >= 0 )
    return (unsigned int)v2;
  if ( v3 )
    PspFreeRateControl(v3, 0);
LABEL_15:
  *RateControlHeaderPtr = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFBFFFFFF);
  if ( !v4 )
  {
    PspModifyAncestorBits(a1, 0x2000000u, 0);
    v13 &= v10;
    v14 &= v10;
    v16 &= v10;
    v15 = 0LL;
    v17 = v10;
    PspEnumJobsAndProcessesInJobHierarchy(
      v11,
      (int)PspSetRateControlJobPreCallback,
      v10,
      (int)PspSetRateControlProcessCallback,
      (__int64)&v13,
      5);
  }
  return (unsigned int)v2;
}
