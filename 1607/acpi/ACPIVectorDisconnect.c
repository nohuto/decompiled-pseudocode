/*
 * XREFs of ACPIVectorDisconnect @ 0x1C0057C50
 * Callers:
 *     ACPIVectorDisconnect2 @ 0x1C0057D40 (ACPIVectorDisconnect2.c)
 *     ACPIEcDisconnectGpeVector @ 0x1C009ADAC (ACPIEcDisconnectGpeVector.c)
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x1C0006DB0 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0006E78 (ACPIGpeIndexToByteIndex.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0020DE0 (ACPIGpeInstallRemoveIndex.c)
 */

__int64 __fastcall ACPIVectorDisconnect(unsigned int *P)
{
  KIRQL v2; // si
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // ebx

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    14,
    13,
    (__int64)&WPP_d78a53c20b5d314ef1dea0f560801b3e_Traceguids);
  v2 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v3);
  v6 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex(*P, v4, v5) + GpeMap);
  if ( v6 < GpeVectorTableSize )
  {
    v7 = 2LL * v6;
    *((_QWORD *)GpeVectorTable + v7 + 1) = 0LL;
    *((_BYTE *)GpeVectorTable + 8 * v7) = GpeVectorFree;
    GpeVectorFree = v6;
  }
  v8 = 0;
  if ( !ACPIGpeInstallRemoveIndex(*P, 2, 0, (_BYTE *)P + 25) )
    v8 = -1073741823;
  ACPIGpeEnableDisableEvents(1, 3221225473LL);
  KeReleaseSpinLock(&GpeTableLock, v2);
  if ( !v8 )
    ExFreePoolWithTag(P, 0);
  return v8;
}
