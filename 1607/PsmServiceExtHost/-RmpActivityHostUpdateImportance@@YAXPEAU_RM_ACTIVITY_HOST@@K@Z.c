/*
 * XREFs of ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014270
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F850 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     RmpActivityHostResourceSetsChanged @ 0x180014D98 (RmpActivityHostResourceSetsChanged.c)
 * Callees:
 *     RmpActivityHostSetStoreHighMemoryPriority @ 0x180003804 (RmpActivityHostSetStoreHighMemoryPriority.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x1800116D4 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     RmpActivityImportanceMergeVectors @ 0x180014750 (RmpActivityImportanceMergeVectors.c)
 *     ?RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z @ 0x180014C80 (-RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpGameModeOnHostImportanceChanged @ 0x1800320B0 (RmpGameModeOnHostImportanceChanged.c)
 */

void __fastcall RmpActivityHostUpdateImportance(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v2; // r14
  struct _RM_ACTIVITY_HOST *v5; // rsi
  unsigned int *NextResourceSetInList; // rsi
  unsigned int v7; // r8d
  int v8; // r8d
  int v9; // ebx
  struct _RM_ACTIVITY_HOST *v10; // rsi
  struct ExecutionModel::ResourceSet *v11; // rsi
  unsigned int v12; // r8d
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  __int16 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v17; // [rsp+3Ah] [rbp-C6h] BYREF
  __int16 v18; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v19; // [rsp+3Eh] [rbp-C2h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+5Ch] [rbp-A4h] BYREF
  BOOL v28; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v29; // [rsp+64h] [rbp-9Ch] BYREF
  BOOL v30; // [rsp+68h] [rbp-98h] BYREF
  BOOL v31; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+ACh] [rbp-54h]
  __int64 *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  int *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  BOOL *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int16 *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int16 *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  __int16 *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int16 *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  int *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  int *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  int *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  int *v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  int *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  int *v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  BOOL *v64; // [rsp+180h] [rbp+80h]
  __int64 v65; // [rsp+188h] [rbp+88h]
  BOOL *v66; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+198h] [rbp+98h]
  BOOL *v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1A8h] [rbp+A8h]
  BOOL *v70; // [rsp+1B0h] [rbp+B0h]
  __int64 v71; // [rsp+1B8h] [rbp+B8h]

  v2 = *((_QWORD *)a1 + 5);
  if ( (a2 & 1) != 0 )
  {
    v5 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 77);
    if ( v5 == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 616)
      || (NextResourceSetInList = (unsigned int *)((char *)v5 - 1376)) == 0LL )
    {
      v8 = 1;
    }
    else
    {
      do
      {
        if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement((ExecutionModel::ResourceSet *)NextResourceSetInList) )
          RmpActivityImportanceMergeVectors(v7, NextResourceSetInList[358]);
        NextResourceSetInList = (unsigned int *)RmpActivityHostGetNextResourceSetInList((struct ExecutionModel::ResourceSet *)NextResourceSetInList);
      }
      while ( NextResourceSetInList );
    }
    *((_DWORD *)a1 + 279) = v8;
    if ( (v8 & 0x40) != 0 )
      RtlWakeAllConditionVariable((char *)a1 + 808);
  }
  if ( (a2 & 2) != 0 )
  {
    v9 = *((_DWORD *)a1 + 278);
    v10 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 80);
    if ( v10 == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 640)
      || (v11 = (struct _RM_ACTIVITY_HOST *)((char *)v10 - 1376)) == 0LL )
    {
      v12 = 1;
    }
    else
    {
      v12 = 1;
      do
      {
        if ( *((_DWORD *)v11 + 338) == 2 || (*((_BYTE *)v11 + 1412) & 0x10) != 0 )
          RmpActivityImportanceMergeVectors(v12, *((unsigned int *)v11 + 358));
        v11 = RmpActivityHostGetNextResourceSetInList(v11);
      }
      while ( v11 );
    }
    *((_DWORD *)a1 + 278) = v12;
    if ( (*((_BYTE *)a1 + 1113) & 1) != 0 && (*((_BYTE *)a1 + 1124) & 2) == 0 && (*((_BYTE *)a1 + 820) & 0x10) == 0 )
    {
      RmpActivityHostSetStoreHighMemoryPriority((__int64)a1);
      *((_DWORD *)a1 + 281) |= 2u;
    }
    if ( (*((_BYTE *)a1 + 1112) & 0x40) != 0 )
      RtlWakeAllConditionVariable((char *)a1 + 808);
    if ( (*((_WORD *)a1 + 556) & 0x400) == 0 )
    {
      v13 = *((_DWORD *)a1 + 204);
      if ( (v13 & 0x10) != 0 )
        *((_DWORD *)a1 + 204) = v13 & 0xFFFFFFEF;
    }
    if ( *((_QWORD *)a1 + 134) )
    {
      v15 = *((_DWORD *)a1 + 278);
      if ( (((unsigned __int8)v9 ^ (unsigned __int8)v15) & 0x40) != 0
        || (((unsigned __int8)v9 ^ (unsigned __int8)v15) & 1) != 0 )
      {
        RmpGameModeOnHostImportanceChanged((struct _RM_GAME_MODE_CONTEXT *)(v2 + 2920), a1);
      }
    }
    if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 9) != 0 && (qword_18004C048 & 9) == qword_18004C048 )
    {
      v14 = *((unsigned __int16 *)a1 + 556);
      v32 = *((_QWORD *)a1 + 3);
      v38 = &v32;
      v39 = 8LL;
      v20 = v9 & 1;
      v41 = 4LL;
      v40 = &v20;
      v43 = 4LL;
      v21 = (v14 & 1) != 0;
      v42 = &v21;
      v45 = 2LL;
      v16 = ((unsigned __int16)v9 >> 1) & 7;
      v44 = &v16;
      v47 = 2LL;
      v17 = ((unsigned __int16)v14 >> 1) & 7;
      v46 = &v17;
      v49 = 2LL;
      v18 = ((unsigned __int16)v9 >> 4) & 3;
      v48 = &v18;
      v51 = 2LL;
      v19 = ((unsigned __int16)v14 >> 4) & 3;
      v50 = &v19;
      v53 = 4LL;
      v22 = ((unsigned __int8)v9 >> 6) & 1;
      v52 = &v22;
      v55 = 4LL;
      v23 = ((unsigned __int8)v14 >> 6) & 1;
      v54 = &v23;
      v24 = (unsigned __int8)v9 >> 7;
      v56 = &v24;
      v25 = (unsigned __int8)v14 >> 7;
      v58 = &v25;
      v57 = 4LL;
      v26 = BYTE1(v9) & 1;
      v60 = &v26;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      v27 = (v14 >> 8) & 1;
      v65 = 4LL;
      v62 = &v27;
      v67 = 4LL;
      v28 = (v9 & 0x200) != 0;
      v69 = 4LL;
      v64 = &v28;
      v71 = 4LL;
      v29 = (v14 & 0x200) != 0;
      v66 = &v29;
      v30 = (v9 & 0x400) != 0;
      v68 = &v30;
      v31 = (v14 & 0x400) != 0;
      v70 = &v31;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18004C038;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180040BAF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 9LL;
      UserData.Size = *(unsigned __int16 *)off_18004C038;
      v35 = &unk_180040BBA;
      v37 = 1;
      UserData.Reserved = 2;
      v36 = 399;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x13u, &UserData);
    }
  }
}
