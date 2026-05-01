/*
 * XREFs of PsmHostStateNotification2 @ 0x1800047D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B3B0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 */

__int64 __fastcall PsmHostStateNotification2(
        SID *pSid,
        unsigned int a2,
        const WCHAR *a3,
        int *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8)
{
  ULONG v12; // eax
  TraceLoggingHProvider v14; // rcx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-ACh] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h]
  _BYTE v22[80]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+F0h] [rbp-10h] BYREF
  int *v26; // [rsp+100h] [rbp+0h]
  __int64 v27; // [rsp+108h] [rbp+8h]
  int *v28; // [rsp+110h] [rbp+10h]
  __int64 v29; // [rsp+118h] [rbp+18h]
  int *v30; // [rsp+120h] [rbp+20h]
  __int64 v31; // [rsp+128h] [rbp+28h]
  __int64 v32; // [rsp+130h] [rbp+30h]
  __int64 v33; // [rsp+138h] [rbp+38h]
  int *v34; // [rsp+140h] [rbp+40h]
  __int64 v35; // [rsp+148h] [rbp+48h]

  v21 = a7;
  if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 1) != 0 && (qword_1800690B8 & 1) == qword_1800690B8 )
  {
    TlgCreateWsz(&pDesc, a3);
    TlgCreateSid(&v25, pSid);
    v18 = a2;
    v26 = (int *)&v18;
    v28 = &v20;
    v19 = *a4;
    v30 = &v19;
    v34 = &v17;
    v27 = 4LL;
    v20 = a6;
    v29 = 4LL;
    v31 = 4LL;
    v32 = a5;
    v33 = 8LL;
    v17 = a8;
    v35 = 4LL;
    TlgWrite(v14, &unk_18005954F, v15, v16, 9u, &pData);
  }
  memset_0(v22, 0, 0x44uLL);
  v12 = RtlLengthSid(pSid);
  memcpy_0(v22, pSid, v12);
  return ModernResourceEnforcer::ApplicationStateNotification(
           *((_QWORD *)RmSvcGlobals + 10),
           v22,
           a2,
           a3,
           a4,
           a5,
           a6,
           v21,
           a8);
}
