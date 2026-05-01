/*
 * XREFs of ?LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180006374
 * Callers:
 *     ?HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000BB60 (-HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 */

void __fastcall LogSetApplicationProperties(
        int a1,
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
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A0h] [rbp-60h] BYREF
  int *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  unsigned int *v33; // [rsp+C0h] [rbp-40h]
  int v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+CCh] [rbp-34h]
  unsigned __int64 *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  int *v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  __int64 *v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+FCh] [rbp-4h]
  __int64 *v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]
  __int64 *v48; // [rsp+110h] [rbp+10h]
  int v49; // [rsp+118h] [rbp+18h]
  int v50; // [rsp+11Ch] [rbp+1Ch]
  int *v51; // [rsp+120h] [rbp+20h]
  int v52; // [rsp+128h] [rbp+28h]
  int v53; // [rsp+12Ch] [rbp+2Ch]
  int v54; // [rsp+160h] [rbp+60h] BYREF

  v54 = a1;
  if ( a8 )
    v21 = *a8;
  else
    v21 = -1LL;
  if ( a9 )
    v23 = *a9;
  else
    v23 = -1LL;
  if ( a10 )
    v22 = *a10;
  else
    v22 = -1LL;
  if ( (unsigned int)dword_1800690A0 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)0xFFFFFFFFFFFFFFFFLL, 9uLL) )
    {
      v27 = 0;
      v25 = &v54;
      v26 = 4;
      TlgCreateWsz(&pDesc, v12);
      TlgCreateSid(&v29, a3);
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v47 = 0;
      v50 = 0;
      v53 = 0;
      v30 = &v20;
      v19 = a5;
      v33 = &v19;
      v36 = &a6;
      v39 = &v18;
      v42 = &v21;
      v45 = &v23;
      v48 = &v22;
      v51 = &v17;
      v20 = a4;
      v31 = 4;
      v34 = 4;
      v37 = 8;
      v18 = v13;
      v40 = 4;
      v43 = 8;
      v46 = 8;
      v49 = 8;
      v17 = v14;
      v52 = 4;
      TlgWrite((TraceLoggingHProvider)8, &unk_18005A1ED, v15, v16, 0xDu, &pData);
    }
  }
}
