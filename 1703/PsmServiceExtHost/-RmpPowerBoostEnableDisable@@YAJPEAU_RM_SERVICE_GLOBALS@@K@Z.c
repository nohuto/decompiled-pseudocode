/*
 * XREFs of ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180002768
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180003034 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 * Callees:
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18000213C (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpEnforcementApplyPowerBoost@@YAJK@Z @ 0x180002718 (-RmpEnforcementApplyPowerBoost@@YAJK@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPowerBoostEnableDisable(struct _RM_SERVICE_GLOBALS *a1, int a2)
{
  char *v3; // rbx
  __int64 v5; // rax
  int v6; // eax
  struct _TP_TIMER *v7; // rcx
  int v8; // ecx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // eax
  const struct _TlgProvider_t *v12; // rcx
  DWORD v14; // eax
  DWORD TickCount; // eax
  bool v16; // [rsp+30h] [rbp-89h] BYREF
  char v17; // [rsp+31h] [rbp-88h] BYREF
  char v18; // [rsp+32h] [rbp-87h] BYREF
  char v19; // [rsp+33h] [rbp-86h] BYREF
  int v20; // [rsp+34h] [rbp-85h] BYREF
  int v21; // [rsp+38h] [rbp-81h] BYREF
  int v22; // [rsp+3Ch] [rbp-7Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-79h] BYREF
  int *v24; // [rsp+60h] [rbp-59h]
  int v25; // [rsp+68h] [rbp-51h]
  int v26; // [rsp+6Ch] [rbp-4Dh]
  bool *v27; // [rsp+70h] [rbp-49h]
  int v28; // [rsp+78h] [rbp-41h]
  int v29; // [rsp+7Ch] [rbp-3Dh]
  int *v30; // [rsp+80h] [rbp-39h]
  int v31; // [rsp+88h] [rbp-31h]
  int v32; // [rsp+8Ch] [rbp-2Dh]
  int *v33; // [rsp+90h] [rbp-29h]
  int v34; // [rsp+98h] [rbp-21h]
  int v35; // [rsp+9Ch] [rbp-1Dh]
  char *v36; // [rsp+A0h] [rbp-19h]
  int v37; // [rsp+A8h] [rbp-11h]
  int v38; // [rsp+ACh] [rbp-Dh]
  char *v39; // [rsp+B0h] [rbp-9h]
  int v40; // [rsp+B8h] [rbp-1h]
  int v41; // [rsp+BCh] [rbp+3h]
  char *v42; // [rsp+C0h] [rbp+7h]
  int v43; // [rsp+C8h] [rbp+Fh]
  int v44; // [rsp+CCh] [rbp+13h]
  char *v45; // [rsp+D0h] [rbp+17h]
  int v46; // [rsp+D8h] [rbp+1Fh]
  int v47; // [rsp+DCh] [rbp+23h]

  v3 = (char *)a1 + 144;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( a2 )
  {
    if ( (*((_BYTE *)a1 + 1524) & 2) != 0 )
    {
      v20 = -1073741585;
      goto LABEL_6;
    }
    if ( (v3[24] & 1) != 0 )
    {
      TickCount = GetTickCount();
      ++*((_QWORD *)v3 + 1);
      *((_DWORD *)v3 + 1) = TickCount;
    }
    else
    {
      v14 = GetTickCount();
      *(_DWORD *)v3 = v14;
      *((_DWORD *)v3 + 1) = v14;
      v20 = RmpEnforcementApplyPowerBoost(a2);
      if ( v20 < 0 )
        goto LABEL_6;
      *((_DWORD *)v3 + 6) |= 2u;
      *((_QWORD *)v3 + 1) = 1LL;
      RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)v3);
    }
  }
  else
  {
    v5 = *((_QWORD *)v3 + 1);
    if ( v5 == 1 && (v3[24] & 2) != 0 )
    {
      v6 = RmpEnforcementApplyPowerBoost(0);
      v7 = (struct _TP_TIMER *)*((_QWORD *)v3 + 2);
      *((_DWORD *)v3 + 6) &= ~2u;
      *((_QWORD *)v3 + 1) = 0LL;
      v20 = v6;
      SetThreadpoolTimer(v7, 0LL, 0, 0);
      *((_DWORD *)v3 + 6) &= ~1u;
    }
    else
    {
      *((_QWORD *)v3 + 1) = v5 - 1;
    }
  }
  v20 = 0;
LABEL_6:
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v26 = 0;
    v24 = &v20;
    v25 = v8;
    v27 = &v16;
    v16 = a2 != 0;
    v11 = *(_DWORD *)v3;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v21 = v11;
    v30 = &v21;
    v22 = *((_DWORD *)v3 + 1);
    v33 = &v22;
    v36 = v3 + 8;
    v31 = v8;
    v34 = v8;
    v12 = (const struct _TlgProvider_t *)*((unsigned int *)v3 + 6);
    v17 = *((_DWORD *)v3 + 6) & 1;
    LOBYTE(v12) = ((unsigned __int8)v12 & 2) != 0;
    v28 = 1;
    v39 = &v17;
    v42 = &v18;
    LOBYTE(v11) = (*((_BYTE *)a1 + 1524) & 2) != 0;
    v37 = 8;
    v47 = 0;
    v19 = v11;
    v45 = &v19;
    v40 = 1;
    v18 = (char)v12;
    v43 = 1;
    v46 = 1;
    TlgWrite(v12, &unk_18004418A, v9, v10, 0xAu, &pData);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)v20;
}
