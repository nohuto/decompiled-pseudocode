/*
 * XREFs of ?GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000C290
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?CreateInstance@CGoodFaithPLMExemptionExpiredWorkItem@@SAJPEAVCApplication@@PEAPEAVIPBMWorkItem@@@Z @ 0x180021288 (-CreateInstance@CGoodFaithPLMExemptionExpiredWorkItem@@SAJPEAVCApplication@@PEAPEAVIPBMWorkItem@.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplication::GoodFaithPLMExemptionTimerExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct CApplication *a2,
        struct _TP_TIMER *a3)
{
  int v3; // eax
  const GUID *v4; // r8
  const GUID *v5; // r9
  struct IPBMWorkItem *v6; // rbx
  const struct _TlgProvider_t *v7; // rcx
  UINT32 v8; // [rsp+20h] [rbp-29h]
  int v9; // [rsp+30h] [rbp-19h] BYREF
  struct IPBMWorkItem *v10; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  struct IPBMWorkItem **v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  int *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  v10 = 0LL;
  v3 = CGoodFaithPLMExemptionExpiredWorkItem::CreateInstance(a2, &v10);
  v6 = v10;
  v9 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v10 + 16LL))(v10);
    v9 = v3;
    if ( v3 >= 0 )
      v6 = 0LL;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1LL);
    v3 = v9;
  }
  if ( v3 < 0 )
  {
    v7 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v3);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v13 = 9LL;
      v12 = "__FUNC__";
      v14 = &v10;
      v16 = &v9;
      LODWORD(v10) = 1352;
      v15 = 4LL;
      v17 = 4LL;
      TlgWrite(v7, &unk_18002D869, v4, v5, v8, &pData);
    }
  }
}
