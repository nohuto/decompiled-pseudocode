/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001E990
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteCommon @ 0x1C001EB0C (ACPIDeviceCompleteCommon.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase5(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx

  v2 = (_QWORD *)(a1 + 216);
  *(_DWORD *)(a1 + 212) = 8;
  v3 = v2[2];
  if ( (v3 & 9) == 9 && ((v3 & 2) != 0 || (**(_BYTE **)(a1 + 40) & 0x40) != 0) )
  {
    memset(v2, 0, 0x28uLL);
    *(_DWORD *)(a1 + 56) &= 0xEEFFFFFF;
    v4 = *(unsigned int *)(a1 + 212);
  }
  else
  {
    *(_DWORD *)(a1 + 256) = -1073741436;
    v4 = 2LL;
  }
  ACPIDeviceCompleteCommon(a1 + 208, v4);
  return 0LL;
}
