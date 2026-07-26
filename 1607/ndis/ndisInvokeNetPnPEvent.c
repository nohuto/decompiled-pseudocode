/*
 * XREFs of ndisInvokeNetPnPEvent @ 0x1C00A8528
 * Callers:
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00A84A4 (ndisDeliverNetPnPEventSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqDD @ 0x1C003C3D8 (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisInvokeNetPnPEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+28h] [rbp-10h]

  v3 = *(_DWORD *)(a3 + 8);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
  {
    v12 = *(_DWORD *)(a3 + 8);
    WPP_SF_qqd(0x61u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1, a2, v12);
  }
  v7 = 0LL;
  if ( a2 )
    v7 = *(_QWORD *)(a2 + 32);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 128))(v7, a3);
  v9 = v8;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
  {
    v13 = v8;
    LODWORD(v11) = v3;
    WPP_SF_qqDD(0x62u, &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1, a2, v11, v13);
  }
  return v9;
}
