/*
 * XREFs of DxgkSetGammaRamp @ 0x1C013D770
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003638 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0007AD8 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007E18 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C009A06C (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateGammaRamp@DXGDEVICE@@QEAAXIW4_D3DDDI_GAMMARAMP_TYPE@@IPEAX@Z @ 0x1C013BD4C (-UpdateGammaRamp@DXGDEVICE@@QEAAXIW4_D3DDDI_GAMMARAMP_TYPE@@IPEAX@Z.c)
 */

__int64 __fastcall DxgkSetGammaRamp(_OWORD *a1)
{
  struct _KTHREAD **Current; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // ebx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  int v16; // esi
  enum _D3DDDI_GAMMARAMP_TYPE v17; // r13d
  unsigned int v18; // r12d
  _QWORD *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r14d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  PVOID v32; // r9
  bool v33; // zf
  const void *v34; // rdx
  _QWORD v35[2]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v36[4]; // [rsp+40h] [rbp-B8h]
  size_t Size[2]; // [rsp+50h] [rbp-A8h]
  struct _KTHREAD **v38; // [rsp+60h] [rbp-98h]
  _BYTE v39[136]; // [rsp+70h] [rbp-88h] BYREF
  char v40; // [rsp+108h] [rbp+10h] BYREF
  struct DXGDEVICE *v41; // [rsp+110h] [rbp+18h] BYREF
  void *v42; // [rsp+118h] [rbp+20h]

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v38 = Current;
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v3);
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
    return (unsigned int)v5;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v36 = *a1;
  *(_OWORD *)Size = a1[1];
  v7 = v36[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v36[0], Current, &v41);
  v12 = v41;
  if ( !v41 )
  {
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = v36[0];
    v5 = -1073741811;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_34:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40);
    return (unsigned int)v5;
  }
  v14 = *((_QWORD *)v41 + 354);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v15 + 24) = v36[0];
    v5 = -1073741637;
    *(_QWORD *)(v15 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v15);
    goto LABEL_34;
  }
  v16 = 0;
  v17 = v36[2];
  v18 = Size[1];
  v5 = -1073741811;
  if ( v36[2] == 2 )
  {
    if ( (*(_BYTE *)(v14 + 1368) & 1) == 0 )
      v16 = -1073741811;
    if ( LODWORD(Size[1]) != 1536 )
      v16 = -1073741811;
  }
  else if ( v36[2] != 3 || LODWORD(Size[1]) != 12324 )
  {
    v16 = -1073741811;
  }
  if ( v16 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v36[2] - 2, v8, v10, v11);
    v19[3] = (int)v36[2];
    v19[4] = v7;
    v19[5] = v16;
    WdLogEvent5_WdWarning(v19);
    v5 = v16;
    goto LABEL_34;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35, v41);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v12, 1, v20, 0);
  v24 = COREDEVICEACCESS::AcquireExclusive((__int64)v39);
  if ( v24 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
    if ( v35[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
    v5 = v24;
    goto LABEL_34;
  }
  v25 = *(unsigned int *)(*(_QWORD *)(v14 + 1984) + 104LL);
  if ( (_DWORD)v25 != *((_DWORD *)v12 + 710) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v26 + 24) = 3420LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v27 = v36[1];
  if ( *((_DWORD *)v12 + 710) <= v36[1] )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v21, v22, v23);
    v28[4] = v27;
    v28[5] = -1073741811LL;
LABEL_31:
    v28[3] = v12;
    WdLogEvent5_WdWarning(v28);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
    v33 = v35[0] == 0LL;
LABEL_32:
    if ( !v33 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
    goto LABEL_34;
  }
  v32 = operator new[](v18, 0x4B677844u, PagedPool);
  v42 = v32;
  if ( !v32 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31, 0LL);
    v5 = -1073741801;
    v28[4] = -1073741801LL;
    goto LABEL_31;
  }
  v34 = (const void *)Size[0];
  if ( v18 + Size[0] < Size[0] || v18 + Size[0] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v32, v34, v18);
  DXGDEVICE::UpdateGammaRamp(v12, v27, v17, v18, v42);
  if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v14 + 1984), v12, v27)
    || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(DXGADAPTER ***)(v14 + 1984), v12, v27)
    && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v14 + 1984), v27) <= 1
    && !(unsigned int)_guard_dispatch_icall_fptr() )
  {
    v5 = ADAPTER_DISPLAY::SetGammaRamp(*(PERESOURCE ***)(v14 + 1984), v27, v12);
    if ( v5 < 0 )
      DXGDEVICE::UpdateGammaRamp(v12, v27, D3DDDI_GAMMARAMP_UNINITIALIZED, 0, 0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
    v33 = v35[0] == 0LL;
    goto LABEL_32;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
  if ( v35[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40);
  return (unsigned int)v24;
}
