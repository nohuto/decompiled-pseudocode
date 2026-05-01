/*
 * XREFs of ?RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180002828
 * Callers:
 *     ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180002768 (-RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementIsHostAllowedToInSwap(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCER_CONTEXT *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  const GUID *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r11
  int v8; // eax
  const struct _TlgProvider_t *v9; // rcx
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-9h]
  __int64 v17; // [rsp+78h] [rbp-1h]
  unsigned int *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  int *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  int *v22; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+2Fh]
  int *v24; // [rsp+B0h] [rbp+37h]
  __int64 v25; // [rsp+B8h] [rbp+3Fh]

  if ( (*((_BYTE *)a1 + 904) & 0x40) != 0 || !*((_DWORD *)a2 + 14) || (v2 = 0, *((char *)a1 + 772) < 0) )
    v2 = 1;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(a1, 1uLL) )
  {
    v14 = *(_QWORD *)(v3 + 24);
    v16 = &v14;
    v18 = &v13;
    v12 = *(_DWORD *)(v5 + 56);
    v20 = &v12;
    v8 = *(_DWORD *)(v3 + 904);
    v9 = (const struct _TlgProvider_t *)*(unsigned __int8 *)(v3 + 772);
    v10 = v8;
    v22 = &v10;
    v24 = &v11;
    v17 = 8LL;
    v13 = v2;
    v19 = v6;
    v21 = v6;
    v23 = v6;
    v11 = (int)v9;
    v25 = v6;
    TlgWrite(v9, &unk_18005B191, v4, (LPCGUID)v5, 7u, &pData);
  }
  return v2;
}
