/*
 * XREFs of ??$PlacementHealthEvaluation@IG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAI$$QEAG$$QEA_KAEBE$$QEAPEBG4@Z @ 0x180021188
 * Callers:
 *     ?Evaluate@?$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ @ 0x180020464 (-Evaluate@-$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180020708 (-Evaluate@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800209B0 (-Evaluate@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800011EC (_TlgWrite.c)
 *     ?Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ @ 0x18000D6B4 (-Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned int,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6)
{
  struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry *v9; // rax
  const struct _TlgProvider_t *v10; // r10
  void *v11; // r8
  void *v12; // rdx
  void *v13; // rcx
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
  void *v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  void *v28; // [rsp+A8h] [rbp+27h]
  int v29; // [rsp+B0h] [rbp+2Fh]
  int v30; // [rsp+B4h] [rbp+33h]

  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance();
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)v9 + 1);
  if ( *(_DWORD *)v10 > 5u )
  {
    v21 = a3;
    v17 = a1;
    v23 = &unk_180031350;
    v11 = &unk_18002D640;
    v18 = 4LL;
    v19 = a2;
    v12 = &unk_18002D640;
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
      while ( *((_WORD *)v13 + v14) );
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
      while ( *((_WORD *)*a6 + v14) );
    }
    v28 = v11;
    v29 = 2 * v14 + 2;
    v30 = 0;
    LODWORD(v9) = TlgWrite(v10, &unk_1800358D6, 0LL, 0LL, 8u, &pData);
  }
  return (int)v9;
}
