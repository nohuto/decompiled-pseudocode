/*
 * XREFs of ?LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180009FC0
 * Callers:
 *     ?HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000BB60 (-HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@.c)
 *     ?PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180033BC0 (-PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
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
  const WCHAR *v12; // r9
  int v13; // r11d
  int v14; // r10d
  TraceLoggingHProvider v15; // rcx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+B0h] [rbp-50h] BYREF
  int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  unsigned int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  __int64 *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  __int64 *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  __int64 *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  int *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  int v46; // [rsp+180h] [rbp+80h] BYREF

  v46 = a1;
  if ( (int)a1 < 0 )
  {
    v19 = 0LL;
    v21 = 0LL;
    v23 = 0LL;
  }
  else
  {
    a1 = -1LL;
    if ( a8 )
      v19 = *a8;
    else
      v19 = -1LL;
    if ( a9 )
      v21 = *a9;
    else
      v21 = -1LL;
    if ( a10 )
      v23 = *a10;
    else
      v23 = -1LL;
  }
  if ( (unsigned int)dword_1800690A0 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)a1, 1uLL) )
    {
      v27 = 4LL;
      v26 = &v46;
      TlgCreateWsz(&pDesc, v12);
      TlgCreateSid(&v29, a3);
      v22 = a4;
      v30 = &v22;
      v20 = a5;
      v32 = &v20;
      v34 = &a6;
      v36 = &v24;
      v38 = &v19;
      v40 = &v21;
      v42 = &v23;
      v44 = &v18;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 8LL;
      v24 = v13;
      v37 = 4LL;
      v39 = 8LL;
      v41 = 8LL;
      v43 = 8LL;
      v18 = v14;
      v45 = 4LL;
      TlgWrite(v15, &unk_18005A2B5, v16, v17, 0xDu, &pData);
    }
  }
}
