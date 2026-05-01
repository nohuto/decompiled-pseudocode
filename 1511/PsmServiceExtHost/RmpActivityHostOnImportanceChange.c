/*
 * XREFs of RmpActivityHostOnImportanceChange @ 0x180009400
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000DE80 (-UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x180041048 (RmpActivityHostOnAppliedResourceSetChange.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x180018750 (RmpActivityHostActOnProcesses.c)
 *     RmpActivityHostSetStoreHighMemoryPriority @ 0x18001F2F8 (RmpActivityHostSetStoreHighMemoryPriority.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

int __fastcall RmpActivityHostOnImportanceChange(struct _RM_ACTIVITY_HOST *a1, unsigned __int16 a2)
{
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r10
  _QWORD *v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  BOOL v13; // r14d
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(char *, _QWORD, char *, __int64, __int64, _DWORD *); // rsi
  unsigned int v16; // r12d
  __int64 v17; // rax
  bool v18; // r14
  bool v19; // r8
  unsigned int v20; // ecx
  __int16 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v23; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  BOOL v30; // [rsp+4Ch] [rbp-B4h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+5Ch] [rbp-A4h] BYREF
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v40[22]; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]
  int *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  __int64 *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  int *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+140h] [rbp+40h] BYREF
  void *v52; // [rsp+150h] [rbp+50h]
  int v53; // [rsp+158h] [rbp+58h]
  int v54; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  int *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]
  BOOL *v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  __int16 *v61; // [rsp+190h] [rbp+90h]
  __int64 v62; // [rsp+198h] [rbp+98h]
  __int16 *v63; // [rsp+1A0h] [rbp+A0h]
  __int64 v64; // [rsp+1A8h] [rbp+A8h]
  __int16 *v65; // [rsp+1B0h] [rbp+B0h]
  __int64 v66; // [rsp+1B8h] [rbp+B8h]
  int *v67; // [rsp+1C0h] [rbp+C0h]
  __int64 v68; // [rsp+1C8h] [rbp+C8h]
  int *v69; // [rsp+1D0h] [rbp+D0h]
  __int64 v70; // [rsp+1D8h] [rbp+D8h]
  int *v71; // [rsp+1E0h] [rbp+E0h]
  __int64 v72; // [rsp+1E8h] [rbp+E8h]
  BOOL *v73; // [rsp+1F0h] [rbp+F0h]
  __int64 v74; // [rsp+1F8h] [rbp+F8h]
  int *v75; // [rsp+200h] [rbp+100h]
  __int64 v76; // [rsp+208h] [rbp+108h]
  int *v77; // [rsp+210h] [rbp+110h]
  __int64 v78; // [rsp+218h] [rbp+118h]
  int *v79; // [rsp+220h] [rbp+120h]
  __int64 v80; // [rsp+228h] [rbp+128h]

  if ( (*((_BYTE *)a1 + 937) & 1) != 0 && (*((_BYTE *)a1 + 20) & 1) == 0 && (*((_BYTE *)a1 + 780) & 0x10) == 0 )
  {
    RmpActivityHostSetStoreHighMemoryPriority();
    *((_DWORD *)a1 + 5) |= 1u;
  }
  if ( (*((_BYTE *)a1 + 936) & 0x40) != 0 )
    RtlWakeAllConditionVariable((char *)a1 + 768);
  v4 = *((_DWORD *)a1 + 10);
  v5 = 0LL;
  v6 = *((_QWORD *)a1 + 75);
  v7 = 0LL;
  if ( v4 == 1 )
    v5 = *((_QWORD *)a1 + 75);
  else
    v7 = *(_QWORD **)(v6 + 24);
  v8 = 3;
  if ( v4 == 1 )
  {
    v9 = v5;
    v5 = 0LL;
  }
  else if ( v7 == (_QWORD *)(v6 + 24) )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = v7[2];
    v7 = (_QWORD *)*v7;
  }
  if ( !v9 )
    goto LABEL_55;
  do
  {
    if ( v8 == 3 )
      v8 = *(_DWORD *)(v9 + 1436) & 3;
    v10 = *(_DWORD *)(v9 + 1436) & 3;
    if ( v8 <= v10 )
      v8 = v10;
    if ( v4 == 1 )
    {
      v9 = v5;
      v5 = 0LL;
    }
    else if ( v7 == (_QWORD *)(v6 + 24) )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = v7[2];
      v7 = (_QWORD *)*v7;
    }
  }
  while ( v9 );
  if ( v8 == 3 )
LABEL_55:
    v8 = 1;
  v11 = *((_DWORD *)a1 + 234);
  if ( ((v11 & 0x40) != 0 || (v11 & 0xEu) >= 8 && (v11 & 0x30u) >= 0x20) && v8 <= 1 )
    v8 = 1;
  if ( v4 )
    v12 = 0;
  else
    v12 = *((_DWORD *)a1 + 146);
  *((_DWORD *)a1 + 172) = v8;
  if ( !v4 && v12 == 2 )
  {
    v13 = v8 <= 0;
    v14 = *((_QWORD *)RmSvcGlobals + 10);
    v25 = v13;
    memset_0(v40, 0, 0x30uLL);
    v15 = *(__int64 (__fastcall **)(char *, _QWORD, char *, __int64, __int64, _DWORD *))(v14 + 80);
    v40[0] |= 0x10u;
    v16 = *((_DWORD *)a1 + 145);
    v40[8] = v13;
    v29 = v15((char *)a1 + 512, v16, (char *)a1 + 48, 6LL, -1LL, v40);
    if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
    {
      v46 = 4LL;
      v45 = &v29;
      v36 = *((_QWORD *)a1 + 3);
      v47 = &v36;
      v28 = v25;
      v49 = &v28;
      v48 = 8LL;
      v50 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180064E6F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_180071068;
      v42 = &unk_180064E7A;
      UserData.Reserved = 2;
      v43 = 67;
      v44 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  LODWORD(v17) = *((_DWORD *)a1 + 234);
  v18 = (v17 & 0x40) != 0 || *((int *)a1 + 172) >= 2;
  v19 = ((a2 >> 7) & 1) != 0 || (*((_DWORD *)RmSvcGlobals + 395) & 0x20) != 0;
  if ( ((v17 & 0x80u) != 0LL || (*((_DWORD *)RmSvcGlobals + 395) & 0x20) != 0)
    && (!v19 || v18 != ((*((_BYTE *)a1 + 700) & 8) != 0)) )
  {
    LODWORD(v17) = RmpActivityHostActOnProcesses(a1, (void *)v18);
    *((_BYTE *)a1 + 700) ^= (*((_BYTE *)a1 + 700) ^ (8 * v18)) & 8;
  }
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 9) != 0 )
  {
    v17 = qword_180071078 & 9;
    if ( v17 == qword_180071078 )
    {
      v20 = *((unsigned __int16 *)a1 + 468);
      v39 = *((_QWORD *)a1 + 3);
      v55 = &v39;
      v56 = 8LL;
      v35 = a2 & 1;
      v58 = 4LL;
      v57 = &v35;
      v60 = 4LL;
      v30 = (v20 & 1) != 0;
      v59 = &v30;
      v62 = 2LL;
      v24 = (a2 >> 1) & 7;
      v61 = &v24;
      v64 = 2LL;
      v22 = ((unsigned __int16)v20 >> 1) & 7;
      v63 = &v22;
      v66 = 2LL;
      v23 = (a2 >> 4) & 3;
      v65 = &v23;
      v68 = 2LL;
      LOWORD(v25) = ((unsigned __int16)v20 >> 4) & 3;
      v67 = &v25;
      v70 = 4LL;
      v34 = ((unsigned __int8)a2 >> 6) & 1;
      v69 = &v34;
      v72 = 4LL;
      v32 = ((unsigned __int8)v20 >> 6) & 1;
      v74 = 4LL;
      v71 = &v32;
      v76 = 4LL;
      v26 = ((a2 >> 7) & 1) != 0;
      v73 = &v26;
      v31 = (unsigned __int8)v20 >> 7;
      v75 = &v31;
      v78 = 4LL;
      v33 = HIBYTE(a2) & 1;
      v77 = &v33;
      v80 = 4LL;
      v27 = (v20 >> 8) & 1;
      v79 = &v27;
      *(_DWORD *)&v38.Level = 4;
      v51.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&v38.Id = ((unsigned int)&unk_180062DC3 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v38.Keyword = 9LL;
      v51.Size = *(unsigned __int16 *)off_180071068;
      v52 = &unk_180062DCE;
      v51.Reserved = 2;
      v53 = 284;
      v54 = 1;
      LODWORD(v17) = EventWriteTransfer(RegHandle, &v38, 0LL, 0LL, 0xFu, &v51);
    }
  }
  return v17;
}
