/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C0152950
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0001850 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C0001898 (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C000BE7C (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BEA0 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00BA76C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00BA784 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C01517B4 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi
  ULONG64 v8; // rax
  unsigned int v9; // ebx
  void *v10; // rcx
  __int64 v11; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  void *v13; // rcx
  __int64 v14; // r8
  const UINT64 *FenceValueArray; // rdx
  __int64 hDevice; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // esi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  UINT *v26; // rdx
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // ebx
  __int64 v28; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v30; // ebx
  _BYTE v31[8]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v32[8]; // [rsp+38h] [rbp-130h] BYREF
  struct DXGDEVICE *v33; // [rsp+40h] [rbp-128h] BYREF
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+48h] [rbp-120h] BYREF
  struct _KTHREAD **v35; // [rsp+68h] [rbp-100h]
  _BYTE v36[16]; // [rsp+70h] [rbp-F8h] BYREF
  void *v37; // [rsp+80h] [rbp-E8h]
  void *v38; // [rsp+88h] [rbp-E0h]
  void *v39; // [rsp+90h] [rbp-D8h]
  void *v40; // [rsp+98h] [rbp-D0h]
  void *v41; // [rsp+A0h] [rbp-C8h]
  _BYTE v42[80]; // [rsp+B0h] [rbp-B8h] BYREF
  void *v43[3]; // [rsp+100h] [rbp-68h] BYREF
  unsigned int v44; // [rsp+118h] [rbp-50h]
  void *v45[5]; // [rsp+120h] [rbp-48h] BYREF
  unsigned int v46; // [rsp+148h] [rbp-20h]

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v35 = Current;
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = PsGetCurrentProcess(v5);
    v6 = -1073741811;
    *(_QWORD *)(v4 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v4);
    return v6;
  }
  v43[0] = 0LL;
  v44 = 0;
  v45[0] = 0LL;
  v46 = 0;
  v8 = a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  *(_OWORD *)&Src.hDevice = *(_OWORD *)v8;
  Src.FenceValueArray = *(const UINT64 **)(v8 + 16);
  Src.Flags.Value = 0;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Src.hDevice, 4));
  if ( !v9 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v45);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v43);
    return -1073741811LL;
  }
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v43, v9);
  v10 = v43[0];
  v40 = v43[0];
  if ( !v43[0] )
    goto LABEL_9;
  v38 = v43[0];
  v11 = v44;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v11] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v11] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v10, ObjectHandleArray, v11 * 4);
  v37 = v43[0];
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v43[0];
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(v45, v9);
  v13 = v45[0];
  v41 = v45[0];
  if ( !v45[0] )
  {
LABEL_9:
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v45);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v43);
    return 3221225495LL;
  }
  v39 = v45[0];
  v14 = v46;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v14] < Src.FenceValueArray || &Src.FenceValueArray[v14] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v13, FenceValueArray, v14 * 8);
  Src.FenceValueArray = (const UINT64 *)v45[0];
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v32, Src.hDevice, Current, &v33);
  if ( !v33 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = hDevice;
    v6 = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_23:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v32);
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v45);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v43);
    return v6;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v31, v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v33, 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
  if ( v20 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v31);
    v6 = v20;
    goto LABEL_23;
  }
  v23 = *((_QWORD *)v33 + 2);
  v24 = *(_QWORD *)(v23 + 16);
  if ( !v24 )
  {
    v25 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v25 + 24) = hDevice;
    v6 = -1073741811;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v31);
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v24 + 1264) >= 0x5020u )
  {
    v26 = (UINT *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v26 = (UINT *)MmUserProbeAddress;
    Src.Flags.Value = *v26;
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)Src.Flags.Value;
    if ( (Src.Flags.Value & 0x7FFFFFF8) != 0 )
    {
      v28 = WdLogNewEntry5_WdWarning(v23, v26, v21, v22);
      *(_QWORD *)(v28 + 24) = (*(unsigned int *)&Value >> 3) & 0xFFFFFFF;
LABEL_29:
      WdLogEvent5_WdWarning(v28);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v31);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v32);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v45);
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v43);
      return -1073741811LL;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      v28 = WdLogNewEntry5_WdWarning(v23, v26, v21, v22);
      *(_QWORD *)(v28 + 24) = 4173LL;
      goto LABEL_29;
    }
  }
  Global = DXGGLOBAL::GetGlobal(v23);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v36, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v36);
  v30 = SignalSynchronizationObjectFromCpu(&Src, (struct DXGPROCESS *)Current, v33);
  if ( v36[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v36);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v31);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v32);
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v45);
  PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v43);
  return v30;
}
