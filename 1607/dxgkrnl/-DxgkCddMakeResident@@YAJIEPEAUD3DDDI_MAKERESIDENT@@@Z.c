/*
 * XREFs of ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C008DAA0
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
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00A5B80 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C0155470 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddMakeResident(unsigned int a1, char a2, struct D3DDDI_MAKERESIDENT *a3)
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
  struct DXGDEVICE *v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // r9
  int v16; // eax
  _QWORD *v17; // rax
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v19; // rcx
  const D3DKMT_HANDLE *v20; // rsi
  __int64 v21; // rax
  D3DKMT_HANDLE v22; // edi
  unsigned int v23; // ecx
  struct _KTHREAD *v24; // r8
  int v25; // edx
  struct DXGALLOCATION *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 i; // rdx
  __int64 v37; // rax
  __int64 v38; // [rsp+30h] [rbp-89h] BYREF
  char v39[8]; // [rsp+38h] [rbp-81h] BYREF
  struct DXGDEVICE *v40[2]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v41[16]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v42[96]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v43[3]; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v44; // [rsp+D8h] [rbp+1Fh]

  v43[0] = 0LL;
  v44 = 0;
  v4 = a1;
  if ( !a2 )
    goto LABEL_28;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v39, v4, ProcessDxgProcess, v40);
    v13 = v40[0];
    if ( !v40[0] )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      LODWORD(v10) = -1073741811;
      v14[3] = -1073741811LL;
      v14[4] = v4;
      v14[5] = v9;
      WdLogEvent5_WdError(v14);
LABEL_33:
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v39);
      goto LABEL_29;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41, v40[0]);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v13, 0, v15, 0);
    v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
    v10 = v16;
    if ( v16 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v17[3] = v10;
      v17[4] = v13;
      v17[5] = v9;
      WdLogEvent5_WdEvent(v17);
LABEL_32:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
      goto LABEL_33;
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v13 + 2)
                                                                                              + 16LL));
    PagedPoolArray<unsigned int,4>::AllocateElements(v43, NumDifferentPhysicalAdapters);
    v20 = (const D3DKMT_HANDLE *)v43[0];
    if ( !v43[0] )
    {
      v21 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v21 + 24) = 3312LL;
      WdLogEvent5_WdError(v21);
      LODWORD(v10) = -1073741801;
      goto LABEL_32;
    }
    v22 = *a3->AllocationList;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 23));
    v23 = (v22 >> 6) & 0xFFFFFF;
    if ( v23 < *((_DWORD *)v9 + 56)
      && (v24 = v9[26],
          v25 = *((_DWORD *)v24 + 4 * v23 + 2),
          ((v22 >> 26) & 0x30) == (*((_BYTE *)v24 + 16 * v23 + 8) & 0x30))
      && (v25 & 0x1000) == 0
      && (v25 & 0xF) != 0
      && (*((_BYTE *)v24 + 16 * v23 + 8) & 0xF) == 5 )
    {
      v26 = (struct DXGALLOCATION *)*((_QWORD *)v24 + 2 * v23);
    }
    else
    {
      v26 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38, v26);
    ExReleasePushLockSharedEx(v9 + 23, 0LL);
    KeLeaveCriticalRegion();
    if ( !v38 )
    {
      v31 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v31 + 24) = *a3->AllocationList;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
LABEL_31:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38);
      goto LABEL_32;
    }
    v32 = *(_QWORD *)(v38 + 40);
    v33 = 0LL;
    if ( v32 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, (struct DXGFASTMUTEX *const)(v32 + 80));
      if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
      for ( i = *(_QWORD *)(v32 + 24); ; i = *(_QWORD *)(i + 64) )
      {
        if ( !i )
        {
          a3->AllocationList = v20;
          a3->NumAllocations = v33;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
          goto LABEL_27;
        }
        if ( (unsigned int)v33 >= v44 )
          break;
        v20[v33] = *(_DWORD *)(i + 16);
        v33 = (unsigned int)(v33 + 1);
      }
      v37 = WdLogNewEntry5_WdError(v34);
      *(_QWORD *)(v37 + 24) = 3344LL;
      WdLogEvent5_WdError(v37);
      LODWORD(v10) = -1073741811;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
      goto LABEL_31;
    }
LABEL_27:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::~DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v39);
LABEL_28:
    LODWORD(v10) = DxgkMakeResidentInternal(a3, 0);
    goto LABEL_29;
  }
  LODWORD(v10) = -1073741811;
  v11 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v11 + 24) = -1073741811LL;
  *(_QWORD *)(v11 + 32) = PsGetCurrentProcess();
  WdLogEvent5_WdError(v11);
LABEL_29:
  PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v43);
  return (unsigned int)v10;
}
