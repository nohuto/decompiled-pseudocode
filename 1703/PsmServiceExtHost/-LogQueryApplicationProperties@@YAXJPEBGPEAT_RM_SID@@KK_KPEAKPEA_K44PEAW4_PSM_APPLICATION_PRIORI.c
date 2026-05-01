/*
 * XREFs of ?LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18002A310
 * Callers:
 *     ?PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18002A530 (-PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     _TlgCreateSid @ 0x1800151E4 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall LogQueryApplicationProperties(
        __int64 a1,
        const unsigned __int16 *a2,
        const SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10)
{
  int v12; // ebx
  const WCHAR *v13; // r8
  int v14; // r10d
  __int64 v15; // r11
  TraceLoggingHProvider v16; // rcx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+A0h] [rbp-60h] BYREF
  int *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  unsigned int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  __int64 *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int64 *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  __int64 *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  int v50; // [rsp+190h] [rbp+90h] BYREF

  v50 = a1;
  if ( (int)a1 < 0 )
  {
    v23 = 0LL;
    v12 = 0;
    v24 = 0LL;
    v25 = 0LL;
  }
  else
  {
    a1 = -1LL;
    if ( a7 )
      v12 = *a7;
    else
      v12 = -1;
    if ( a8 )
      v23 = *a8;
    else
      v23 = -1LL;
    if ( a9 )
      v24 = *a9;
    else
      v24 = -1LL;
    if ( a10 )
      v25 = *a10;
    else
      v25 = -1LL;
  }
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)a1, 1uLL) )
    {
      v29 = 4LL;
      v28 = &v50;
      TlgCreateWsz(&pDesc, v13);
      TlgCreateSid(&v31, a3);
      v19 = a4;
      v32 = &v19;
      v20 = a5;
      v34 = &v20;
      v36 = &a6;
      v38 = &v21;
      v40 = &v23;
      v42 = &v24;
      v44 = &v25;
      v46 = &v22;
      v48 = &v26;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 8LL;
      v21 = v12;
      v39 = 4LL;
      v41 = 8LL;
      v43 = 8LL;
      v45 = 8LL;
      v22 = v14;
      v47 = 4LL;
      v26 = v15;
      v49 = 8LL;
      TlgWrite(v16, &unk_18003F729, v17, v18, 0xEu, &pData);
    }
  }
}
