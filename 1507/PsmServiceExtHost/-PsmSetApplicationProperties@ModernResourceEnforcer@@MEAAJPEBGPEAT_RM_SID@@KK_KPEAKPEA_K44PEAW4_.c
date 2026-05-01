/*
 * XREFs of ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000C2C0
 * Callers:
 *     ?SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000C470 (-SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_P.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 */

__int64 __fastcall ModernResourceEnforcer::PsmSetApplicationProperties(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        enum _PSM_APPLICATION_PRIORITY *a11)
{
  int v11; // edi
  int v13; // r11d
  int v14; // r10d
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  unsigned int v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  LPCWSTR pwsz; // [rsp+68h] [rbp-A0h] BYREF
  SID *pSid; // [rsp+70h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h] BYREF
  __int64 v22; // [rsp+80h] [rbp-88h] BYREF
  __int64 v23; // [rsp+88h] [rbp-80h] BYREF
  __int64 v24; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int *v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]
  __int64 *v33; // [rsp+108h] [rbp+0h]
  __int64 v34; // [rsp+110h] [rbp+8h]
  unsigned __int64 *v35; // [rsp+118h] [rbp+10h]
  __int64 v36; // [rsp+120h] [rbp+18h]
  SID **p_pSid; // [rsp+128h] [rbp+20h]
  __int64 v38; // [rsp+130h] [rbp+28h]
  __int64 *v39; // [rsp+138h] [rbp+30h]
  __int64 v40; // [rsp+140h] [rbp+38h]
  __int64 *v41; // [rsp+148h] [rbp+40h]
  __int64 v42; // [rsp+150h] [rbp+48h]
  __int64 *v43; // [rsp+158h] [rbp+50h]
  __int64 v44; // [rsp+160h] [rbp+58h]
  LPCWSTR *p_pwsz; // [rsp+168h] [rbp+60h]
  __int64 v46; // [rsp+170h] [rbp+68h]

  v17 = a4;
  pSid = a3;
  pwsz = a2;
  if ( __PAIR128__((unsigned __int64)a8, (unsigned __int64)a7) != 0 || a9 || a10 || a11 )
  {
    v11 = (*((__int64 (__fastcall **)(SID *, _QWORD, LPCWSTR, _QWORD, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *))this
           + 10))(
            pSid,
            v17,
            pwsz,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11);
    if ( v11 >= 0 )
      v11 = 0;
    v25 = a6;
    LODWORD(v18) = v11;
  }
  else
  {
    v11 = 0;
    v25 = a6;
    LODWORD(v18) = 0;
  }
  if ( a8 )
    v22 = *a8;
  else
    v22 = -1LL;
  if ( a9 )
    v23 = *a9;
  else
    v23 = -1LL;
  if ( a10 )
    v24 = *a10;
  else
    v24 = -1LL;
  if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 9) != 0 && (qword_1800690B8 & 9) == qword_1800690B8 )
  {
    v27 = &v18;
    v28 = 4LL;
    TlgCreateWsz(&pDesc, pwsz);
    TlgCreateSid(&v30, pSid);
    LODWORD(v21) = a5;
    v33 = &v21;
    v35 = &v25;
    p_pSid = &pSid;
    v39 = &v22;
    v41 = &v23;
    v43 = &v24;
    p_pwsz = &pwsz;
    v31 = &v17;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 8LL;
    LODWORD(pSid) = v13;
    v38 = 4LL;
    v40 = 8LL;
    v42 = 8LL;
    v44 = 8LL;
    LODWORD(pwsz) = v14;
    v46 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pwsz, &unk_18005A1ED, v15, v16, 0xDu, &pData);
  }
  return (unsigned int)v11;
}
