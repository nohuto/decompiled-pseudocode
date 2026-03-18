/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00AF840
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00066BC (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006758 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0095E00 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v4; // rdi
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  ADAPTER_DISPLAY **v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  int **SessionViewOwner; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v21; // r9
  __int64 x; // rdx
  const struct _DXGK_DISPLAYMODE_INFO *v23; // r14
  __int64 y; // r8
  int v25; // ecx
  bool v26; // zf
  int v27; // ecx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  struct tagRECT v36; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v37[8]; // [rsp+30h] [rbp-40h] BYREF
  struct DXGADAPTER *v38; // [rsp+A8h] [rbp+38h] BYREF

  v4 = a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3014);
  PairingAdapters = DxgkpGetPairingAdapters(a1, (unsigned int)v4, 0LL, &v38);
  v11 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v33[3] = a1;
    v33[4] = v4;
    v33[5] = v11;
    WdLogEvent5_WdError(v33);
  }
  else
  {
    v12 = (ADAPTER_DISPLAY **)v38;
    if ( !v38 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v34 + 24) = 2290LL;
      WdLogEvent5_WdAssertion(v34);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, (struct DXGADAPTER *const)v12, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
    v13 = COREADAPTERACCESS::AcquireExclusive(v37);
    v18 = v13;
    if ( v13 < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14, v16, v17);
      v35[3] = v18;
      v35[4] = v4;
      v35[5] = v12;
      v35[6] = a3->x;
      v35[7] = a3->y;
      WdLogEvent5_WdEvent(v35);
    }
    else
    {
      if ( !v12[247] )
      {
        v32 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
        *(_QWORD *)(v32 + 24) = 2301LL;
        WdLogEvent5_WdAssertion(v32);
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v12[247], (unsigned int)v4, v16, v17);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v12[247], v4);
      x = (unsigned int)a3->x;
      v23 = DisplayModeInfo;
      y = (unsigned int)a3->y;
      v36.left = a3->x;
      v25 = *((_DWORD *)DisplayModeInfo + 7) - 2;
      v36.top = y;
      v26 = (v25 & 0xFFFFFFFD) == 0;
      v27 = *((_DWORD *)DisplayModeInfo + 1);
      if ( v26 )
      {
        v36.right = x + v27;
        v27 = *(_DWORD *)DisplayModeInfo;
      }
      else
      {
        x = (unsigned int)(*(_DWORD *)DisplayModeInfo + x);
        v36.right = x;
      }
      v28 = (unsigned int)(y + v27);
      v36.bottom = v28;
      v29 = (_QWORD *)WdLogNewEntry5_WdEvent(v28, x, y, v21);
      v29[3] = v4;
      v29[4] = v12;
      v29[5] = a3->x;
      v29[6] = a3->y;
      v29[7] = *((int *)v23 + 7);
      WdLogEvent5_WdEvent(v29);
      ADAPTER_DISPLAY::SetContentRect(v12[247], (unsigned int)v4, &v36);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 3014);
}
