/*
 * XREFs of ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000F310
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?CreateInstance@CProcessCategoryDowngradedWorkItem@@SAJPEAVCProcess@@PEAPEAVIPBMWorkItem@@@Z @ 0x180020DA4 (-CreateInstance@CProcessCategoryDowngradedWorkItem@@SAJPEAVCProcess@@PEAPEAVIPBMWorkItem@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::InactivityTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        volatile signed __int32 *a2,
        struct _TP_TIMER *a3)
{
  int v3; // eax
  const GUID *v4; // r8
  const GUID *v5; // r9
  struct IPBMWorkItem *v6; // rbx
  const struct _TlgProvider_t *v7; // rcx
  UINT32 v8; // [rsp+20h] [rbp-29h]
  int v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+34h] [rbp-15h] BYREF
  struct IPBMWorkItem *v11; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v13; // [rsp+60h] [rbp+17h]
  __int64 v14; // [rsp+68h] [rbp+1Fh]
  int *v15; // [rsp+70h] [rbp+27h]
  __int64 v16; // [rsp+78h] [rbp+2Fh]
  int *v17; // [rsp+80h] [rbp+37h]
  __int64 v18; // [rsp+88h] [rbp+3Fh]

  v11 = 0LL;
  _InterlockedIncrement(a2 + 2);
  v3 = CProcessCategoryDowngradedWorkItem::CreateInstance((struct CProcess *)a2, &v11);
  v6 = v11;
  v9 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v11 + 16LL))(v11);
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
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v3);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v14 = 9LL;
      v13 = "__FUNC__";
      v15 = &v10;
      v17 = &v9;
      v10 = 3186;
      v16 = 4LL;
      v18 = 4LL;
      TlgWrite(v7, &unk_18002D869, v4, v5, v8, &pData);
    }
  }
}
