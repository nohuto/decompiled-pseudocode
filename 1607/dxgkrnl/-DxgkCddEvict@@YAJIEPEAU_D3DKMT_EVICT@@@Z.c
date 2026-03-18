/*
 * XREFs of ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C00CFE10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0008728 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ @ 0x1C001C8E8 (--1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C008DDC4 (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00D014C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C0155470 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddEvict(__int64 a1, char a2, struct _D3DKMT_EVICT *a3)
{
  __int64 v4; // r15
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v21; // rcx
  const D3DKMT_HANDLE *v22; // rsi
  __int64 v23; // rax
  D3DKMT_HANDLE v24; // edi
  unsigned int v25; // ecx
  struct _KTHREAD *v26; // r8
  int v27; // edx
  struct _EX_RUNDOWN_REF *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  ULONG_PTR Count; // rdi
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 i; // rdx
  __int64 v39; // rax
  struct _EX_RUNDOWN_REF *v40; // [rsp+30h] [rbp-89h] BYREF
  char v41[8]; // [rsp+38h] [rbp-81h] BYREF
  struct DXGDEVICE *v42[2]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v43[16]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v44[96]; // [rsp+60h] [rbp-59h] BYREF
  void *v45[3]; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v46; // [rsp+D8h] [rbp+1Fh]

  v45[0] = 0LL;
  v46 = 0;
  v4 = (unsigned int)a1;
  if ( !a2 )
    goto LABEL_28;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v41, v4, ProcessDxgProcess, v42);
    v14 = v42[0];
    if ( !v42[0] )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      LODWORD(v10) = -1073741811;
      v15[3] = -1073741811LL;
      v15[4] = v4;
      v15[5] = v9;
      WdLogEvent5_WdError(v15);
LABEL_33:
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v41);
      goto LABEL_29;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43, v42[0]);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v14, 0, v16, 0);
    v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
    v10 = v17;
    if ( v17 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v18);
      v19[3] = v10;
      v19[4] = v14;
      v19[5] = v9;
      WdLogEvent5_WdEvent(v19);
LABEL_32:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
      goto LABEL_33;
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v14 + 2)
                                                                                              + 16LL));
    PagedPoolArray<unsigned int,4>::AllocateElements(v45, NumDifferentPhysicalAdapters);
    v22 = (const D3DKMT_HANDLE *)v45[0];
    if ( !v45[0] )
    {
      v23 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v23 + 24) = 3419LL;
      WdLogEvent5_WdError(v23);
      LODWORD(v10) = -1073741801;
      goto LABEL_32;
    }
    v24 = *a3->AllocationList;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 23));
    v25 = (v24 >> 6) & 0xFFFFFF;
    if ( v25 < *((_DWORD *)v9 + 56)
      && (v26 = v9[26],
          v27 = *((_DWORD *)v26 + 4 * v25 + 2),
          ((v24 >> 26) & 0x30) == (*((_BYTE *)v26 + 16 * v25 + 8) & 0x30))
      && (v27 & 0x1000) == 0
      && (v27 & 0xF) != 0
      && (*((_BYTE *)v26 + 16 * v25 + 8) & 0xF) == 5 )
    {
      v28 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v26 + 2 * v25);
    }
    else
    {
      v28 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v40, v28);
    ExReleasePushLockSharedEx(v9 + 23, 0LL);
    KeLeaveCriticalRegion();
    if ( !v40 )
    {
      v33 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v33 + 24) = *a3->AllocationList;
      *(_QWORD *)(v33 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v33);
LABEL_31:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40);
      goto LABEL_32;
    }
    Count = v40[5].Count;
    v35 = 0LL;
    if ( Count )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v42, (struct DXGFASTMUTEX *const)(Count + 80));
      if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
      for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
      {
        if ( !i )
        {
          a3->AllocationList = v22;
          a3->NumAllocations = v35;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
          goto LABEL_27;
        }
        if ( (unsigned int)v35 >= v46 )
          break;
        v22[v35] = *(_DWORD *)(i + 16);
        v35 = (unsigned int)(v35 + 1);
      }
      v39 = WdLogNewEntry5_WdError(v36);
      *(_QWORD *)(v39 + 24) = 3451LL;
      WdLogEvent5_WdError(v39);
      LODWORD(v10) = -1073741811;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
      goto LABEL_31;
    }
LABEL_27:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v41);
LABEL_28:
    LODWORD(v10) = DxgkEvictInternal(a3, 0);
    goto LABEL_29;
  }
  LODWORD(v10) = -1073741811;
  v11 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v11 + 24) = -1073741811LL;
  *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v12);
  WdLogEvent5_WdError(v11);
LABEL_29:
  PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v45);
  return (unsigned int)v10;
}
