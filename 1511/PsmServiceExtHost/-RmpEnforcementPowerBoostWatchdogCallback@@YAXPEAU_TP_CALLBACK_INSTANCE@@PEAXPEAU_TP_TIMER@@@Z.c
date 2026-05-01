/*
 * XREFs of ?RmpEnforcementPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003F730
 * Callers:
 *     <none>
 * Callees:
 *     RmpEnforcementApplyPowerBoost @ 0x180004A30 (RmpEnforcementApplyPowerBoost.c)
 *     ?RmpPowerBoostWatchdogSet@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004A78 (-RmpPowerBoostWatchdogSet@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

void __fastcall RmpEnforcementPowerBoostWatchdogCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_POWERBOOST_CONTEXT *a2,
        struct _TP_TIMER *a3)
{
  int v4; // eax
  int v5; // edi
  const struct _TlgProvider_t *v6; // rcx
  int v7; // edx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  bool v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  bool *v14; // [rsp+60h] [rbp-38h]
  int v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v17; // [rsp+70h] [rbp-28h]
  int v18; // [rsp+78h] [rbp-20h]
  int v19; // [rsp+7Ch] [rbp-1Ch]

  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*((_DWORD *)a2 + 6) & 6) == 2 )
  {
    RmpPowerBoostWatchdogSet(a2);
    v4 = *((_DWORD *)a2 + 6);
    if ( (v4 & 1) == 0 )
    {
      *((_DWORD *)a2 + 6) = v4 & 0xFFFFFFFD;
      RmpEnforcementApplyPowerBoost(0);
    }
    v5 = *((_DWORD *)a2 + 6) & 1;
    v6 = (const struct _TlgProvider_t *)(GetTickCount() - *(_DWORD *)a2);
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v6, 1uLL) )
    {
      v15 = v7;
      v14 = &v11;
      v11 = v5 == 0;
      v12 = (unsigned int)v8;
      v16 = 0;
      v19 = 0;
      v17 = &v12;
      v18 = 8;
      TlgWrite(v8, &unk_180062D81, v9, v10, 4u, &pData);
    }
  }
  else
  {
    *((_DWORD *)a2 + 6) &= ~1u;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
