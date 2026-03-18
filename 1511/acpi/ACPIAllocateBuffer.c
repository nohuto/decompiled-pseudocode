/*
 * XREFs of ACPIAllocateBuffer @ 0x1C0065668
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C00652F4 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0070F38 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C00712FC (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C0071D80 (ACPIBusIrpQueryInstanceId.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ACPIAllocateBuffer(SIZE_T *a1, __int64 *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v6; // rax

  v2 = *a2;
  v3 = -1LL;
  *a1 = 660LL;
  if ( (v2 & 0x200000000000LL) != 0 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_BYTE *)(a2[69] + v4) );
    *a1 = 10 * (v4 + 66);
  }
  if ( (v2 & 0x400000000000LL) != 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(a2[70] + v6) );
    *a1 += 10 * v6;
  }
  if ( (a2[113] & 0x10) != 0 )
  {
    do
      ++v3;
    while ( *(_BYTE *)(a2[71] + v3) );
    *a1 += 10 * v3;
  }
  return ExAllocatePoolWithTag(PagedPool, *a1, 0x42706341u);
}
