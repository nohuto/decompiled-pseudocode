/*
 * XREFs of ?LogSetApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180016050
 * Callers:
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180016B70 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x180017930 (-PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_.c)
 *     ?SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@2@Z @ 0x180017AD0 (-SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_P.c)
 *     ?HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180035EFC (-HandleGroupSchedulingOwnershipChangeForSingleHost@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

void __fastcall LogSetApplicationProperties(
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
  __int64 v13; // r11
  int v14; // r9d
  int v15; // r10d
  const unsigned __int16 *v16; // rcx
  __int64 v17; // rax
  int v18; // ecx
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+8Ch] [rbp-74h]
  int *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+ACh] [rbp-54h]
  union _RM_SID *v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  int *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  unsigned int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  char *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  __int64 *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int64 *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  __int64 *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  int *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  __int64 *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  int v58; // [rsp+170h] [rbp+70h] BYREF

  v58 = a1;
  if ( a12 )
    v13 = *a12;
  else
    v13 = -1LL;
  v14 = -1;
  if ( a7 )
    v15 = *a7;
  else
    v15 = -1;
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
  if ( a11 )
    v14 = *(_DWORD *)a11;
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 9) != 0 && (qword_180071078 & 9) == qword_180071078 )
  {
    v32 = &v58;
    v33 = 4LL;
    v16 = (const unsigned __int16 *)&unk_1800574EC;
    LODWORD(v17) = 0;
    if ( a2 )
    {
      v16 = a2;
      v17 = -1LL;
      do
        ++v17;
      while ( a2[v17] );
    }
    v34 = v16;
    v18 = 2 * v17 + 2;
    LOBYTE(v17) = *((_BYTE *)a3 + 1);
    v35 = v18;
    v36 = 0;
    if ( (unsigned __int8)v17 > 0xFu )
      LODWORD(v17) = 15;
    else
      LODWORD(v17) = (unsigned __int8)v17;
    v37 = a3;
    v38 = 4 * v17 + 8;
    v40 = &v21;
    v19 = a5;
    v42 = &v19;
    v44 = &a6;
    v46 = &v20;
    v48 = &v23;
    v50 = &v24;
    v52 = &v25;
    v54 = &v22;
    v56 = &v26;
    v39 = 0;
    v21 = a4;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 8LL;
    v20 = v15;
    v47 = 4LL;
    v49 = 8LL;
    v51 = 8LL;
    v53 = 8LL;
    v22 = v14;
    v55 = 4LL;
    v26 = v13;
    v57 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180061A55 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_180071068;
    v29 = &unk_180061A60;
    UserData.Reserved = 2;
    v30 = 198;
    v31 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xEu, &UserData);
  }
}
