/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CFBC8
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1C00CFAD0 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00016CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C0086CD8 (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct _KEVENT **a4)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rdx
  struct DXGADAPTER *v22; // rsi
  int PairingAdapters; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGADAPTER *v28; // r14
  ADAPTER_DISPLAY **v29; // rbx
  __int64 v30; // rcx
  int v31; // esi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  struct DXGADAPTER *v42; // [rsp+38h] [rbp-59h] BYREF
  struct DXGADAPTER *v43; // [rsp+40h] [rbp-51h] BYREF
  __int64 v44; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v45; // [rsp+50h] [rbp-41h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v47[24]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v48[80]; // [rsp+78h] [rbp-19h] BYREF

  v4 = a3;
  v5 = 0LL;
  v6 = a2;
  v7 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  v12 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v35 = WdLogNewEntry5_WdError(v11);
    LODWORD(v20) = -1073741811;
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    return (unsigned int)v20;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(ProcessDxgProcess + 72) + 216LL))() )
  {
    v36 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    LODWORD(v20) = -1073741790;
    *(_QWORD *)(v36 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v36);
    return (unsigned int)v20;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v47, (struct _KTHREAD **)v12);
  LODWORD(v20) = -1073741811;
  v21 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v21 >= *(_DWORD *)(v12 + 224)
    || (v19 = *(_QWORD *)(v12 + 208),
        v17 = ((unsigned int)v7 >> 26) & 0x30,
        v18 = *(unsigned int *)(v19 + 16LL * (unsigned int)v21 + 8),
        (((unsigned int)v7 >> 26) & 0x30) != (*(_BYTE *)(v19 + 16LL * (unsigned int)v21 + 8) & 0x30))
    || (v18 & 0x1000) != 0
    || (v18 & 0xF) == 0
    || (*(_BYTE *)(v19 + 16LL * (unsigned int)v21 + 8) & 0xF) != 1
    || (v22 = *(struct DXGADAPTER **)(v19 + 16LL * (unsigned int)v21)) == 0LL )
  {
    v38 = WdLogNewEntry5_WdWarning(v17, v21, v18, v19);
    *(_QWORD *)(v38 + 24) = v7;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    goto LABEL_45;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_10;
  v37 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v37 >= *(_DWORD *)(v12 + 224)
    || (v17 = ((unsigned int)v6 >> 26) & 0x30,
        v18 = *(unsigned int *)(v19 + 16LL * (unsigned int)v37 + 8),
        (((unsigned int)v6 >> 26) & 0x30) != (*(_BYTE *)(v19 + 16LL * (unsigned int)v37 + 8) & 0x30))
    || (v18 & 0x1000) != 0
    || (v18 & 0xF) == 0
    || (*(_BYTE *)(v19 + 16LL * (unsigned int)v37 + 8) & 0xF) != 3
    || (v5 = *(_QWORD *)(v19 + 16LL * (unsigned int)v37)) == 0 )
  {
    v38 = WdLogNewEntry5_WdWarning(v17, v37, v18, v19);
    *(_QWORD *)(v38 + 24) = v22;
    *(_QWORD *)(v38 + 32) = v6;
LABEL_45:
    WdLogEvent5_WdWarning(v38);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
    return (unsigned int)v20;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v5 + 64));
LABEL_10:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
  v44 = v5;
  PairingAdapters = DxgkpGetPairingAdapters(v22, v4, &v43, &v46, &v42, &v45);
  v20 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v39[3] = v22;
    v39[4] = v4;
    v39[5] = v20;
  }
  else
  {
    v28 = v43;
    v29 = (ADAPTER_DISPLAY **)v42;
    if ( !v43 || !v42 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v40 + 24) = 4071LL;
      WdLogEvent5_WdAssertion(v40);
    }
    if ( (unsigned int)v4 < *((_DWORD *)v29[266] + 20) )
    {
      if ( !v5
        || v28 == *(struct DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL) && v29 == *(ADAPTER_DISPLAY ***)(v5 + 2856) )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v28, (struct DXGADAPTER *const)v29);
        DXGADAPTER::ReleaseReference(v28);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v29);
        v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48);
        if ( v31 >= 0 )
        {
          if ( !*((_QWORD *)v28 + 267) )
          {
            v33 = WdLogNewEntry5_WdAssertion(v30);
            *(_QWORD *)(v33 + 24) = 4106LL;
            WdLogEvent5_WdAssertion(v33);
          }
          if ( !v29[266] )
          {
            v34 = WdLogNewEntry5_WdAssertion(v30);
            *(_QWORD *)(v34 + 24) = 4107LL;
            WdLogEvent5_WdAssertion(v34);
          }
          if ( !(_DWORD)v6 || *(_DWORD *)(v5 + 376) == 1 )
          {
            ADAPTER_DISPLAY::GetVBlankEvent(v29[266], v4, a4);
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v48);
          }
          else
          {
            v31 = -1073741130;
          }
        }
        LODWORD(v20) = v31;
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
      }
      else
      {
        v41 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
        *(_QWORD *)(v41 + 24) = v22;
        *(_QWORD *)(v41 + 32) = v6;
        WdLogEvent5_WdWarning(v41);
        LODWORD(v20) = -1073741811;
      }
      goto LABEL_23;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    LODWORD(v20) = -1073741811;
    v39[3] = v4;
    v39[4] = -1073741811LL;
  }
  WdLogEvent5_WdError(v39);
LABEL_23:
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v44);
  return (unsigned int)v20;
}
