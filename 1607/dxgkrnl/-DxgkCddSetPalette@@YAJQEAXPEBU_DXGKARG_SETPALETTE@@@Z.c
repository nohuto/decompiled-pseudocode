/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C0156010
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093CF8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C014C484 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rbp
  int PairingAdapters; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rsi
  ADAPTER_DISPLAY **v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD v26[15]; // [rsp+30h] [rbp-78h] BYREF
  struct DXGADAPTER *v27; // [rsp+B0h] [rbp+8h] BYREF
  struct DXGADAPTER *v28; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 v29; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v30; // [rsp+C8h] [rbp+20h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3010);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, &v28, &v30, &v27, &v29);
  v10 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v14 = (__int64 *)v28;
    v15 = (ADAPTER_DISPLAY **)v27;
    if ( !v28 || !v27 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v16 + 24) = 2224LL;
      WdLogEvent5_WdAssertion(v16);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v26,
      (struct DXGADAPTER *const)v14,
      (struct DXGADAPTER *const)v15);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
    v17 = COREADAPTERACCESS::AcquireExclusive(v26);
    v10 = v17;
    if ( v17 >= 0 )
    {
      if ( !v14[267] )
      {
        v20 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v20 + 24) = 2241LL;
        WdLogEvent5_WdAssertion(v20);
      }
      if ( !v15[266] )
      {
        v21 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v21 + 24) = 2242LL;
        WdLogEvent5_WdAssertion(v21);
      }
      ADAPTER_RENDER::FlushScheduler(v14[267], 6, 0xFFFFFFFF, 0);
      v10 = (int)ADAPTER_DISPLAY::DdiSetPalette(v15[266], a2, v22);
      ADAPTER_RENDER::FlushScheduler(v14[267], 7, 0xFFFFFFFF, 0);
      if ( (int)v10 < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v24[3] = v10;
        v24[4] = v15;
        v24[5] = a2->VidPnSourceId;
        v24[6] = ProcessDxgProcess;
        WdLogEvent5_WdError(v24);
      }
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v18);
      v19[3] = v10;
      v19[4] = v14;
      v19[5] = v15;
      v19[6] = ProcessDxgProcess;
      WdLogEvent5_WdEvent(v19);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = a1;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdError(v11);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 3010);
  return (unsigned int)v10;
}
