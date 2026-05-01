/*
 * XREFs of ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x18000DE80
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@ResourceSetImpl@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180013980 (-UpdateImportanceAndResourceLimits@ResourceSetImpl@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTA.c)
 * Callees:
 *     RmpActivityHostComputeAndApplyExecutionSpeed @ 0x180004D90 (RmpActivityHostComputeAndApplyExecutionSpeed.c)
 *     RmpResourceLimitsAreLegal @ 0x1800051F4 (RmpResourceLimitsAreLegal.c)
 *     RmpActivityHostCheckForegroundBoostState @ 0x180005280 (RmpActivityHostCheckForegroundBoostState.c)
 *     RmpExecutionSpeedIsValidForHostType @ 0x180005594 (RmpExecutionSpeedIsValidForHostType.c)
 *     ?RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@PEAX@Z @ 0x1800091D0 (-RmpActivityHostComputeImportanceCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionMo.c)
 *     RmpActivityHostOnImportanceChange @ 0x180009400 (RmpActivityHostOnImportanceChange.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18001D78C (RmpActivityHostEnumerateResourceSetBegin.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpActivityHostComputeAndApplyAffinity @ 0x180040BF4 (RmpActivityHostComputeAndApplyAffinity.c)
 *     RmpActivityHostOnGpuMonitoredResourceSetCountChange @ 0x180041108 (RmpActivityHostOnGpuMonitoredResourceSetCountChange.c)
 */

