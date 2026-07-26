/*
 * XREFs of NdisMCoRequestComplete @ 0x1C00F3630
 * Callers:
 *     ndisMCoOidRequestToRequest @ 0x1C00420A0 (ndisMCoOidRequestToRequest.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B444 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     NdisMOidRequestComplete @ 0x1C0040650 (NdisMOidRequestComplete.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

void __stdcall NdisMCoRequestComplete(NDIS_STATUS Status, NDIS_HANDLE MiniportAdapterHandle, PNDIS_REQUEST Request)
{
  _NDIS_REQUEST_TYPE RequestType; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  struct _NDIS_OID_REQUEST *v11; // rdx

  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqd(0x36u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, MiniportAdapterHandle, Request, Status);
  RequestType = Request->RequestType;
  v7 = *(_QWORD *)&Request->MacReserved[8];
  if ( RequestType == NdisRequestQueryInformation || (unsigned int)(RequestType - 1) <= 1 )
  {
    *(_DWORD *)(v7 + 52) = Request->DATA.QUERY_INFORMATION.BytesWritten;
    *(_DWORD *)(v7 + 56) = Request->DATA.QUERY_INFORMATION.BytesNeeded;
  }
  v8 = *(_DWORD *)(v7 + 88);
  if ( (v8 & 0x220) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 104);
    if ( Request->RequestType == NdisRequestQueryInformation
      && Request->DATA.QUERY_INFORMATION.Oid == 65806
      && Request->DATA.QUERY_INFORMATION.InformationBufferLength
      && v9
      && (*(_DWORD *)(v9 + 224) & 4) != 0 )
    {
      *(_DWORD *)Request->DATA.QUERY_INFORMATION.InformationBuffer |= 0xA0u;
    }
    v10 = *(_DWORD *)(v7 + 88);
    if ( (v10 & 0x2000) != 0 )
    {
      v11 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)MiniportAdapterHandle + 277);
      *((_QWORD *)MiniportAdapterHandle + 72) = 0LL;
      NdisMOidRequestComplete(MiniportAdapterHandle, v11, Status);
    }
    else
    {
      if ( (v10 & 0x200) != 0 )
      {
        if ( (v10 & 8) != 0 )
        {
          *(_DWORD *)(v7 + 80) = Status;
          KeSetEvent((PRKEVENT)(v7 + 112), 0, 0);
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, NDIS_STATUS))(v9 + 1136))(
          *(_QWORD *)(v9 + 32),
          *(_QWORD *)(v7 + 128),
          0LL,
          v7,
          Status);
      }
      ndisMDereferenceOpenUnlocked(v9, 6u);
    }
  }
  else if ( (v8 & 8) != 0 )
  {
    *(_DWORD *)(v7 + 80) = Status;
    KeSetEvent((PRKEVENT)(v7 + 112), 0, 0);
  }
  ExFreePoolWithTag(Request, 0);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_(0x37u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids);
}
