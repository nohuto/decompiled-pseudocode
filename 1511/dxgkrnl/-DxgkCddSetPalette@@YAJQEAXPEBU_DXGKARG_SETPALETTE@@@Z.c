/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C0136BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C006A8E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C0128528 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rbp
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *v12; // rsi
  ADAPTER_DISPLAY **v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD v27[8]; // [rsp+20h] [rbp-58h] BYREF
  struct DXGADAPTER *v28; // [rsp+80h] [rbp+8h] BYREF
  struct DXGADAPTER *v29; // [rsp+88h] [rbp+10h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3010);
  Current = DXGPROCESS::GetCurrent();
  PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, &v29, &v28);
  v8 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v12 = (__int64 *)v29;
    v13 = (ADAPTER_DISPLAY **)v28;
    if ( !v29 || !v28 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v14 + 24) = 2229LL;
      WdLogEvent5_WdAssertion(v14);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v27,
      (struct DXGADAPTER *const)v12,
      (struct DXGADAPTER *const)v13);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v13);
    v15 = COREADAPTERACCESS::AcquireExclusive(v27);
    v8 = v15;
    if ( v15 >= 0 )
    {
      if ( !v12[249] )
      {
        v21 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v21 + 24) = 2246LL;
        WdLogEvent5_WdAssertion(v21);
      }
      if ( !v13[248] )
      {
        v22 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v22 + 24) = 2247LL;
        WdLogEvent5_WdAssertion(v22);
      }
      ADAPTER_RENDER::FlushScheduler(v12[249], 6, 0xFFFFFFFF, 0);
      v8 = (int)ADAPTER_DISPLAY::DdiSetPalette(v13[248], a2, v23);
      ADAPTER_RENDER::FlushScheduler(v12[249], 7, 0xFFFFFFFF, 0);
      if ( (int)v8 < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
        v25[3] = v8;
        v25[4] = v13;
        v25[5] = a2->VidPnSourceId;
        v25[6] = Current;
        WdLogEvent5_WdError(v25);
      }
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16, v18, v19);
      v20[3] = v8;
      v20[4] = v12;
      v20[5] = v13;
      v20[6] = Current;
      WdLogEvent5_WdEvent(v20);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = a1;
    *(_QWORD *)(v9 + 32) = v8;
    WdLogEvent5_WdError(v9);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 3010);
  return (unsigned int)v8;
}
