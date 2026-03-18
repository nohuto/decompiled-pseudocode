/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C006B51C
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C006AF64 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C00044A4 (-VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_ppqptt @ 0x1C001D4FC (Template_ppqptt.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z @ 0x1C006781C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C006A058 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0094450 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // r8d
  struct _ERESOURCE *PoolWithTag; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  struct _KEVENT *v27; // rax
  __int64 v28; // r8
  struct VIDMM_DEVICE *Device; // rax
  struct VIDMM_DEVICE *v30; // rsi
  struct _KTHREAD **v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  ADAPTER_RENDER *v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // edx
  int v40; // r8d
  int v41; // r8d
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rsi
  unsigned __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rbx
  _QWORD *v50; // rax
  __int64 v51; // r8
  int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _BYTE v57[12]; // [rsp+50h] [rbp-19h] BYREF
  int v58; // [rsp+5Ch] [rbp-Dh]
  _BYTE v59[24]; // [rsp+60h] [rbp-9h] BYREF
  _DXGKARG_CREATEDEVICE v60; // [rsp+78h] [rbp+Fh] BYREF
  char v61; // [rsp+D0h] [rbp+67h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v59, Current);
  v7 = HMGRTABLE::AllocHandle(*((_QWORD *)this + 5) + 216LL, this, 3LL);
  *((_DWORD *)this + 71) = v7;
  v11 = v7;
  if ( !v7 )
  {
    v54 = WdLogNewEntry5_WdWarning(v8, 0LL, v9, v10);
    LODWORD(v26) = -1073741801;
    *(_QWORD *)(v54 + 24) = this;
    *(_QWORD *)(v54 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v54);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v59);
    return (unsigned int)v26;
  }
  v12 = *((_QWORD *)this + 5);
  v13 = (v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *(_DWORD *)(v12 + 232) )
  {
    v14 = *(_QWORD *)(v12 + 216);
    v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
    if ( ((v11 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x30) && (v15 & 0x1000) == 0 && (v15 & 0xF) != 0 )
      *(_DWORD *)(v14 + 16 * (((unsigned __int64)v11 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v59);
  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x4B677844u);
  *((_QWORD *)this + 10) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_33;
  v21 = ExInitializeResourceLite(PoolWithTag);
  v26 = v21;
  if ( v21 < 0 )
  {
LABEL_37:
    v55 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    goto LABEL_34;
  }
  v27 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
  *((_QWORD *)this + 357) = v27;
  if ( !v27 )
    goto LABEL_33;
  KeInitializeEvent(v27, NotificationEvent, 1u);
  memset(&v60, 0, sizeof(v60));
  v28 = *((_QWORD *)this + 2);
  v60.hDevice = this;
  if ( (*(_DWORD *)(*(_QWORD *)(v28 + 16) + 1384LL) & 1) != 0 )
  {
    if ( *((_DWORD *)this + 70) == 2 )
      v60.Flags.Value |= 2u;
  }
  else
  {
    v60.pInfo = (DXGK_DEVICEINFO *)((char *)this + 368);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v28 + 16) + 284LL) & 0x10) != 0 )
  {
    v53 = a3 << 31;
    a3 = 1;
    v60.Flags.Value = v60.Flags.Value & 0x7FFFFFFF | v53;
  }
  *((_BYTE *)this + 2845) = a2;
  *((_BYTE *)this + 2846) = a3;
  Device = VIDMM_EXPORT::VidMmCreateDevice(*(VIDMM_EXPORT **)(v28 + 424), *(struct VIDMM_GLOBAL **)(v28 + 432), this);
  *((_QWORD *)this + 67) = Device;
  v30 = Device;
  if ( !Device )
  {
LABEL_33:
    v55 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    v26 = -1073741801LL;
LABEL_34:
    *(_QWORD *)(v55 + 24) = this;
    *(_QWORD *)(v55 + 32) = v26;
LABEL_35:
    WdLogEvent5_WdWarning(v55);
    return (unsigned int)v26;
  }
  v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
  v31 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v61, v31);
  LODWORD(v26) = (*(__int64 (__fastcall **)(struct VIDMM_DEVICE *))(*(_QWORD *)(v26 + 8) + 376LL))(v30);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v61);
  if ( (int)v26 < 0 )
    return (unsigned int)v26;
  LODWORD(v26) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2));
  if ( (int)v26 < 0 )
    goto LABEL_39;
  v36 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  *((_BYTE *)this + 2849) = 1;
  v37 = *((_QWORD *)v36 + 2);
  if ( (*(_DWORD *)(v37 + 1388) & 0x80u) != 0 )
    v60.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL) + 8LL * *(unsigned int *)(v37 + 184))
                            + 8LL);
  v38 = *((_QWORD *)v36 + 2);
  if ( (*(_DWORD *)(v38 + 1388) & 0x40) != 0 )
  {
    v34 = *(unsigned int *)(v38 + 184);
    v60.hKmdProcess = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL) + 8 * v34) + 16LL);
  }
  LODWORD(v26) = ADAPTER_RENDER::DdiCreateDevice(v36, &v60, v34);
  if ( (int)v26 < 0 )
  {
LABEL_39:
    v55 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
    *(_QWORD *)(v55 + 24) = this;
    goto LABEL_35;
  }
  v39 = *((_DWORD *)this + 70);
  *((_QWORD *)this + 45) = v60.hDevice;
  *(_QWORD *)&v57[4] = 0LL;
  v58 = 0;
  v40 = 2 * (a2 & 1 | (2 * (a3 & 1)));
  v41 = ((unsigned __int8)v40 ^ (unsigned __int8)(8 * (v39 == 2))) & 8 ^ v40;
  v42 = *((_QWORD *)this + 2);
  *(_QWORD *)v57 = ((unsigned __int8)v41 ^ (unsigned __int8)(32 * (v39 == 1))) & 0x20 ^ (unsigned int)v41;
  v43 = (*(__int64 (__fastcall **)(DXGDEVICE *, _BYTE *, char *))(*(_QWORD *)(*(_QWORD *)(v42 + 400) + 8LL) + 112LL))(
          this,
          v57,
          (char *)this + 544);
  v26 = v43;
  if ( v43 < 0 )
    goto LABEL_37;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 8LL) + 1048LL))(
    *((_QWORD *)this + 67),
    *((_QWORD *)this + 68));
  v44 = *((_QWORD *)this + 5);
  v45 = *((unsigned int *)this + 71);
  *((_DWORD *)this + 88) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v44 + 192));
  v46 = ((unsigned int)v45 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v46 < *(_DWORD *)(v44 + 232) )
  {
    v47 = *(_QWORD *)(v44 + 216);
    v48 = ((unsigned int)v45 >> 26) & 0x30;
    if ( (((unsigned int)v45 >> 26) & 0x30) == (*(_BYTE *)(v47 + 16 * v46 + 8) & 0x30)
      && (*(_DWORD *)(v47 + 16 * v46 + 8) & 0xF) != 0 )
    {
      v49 = 2 * ((v45 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v47 + 8 * v49 + 8) & 0x1000) == 0 )
      {
        v56 = WdLogNewEntry5_WdAssertion(v48);
        *(_QWORD *)(v56 + 24) = 188LL;
        WdLogEvent5_WdAssertion(v56);
      }
      *(_DWORD *)(*(_QWORD *)(v44 + 216) + 8 * v49 + 8) &= ~0x1000u;
    }
  }
  *(_QWORD *)(v44 + 200) = 0LL;
  ExReleasePushLockExclusiveEx(v44 + 192, 0LL);
  KeLeaveCriticalRegion();
  v50 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v50[3] = this;
  v50[4] = *((unsigned int *)this + 71);
  v50[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v50);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_ppqptt(
        *((unsigned __int8 *)this + 2845),
        &EventCreateDevice,
        v51,
        *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 70),
        this,
        *((unsigned __int8 *)this + 2845),
        *((unsigned __int8 *)this + 2846));
  }
  return 0LL;
}
