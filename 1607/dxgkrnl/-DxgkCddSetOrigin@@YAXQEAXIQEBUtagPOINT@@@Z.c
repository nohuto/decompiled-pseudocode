/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00D8DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00064BC (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0006BF4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0088C0C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v4; // rdi
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // r14
  ADAPTER_DISPLAY **v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r14
  int **SessionViewOwner; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  LONG x; // edx
  const struct _DXGK_DISPLAYMODE_INFO *v16; // r14
  LONG y; // r8d
  int v18; // ecx
  bool v19; // zf
  int v20; // ecx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  struct tagRECT v29; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v30[10]; // [rsp+40h] [rbp-9h] BYREF
  struct DXGADAPTER *v31; // [rsp+C8h] [rbp+7Fh] BYREF

  v4 = a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3014);
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v31, (unsigned __int64 *)&v29);
  v8 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v26[3] = a1;
    v26[4] = v4;
    v26[5] = v8;
    WdLogEvent5_WdError(v26);
  }
  else
  {
    v9 = (ADAPTER_DISPLAY **)v31;
    if ( !v31 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v27 + 24) = 2304LL;
      WdLogEvent5_WdAssertion(v27);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, (struct DXGADAPTER *const)v9, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v9);
    v10 = COREADAPTERACCESS::AcquireExclusive(v30);
    v12 = v10;
    if ( v10 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v11);
      v28[3] = v12;
      v28[4] = v4;
      v28[5] = v9;
      v28[6] = a3->x;
      v28[7] = a3->y;
      WdLogEvent5_WdEvent(v28);
    }
    else
    {
      if ( !v9[266] )
      {
        v25 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v25 + 24) = 2315LL;
        WdLogEvent5_WdAssertion(v25);
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v9[266], v4);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v9[266], v4);
      x = a3->x;
      v16 = DisplayModeInfo;
      y = a3->y;
      v29.left = a3->x;
      v18 = *((_DWORD *)DisplayModeInfo + 7) - 2;
      v29.top = y;
      v19 = (v18 & 0xFFFFFFFD) == 0;
      v20 = *((_DWORD *)DisplayModeInfo + 1);
      if ( v19 )
      {
        v29.right = x + v20;
        v20 = *(_DWORD *)DisplayModeInfo;
      }
      else
      {
        v29.right = *(_DWORD *)DisplayModeInfo + x;
      }
      v21 = (unsigned int)(y + v20);
      v29.bottom = v21;
      v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v21);
      v22[3] = v4;
      v22[4] = v9;
      v22[5] = a3->x;
      v22[6] = a3->y;
      v22[7] = *((int *)v16 + 7);
      WdLogEvent5_WdEvent(v22);
      ADAPTER_DISPLAY::SetContentRect(v9[266], (unsigned int)v4, &v29);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 3014);
}
