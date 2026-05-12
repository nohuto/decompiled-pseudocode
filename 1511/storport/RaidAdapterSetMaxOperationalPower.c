/*
 * XREFs of RaidAdapterSetMaxOperationalPower @ 0x1C002CBB4
 * Callers:
 *     RaidAdapterPowerCapIoctl @ 0x1C00242F4 (RaidAdapterPowerCapIoctl.c)
 *     RaidPowerSettingCallback @ 0x1C0026BB0 (RaidPowerSettingCallback.c)
 *     RaidAdapterPassiveCoolingCallback @ 0x1C002C8B0 (RaidAdapterPassiveCoolingCallback.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000AFB8 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 *     _TlgKeywordOn @ 0x1C0011B18 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0014C54 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     RaidAdapterEffectiveMaxOperationalPower @ 0x1C002C888 (RaidAdapterEffectiveMaxOperationalPower.c)
 */

__int64 __fastcall RaidAdapterSetMaxOperationalPower(__int64 a1, unsigned __int64 *a2, char a3, unsigned int a4)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v7; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  const struct _TlgProvider_t *v15; // rcx
  int v16; // r12d
  unsigned __int64 v17; // rdx
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  char v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  const GUID *v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+88h] [rbp-78h]
  unsigned __int64 v33; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  __int64 *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  __int64 *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  __int64 *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  __int64 *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  __int64 *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  const GUID **v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]

  v4 = *(_QWORD **)(a1 + 5088);
  v5 = *a2;
  v7 = (int)a4;
  v32 = 0LL;
  v33 = 0LL;
  if ( a4 > 2 )
    return 3221225485LL;
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 14) )
    return 3221225659LL;
  if ( !v4 )
    return 3221225659LL;
  v11 = v4[4];
  if ( !v11 )
    return 3221225659LL;
  if ( a3 )
  {
    if ( *a2 <= 0x64 )
    {
      v12 = v4[5];
      if ( v11 > v12 )
      {
        v5 = v12 + (v11 - v12) * v5 / 0x64;
        goto LABEL_12;
      }
      if ( *a2 >= 0x64 )
      {
        v5 = v4[4];
        goto LABEL_12;
      }
      return 3221225659LL;
    }
    return 3221225485LL;
  }
LABEL_12:
  v22 = v4[v7 + 6];
  v13 = RaidAdapterEffectiveMaxOperationalPower((__int64)v4);
  v4[v7 + 6] = v5;
  v23 = v13;
  v32 = 0x1000000001LL;
  v25 = RaidAdapterEffectiveMaxOperationalPower(v14);
  v33 = v25;
  v16 = RaCallMiniportAdapterControl(a1 + 296);
  if ( v16 >= 0 )
  {
    if ( a3 )
    {
      v15 = (const struct _TlgProvider_t *)v4[4];
      v17 = v4[5];
      if ( (unsigned __int64)v15 <= v17 || v33 < v17 || v33 > (unsigned __int64)v15 )
      {
        *a2 = 100LL;
      }
      else
      {
        v15 = (const struct _TlgProvider_t *)((char *)v15 - v17);
        *a2 = 100 * (v33 - v17) / (unsigned __int64)v15;
      }
    }
    else
    {
      *a2 = v33;
    }
  }
  if ( (unsigned int)dword_1C0048030 > 5 )
  {
    if ( TlgKeywordOn(v15, 0x400000000000uLL) )
    {
      v24 = *(_DWORD *)(a1 + 56);
      v28 = v22;
      v31 = v4[6];
      v30 = v4[7];
      v27 = v4[8];
      v35 = a1 + 5192;
      v37 = &v24;
      v39 = &v21;
      v41 = &v28;
      v43 = &v26;
      v45 = &v31;
      v47 = &v30;
      v49 = &v27;
      v51 = &v22;
      v53 = &v23;
      v55 = &v25;
      v57 = &v29;
      v21 = v7;
      v26 = v5;
      LODWORD(v22) = v16;
      v29 = v20;
      v36 = 16LL;
      v38 = 4LL;
      v40 = 1LL;
      v42 = 8LL;
      v44 = 8LL;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 4LL;
      v54 = 8LL;
      v56 = 8LL;
      v58 = 8LL;
      TlgWrite(v18, &unk_1C003FD44, v19, v20, 0xEu, &pData);
    }
  }
  return (unsigned int)v16;
}
