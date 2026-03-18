/*
 * XREFs of HSMMUX_InitializeHSMMuxContext @ 0x1C000B9D8
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C0061E20 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     memset @ 0x1C0034640 (memset.c)
 */

void __fastcall HSMMUX_InitializeHSMMuxContext(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx

  v1 = (KSPIN_LOCK *)(a1 + 2240);
  memset((void *)(a1 + 2240), 0, 0x50uLL);
  v1[6] = (KSPIN_LOCK)(v1 + 5);
  v1[5] = (KSPIN_LOCK)(v1 + 5);
  v1[9] = (KSPIN_LOCK)(v1 + 8);
  v1[8] = (KSPIN_LOCK)(v1 + 8);
  KeInitializeSpinLock(v1);
}
