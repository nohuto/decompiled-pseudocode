/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01320D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C012247C (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rbp
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rsi
  ADAPTER_DISPLAY **v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD v30[8]; // [rsp+20h] [rbp-58h] BYREF
  struct DXGADAPTER *v31; // [rsp+80h] [rbp+8h] BYREF
  struct DXGADAPTER *v32; // [rsp+88h] [rbp+10h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3010);
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, &v32, &v31);
  v11 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v15 = (__int64 *)v32;
    v16 = (ADAPTER_DISPLAY **)v31;
    if ( !v32 || !v31 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v17 + 24) = 2213LL;
      WdLogEvent5_WdAssertion(v17);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v30,
      (struct DXGADAPTER *const)v15,
      (struct DXGADAPTER *const)v16);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    v18 = COREADAPTERACCESS::AcquireExclusive(v30);
    v11 = v18;
    if ( v18 >= 0 )
    {
      if ( !v15[248] )
      {
        v24 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        *(_QWORD *)(v24 + 24) = 2230LL;
        WdLogEvent5_WdAssertion(v24);
      }
      if ( !v16[247] )
      {
        v25 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        *(_QWORD *)(v25 + 24) = 2231LL;
        WdLogEvent5_WdAssertion(v25);
      }
      ADAPTER_RENDER::FlushScheduler(v15[248], 6, 0xFFFFFFFF, 0);
      v11 = (int)ADAPTER_DISPLAY::DdiSetPalette(v16[247], a2, v26);
      ADAPTER_RENDER::FlushScheduler(v15[248], 7, 0xFFFFFFFF, 0);
      if ( (int)v11 < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
        v28[3] = v11;
        v28[4] = v16;
        v28[5] = a2->VidPnSourceId;
        v28[6] = Current;
        WdLogEvent5_WdError(v28);
      }
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
      v23[3] = v11;
      v23[4] = v15;
      v23[5] = v16;
      v23[6] = Current;
      WdLogEvent5_WdEvent(v23);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = a1;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdError(v12);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 3010);
  return (unsigned int)v11;
}
