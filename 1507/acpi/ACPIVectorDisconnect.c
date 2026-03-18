/*
 * XREFs of ACPIVectorDisconnect @ 0x1C00416B0
 * Callers:
 *     ACPIVectorDisconnect2 @ 0x1C0041770 (ACPIVectorDisconnect2.c)
 *     ACPIEcDisconnectGpeVector @ 0x1C0079EBC (ACPIEcDisconnectGpeVector.c)
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x1C00075D4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C000769C (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C0008074 (ACPIGpeInstallRemoveIndex.c)
 */

__int64 __fastcall ACPIVectorDisconnect(_BYTE *P)
{
  KIRQL v2; // si
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // r8d
  _BYTE *v7; // rcx
  char v8; // al
  __int64 v9; // rdx
  unsigned int v10; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v3);
  v6 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex(*(unsigned int *)P, v4, v5) + GpeMap);
  if ( v6 < GpeVectorTableSize )
  {
    v7 = GpeVectorTable;
    v8 = GpeVectorFree;
    v9 = 2LL * v6;
    GpeVectorFree = v6;
    *((_QWORD *)GpeVectorTable + v9 + 1) = 0LL;
    v7[8 * v9] = v8;
  }
  v10 = 0;
  if ( !ACPIGpeInstallRemoveIndex(*(unsigned int *)P, 2LL, 0LL, P + 25) )
    v10 = -1073741823;
  ACPIGpeEnableDisableEvents(1, 3221225473LL);
  KeReleaseSpinLock(&GpeTableLock, v2);
  if ( !v10 )
    ExFreePoolWithTag(P, 0);
  return v10;
}
