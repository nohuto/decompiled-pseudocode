/*
 * XREFs of ?RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180003B4C
 * Callers:
 *     ?RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180003A90 (-RmpEnforcementWaitForInSwapTurn@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEnforcementIsHostAllowedToInSwap(struct _RM_ACTIVITY_HOST *a1, struct _RM_ENFORCER_CONTEXT *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  const GUID *v5; // r9
  __int64 v6; // r10
  int v7; // eax
  const struct _TlgProvider_t *v8; // rcx
  unsigned int v10; // [rsp+30h] [rbp-59h] BYREF
  int v11; // [rsp+34h] [rbp-55h] BYREF
  int v12; // [rsp+38h] [rbp-51h] BYREF
  int v13; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-19h]
  __int64 v17; // [rsp+78h] [rbp-11h]
  unsigned int *v18; // [rsp+80h] [rbp-9h]
  __int64 v19; // [rsp+88h] [rbp-1h]
  int *v20; // [rsp+90h] [rbp+7h]
  __int64 v21; // [rsp+98h] [rbp+Fh]
  int *v22; // [rsp+A0h] [rbp+17h]
  __int64 v23; // [rsp+A8h] [rbp+1Fh]
  int *v24; // [rsp+B0h] [rbp+27h]
  __int64 v25; // [rsp+B8h] [rbp+2Fh]

  if ( (*((_BYTE *)a1 + 1120) & 0x40) != 0 || !*((_DWORD *)a2 + 10) || (v2 = 0, *((_BYTE *)a1 + 820) >= 0x80u) )
    v2 = 1;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
  {
    v14 = *(_QWORD *)(v3 + 24);
    v16 = &v14;
    v18 = &v10;
    v11 = *(_DWORD *)(v4 + 40);
    v20 = &v11;
    v7 = *(_DWORD *)(v3 + 1120);
    v8 = (const struct _TlgProvider_t *)*(unsigned __int8 *)(v3 + 820);
    v12 = v7;
    v22 = &v12;
    v24 = &v13;
    v17 = 8LL;
    v10 = v2;
    v19 = v6;
    v21 = v6;
    v23 = v6;
    v13 = (int)v8;
    v25 = v6;
    TlgWrite(v8, &unk_18004280D, (LPCGUID)v4, v5, 7u, &pData);
  }
  return v2;
}
