/*
 * XREFs of ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00C63D0
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00936F0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A29C8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD07C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C00E30F8 (ndisReferenceMiniportByName.c)
 */

void __fastcall ndisHandleLegacyBindIoctl(PCUNICODE_STRING SourceString, int a2, const struct _UNICODE_STRING *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  int v7; // r12d
  __int64 i; // rsi
  __int64 v9; // r14
  const UNICODE_STRING *v10; // rcx
  Ndis::BindState *v11; // rcx
  unsigned __int16 v12; // cx
  _QWORD v13[20]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+108h] [rbp+20h]

  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_(0x18u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids);
  ndisReferenceMiniportByName(SourceString);
  if ( v14 )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v14 + 5208));
    v7 = *(_DWORD *)(v14 + 5080);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i == v7 )
      {
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v14 + 5208), v6);
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v14 + 5208), RunSynchronous);
        ndisDereferenceMiniport(v14, 0x2Eu);
        return;
      }
      if ( (unsigned int)i >= *(_DWORD *)(v14 + 5080) )
        __fastfail(0xBAD0FFu);
      v9 = *(_QWORD *)(v14 + 5088);
      v10 = *(const UNICODE_STRING **)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * i) + 104LL) + 40LL);
      if ( v10 )
        v10 = (const UNICODE_STRING *)((char *)v10 + 8);
      if ( RtlEqualUnicodeString(v10, a3, 1u) )
      {
        v11 = (Ndis::BindState *)(*(_QWORD *)(v9 + 8 * i) + 8LL);
        if ( a2 == 1 )
        {
          if ( Ndis::BindState::SetBinding(v11, BindingEnabled, Reason_DisabledByLegacyIoctl)
            && (unsigned __int8)byte_1C0083723 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_PROTOCOL_LINK **)(v9 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v13);
            v12 = 25;
LABEL_17:
            WPP_SF_Zq(v12, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, (__int64 *)v13[1], v13[0]);
            continue;
          }
        }
        else if ( Ndis::BindState::SetBinding(v11, BindingDisabled, Reason_DisabledByLegacyIoctl)
               && (unsigned __int8)byte_1C0083723 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v9 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v13);
          v12 = 26;
          goto LABEL_17;
        }
      }
    }
  }
}
