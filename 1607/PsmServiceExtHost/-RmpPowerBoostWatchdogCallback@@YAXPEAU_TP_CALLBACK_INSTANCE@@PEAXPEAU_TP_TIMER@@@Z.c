/*
 * XREFs of ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180035150
 * Callers:
 *     <none>
 * Callees:
 *     RmpEnforcementApplyPowerBoost @ 0x180001364 (RmpEnforcementApplyPowerBoost.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800013BC (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
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
  bool v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  bool *v16; // [rsp+60h] [rbp-38h]
  int v17; // [rsp+68h] [rbp-30h]
  int v18; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v19; // [rsp+70h] [rbp-28h]
  int v20; // [rsp+78h] [rbp-20h]
  int v21; // [rsp+7Ch] [rbp-1Ch]

  v4 = a2 + 160;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = *((_DWORD *)v4 + 6);
  if ( (v5 & 2) != 0 && (a2[3340] & 2) == 0 )
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
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v8, 1uLL) )
    {
      v17 = v9;
      v16 = &v13;
      v13 = v7 == 0;
      v14 = (unsigned int)v10;
      v18 = 0;
      v21 = 0;
      v19 = &v14;
      v20 = 8;
      TlgWrite(v10, &unk_180042509, v11, v12, 4u, &pData);
    }
  }
  else
  {
    *((_DWORD *)v4 + 6) = v5 & 0xFFFFFFFE;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
