/*
 * XREFs of ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00CCFB0
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C0099308 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C00E8720 (ndisReferenceMiniportByName.c)
 */

void __fastcall ndisHandleLegacyBindIoctl(PCUNICODE_STRING SourceString, int a2, const struct _UNICODE_STRING *a3)
{
  int v6; // r12d
  __int64 i; // rsi
  __int64 v8; // r14
  const UNICODE_STRING *v9; // rcx
  Ndis::BindState *v10; // rcx
  unsigned __int16 v11; // cx
  _QWORD v12[20]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+108h] [rbp+20h]

  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_(0x18u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
  ndisReferenceMiniportByName(SourceString);
  if ( v13 )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v13 + 5208));
    v6 = *(_DWORD *)(v13 + 5080);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i == v6 )
      {
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v13 + 5208));
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v13 + 5208), RunSynchronous);
        ndisDereferenceMiniport(v13, 0x2Eu);
        return;
      }
      if ( (unsigned int)i >= *(_DWORD *)(v13 + 5080) )
        __fastfail(0xBAD0FFu);
      v8 = *(_QWORD *)(v13 + 5088);
      v9 = *(const UNICODE_STRING **)(*(_QWORD *)(*(_QWORD *)(v8 + 8 * i) + 104LL) + 40LL);
      if ( v9 )
        v9 = (const UNICODE_STRING *)((char *)v9 + 8);
      if ( RtlEqualUnicodeString(v9, a3, 1u) )
      {
        v10 = (Ndis::BindState *)(*(_QWORD *)(v8 + 8 * i) + 8LL);
        if ( a2 == 1 )
        {
          if ( Ndis::BindState::SetBinding(v10, BindingEnabled, Reason_DisabledByLegacyIoctl)
            && (unsigned __int8)byte_1C0085323 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_PROTOCOL_LINK **)(v8 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v12);
            v11 = 25;
LABEL_17:
            WPP_SF_Zq(v11, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, (__int64 *)v12[1], v12[0]);
            continue;
          }
        }
        else if ( Ndis::BindState::SetBinding(v10, BindingDisabled, Reason_DisabledByLegacyIoctl)
               && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v8 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v12);
          v11 = 26;
          goto LABEL_17;
        }
      }
    }
  }
}
