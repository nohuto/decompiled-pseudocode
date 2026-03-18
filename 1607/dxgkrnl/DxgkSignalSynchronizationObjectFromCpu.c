/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C0177610
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006EC8 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EF4 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00099F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A2C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A80 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C000BD24 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ @ 0x1C000BD6C (--1-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00C6C40 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00C6C88 (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C017688C (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1)
{
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _KTHREAD **ProcessDxgProcess; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // edi
  ULONG64 v10; // rax
  unsigned int v11; // ebx
  void *v12; // rcx
  __int64 v13; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  void *v15; // rcx
  __int64 v16; // r8
  const UINT64 *FenceValueArray; // rdx
  __int64 hDevice; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  UINT *v27; // rdx
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // ebx
  __int64 v29; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v31; // ebx
  struct DXGDEVICE *v32; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v33[8]; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v34[16]; // [rsp+40h] [rbp-138h] BYREF
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+50h] [rbp-128h] BYREF
  struct _KTHREAD **v36; // [rsp+70h] [rbp-108h]
  _BYTE v37[16]; // [rsp+78h] [rbp-100h] BYREF
  void *v38; // [rsp+88h] [rbp-F0h]
  void *v39; // [rsp+90h] [rbp-E8h]
  void *v40; // [rsp+98h] [rbp-E0h]
  void *v41; // [rsp+A0h] [rbp-D8h]
  void *v42; // [rsp+A8h] [rbp-D0h]
  _BYTE v43[96]; // [rsp+B0h] [rbp-C8h] BYREF
  void *v44[3]; // [rsp+110h] [rbp-68h] BYREF
  unsigned int v45; // [rsp+128h] [rbp-50h]
  void *v46[5]; // [rsp+130h] [rbp-48h] BYREF
  unsigned int v47; // [rsp+158h] [rbp-20h]

  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v3);
  v36 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = PsGetCurrentProcess(v7);
    v8 = -1073741811;
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return (unsigned int)v8;
  }
  v44[0] = 0LL;
  v45 = 0;
  v46[0] = 0LL;
  v47 = 0;
  v10 = a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  *(_OWORD *)&Src.hDevice = *(_OWORD *)v10;
  Src.FenceValueArray = *(const UINT64 **)(v10 + 16);
  Src.Flags.Value = 0;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Src.hDevice, 4));
  if ( !v11 )
  {
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v46);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v44);
    return -1073741811LL;
  }
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements(v44, v11);
  v12 = v44[0];
  v38 = v44[0];
  if ( !v44[0] )
    goto LABEL_9;
  v39 = v44[0];
  v13 = v45;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v13] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v13] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v12, ObjectHandleArray, v13 * 4);
  v40 = v44[0];
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v44[0];
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(v46, v11);
  v15 = v46[0];
  v41 = v46[0];
  if ( !v46[0] )
  {
LABEL_9:
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v46);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v44);
    return 3221225495LL;
  }
  v42 = v46[0];
  v16 = v47;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v16] < Src.FenceValueArray || &Src.FenceValueArray[v16] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, FenceValueArray, v16 * 8);
  Src.FenceValueArray = (const UINT64 *)v46[0];
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v33, Src.hDevice, ProcessDxgProcess, &v32);
  if ( !v32 )
  {
    v20 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v20 + 24) = hDevice;
    v8 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
LABEL_23:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v33);
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v46);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v44);
    return (unsigned int)v8;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v34, v32);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v32, 0, v21, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v43);
  if ( v8 < 0 )
  {
LABEL_22:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v34);
    goto LABEL_23;
  }
  v24 = *((_QWORD *)v32 + 2);
  v25 = *(_QWORD *)(v24 + 16);
  if ( !v25 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v26 + 24) = hDevice;
    v8 = -1073741811;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v25 + 1352) >= 0x5020u )
  {
    v27 = (UINT *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v27 = (UINT *)MmUserProbeAddress;
    Src.Flags.Value = *v27;
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)Src.Flags.Value;
    if ( (Src.Flags.Value & 0x7FFFFFF8) != 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(v24, v27, v22, v23);
      *(_QWORD *)(v29 + 24) = (*(unsigned int *)&Value >> 3) & 0xFFFFFFF;
LABEL_29:
      WdLogEvent5_WdWarning(v29);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v34);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v33);
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v46);
      PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v44);
      return -1073741811LL;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(v24, v27, v22, v23);
      *(_QWORD *)(v29 + 24) = 4339LL;
      goto LABEL_29;
    }
  }
  Global = DXGGLOBAL::GetGlobal(v24);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v37, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v37);
  v31 = SignalSynchronizationObjectFromCpu(&Src, (struct DXGPROCESS *)ProcessDxgProcess, v32);
  if ( v37[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v37);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v34);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v33);
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::~NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>(v46);
  PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(v44);
  return v31;
}
