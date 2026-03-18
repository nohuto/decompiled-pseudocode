/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C009CDF8
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C00937EC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 * Callees:
 *     ?VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C000715C (-VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     Template_ppqpttq @ 0x1C00224CC (Template_ppqpttq.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0092780 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C00A2F30 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C016A5A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(struct ADAPTER_RENDER **this, char a2, unsigned __int8 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edx
  struct ADAPTER_RENDER *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r8d
  struct _ERESOURCE *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  struct _KEVENT *v29; // rax
  struct ADAPTER_RENDER *v30; // r8
  struct VIDMM_DEVICE *Device; // rax
  struct VIDMM_DEVICE *v32; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  ADAPTER_RENDER *v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // edx
  int v42; // r8d
  int v43; // r8d
  struct ADAPTER_RENDER *v44; // rax
  int v45; // eax
  struct ADAPTER_RENDER *v46; // rsi
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  int v55; // ecx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _BYTE v59[12]; // [rsp+58h] [rbp-9h] BYREF
  int v60; // [rsp+64h] [rbp+3h]
  _BYTE v61[24]; // [rsp+68h] [rbp+7h] BYREF
  _DXGKARG_CREATEDEVICE v62; // [rsp+80h] [rbp+1Fh] BYREF
  char v63; // [rsp+C8h] [rbp+67h] BYREF

  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v61, ProcessDxgProcess);
  v9 = HMGRTABLE::AllocHandle((char *)this[5] + 208, this, 3LL);
  *((_DWORD *)this + 77) = v9;
  v13 = v9;
  if ( !v9 )
  {
    v56 = WdLogNewEntry5_WdWarning(v10, 0LL, v11, v12);
    LODWORD(v28) = -1073741801;
    *(_QWORD *)(v56 + 24) = this;
    *(_QWORD *)(v56 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v56);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v61);
    return (unsigned int)v28;
  }
  v14 = this[5];
  v15 = (v9 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *((_DWORD *)v14 + 56) )
  {
    v16 = *((_QWORD *)v14 + 26);
    v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
    if ( ((v13 >> 26) & 0x30) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x30) && (v17 & 0x1000) == 0 && (v17 & 0xF) != 0 )
      *(_DWORD *)(v16 + 16 * (((unsigned __int64)v13 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v61);
  v18 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  this[10] = (struct ADAPTER_RENDER *)v18;
  if ( !v18 )
    goto LABEL_33;
  v23 = ExInitializeResourceLite(v18);
  v28 = v23;
  if ( v23 < 0 )
  {
LABEL_37:
    v57 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    goto LABEL_34;
  }
  v29 = (struct _KEVENT *)operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
  this[360] = (struct ADAPTER_RENDER *)v29;
  if ( !v29 )
    goto LABEL_33;
  KeInitializeEvent(v29, NotificationEvent, 1u);
  memset(&v62, 0, sizeof(v62));
  v30 = this[2];
  v62.hDevice = this;
  if ( (*(_DWORD *)(*((_QWORD *)v30 + 2) + 1520LL) & 1) != 0 )
  {
    if ( *((_DWORD *)this + 76) == 2 )
      v62.Flags.Value |= 2u;
  }
  else
  {
    v62.pInfo = (DXGK_DEVICEINFO *)(this + 49);
  }
  if ( (*(_DWORD *)(*((_QWORD *)v30 + 2) + 300LL) & 0x10) != 0 )
  {
    v55 = a3 << 31;
    a3 = 1;
    v62.Flags.Value = v62.Flags.Value & 0x7FFFFFFF | v55;
  }
  *((_BYTE *)this + 2869) = a2;
  *((_BYTE *)this + 2870) = a3;
  Device = VIDMM_EXPORT::VidMmCreateDevice(
             *((VIDMM_EXPORT **)v30 + 50),
             *((struct VIDMM_GLOBAL **)v30 + 51),
             (struct DXGDEVICE *)this);
  this[70] = Device;
  v32 = Device;
  if ( !Device )
  {
LABEL_33:
    v57 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v28 = -1073741801LL;
LABEL_34:
    *(_QWORD *)(v57 + 24) = this;
    *(_QWORD *)(v57 + 32) = v28;
LABEL_35:
    WdLogEvent5_WdWarning(v57);
    return (unsigned int)v28;
  }
  v28 = *((_QWORD *)this[2] + 50);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v63, Current);
  LODWORD(v28) = (*(__int64 (__fastcall **)(struct VIDMM_DEVICE *))(*(_QWORD *)(v28 + 8) + 392LL))(v32);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v63);
  if ( (int)v28 < 0 )
    return (unsigned int)v28;
  LODWORD(v28) = DXGPROCESS::OpenAdapter(this[5], this[2]);
  if ( (int)v28 < 0 )
    goto LABEL_39;
  v38 = this[2];
  *((_BYTE *)this + 2873) = 1;
  v39 = *((_QWORD *)v38 + 2);
  if ( (*(_DWORD *)(v39 + 1524) & 0x80u) != 0 )
    v62.Pasid = **(_DWORD **)(*(_QWORD *)(*((_QWORD *)this[5] + 5) + 8LL * *(unsigned int *)(v39 + 200)) + 8LL);
  v40 = *((_QWORD *)v38 + 2);
  if ( (*(_DWORD *)(v40 + 1524) & 0x40) != 0 )
  {
    v36 = *(unsigned int *)(v40 + 200);
    v62.hKmdProcess = *(HANDLE *)(*(_QWORD *)(*((_QWORD *)this[5] + 5) + 8 * v36) + 16LL);
  }
  LODWORD(v28) = ADAPTER_RENDER::DdiCreateDevice(v38, &v62, v36);
  if ( (int)v28 < 0 )
  {
LABEL_39:
    v57 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
    *(_QWORD *)(v57 + 24) = this;
    goto LABEL_35;
  }
  v41 = *((_DWORD *)this + 76);
  this[48] = (struct ADAPTER_RENDER *)v62.hDevice;
  *(_QWORD *)&v59[4] = 0LL;
  v60 = 0;
  v42 = 2 * (a2 & 1 | (2 * (a3 & 1)));
  v43 = ((unsigned __int8)v42 ^ (unsigned __int8)(8 * (v41 == 2))) & 8 ^ v42;
  v44 = this[2];
  *(_QWORD *)v59 = ((unsigned __int8)v43 ^ (unsigned __int8)(32 * (v41 == 1))) & 0x20 ^ (unsigned int)v43;
  v45 = (*(__int64 (__fastcall **)(struct ADAPTER_RENDER **, _BYTE *, char *))(*(_QWORD *)(*((_QWORD *)v44 + 47) + 8LL)
                                                                             + 112LL))(
          this,
          v59,
          (char *)this + 568);
  v28 = v45;
  if ( v45 < 0 )
    goto LABEL_37;
  (*(void (__fastcall **)(struct ADAPTER_RENDER *, struct ADAPTER_RENDER *))(*(_QWORD *)(*((_QWORD *)this[2] + 50) + 8LL)
                                                                           + 1064LL))(
    this[70],
    this[71]);
  v46 = this[5];
  v47 = *((unsigned int *)this + 77);
  *((_DWORD *)this + 94) = 1;
  DXGPUSHLOCK::AcquireExclusive((struct ADAPTER_RENDER *)((char *)v46 + 184));
  v48 = ((unsigned int)v47 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v48 < *((_DWORD *)v46 + 56) )
  {
    v49 = *((_QWORD *)v46 + 26);
    v50 = ((unsigned int)v47 >> 26) & 0x30;
    if ( (((unsigned int)v47 >> 26) & 0x30) == (*(_BYTE *)(v49 + 16 * v48 + 8) & 0x30)
      && (*(_DWORD *)(v49 + 16 * v48 + 8) & 0xF) != 0 )
    {
      v51 = 2 * ((v47 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v49 + 8 * v51 + 8) & 0x1000) == 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v50);
        *(_QWORD *)(v58 + 24) = 193LL;
        WdLogEvent5_WdAssertion(v58);
      }
      *(_DWORD *)(*((_QWORD *)v46 + 26) + 8 * v51 + 8) &= ~0x1000u;
    }
  }
  *((_QWORD *)v46 + 24) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v46 + 184, 0LL);
  KeLeaveCriticalRegion();
  v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v52);
  v53[3] = this;
  v53[4] = *((unsigned int *)this + 77);
  v53[5] = this[5];
  WdLogEvent5_WdEvent(v53);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_ppqpttq(
        *((unsigned __int8 *)this + 2870),
        &EventCreateDevice,
        (__int64)this[2],
        *((_QWORD *)this[5] + 7),
        *((_QWORD *)this[2] + 2),
        *((_DWORD *)this + 76),
        this,
        *((unsigned __int8 *)this + 2869),
        *((unsigned __int8 *)this + 2870),
        *((_DWORD *)this + 77));
  }
  return 0LL;
}
