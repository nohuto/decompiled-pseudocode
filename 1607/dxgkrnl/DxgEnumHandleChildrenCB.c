/*
 * XREFs of DxgEnumHandleChildrenCB @ 0x1C015F820
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     DpiGetDriverVersion @ 0x1C00FCB60 (DpiGetDriverVersion.c)
 */

__int64 __fastcall DxgEnumHandleChildrenCB(unsigned int *a1)
{
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 ProcessDxgProcess; // rbx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  __int64 v8; // r8
  int v9; // edx
  struct DXGRESOURCE *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _EX_RUNDOWN_REF *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  unsigned int v21; // edx
  ULONG_PTR Count; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // r9
  int v26; // r8d
  struct DXGRESOURCE *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _EX_RUNDOWN_REF *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rax
  unsigned int v38; // edx
  int v39; // ecx
  ULONG_PTR v40; // rax
  _BYTE v42[32]; // [rsp+20h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v43; // [rsp+68h] [rbp+28h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v3);
  v5 = 0;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
  {
    v6 = *a1;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
    v7 = (v6 >> 6) & 0xFFFFFF;
    if ( v7 < *(_DWORD *)(ProcessDxgProcess + 224)
      && (v8 = *(_QWORD *)(ProcessDxgProcess + 208),
          v9 = *(_DWORD *)(v8 + 16LL * v7 + 8),
          ((v6 >> 26) & 0x30) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x30))
      && (v9 & 0x1000) == 0
      && (v9 & 0xF) != 0
      && (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0xF) == 4 )
    {
      v10 = *(struct DXGRESOURCE **)(v8 + 16LL * v7);
    }
    else
    {
      v10 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v43, v10);
    ExReleasePushLockSharedEx(ProcessDxgProcess + 184, 0LL);
    KeLeaveCriticalRegion();
    v15 = v43;
    if ( v43 )
    {
      if ( KeGetCurrentIrql() >= 2u
        && (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43[1].Count + 16) + 16LL) + 192LL)) >= 0x2003 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v19);
        v20[3] = 275LL;
        v20[4] = 20LL;
        v20[5] = *(_QWORD *)(*(_QWORD *)(v43[1].Count + 16) + 16LL);
        v20[6] = 0LL;
        v20[7] = 0LL;
        WdLogEvent5_WdCriticalError(v20);
        v15 = v43;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v42, (struct DXGFASTMUTEX *const)&v15[10]);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
      v21 = a1[1];
      Count = v43[3].Count;
      v23 = 0;
      if ( v21 )
      {
        while ( Count )
        {
          Count = *(_QWORD *)(Count + 64);
          if ( ++v23 >= v21 )
            goto LABEL_17;
        }
      }
      else
      {
LABEL_17:
        if ( Count )
          v5 = *(_DWORD *)(Count + 16);
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v16 + 24) = *a1;
      WdLogEvent5_WdWarning(v16);
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v43);
  }
  else
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)v42,
      (struct _KTHREAD **)ProcessDxgProcess);
    v24 = (*a1 >> 6) & 0xFFFFFF;
    if ( v24 < *(_DWORD *)(ProcessDxgProcess + 224)
      && (v25 = *(_QWORD *)(ProcessDxgProcess + 208),
          v26 = *(_DWORD *)(v25 + 16LL * v24 + 8),
          ((*a1 >> 26) & 0x30) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x30))
      && (v26 & 0x1000) == 0
      && (v26 & 0xF) != 0
      && (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0xF) == 4 )
    {
      v27 = *(struct DXGRESOURCE **)(v25 + 16LL * v24);
    }
    else
    {
      v27 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v43, v27);
    v32 = v43;
    if ( v43 )
    {
      if ( KeGetCurrentIrql() >= 2u
        && (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43[1].Count + 16) + 16LL) + 192LL)) >= 0x2003 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34, v36);
        v37[3] = 275LL;
        v37[4] = 20LL;
        v37[5] = *(_QWORD *)(*(_QWORD *)(v43[1].Count + 16) + 16LL);
        v37[6] = 0LL;
        v37[7] = 0LL;
        WdLogEvent5_WdCriticalError(v37);
        v32 = v43;
      }
      v38 = a1[1];
      v39 = 0;
      v40 = v32[3].Count;
      if ( v38 )
      {
        while ( v40 )
        {
          v40 = *(_QWORD *)(v40 + 64);
          if ( ++v39 >= v38 )
            goto LABEL_36;
        }
      }
      else
      {
LABEL_36:
        if ( v40 )
          v5 = *(_DWORD *)(v40 + 16);
      }
    }
    else
    {
      v33 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
      *(_QWORD *)(v33 + 24) = *a1;
      WdLogEvent5_WdWarning(v33);
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v43);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
  }
  return v5;
}
