/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C014EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C00098F4 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C00176B0 (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00A7F90 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00A7FD8 (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C014D470 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  ULONG64 v7; // rax
  unsigned int v8; // ebx
  PVOID v9; // rcx
  __int64 v10; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  void *v12; // rcx
  __int64 v13; // r8
  const UINT64 *FenceValueArray; // rdx
  __int64 hDevice; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  UINT *v19; // rdx
  int v20; // esi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // ebx
  __int64 v27; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v29; // r9
  unsigned int v30; // ebx
  _BYTE v31[8]; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v32[2]; // [rsp+38h] [rbp-140h] BYREF
  struct DXGDEVICE *v33; // [rsp+48h] [rbp-130h] BYREF
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+50h] [rbp-128h] BYREF
  struct _KTHREAD **v35; // [rsp+70h] [rbp-108h]
  _BYTE v36[16]; // [rsp+78h] [rbp-100h] BYREF
  void *v37; // [rsp+88h] [rbp-F0h]
  PVOID v38; // [rsp+90h] [rbp-E8h]
  PVOID v39; // [rsp+98h] [rbp-E0h]
  PVOID v40; // [rsp+A0h] [rbp-D8h]
  void *v41; // [rsp+A8h] [rbp-D0h]
  _BYTE v42[80]; // [rsp+B0h] [rbp-C8h] BYREF
  PVOID P; // [rsp+100h] [rbp-78h] BYREF
  _BYTE v44[16]; // [rsp+108h] [rbp-70h] BYREF
  unsigned int v45; // [rsp+118h] [rbp-60h]
  void *v46[5]; // [rsp+120h] [rbp-58h] BYREF
  unsigned int v47; // [rsp+148h] [rbp-30h]

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v35 = Current;
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = PsGetCurrentProcess(v5);
    *(_QWORD *)(v4 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  P = 0LL;
  v45 = 0;
  v46[0] = 0LL;
  v47 = 0;
  v7 = a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  *(_OWORD *)&Src.hDevice = *(_OWORD *)v7;
  Src.FenceValueArray = *(const UINT64 **)(v7 + 16);
  Src.Flags.Value = 0;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Src.hDevice, 4));
  if ( !v8 )
  {
    NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(v46);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
    return 3221225485LL;
  }
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, v8);
  v9 = P;
  v40 = P;
  if ( !P )
    goto LABEL_9;
  v39 = P;
  v10 = v45;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v10] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v10] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v9, ObjectHandleArray, v10 * 4);
  v38 = P;
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)P;
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(v46, v8);
  v12 = v46[0];
  v37 = v46[0];
  if ( !v46[0] )
  {
LABEL_9:
    NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(v46);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
    return 3221225495LL;
  }
  v41 = v46[0];
  v13 = v47;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v13] < Src.FenceValueArray || &Src.FenceValueArray[v13] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v12, FenceValueArray, v13 * 8);
  Src.FenceValueArray = (const UINT64 *)v46[0];
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v31, Src.hDevice, Current, &v33);
  if ( !v33 )
  {
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = hDevice;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_19:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v31);
    NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(v46);
    if ( P != v44 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32, v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v33, 0, v18, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
  if ( v20 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    if ( v32[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v31);
    NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(v46);
    if ( P != v44 && P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v20;
  }
  v23 = *((_QWORD *)v33 + 2);
  v24 = *(_QWORD *)(v23 + 16);
  if ( !v24 )
  {
    v25 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v25 + 24) = hDevice;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_31;
  }
  if ( *(_DWORD *)(v24 + 1256) >= 0x5020u )
  {
    v19 = (UINT *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v19 = (UINT *)MmUserProbeAddress;
    Src.Flags.Value = *v19;
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)Src.Flags.Value;
    if ( (Src.Flags.Value & 0x7FFFFFF8) != 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v23, v19, v21, v22);
      *(_QWORD *)(v27 + 24) = (*(unsigned int *)&Value >> 3) & 0xFFFFFFF;
LABEL_38:
      WdLogEvent5_WdWarning(v27);
LABEL_31:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
      if ( v32[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
      goto LABEL_19;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v23, v19, v21, v22);
      *(_QWORD *)(v27 + 24) = 4231LL;
      goto LABEL_38;
    }
  }
  Global = DXGGLOBAL::GetGlobal(v23, (__int64)v19, v21, v22);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v36, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v36);
  v30 = SignalSynchronizationObjectFromCpu(&Src, (struct DXGPROCESS *)Current, v33, v29);
  if ( v36[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v36);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
  if ( v32[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v31);
  NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>(v46);
  if ( P != v44 && P )
    ExFreePoolWithTag(P, 0);
  return v30;
}
