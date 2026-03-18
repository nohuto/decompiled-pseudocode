/*
 * XREFs of ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C00B4060
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000333C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C00B40D8 (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00B4110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C0136008 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddMakeResident(unsigned int a1, char a2, struct D3DDDI_MAKERESIDENT *a3)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v22; // rcx
  const D3DKMT_HANDLE *v23; // rsi
  __int64 v24; // rax
  D3DKMT_HANDLE v25; // edi
  unsigned int v26; // ecx
  struct _KTHREAD *v27; // r8
  int v28; // edx
  struct _EX_RUNDOWN_REF *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  ULONG_PTR Count; // r8
  __int64 v36; // rdx
  __int64 i; // r8
  __int64 v38; // rax
  struct _EX_RUNDOWN_REF *v39; // [rsp+30h] [rbp-69h] BYREF
  char v40[8]; // [rsp+38h] [rbp-61h] BYREF
  struct DXGDEVICE *v41[2]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v42[80]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v43[3]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned int v44; // [rsp+B8h] [rbp+1Fh]

  v43[0] = 0LL;
  v44 = 0;
  v4 = a1;
  if ( !a2 )
    goto LABEL_2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v9 = Current;
  if ( !Current )
  {
    LODWORD(v5) = -1073741811;
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v10);
    goto LABEL_3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v40, v4, Current, v41);
  v12 = v41[0];
  if ( !v41[0] )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    LODWORD(v5) = -1073741811;
    v13[3] = -1073741811LL;
    v13[4] = v4;
    v13[5] = v9;
    WdLogEvent5_WdError(v13);
LABEL_31:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v40);
    goto LABEL_3;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41, v41[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v12, 0, v14, 0);
  v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
  v5 = v15;
  if ( v15 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16, v18, v19);
    v20[3] = v5;
    v20[4] = v12;
    v20[5] = v9;
    WdLogEvent5_WdEvent(v20);
LABEL_30:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
    goto LABEL_31;
  }
  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
  PagedPoolArray<unsigned int,4>::AllocateElements(v43, NumDifferentPhysicalAdapters);
  v23 = (const D3DKMT_HANDLE *)v43[0];
  if ( !v43[0] )
  {
    v24 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v24 + 24) = 3310LL;
    WdLogEvent5_WdError(v24);
    LODWORD(v5) = -1073741801;
    goto LABEL_30;
  }
  v25 = *a3->AllocationList;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 24));
  v26 = (v25 >> 6) & 0xFFFFFF;
  if ( v26 < *((_DWORD *)v9 + 58)
    && (v27 = v9[27],
        v28 = *((_DWORD *)v27 + 4 * v26 + 2),
        ((v25 >> 26) & 0x30) == (*((_BYTE *)v27 + 16 * v26 + 8) & 0x30))
    && (v28 & 0x1000) == 0
    && (v28 & 0xF) != 0
    && (*((_BYTE *)v27 + 16 * v26 + 8) & 0xF) == 5 )
  {
    v29 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v27 + 2 * v26);
  }
  else
  {
    v29 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39, v29);
  ExReleasePushLockSharedEx(v9 + 24, 0LL);
  KeLeaveCriticalRegion();
  if ( !v39 )
  {
    v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    LODWORD(v5) = -1073741811;
    *(_QWORD *)(v34 + 24) = *a3->AllocationList;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
LABEL_29:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
    goto LABEL_30;
  }
  Count = v39[5].Count;
  v36 = 0LL;
  if ( Count )
  {
    for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
    {
      if ( !i )
      {
        a3->AllocationList = v23;
        a3->NumAllocations = v36;
        goto LABEL_27;
      }
      if ( (unsigned int)v36 >= v44 )
        break;
      v23[v36] = *(_DWORD *)(i + 16);
      v36 = (unsigned int)(v36 + 1);
    }
    v38 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v38 + 24) = 3336LL;
    WdLogEvent5_WdError(v38);
    LODWORD(v5) = -1073741811;
    goto LABEL_29;
  }
LABEL_27:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v40);
LABEL_2:
  LODWORD(v5) = DxgkMakeResidentInternal(a3, 0);
LABEL_3:
  PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v43);
  return (unsigned int)v5;
}
