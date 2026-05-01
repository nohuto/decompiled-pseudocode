/*
 * XREFs of ?RmpEnforcementApplyPowerBoostContext@@YAJPEAU_RM_POWERBOOST_CONTEXT@@K@Z @ 0x180004838
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x1800046F8 (RmpEnforcementUnoptimizeHost.c)
 * Callees:
 *     RmpEnforcementApplyPowerBoost @ 0x180004A30 (RmpEnforcementApplyPowerBoost.c)
 *     ?RmpPowerBoostWatchdogSet@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180004A78 (-RmpPowerBoostWatchdogSet@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementApplyPowerBoostContext(struct _RM_POWERBOOST_CONTEXT *a1, unsigned int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  struct _TP_TIMER *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // edx
  int v12; // eax
  DWORD v14; // eax
  DWORD TickCount; // eax
  bool v16; // [rsp+30h] [rbp-79h] BYREF
  bool v17; // [rsp+31h] [rbp-78h] BYREF
  char v18; // [rsp+32h] [rbp-77h] BYREF
  bool v19; // [rsp+33h] [rbp-76h] BYREF
  int v20; // [rsp+34h] [rbp-75h] BYREF
  int v21; // [rsp+38h] [rbp-71h] BYREF
  int v22; // [rsp+3Ch] [rbp-6Dh] BYREF
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
  char *v36; // [rsp+A0h] [rbp-9h]
  int v37; // [rsp+A8h] [rbp-1h]
  int v38; // [rsp+ACh] [rbp+3h]
  char *v39; // [rsp+B0h] [rbp+7h]
  int v40; // [rsp+B8h] [rbp+Fh]
  int v41; // [rsp+BCh] [rbp+13h]
  bool *v42; // [rsp+C0h] [rbp+17h]
  int v43; // [rsp+C8h] [rbp+1Fh]
  int v44; // [rsp+CCh] [rbp+23h]
  bool *v45; // [rsp+D0h] [rbp+27h]
  int v46; // [rsp+D8h] [rbp+2Fh]
  int v47; // [rsp+DCh] [rbp+33h]

  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( (*((_BYTE *)a1 + 24) & 4) != 0 )
  {
    v20 = -1073741585;
    goto LABEL_7;
  }
  if ( a2 )
  {
    if ( (*((_BYTE *)a1 + 24) & 1) != 0 )
    {
      TickCount = GetTickCount();
      ++*((_QWORD *)a1 + 1);
      *((_DWORD *)a1 + 1) = TickCount;
    }
    else
    {
      v14 = GetTickCount();
      *(_DWORD *)a1 = v14;
      *((_DWORD *)a1 + 1) = v14;
      v20 = RmpEnforcementApplyPowerBoost(a2);
      if ( v20 < 0 )
        goto LABEL_7;
      *((_DWORD *)a1 + 6) |= 2u;
      *((_QWORD *)a1 + 1) = 1LL;
      RmpPowerBoostWatchdogSet(a1);
    }
  }
  else
  {
    v5 = *((_QWORD *)a1 + 1);
    if ( v5 == 1 && (*((_BYTE *)a1 + 24) & 2) != 0 )
    {
      v6 = RmpEnforcementApplyPowerBoost(0LL);
      v7 = (struct _TP_TIMER *)*((_QWORD *)a1 + 2);
      *((_DWORD *)a1 + 6) &= ~2u;
      *((_QWORD *)a1 + 1) = 0LL;
      v20 = v6;
      SetThreadpoolTimer(v7, 0LL, 0, 0);
      *((_DWORD *)a1 + 6) &= ~1u;
    }
    else
    {
      *((_QWORD *)a1 + 1) = v5 - 1;
    }
  }
  v20 = 0;
LABEL_7:
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v4, 1uLL) )
  {
    v11 = *((_DWORD *)a1 + 6);
    v26 = 0;
    v24 = &v20;
    v25 = 4;
    v27 = &v19;
    v19 = a2 != 0;
    v12 = *(_DWORD *)a1;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v22 = v12;
    v30 = &v22;
    v21 = *((_DWORD *)a1 + 1);
    v33 = &v21;
    v36 = (char *)a1 + 8;
    v28 = 1;
    v18 = v11 & 1;
    v39 = &v18;
    v17 = (v11 & 2) != 0;
    v47 = 0;
    v42 = &v17;
    v45 = &v16;
    v31 = 4;
    v34 = 4;
    v37 = 8;
    v40 = 1;
    v43 = 1;
    v16 = (v11 & 4) != 0;
    v46 = 1;
    TlgWrite(v8, &unk_180062A93, v9, v10, 0xAu, &pData);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)v20;
}
