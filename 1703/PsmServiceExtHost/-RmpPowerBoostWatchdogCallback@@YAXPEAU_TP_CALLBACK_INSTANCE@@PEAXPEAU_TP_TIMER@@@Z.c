/*
 * XREFs of ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800375D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18000213C (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpEnforcementApplyPowerBoost@@YAJK@Z @ 0x180002718 (-RmpEnforcementApplyPowerBoost@@YAJK@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpPowerBoostWatchdogCallback(struct _TP_CALLBACK_INSTANCE *a1, _BYTE *a2, struct _TP_TIMER *a3)
{
  char *v4; // rdi
  int v5; // edx
  int v6; // eax
  int v7; // ebx
  const struct _TlgProvider_t *v8; // rcx
  int v9; // edx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  bool v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 v14; // [rsp+38h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  bool *v16; // [rsp+60h] [rbp-48h]
  int v17; // [rsp+68h] [rbp-40h]
  int v18; // [rsp+6Ch] [rbp-3Ch]
  __int64 *v19; // [rsp+70h] [rbp-38h]
  int v20; // [rsp+78h] [rbp-30h]
  int v21; // [rsp+7Ch] [rbp-2Ch]

  v4 = a2 + 144;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = *((_DWORD *)v4 + 6);
  if ( (a2[1524] & 2) == 0 && (v5 & 2) != 0 )
  {
    RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)v4);
    v6 = *((_DWORD *)v4 + 6);
    if ( (v6 & 1) == 0 )
    {
      *((_DWORD *)v4 + 6) = v6 & 0xFFFFFFFD;
      RmpEnforcementApplyPowerBoost(0);
    }
    v7 = *((_DWORD *)v4 + 6) & 1;
    v8 = (const struct _TlgProvider_t *)(GetTickCount() - *(_DWORD *)v4);
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v8, 1uLL) )
    {
      v17 = v9;
      v16 = &v13;
      v13 = v7 == 0;
      v14 = (unsigned int)v10;
      v18 = 0;
      v21 = 0;
      v19 = &v14;
      v20 = 8;
      TlgWrite(v10, &unk_180044148, v11, v12, 4u, &pData);
    }
  }
  else
  {
    *((_DWORD *)v4 + 6) = v5 & 0xFFFFFFFE;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
