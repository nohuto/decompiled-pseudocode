/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0082060
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C0094690 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C00050B0 (-VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_ppqptt @ 0x1C001D4CC (Template_ppqptt.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C00849DC (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0093624 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01406A8 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // r8d
  struct _ERESOURCE *PoolWithTag; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KEVENT *v31; // rax
  __int64 v32; // r8
  int v33; // ecx
  struct VIDMM_DEVICE *Device; // rax
  struct VIDMM_DEVICE *v35; // rsi
  struct _KTHREAD **v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  ADAPTER_RENDER *v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // edx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rsi
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rax
  __int64 v60; // r8
  int v61; // [rsp+58h] [rbp-9h] BYREF
  __int64 v62; // [rsp+5Ch] [rbp-5h]
  int v63; // [rsp+64h] [rbp+3h]
  _BYTE v64[8]; // [rsp+68h] [rbp+7h] BYREF
  DXGPUSHLOCK *v65; // [rsp+70h] [rbp+Fh]
  int v66; // [rsp+78h] [rbp+17h]
  _DXGKARG_CREATEDEVICE v67; // [rsp+80h] [rbp+1Fh] BYREF
  char v68; // [rsp+C8h] [rbp+67h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v64, (struct _KTHREAD **)Current + 24);
  DXGPUSHLOCK::AcquireExclusive(v65);
  v7 = *((_QWORD *)this + 5) + 216LL;
  v66 = 2;
  v8 = HMGRTABLE::AllocHandle(v7, this, 3LL);
  *((_DWORD *)this + 71) = v8;
  v12 = v8;
  if ( !v8 )
  {
    v13 = WdLogNewEntry5_WdWarning(v9, 0LL, v10, v11);
    LODWORD(v14) = -1073741801;
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v13);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v64);
    return (unsigned int)v14;
  }
  v16 = *((_QWORD *)this + 5);
  v17 = (v8 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 < *(_DWORD *)(v16 + 232) )
  {
    v18 = *(_QWORD *)(v16 + 216);
    v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
    if ( ((v12 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x30) && (v19 & 0x1000) == 0 && (v19 & 0xF) != 0 )
      *(_DWORD *)(v18 + 16 * (((unsigned __int64)v12 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v64);
  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x4B677844u);
  *((_QWORD *)this + 10) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_10;
  v26 = ExInitializeResourceLite(PoolWithTag);
  v14 = v26;
  if ( v26 < 0 )
    goto LABEL_14;
  v31 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
  *((_QWORD *)this + 2341) = v31;
  if ( !v31 )
    goto LABEL_10;
  KeInitializeEvent(v31, NotificationEvent, 1u);
  memset(&v67, 0, sizeof(v67));
  v32 = *((_QWORD *)this + 2);
  v67.hDevice = this;
  if ( (*(_DWORD *)(*(_QWORD *)(v32 + 16) + 1376LL) & 1) != 0 )
  {
    if ( *((_DWORD *)this + 70) == 2 )
      v67.Flags.Value |= 2u;
  }
  else
  {
    v67.pInfo = (DXGK_DEVICEINFO *)((char *)this + 368);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v32 + 16) + 284LL) & 8) != 0 )
  {
    v33 = a3 << 31;
    a3 = 1;
    v67.Flags.Value = v67.Flags.Value & 0x7FFFFFFF | v33;
  }
  *((_BYTE *)this + 18717) = a2;
  *((_BYTE *)this + 18718) = a3;
  Device = VIDMM_EXPORT::VidMmCreateDevice(*(VIDMM_EXPORT **)(v32 + 400), *(struct VIDMM_GLOBAL **)(v32 + 408), this);
  *((_QWORD *)this + 67) = Device;
  v35 = Device;
  if ( !Device )
  {
LABEL_10:
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    v14 = -1073741801LL;
LABEL_11:
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = v14;
LABEL_12:
    WdLogEvent5_WdWarning(v25);
    return (unsigned int)v14;
  }
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
  v36 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v22);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v68, v36);
  LODWORD(v14) = (*(__int64 (__fastcall **)(struct VIDMM_DEVICE *))(*(_QWORD *)(v14 + 8) + 376LL))(v35);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v68);
  if ( (int)v14 < 0 )
    return (unsigned int)v14;
  LODWORD(v14) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2));
  if ( (int)v14 < 0 )
    goto LABEL_25;
  v41 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  *((_BYTE *)this + 18721) = 1;
  v42 = *((_QWORD *)v41 + 2);
  if ( (*(_DWORD *)(v42 + 1380) & 0x80u) != 0 )
    v67.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL) + 8LL * *(unsigned int *)(v42 + 184))
                            + 8LL);
  v43 = *((_QWORD *)v41 + 2);
  if ( (*(_DWORD *)(v43 + 1380) & 0x40) != 0 )
    v67.hKmdProcess = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)
                                            + 8LL * *(unsigned int *)(v43 + 184))
                                + 16LL);
  LODWORD(v14) = ADAPTER_RENDER::DdiCreateDevice(v41, &v67);
  if ( (int)v14 < 0 )
  {
LABEL_25:
    v25 = WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
    *(_QWORD *)(v25 + 24) = this;
    goto LABEL_12;
  }
  *((_QWORD *)this + 45) = v67.hDevice;
  v62 = 0LL;
  v63 = 0;
  v44 = 2 * (a2 & 1 | (2 * (a3 & 1)));
  v45 = *((_QWORD *)this + 2);
  v61 = ((unsigned __int8)v44 ^ (unsigned __int8)(8 * (*((_DWORD *)this + 70) == 2))) & 8 ^ v44;
  v46 = (*(__int64 (__fastcall **)(DXGDEVICE *, int *, char *))(*(_QWORD *)(*(_QWORD *)(v45 + 376) + 8LL) + 112LL))(
          this,
          &v61,
          (char *)this + 544);
  v14 = v46;
  if ( v46 < 0 )
  {
LABEL_14:
    v25 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
    goto LABEL_11;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL) + 1040LL))(
    *((_QWORD *)this + 67),
    *((_QWORD *)this + 68));
  v47 = *((_QWORD *)this + 5);
  v48 = *((unsigned int *)this + 71);
  *((_DWORD *)this + 88) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v47 + 192));
  v49 = ((unsigned int)v48 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v49 < *(_DWORD *)(v47 + 232) )
  {
    v50 = *(_QWORD *)(v47 + 216);
    v51 = ((unsigned int)v48 >> 26) & 0x30;
    v52 = *(unsigned int *)(v50 + 16 * v49 + 8);
    if ( (((unsigned int)v48 >> 26) & 0x30) == (*(_BYTE *)(v50 + 16 * v49 + 8) & 0x30) && (v52 & 0xF) != 0 )
    {
      v53 = 2 * ((v48 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v50 + 8 * v53 + 8) & 0x1000) == 0 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v51, v52, v50, 0xFFFFFFLL);
        *(_QWORD *)(v54 + 24) = 194LL;
        WdLogEvent5_WdAssertion(v54);
      }
      *(_DWORD *)(*(_QWORD *)(v47 + 216) + 8 * v53 + 8) &= ~0x1000u;
    }
  }
  *(_QWORD *)(v47 + 200) = 0LL;
  ExReleasePushLockExclusiveEx(v47 + 192, 0LL);
  KeLeaveCriticalRegion();
  v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v56, v55, v57, v58);
  v59[3] = this;
  v59[4] = *((unsigned int *)this + 71);
  v59[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v59);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_ppqptt(
        *((unsigned __int8 *)this + 18717),
        &EventCreateDevice,
        v60,
        *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 70),
        this,
        *((unsigned __int8 *)this + 18717),
        *((unsigned __int8 *)this + 18718));
  }
  return 0LL;
}
