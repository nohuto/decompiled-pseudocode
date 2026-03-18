/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00D9440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00062B0 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00062E8 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0006370 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C000838C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C001ED1C (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C0147D50 (-GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
 */

__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        int a2,
        const struct _CDDDXGK_INTERFACE *a3,
        unsigned int a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  __int64 v10; // rbp
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned int v18; // edx
  __int64 v19; // r9
  int v20; // r8d
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned int CddShadowPitch; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rcx
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  void **v38; // rsi
  unsigned __int64 *v39; // rbx
  __int64 v40; // rax
  void *DoDCddShadowSession; // rax
  unsigned __int64 v42; // rcx
  _BYTE v43[96]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v44; // [rsp+B8h] [rbp+10h] BYREF

  v10 = (unsigned int)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 3002);
  if ( (a2 & 0x40000000) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v33 + 24) = 384LL;
    WdLogEvent5_WdAssertion(v33);
    LODWORD(v26) = -1073741637;
    goto LABEL_17;
  }
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v13);
  v16 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    LODWORD(v26) = -1073741811;
    v34 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    *(_QWORD *)(v34 + 32) = PsGetCurrentProcess(v35);
    v36 = (_QWORD *)v34;
LABEL_26:
    WdLogEvent5_WdError(v36);
    goto LABEL_17;
  }
  v17 = ProcessDxgProcess + 184;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
  v18 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( v18 < *(_DWORD *)(v16 + 224)
    && (v19 = *(_QWORD *)(v16 + 208),
        v20 = *(_DWORD *)(v19 + 16LL * v18 + 8),
        (((unsigned int)v10 >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x30))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0
    && (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0xF) == 3 )
  {
    v21 = *(_QWORD *)(v19 + 16LL * v18);
  }
  else
  {
    v21 = 0LL;
  }
  ExReleasePushLockSharedEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( !v21 )
  {
    LODWORD(v26) = -1073741811;
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v36[3] = -1073741811LL;
    v36[4] = v10;
    v36[5] = v16;
    goto LABEL_26;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, v21, 1, v23, 0);
  v24 = COREDEVICEACCESS::AcquireExclusive((__int64)v43);
  v26 = v24;
  if ( v24 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdEvent(v25);
    v37[3] = v26;
    v37[4] = v21;
    v37[5] = v16;
    WdLogEvent5_WdEvent(v37);
  }
  else
  {
    v26 = *(_QWORD *)(v21 + 2856);
    if ( !v26 || !*(_QWORD *)(v26 + 2128) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v32 + 24) = 420LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v27 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
    if ( *(_QWORD *)(v21 + 2856) != v27 )
    {
      v38 = a6;
      if ( !*a6 )
      {
        v39 = a7;
        if ( !a7 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v27);
          *(_QWORD *)(v40 + 24) = 434LL;
          WdLogEvent5_WdAssertion(v40);
        }
        if ( ADAPTER_DISPLAY::IsIdenticalMode(*(DXGADAPTER ***)(v26 + 2128), a4) )
        {
          DoDCddShadowSession = ADAPTER_DISPLAY::GetDoDCddShadowSession(*(ADAPTER_DISPLAY **)(v26 + 2128), a4, &v44);
          v42 = v44;
          if ( *v39 > v44 )
          {
            if ( DoDCddShadowSession )
              ObfDereferenceObject(DoDCddShadowSession);
          }
          else
          {
            *v38 = DoDCddShadowSession;
            *v39 = v42;
          }
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v26 + 2128), a4);
    *a8 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(DXGADAPTER ***)(v26 + 2128), a4, 1);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v26 + 2128), a4, a3);
    LODWORD(v26) = 0;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
LABEL_17:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 3002);
  return (unsigned int)v26;
}
