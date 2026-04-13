/*
 * XREFs of ??$ReportPlacementHealth@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAI$$QEAG$$QEA_KAEBE$$QEAPEBG4@Z @ 0x1800325F8
 * Callers:
 *     ?Evaluate@?$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030824 (-Evaluate@-$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030AF0 (-Evaluate@-$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030DBC (-Evaluate@-$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031088 (-Evaluate@-$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031354 (-Evaluate@-$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031620 (-Evaluate@-$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800318EC (-Evaluate@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031BB8 (-Evaluate@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031E84 (-Evaluate@-$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001EAE4 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned int,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6)
{
  const struct _TlgProvider_t *v9; // rax
  const struct _TlgProvider_t *v10; // r10
  const WCHAR *v11; // r8
  const WCHAR *v12; // rdx
  const WCHAR *v13; // rcx
  __int64 v14; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-49h] BYREF
  __int64 v17; // [rsp+58h] [rbp-29h]
  __int64 v18; // [rsp+60h] [rbp-21h]
  __int64 v19; // [rsp+68h] [rbp-19h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  __int64 v21; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  void *v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  const WCHAR *v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  const WCHAR *v28; // [rsp+A8h] [rbp+27h]
  int v29; // [rsp+B0h] [rbp+2Fh]
  int v30; // [rsp+B4h] [rbp+33h]

  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v10 = v9;
  if ( *(_DWORD *)v9 > 5u )
  {
    LODWORD(v9) = 0;
    if ( (*((_QWORD *)v10 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v10 + 3) & 0x800000000000LL) == *((_QWORD *)v10 + 3) )
    {
      v21 = a3;
      v17 = a1;
      v23 = &unk_1800733BB;
      v11 = &sourceString;
      v18 = 4LL;
      v19 = a2;
      v12 = &sourceString;
      v20 = 2LL;
      v13 = *a5;
      LODWORD(v14) = 0;
      v22 = 8LL;
      v24 = 1LL;
      if ( v13 )
      {
        v12 = v13;
        v14 = -1LL;
        do
          ++v14;
        while ( v13[v14] );
      }
      v25 = v12;
      v26 = 2 * v14 + 2;
      v27 = 0;
      LODWORD(v14) = 0;
      if ( *a6 )
      {
        v11 = *a6;
        v14 = -1LL;
        do
          ++v14;
        while ( (*a6)[v14] );
      }
      v28 = v11;
      v29 = 2 * v14 + 2;
      v30 = 0;
      LODWORD(v9) = TlgWrite(v10, &unk_18007C980, 0LL, 0LL, 8u, &pData);
    }
  }
  return (int)v9;
}
