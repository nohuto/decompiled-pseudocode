/*
 * XREFs of ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x180072088
 * Callers:
 *     ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800723C0 (-OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800725A4 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x180072764 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall RIMDeviceCollection::ReadInputReportFromRIM(RIMDeviceCollection *this)
{
  __int64 v1; // r9
  _DWORD *v2; // rsi
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v1 = *((_QWORD *)this + 5);
  v2 = (_DWORD *)((char *)this + 2704);
  *((_QWORD *)this + 337) = *((_QWORD *)this + 335);
  v4 = 0;
  v5 = RIMReadInput(
         *((_QWORD *)this + 10),
         (char *)this + 2696,
         *((unsigned int *)this + 672),
         v1,
         (char *)this + 2704,
         (char *)this + 2712,
         (char *)this + 2720);
  if ( v5 >= 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      Template_qqq((unsigned int)*v2, &MinInput_Log_RIMReadInput, 2, *((_DWORD *)this + 20), *v2);
  }
  else
  {
    v4 = v5 | 0x10000000;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v6, &MinInput_Warning_CheckResult, 2, 271, v5);
  }
  return v4;
}
