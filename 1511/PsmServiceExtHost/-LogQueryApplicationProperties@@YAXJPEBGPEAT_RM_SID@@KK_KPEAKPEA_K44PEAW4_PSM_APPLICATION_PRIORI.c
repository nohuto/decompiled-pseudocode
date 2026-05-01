/*
 * XREFs of ?LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180019D70
 * Callers:
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180016B70 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ?HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180035EFC (-HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@.c)
 *     ?PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18003ADF0 (-PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

void __fastcall LogQueryApplicationProperties(
        int a1,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        char a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        enum _PSM_APPLICATION_PRIORITY *a11,
        unsigned __int64 *a12)
{
  __int64 v13; // r9
  int v14; // r10d
  int v15; // r11d
  __int64 v16; // rax
  const unsigned __int16 *v17; // rcx
  int v18; // ecx
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]
  union _RM_SID *v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C8h] [rbp-38h]
  int v39; // [rsp+CCh] [rbp-34h]
  int *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  unsigned int *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  char *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  __int64 *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  __int64 *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  __int64 *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  int *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  __int64 *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  int v58; // [rsp+180h] [rbp+80h] BYREF

  v58 = a1;
  if ( a1 >= 0 )
  {
    if ( a12 )
      v13 = *a12;
    else
      v13 = -1LL;
    v15 = -1;
    if ( a7 )
      v14 = *a7;
    else
      v14 = -1;
    if ( a8 )
      v19 = *a8;
    else
      v19 = -1LL;
    if ( a9 )
      v20 = *a9;
    else
      v20 = -1LL;
    if ( a10 )
      v22 = *a10;
    else
      v22 = -1LL;
    if ( a11 )
      v15 = *(_DWORD *)a11;
  }
  else
  {
    v13 = 0LL;
    v19 = 0LL;
    v14 = 0;
    v20 = 0LL;
    v22 = 0LL;
    v15 = 0;
  }
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
  {
    v33 = 4LL;
    v32 = &v58;
    LODWORD(v16) = 0;
    v17 = (const unsigned __int16 *)&unk_1800574EC;
    if ( a2 )
    {
      v17 = a2;
      v16 = -1LL;
      do
        ++v16;
      while ( a2[v16] );
    }
    v34 = v17;
    v18 = 2 * v16 + 2;
    LOBYTE(v16) = *((_BYTE *)a3 + 1);
    v35 = v18;
    v36 = 0;
    if ( (unsigned __int8)v16 > 0xFu )
      LODWORD(v16) = 15;
    else
      LODWORD(v16) = (unsigned __int8)v16;
    v37 = a3;
    v38 = 4 * v16 + 8;
    v40 = &v25;
    v21 = a5;
    v42 = &v21;
    v44 = &a6;
    v46 = &v24;
    v48 = &v19;
    v50 = &v20;
    v52 = &v22;
    v54 = &v23;
    v56 = &v26;
    v39 = 0;
    v25 = a4;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 8LL;
    v24 = v14;
    v47 = 4LL;
    v49 = 8LL;
    v51 = 8LL;
    v53 = 8LL;
    v23 = v15;
    v55 = 4LL;
    v26 = v13;
    v57 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18006182F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_180071068;
    v29 = &unk_18006183A;
    UserData.Reserved = 2;
    v30 = 200;
    v31 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xEu, &UserData);
  }
}
