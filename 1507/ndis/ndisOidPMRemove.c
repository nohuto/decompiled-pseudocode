/*
 * XREFs of ndisOidPMRemove @ 0x1C0096000
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C0008CC4 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C00036D0 (ndisQuerySetMiniportEx.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_sL @ 0x1C004418C (WPP_SF_sL.c)
 */

__int64 __fastcall ndisOidPMRemove(char *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  NDIS_OID Oid; // edi
  struct _KSEMAPHORE *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int SetMiniport; // esi
  const char *v12; // r8
  __int64 v13; // [rsp+20h] [rbp-18h]

  Oid = Request->DATA.QUERY_INFORMATION.Oid;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qD(0x4Bu, &WPP_fbb1998797815902974a7c4233493709_Traceguids, (__int64)MiniportAdapterHandle, Oid);
  v7 = (struct _KSEMAPHORE *)(MiniportAdapterHandle + 3976);
  if ( Oid != -50265845 )
    v7 = (struct _KSEMAPHORE *)(MiniportAdapterHandle + 4008);
  KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
  *(_DWORD *)&Request->NdisReserved[16] |= 0x2000000u;
  SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, Request, 0, 0LL, a2);
  if ( SetMiniport && (unsigned __int8)byte_1C0085315 >= 2u )
  {
    v12 = "OID_PM_REMOVE_WOL_PATTERN";
    if ( Oid != -50265845 )
      v12 = "OID_PM_REMOVE_PROTOCOL_OFFLOAD";
    WPP_SF_sL(v9, v8, v12, SetMiniport);
  }
  KeReleaseSemaphore(v7, 0, 1, 0);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    LODWORD(v13) = SetMiniport;
    WPP_SF_qdD(0x4Du, &WPP_fbb1998797815902974a7c4233493709_Traceguids, (__int64)MiniportAdapterHandle, Oid, v13);
  }
  return SetMiniport;
}
