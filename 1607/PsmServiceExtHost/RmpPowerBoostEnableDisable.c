/*
 * XREFs of RmpPowerBoostEnableDisable @ 0x180001144
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x180019DBC (RmpEnforcementUnoptimizeHost.c)
 * Callees:
 *     RmpEnforcementApplyPowerBoost @ 0x180001364 (RmpEnforcementApplyPowerBoost.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800013BC (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPowerBoostEnableDisable(__int64 a1, unsigned int a2)
{
  DWORD *v3; // rbx
  __int64 v5; // rax
  int v6; // eax
  struct _TP_TIMER *v7; // rcx
  int v8; // ecx
  const GUID *v9; // r8
  const GUID *v10; // r9
  DWORD v11; // eax
  const struct _TlgProvider_t *v12; // rcx
  DWORD v14; // eax
  DWORD TickCount; // eax
  bool v16; // [rsp+30h] [rbp-79h] BYREF
  char v17; // [rsp+31h] [rbp-78h] BYREF
  char v18; // [rsp+32h] [rbp-77h] BYREF
  char v19; // [rsp+33h] [rbp-76h] BYREF
  int v20; // [rsp+34h] [rbp-75h] BYREF
  DWORD v21; // [rsp+38h] [rbp-71h] BYREF
  DWORD v22; // [rsp+3Ch] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  int *v24; // [rsp+60h] [rbp-49h]
  int v25; // [rsp+68h] [rbp-41h]
  int v26; // [rsp+6Ch] [rbp-3Dh]
  bool *v27; // [rsp+70h] [rbp-39h]
  int v28; // [rsp+78h] [rbp-31h]
  int v29; // [rsp+7Ch] [rbp-2Dh]
  int *v30; // [rsp+80h] [rbp-29h]
  int v31; // [rsp+88h] [rbp-21h]
  int v32; // [rsp+8Ch] [rbp-1Dh]
  int *v33; // [rsp+90h] [rbp-19h]
  int v34; // [rsp+98h] [rbp-11h]
  int v35; // [rsp+9Ch] [rbp-Dh]
  int *v36; // [rsp+A0h] [rbp-9h]
  int v37; // [rsp+A8h] [rbp-1h]
  int v38; // [rsp+ACh] [rbp+3h]
  char *v39; // [rsp+B0h] [rbp+7h]
  int v40; // [rsp+B8h] [rbp+Fh]
  int v41; // [rsp+BCh] [rbp+13h]
  char *v42; // [rsp+C0h] [rbp+17h]
  int v43; // [rsp+C8h] [rbp+1Fh]
  int v44; // [rsp+CCh] [rbp+23h]
  char *v45; // [rsp+D0h] [rbp+27h]
  int v46; // [rsp+D8h] [rbp+2Fh]
  int v47; // [rsp+DCh] [rbp+33h]

  v3 = (DWORD *)(a1 + 160);
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( a2 )
  {
    if ( (*(_BYTE *)(a1 + 3340) & 2) != 0 )
    {
      v20 = -1073741585;
      goto LABEL_6;
    }
    if ( (v3[6] & 1) != 0 )
    {
      TickCount = GetTickCount();
      ++*((_QWORD *)v3 + 1);
      v3[1] = TickCount;
    }
    else
    {
      v14 = GetTickCount();
      *v3 = v14;
      v3[1] = v14;
      v20 = RmpEnforcementApplyPowerBoost(a2);
      if ( v20 < 0 )
        goto LABEL_6;
      v3[6] |= 2u;
      *((_QWORD *)v3 + 1) = 1LL;
      RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)v3);
    }
  }
  else
  {
    v5 = *((_QWORD *)v3 + 1);
    if ( v5 == 1 && (v3[6] & 2) != 0 )
    {
      v6 = RmpEnforcementApplyPowerBoost(0LL);
      v7 = (struct _TP_TIMER *)*((_QWORD *)v3 + 2);
      v3[6] &= ~2u;
      *((_QWORD *)v3 + 1) = 0LL;
      v20 = v6;
      SetThreadpoolTimer(v7, 0LL, 0, 0);
      v3[6] &= ~1u;
    }
    else
    {
      *((_QWORD *)v3 + 1) = v5 - 1;
    }
  }
  v20 = 0;
LABEL_6:
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v26 = 0;
    v24 = &v20;
    v25 = v8;
    v27 = &v16;
    v16 = a2 != 0;
    v11 = *v3;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v21 = v11;
    v30 = (int *)&v21;
    v22 = v3[1];
    v33 = (int *)&v22;
    v36 = (int *)(v3 + 2);
    v31 = v8;
    v34 = v8;
    v12 = (const struct _TlgProvider_t *)v3[6];
    v17 = v3[6] & 1;
    LOBYTE(v12) = ((unsigned __int8)v12 & 2) != 0;
    v28 = 1;
    v39 = &v17;
    v42 = &v18;
    LOBYTE(v11) = (*(_BYTE *)(a1 + 3340) & 2) != 0;
    v37 = 8;
    v47 = 0;
    v19 = v11;
    v45 = &v19;
    v40 = 1;
    v18 = (char)v12;
    v43 = 1;
    v46 = 1;
    TlgWrite(v12, &unk_18004254B, v9, v10, 0xAu, &pData);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)v20;
}
