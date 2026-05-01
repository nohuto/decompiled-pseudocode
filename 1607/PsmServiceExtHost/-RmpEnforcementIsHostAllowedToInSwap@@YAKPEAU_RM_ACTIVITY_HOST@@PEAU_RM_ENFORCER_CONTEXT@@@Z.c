/*
 * XREFs of ?RmpEnforcementIsHostAllowedToInSwap@@YAKPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@@Z @ 0x180019CAC
 * Callers:
 *     RmpEnforcementUnoptimizeHost @ 0x180019DBC (RmpEnforcementUnoptimizeHost.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
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
  unsigned int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
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

  if ( (*((_BYTE *)a1 + 1112) & 0x40) != 0 || !*((_DWORD *)a2 + 14) || (v2 = 0, *((char *)a1 + 820) < 0) )
    v2 = 1;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 1uLL) )
  {
    v14 = *(_QWORD *)(v3 + 24);
    v16 = &v14;
    v18 = &v10;
    v11 = *(_DWORD *)(v4 + 56);
    v20 = &v11;
    v7 = *(_DWORD *)(v3 + 1112);
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
    TlgWrite(v8, &unk_18003F651, (LPCGUID)v4, v5, 7u, &pData);
  }
  return v2;
}
