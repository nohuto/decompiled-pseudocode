/*
 * XREFs of ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C01315B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0002654 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C011EF54 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C01314C8 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C0144B48 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 */

__int64 __fastcall DxgkCddEvict(__int64 a1, char a2, struct _D3DKMT_EVICT *a3)
{
  __int64 v4; // r15
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
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
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  ULONG_PTR Count; // r8
  __int64 v39; // rdx
  __int64 v41; // rax
  struct DXGDEVICE *v42; // [rsp+30h] [rbp-69h] BYREF
  struct _EX_RUNDOWN_REF *v43; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v44[16]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v45[80]; // [rsp+50h] [rbp-49h] BYREF
  void *v46[3]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned int v47; // [rsp+B8h] [rbp+1Fh]

  v46[0] = 0LL;
  v47 = 0;
  v4 = (unsigned int)a1;
  if ( !a2 )
    goto LABEL_26;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v7 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v44, v4, Current, &v42);
    v12 = v42;
    if ( !v42 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      LODWORD(v8) = -1073741811;
      v13[3] = -1073741811LL;
      v13[4] = v4;
      v13[5] = v7;
      WdLogEvent5_WdError(v13);
LABEL_31:
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v44);
      goto LABEL_27;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v42, v42);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, (__int64)v12, 0, v14, 0);
    v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v45);
    v8 = v15;
    if ( v15 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16, v18, v19);
      v20[3] = v8;
      v20[4] = v12;
      v20[5] = v7;
      WdLogEvent5_WdEvent(v20);
LABEL_30:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
      ExReleaseResourceLite(*((PERESOURCE *)v42 + 10));
      KeLeaveCriticalRegion();
      goto LABEL_31;
    }
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v12 + 2)
                                                                                              + 16LL));
    PagedPoolArray<unsigned int,4>::AllocateElements(v46, NumDifferentPhysicalAdapters);
    v23 = (const D3DKMT_HANDLE *)v46[0];
    if ( !v46[0] )
    {
      v24 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v24 + 24) = 3395LL;
      WdLogEvent5_WdError(v24);
      LODWORD(v8) = -1073741801;
      goto LABEL_30;
    }
    v25 = *a3->AllocationList;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 24));
    v26 = (v25 >> 6) & 0xFFFFFF;
    if ( v26 < *((_DWORD *)v7 + 58)
      && (v27 = v7[27],
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
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v43, v29);
    ExReleasePushLockSharedEx(v7 + 24, 0LL);
    KeLeaveCriticalRegion();
    if ( !v43 )
    {
      v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v34 + 24) = *a3->AllocationList;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v34);
LABEL_29:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v43, v35, v36, v37);
      goto LABEL_30;
    }
    Count = v43[5].Count;
    v39 = 0LL;
    if ( Count )
    {
      for ( Count = *(_QWORD *)(Count + 24); ; Count = *(_QWORD *)(Count + 64) )
      {
        if ( !Count )
        {
          a3->AllocationList = v23;
          a3->NumAllocations = v39;
          goto LABEL_25;
        }
        if ( (unsigned int)v39 >= v47 )
          break;
        v23[v39] = *(_DWORD *)(Count + 16);
        v39 = (unsigned int)(v39 + 1);
      }
      v41 = WdLogNewEntry5_WdError(v31);
      *(_QWORD *)(v41 + 24) = 3421LL;
      WdLogEvent5_WdError(v41);
      LODWORD(v8) = -1073741811;
      goto LABEL_29;
    }
LABEL_25:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v43, v39, Count, v33);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
    ExReleaseResourceLite(*((PERESOURCE *)v42 + 10));
    KeLeaveCriticalRegion();
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v44);
LABEL_26:
    LODWORD(v8) = DxgkEvictInternal(a3, 0);
    goto LABEL_27;
  }
  LODWORD(v8) = -1073741811;
  v9 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v9 + 24) = -1073741811LL;
  *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v10);
  WdLogEvent5_WdError(v9);
LABEL_27:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v46);
  return (unsigned int)v8;
}
