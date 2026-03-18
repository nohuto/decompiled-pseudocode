/*
 * XREFs of DxgkSetGammaRamp @ 0x1C0161A50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006AE0 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0006B3C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C000838C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C0086AD8 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateGammaRamp@DXGDEVICE@@QEAAXIW4_D3DDDI_GAMMARAMP_TYPE@@IPEAX@Z @ 0x1C015F690 (-UpdateGammaRamp@DXGDEVICE@@QEAAXIW4_D3DDDI_GAMMARAMP_TYPE@@IPEAX@Z.c)
 */

__int64 __fastcall DxgkSetGammaRamp(_OWORD *a1)
{
  _OWORD *v1; // rbx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ebx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGDEVICE *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // esi
  enum _D3DDDI_GAMMARAMP_TYPE v19; // r13d
  unsigned int v20; // r12d
  _QWORD *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  PVOID v34; // r9
  bool v35; // zf
  const void *v36; // rdx
  _QWORD v37[2]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v38[4]; // [rsp+40h] [rbp-C8h]
  size_t Size[2]; // [rsp+50h] [rbp-B8h]
  struct _KTHREAD **v40; // [rsp+60h] [rbp-A8h]
  _BYTE v41[152]; // [rsp+70h] [rbp-98h] BYREF
  char v42; // [rsp+118h] [rbp+10h] BYREF
  DXGDEVICE *v43; // [rsp+120h] [rbp+18h] BYREF
  void *v44; // [rsp+128h] [rbp+20h]

  v1 = a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v3);
  v40 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v6 = WdLogNewEntry5_WdError(v5);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    return (unsigned int)v7;
  }
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v1 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v38 = *v1;
  *(_OWORD *)Size = v1[1];
  v9 = v38[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v38[0], ProcessDxgProcess, &v43);
  v14 = v43;
  if ( !v43 )
  {
    v15 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v15 + 24) = v38[0];
    v7 = -1073741811;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
LABEL_34:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42);
    return (unsigned int)v7;
  }
  v16 = *((_QWORD *)v43 + 357);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v17 + 24) = v38[0];
    v7 = -1073741637;
    *(_QWORD *)(v17 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_34;
  }
  v18 = 0;
  v19 = v38[2];
  v20 = Size[1];
  v7 = -1073741811;
  if ( v38[2] == 2 )
  {
    if ( (*(_BYTE *)(v16 + 1504) & 1) == 0 )
      v18 = -1073741811;
    if ( LODWORD(Size[1]) != 1536 )
      v18 = -1073741811;
  }
  else if ( v38[2] != 3 || LODWORD(Size[1]) != 12324 )
  {
    v18 = -1073741811;
  }
  if ( v18 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v38[2] - 2, v10, v12, v13);
    v21[3] = (int)v38[2];
    v21[4] = v9;
    v21[5] = v18;
    WdLogEvent5_WdWarning(v21);
    v7 = v18;
    goto LABEL_34;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37, v43);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v14, 1, v22, 0);
  v26 = COREDEVICEACCESS::AcquireExclusive((__int64)v41);
  if ( v26 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    if ( v37[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    v7 = v26;
    goto LABEL_34;
  }
  v27 = *(unsigned int *)(*(_QWORD *)(v16 + 2128) + 80LL);
  if ( (_DWORD)v27 != *((_DWORD *)v14 + 716) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v28 + 24) = 3710LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v29 = v38[1];
  if ( *((_DWORD *)v14 + 716) <= v38[1] )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v23, v24, v25);
    v30[4] = v29;
    v30[5] = -1073741811LL;
LABEL_31:
    v30[3] = v14;
    WdLogEvent5_WdWarning(v30);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    v35 = v37[0] == 0LL;
LABEL_32:
    if ( !v35 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    goto LABEL_34;
  }
  v34 = operator new(v20, 0x4B677844u, PagedPool);
  v44 = v34;
  if ( !v34 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, 0LL);
    v7 = -1073741801;
    v30[4] = -1073741801LL;
    goto LABEL_31;
  }
  v36 = (const void *)Size[0];
  if ( v20 + Size[0] < Size[0] || v20 + Size[0] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v34, v36, v20);
  DXGDEVICE::UpdateGammaRamp(v14, v29, v19, v20, v44);
  if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v16 + 2128), v14, v29)
    || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(DXGADAPTER ***)(v16 + 2128), v14, v29)
    && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v16 + 2128), v29) <= 1
    && !(unsigned int)_guard_dispatch_icall_fptr() )
  {
    v7 = ADAPTER_DISPLAY::SetGammaRamp(*(PERESOURCE ***)(v16 + 2128), v29, v14);
    if ( v7 < 0 )
      DXGDEVICE::UpdateGammaRamp(v14, v29, D3DDDI_GAMMARAMP_UNINITIALIZED, 0, 0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    v35 = v37[0] == 0LL;
    goto LABEL_32;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
  if ( v37[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42);
  return (unsigned int)v26;
}
