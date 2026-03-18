/*
 * XREFs of VfIrpAllocateCallDriverData @ 0x14070BEA8
 * Callers:
 *     IovCallDriver @ 0x140700AD4 (IovCallDriver.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14006FEB0 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     IovpCheckIrpForCriticalTracking @ 0x14070B044 (IovpCheckIrpForCriticalTracking.c)
 */

__int64 __fastcall VfIrpAllocateCallDriverData(__int64 a1, _QWORD *a2)
{
  PVOID v4; // rax
  unsigned int v5; // ebx

  v4 = ExAllocateFromNPagedLookasideList(&ViIrpCallDriverDataList);
  *a2 = v4;
  v5 = 0;
  if ( v4 )
  {
    memset(v4, 0, 0xC0uLL);
    return 1LL;
  }
  else
  {
    LOBYTE(v5) = (unsigned int)IovpCheckIrpForCriticalTracking(a1) == 0;
    return v5;
  }
}
