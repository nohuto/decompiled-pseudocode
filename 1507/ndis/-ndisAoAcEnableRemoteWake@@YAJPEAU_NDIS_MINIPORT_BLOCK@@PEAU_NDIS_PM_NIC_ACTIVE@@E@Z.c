/*
 * XREFs of ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0069698
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00697C4 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     WPP_SF_DDLc @ 0x1C006B88C (WPP_SF_DDLc.c)
 *     WPP_SF_DDLcD @ 0x1C006B8EC (WPP_SF_DDLcD.c)
 */

__int64 __fastcall ndisAoAcEnableRemoteWake(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PM_NIC_ACTIVE *a2,
        unsigned __int8 a3)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rsi
  unsigned int v6; // edi
  KIRQL v7; // dl
  KSPIN_LOCK *v8; // rcx
  __int64 v9; // rdx
  int v11; // [rsp+28h] [rbp-20h]

  AoAc = a1->AoAc;
  v6 = 0;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_DDLc(
      a1,
      a2,
      *((unsigned __int16 *)a2 + 7),
      (*((_QWORD *)a2 + 1) >> 24) & 0xFFFFFFLL,
      *((_DWORD *)a2 + 4),
      a3);
  KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( ndisAoAcIsD0Required(AoAc) )
    AoAc->RemoteWakeEnabled = a3;
  else
    v6 = -1073741823;
  KeReleaseSpinLock(v8, v7);
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
  {
    LOBYTE(v11) = a3;
    WPP_SF_DDLcD(
      *((unsigned int *)a2 + 4),
      v9,
      *((unsigned __int16 *)a2 + 7),
      (*((_QWORD *)a2 + 1) >> 24) & 0xFFFFFFLL,
      *((_DWORD *)a2 + 4),
      v11,
      v6);
  }
  return v6;
}
