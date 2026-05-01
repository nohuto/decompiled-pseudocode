/*
 * XREFs of ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800121E0
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180011DF0 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeImportanceForCategory@@YA?AT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800125F0 (-RmpActivityHostComputeImportanceForCategory@@YA-AT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_ACTIVITY_HOS.c)
 *     ?RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001BA78 (-RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostUpdateImportance(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  __int16 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v9; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v10; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v11; // [rsp+36h] [rbp-CAh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  BOOL v20; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v21; // [rsp+5Ch] [rbp-A4h] BYREF
  BOOL v22; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v23; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ch] [rbp-64h]
  __int64 *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  int *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  BOOL *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int16 *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  __int16 *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  __int16 *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int16 *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  int *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  int *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  int *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  int *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  BOOL *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  BOOL *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  BOOL *v60; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]
  BOOL *v62; // [rsp+1A0h] [rbp+A0h]
  __int64 v63; // [rsp+1A8h] [rbp+A8h]

  if ( (a2 & 1) != 0 )
  {
    v4 = RmpActivityHostComputeImportanceForCategory(a1, 0LL);
    *((_DWORD *)a1 + 281) = v4;
    if ( (v4 & 0x40) != 0 )
      RtlWakeAllConditionVariable((char *)a1 + 808);
  }
  if ( (a2 & 2) != 0 )
  {
    v5 = *((_DWORD *)a1 + 280);
    *((_DWORD *)a1 + 280) = RmpActivityHostComputeImportanceForCategory(a1, 1LL);
    if ( (*((_WORD *)a1 + 560) & 0x100) != 0 && (*((_BYTE *)a1 + 1132) & 2) == 0 && (*((_BYTE *)a1 + 820) & 0x10) == 0 )
    {
      RmpActivityHostSetStoreHighMemoryPriority(a1);
      *((_DWORD *)a1 + 283) |= 2u;
    }
    if ( (*((_BYTE *)a1 + 1120) & 0x40) != 0 )
      RtlWakeAllConditionVariable((char *)a1 + 808);
    if ( (*((_WORD *)a1 + 560) & 0x400) == 0 )
    {
      v6 = *((_DWORD *)a1 + 204);
      if ( (v6 & 0x10) != 0 )
        *((_DWORD *)a1 + 204) = v6 & 0xFFFFFFEF;
    }
    if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 9) != 0 && (qword_18004D048 & 9) == qword_18004D048 )
    {
      v7 = *((unsigned __int16 *)a1 + 560);
      v24 = *((_QWORD *)a1 + 3);
      v30 = &v24;
      v31 = 8LL;
      v12 = v5 & 1;
      v33 = 4LL;
      v32 = &v12;
      v35 = 4LL;
      v13 = (v7 & 1) != 0;
      v34 = &v13;
      v37 = 2LL;
      v8 = ((unsigned __int16)v5 >> 1) & 7;
      v36 = &v8;
      v39 = 2LL;
      v9 = ((unsigned __int16)v7 >> 1) & 7;
      v38 = &v9;
      v41 = 2LL;
      v10 = ((unsigned __int16)v5 >> 4) & 3;
      v40 = &v10;
      v43 = 2LL;
      v11 = ((unsigned __int16)v7 >> 4) & 3;
      v42 = &v11;
      v45 = 4LL;
      v14 = ((unsigned __int8)v5 >> 6) & 1;
      v44 = &v14;
      v47 = 4LL;
      v15 = ((unsigned __int8)v7 >> 6) & 1;
      v46 = &v15;
      v16 = (unsigned __int8)v5 >> 7;
      v48 = &v16;
      v17 = (unsigned __int8)v7 >> 7;
      v50 = &v17;
      v49 = 4LL;
      v18 = BYTE1(v5) & 1;
      v52 = &v18;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      v19 = (v7 >> 8) & 1;
      v59 = 4LL;
      v54 = &v19;
      v61 = 4LL;
      v20 = (v5 & 0x200) != 0;
      v63 = 4LL;
      v56 = &v20;
      v21 = (v7 & 0x200) != 0;
      v58 = &v21;
      v22 = (v5 & 0x400) != 0;
      v60 = &v22;
      v23 = (v7 & 0x400) != 0;
      v62 = &v23;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18004D038;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800415E2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 9LL;
      UserData.Size = *(unsigned __int16 *)off_18004D038;
      v27 = &unk_1800415ED;
      UserData.Reserved = 2;
      v28 = 399;
      v29 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x13u, &UserData);
    }
  }
}
