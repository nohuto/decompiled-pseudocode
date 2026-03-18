/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00C3050
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0007810 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0007A48 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C009C02C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v4; // rdi
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // r14
  ADAPTER_DISPLAY **v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  int **SessionViewOwner; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v18; // r9
  __int64 x; // rdx
  const struct _DXGK_DISPLAYMODE_INFO *v20; // r14
  __int64 y; // r8
  int v22; // ecx
  bool v23; // zf
  int v24; // ecx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  struct tagRECT v33; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v34[8]; // [rsp+30h] [rbp-40h] BYREF
  struct DXGADAPTER *v35; // [rsp+A8h] [rbp+38h] BYREF

  v4 = a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3014);
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, &v35);
  v8 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v30[3] = a1;
    v30[4] = v4;
    v30[5] = v8;
    WdLogEvent5_WdError(v30);
  }
  else
  {
    v9 = (ADAPTER_DISPLAY **)v35;
    if ( !v35 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v31 + 24) = 2306LL;
      WdLogEvent5_WdAssertion(v31);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, (struct DXGADAPTER *const)v9, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v9);
    v10 = COREADAPTERACCESS::AcquireExclusive(v34);
    v15 = v10;
    if ( v10 < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11, v13, v14);
      v32[3] = v15;
      v32[4] = v4;
      v32[5] = v9;
      v32[6] = a3->x;
      v32[7] = a3->y;
      WdLogEvent5_WdEvent(v32);
    }
    else
    {
      if ( !v9[248] )
      {
        v29 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v29 + 24) = 2317LL;
        WdLogEvent5_WdAssertion(v29);
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v9[248], v4);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v9[248], v4);
      x = (unsigned int)a3->x;
      v20 = DisplayModeInfo;
      y = (unsigned int)a3->y;
      v33.left = a3->x;
      v22 = *((_DWORD *)DisplayModeInfo + 7) - 2;
      v33.top = y;
      v23 = (v22 & 0xFFFFFFFD) == 0;
      v24 = *((_DWORD *)DisplayModeInfo + 1);
      if ( v23 )
      {
        v33.right = x + v24;
        v24 = *(_DWORD *)DisplayModeInfo;
      }
      else
      {
        x = (unsigned int)(*(_DWORD *)DisplayModeInfo + x);
        v33.right = x;
      }
      v25 = (unsigned int)(y + v24);
      v33.bottom = v25;
      v26 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, x, y, v18);
      v26[3] = v4;
      v26[4] = v9;
      v26[5] = a3->x;
      v26[6] = a3->y;
      v26[7] = *((int *)v20 + 7);
      WdLogEvent5_WdEvent(v26);
      ADAPTER_DISPLAY::SetContentRect(v9[248], (unsigned int)v4, &v33);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 3014);
}