int __fastcall ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(
        ExecutionModel::ResourceSet *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  int v6; // ebx
  char v7; // r14
  const struct _TlgProvider_t *v8; // rcx
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rdi
  int v12; // ebx
  struct ExecutionModel::ResourceSet *i; // rax
  __int64 v14; // rcx
  int v15; // eax
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // edi
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  int v23; // ecx
  int v24; // eax
  __int64 v25; // r8
  bool v26; // [rsp+30h] [rbp-D0h] BYREF
  bool v27; // [rsp+31h] [rbp-CFh] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v35; // [rsp+58h] [rbp-A8h] BYREF
  char *v36; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-70h] BYREF
  char *v41; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v43[4]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+F0h] [rbp-10h] BYREF
  void *v49; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]
  int *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  bool *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  bool *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+140h] [rbp+40h] BYREF
  void *v59; // [rsp+150h] [rbp+50h]
  int v60; // [rsp+158h] [rbp+58h]
  int v61; // [rsp+15Ch] [rbp+5Ch]
  char **v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  int *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  int *v66; // [rsp+180h] [rbp+80h]
  __int64 v67; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  char **v69; // [rsp+1B0h] [rbp+B0h]
  __int64 v70; // [rsp+1B8h] [rbp+B8h]
  int *v71; // [rsp+1C0h] [rbp+C0h]
  __int64 v72; // [rsp+1C8h] [rbp+C8h]
  int *v73; // [rsp+1D0h] [rbp+D0h]
  __int64 v74; // [rsp+1D8h] [rbp+D8h]
  __int64 *v75; // [rsp+1E0h] [rbp+E0h]
  __int64 v76; // [rsp+1E8h] [rbp+E8h]
  __int64 *v77; // [rsp+1F0h] [rbp+F0h]
  __int64 v78; // [rsp+1F8h] [rbp+F8h]
  __int64 *v79; // [rsp+200h] [rbp+100h]
  __int64 v80; // [rsp+208h] [rbp+108h]

  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800646C1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_180071068;
    v45 = &unk_1800646CC;
    UserData.Reserved = 2;
    v46 = 49;
    v47 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v6 = *((_DWORD *)RmSvcGlobals + 395);
  v7 = (v6 & 0x20) != 0;
  if ( !a3 || (v39 = 336LL, RmpResourceLimitsAreLegal((__int64)a3, &v39, 0LL)) )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    if ( a3
      && (*(_BYTE *)a3 & 0x10) != 0
      && (LOBYTE(v17) = RmpExecutionSpeedIsValidForHostType(
                          *((_DWORD *)a3 + 12) & 3,
                          *((_DWORD *)this - 308) == 0,
                          *((_DWORD *)this - 308)),
          !v17) )
    {
      v28 = -1073741584;
    }
    else if ( a2
           && (LOBYTE(v8) = _bittest16((const signed __int16 *)a2, 9u), ((unsigned __int8)v8 & ((v6 & 0x40) == 0)) != 0) )
    {
      v28 = -1073741585;
    }
    else
    {
      if ( !a3 )
        goto LABEL_61;
      v18 = *((_DWORD *)this + 17);
      v19 = *((_DWORD *)a3 + 12);
      if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v8, 1uLL) )
      {
        v70 = 8LL;
        v36 = (char *)this - 1368;
        v69 = &v36;
        v71 = (int *)&v32;
        v73 = (int *)&v30;
        v34 = *((_QWORD *)this + 10);
        v75 = &v34;
        v38 = *((_QWORD *)a3 + 5);
        v77 = &v38;
        v42 = *(_QWORD *)a3;
        v79 = &v42;
        v32 = v18;
        v72 = 4LL;
        v30 = v19;
        v74 = 4LL;
        v76 = 8LL;
        v78 = 8LL;
        v80 = 8LL;
        TlgWrite(v20, &unk_1800641FC, v21, v22, 8u, &pData);
      }
      if ( (*(_BYTE *)a3 & 0x10) != 0 )
      {
        v23 = v19 & 3;
        if ( (v18 & 3) != v23 )
        {
          *((_DWORD *)this + 17) &= 0xFFFFFFFC;
          *((_DWORD *)this + 17) |= v23;
          if ( *((_BYTE *)this - 1356) )
          {
            RmpActivityHostComputeAndApplyExecutionSpeed(*((struct _RM_ACTIVITY_HOST **)this + 4));
            if ( !a2 || *(_DWORD *)a2 == *((_DWORD *)this + 15) )
              RmpActivityHostCheckForegroundBoostState(
                *((struct _RM_ACTIVITY_HOST **)this + 4),
                *((_DWORD *)this + 15),
                *((_DWORD *)this + 15),
                v7);
          }
        }
      }
      if ( (*(_BYTE *)a3 & 0x40) != 0 )
      {
        v24 = (v19 >> 3) & 1;
        if ( ((v18 >> 3) & 1) != v24 )
        {
          *((_DWORD *)this + 17) &= ~8u;
          *((_DWORD *)this + 17) |= v19 & 8;
          if ( *((_BYTE *)this - 1356) )
          {
            v25 = 0xFFFFFFFFLL;
            if ( v24 )
              v25 = 1LL;
            RmpActivityHostOnGpuMonitoredResourceSetCountChange(*((_QWORD *)this + 4), (char *)RmSvcGlobals + 112, v25);
          }
        }
      }
      if ( (*(_DWORD *)a3 & 0x100LL) == 0
        || (*((_QWORD *)this + 10) = *((_QWORD *)a3 + 5), !*((_BYTE *)this - 1356))
        || (v28 = RmpActivityHostComputeAndApplyAffinity(*((_QWORD *)this + 4)), v28 >= 0) )
      {
LABEL_61:
        if ( a2 )
        {
          v9 = *(_DWORD *)a2;
          v10 = *((_DWORD *)this + 15);
          if ( *(_DWORD *)a2 != v10 )
          {
            if ( (unsigned int)dword_180071060 > 4
              && (qword_180071070 & 1) != 0
              && (qword_180071078 & 1) == qword_180071078 )
            {
              v63 = 8LL;
              v41 = (char *)this - 1368;
              v62 = &v41;
              v64 = &v31;
              v66 = &v33;
              v31 = v10;
              v65 = 4LL;
              v33 = v9;
              v67 = 4LL;
              *(_DWORD *)&v35.Level = 4;
              v58.Ptr = (ULONGLONG)off_180071068;
              *(_DWORD *)&v35.Id = ((unsigned int)&unk_180064081 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
              v35.Keyword = 1LL;
              v58.Size = *(unsigned __int16 *)off_180071068;
              v59 = &unk_18006408C;
              v58.Reserved = 2;
              v60 = 77;
              v61 = 1;
              EventWriteTransfer(RegHandle, &v35, 0LL, 0LL, 5u, &v58);
            }
            *((_DWORD *)this + 15) = *(_DWORD *)a2;
            if ( *((_BYTE *)this - 1356) )
            {
              v11 = *((_QWORD *)this + 4);
              v29 = 1;
              v12 = *(_DWORD *)(v11 + 936);
              RmpActivityHostEnumerateResourceSetBegin(v11, 1LL, v43);
              for ( i = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetNext(v43);
                    i;
                    i = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetNext(v43) )
              {
                RmpActivityHostComputeImportanceCallback((struct _RM_ACTIVITY_HOST *)v11, i, &v29);
              }
              *(_DWORD *)(*((_QWORD *)this + 4) + 936LL) = v29;
              RmpActivityHostOnImportanceChange(*((struct _RM_ACTIVITY_HOST **)this + 4), v12);
            }
            v14 = *((_QWORD *)this - 168);
            v15 = *(_DWORD *)(v14 + 280);
            if ( (v15 & 1) == 0 )
            {
              *(_DWORD *)(v14 + 280) = v15 | 1;
              SubmitThreadpoolWork(*(PTP_WORK *)(v14 + 264));
            }
          }
        }
        v28 = 0;
      }
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    v28 = -1073741584;
  }
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 9) != 0 && (qword_180071078 & 9) == qword_180071078 )
  {
    v53 = 4LL;
    v52 = &v28;
    v27 = a2 != 0LL;
    v55 = 1LL;
    v54 = &v27;
    v26 = a3 != 0LL;
    v57 = 1LL;
    v56 = &v26;
    *(_DWORD *)&v37.Level = 516;
    v48.Ptr = (ULONGLONG)off_180071068;
    *(_DWORD *)&v37.Id = ((unsigned int)&unk_1800646FE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v37.Keyword = 9LL;
    v48.Size = *(unsigned __int16 *)off_180071068;
    v49 = &unk_180064709;
    v48.Reserved = 2;
    v50 = 96;
    v51 = 1;
    EventWriteTransfer(RegHandle, &v37, 0LL, 0LL, 5u, &v48);
  }
  return v28 | 0x10000000;
}
