/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1401F04C0
 * Callers:
 *     xxxDrawScrollBar @ 0x1401F0344 (xxxDrawScrollBar.c)
 * Callees:
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     DrawFrameControl @ 0x140125D60 (DrawFrameControl.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     GreGetTextColor @ 0x1401F0918 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1401F0964 (GreGetBkColor.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x1401F09B0 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qlDddddddddd @ 0x1402F677C (WPP_RECORDER_AND_TRACE_SF_qlDddddddddd.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, unsigned int a5)
{
  int v6; // eax
  int v8; // ebx
  int v11; // r15d
  unsigned int DpiForSystem; // eax
  int TextColor; // eax
  __int64 v14; // r9
  struct tagRECT *p_top; // rdx
  struct tagRECT *v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rcx
  char v19; // al
  LONG bottom; // r12d
  LONG right; // r13d
  __int64 v22; // rsi
  unsigned int v23; // eax
  LONG v24; // ebx
  __int64 v25; // rbx
  unsigned int v26; // eax
  unsigned int v27; // r9d
  __int64 v28; // rax
  LONG top; // edx
  int v30; // r8d
  char v31; // [rsp+A0h] [rbp-41h]
  char v32; // [rsp+A1h] [rbp-40h]
  struct tagRECT v33; // [rsp+B0h] [rbp-31h] BYREF
  int DpiDependentMetric; // [rsp+C0h] [rbp-21h]
  int v35; // [rsp+C4h] [rbp-1Dh]
  int v36; // [rsp+C8h] [rbp-19h]
  int BkColor; // [rsp+CCh] [rbp-15h]
  int v38; // [rsp+D0h] [rbp-11h]
  struct tagWND *v39; // [rsp+D8h] [rbp-9h]
  __int64 v40; // [rsp+E0h] [rbp-1h]
  HBRUSH v41; // [rsp+E8h] [rbp+7h]
  struct tagSBCALC *v42; // [rsp+F0h] [rbp+Fh]

  v6 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4);
  v42 = a2;
  v39 = a1;
  v8 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v35 = a4;
  v36 = v8;
  v11 = v6 / 2;
  v33 = 0LL;
  if ( v6 / 2 > 0 && v8 > 0 )
  {
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(11 - (unsigned int)(a4 != 0), DpiForSystem);
    BkColor = GreGetBkColor(a3);
    TextColor = GreGetTextColor(a3);
    v14 = *(_QWORD *)a1;
    v38 = TextColor;
    v41 = (HBRUSH)xxxDefWindowProc((struct tagTHREADINFO **)a1, 0x137u, (__int64)a3, v14);
    p_top = (struct tagRECT *)&v33.top;
    v16 = &v33;
    if ( v11 > DpiDependentMetric )
      v11 = DpiDependentMetric;
    if ( !a4 )
    {
      p_top = &v33;
      v16 = (struct tagRECT *)&v33.top;
    }
    v16->left = *((_DWORD *)a2 + 6);
    p_top->left = *((_DWORD *)a2 + 4);
    v16->right = *((_DWORD *)a2 + 7);
    p_top->right = *((_DWORD *)a2 + 5);
    UserSessionState = W32GetUserSessionState(v16, p_top);
    v40 = GreSelectBrush(a3, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4840LL));
    LOBYTE(v18) = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    v32 = v18;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v19 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v19 = 0;
    }
    bottom = v33.bottom;
    right = v33.right;
    v22 = *(_QWORD *)&v33.left;
    v31 = v19;
    if ( (_BYTE)v18 || v19 )
    {
      v28 = W32GetUserSessionState(v18, WPP_GLOBAL_Control);
      top = v33.top;
      v30 = DpiDependentMetric;
      LOBYTE(v30) = v31;
      LOBYTE(top) = v32;
      WPP_RECORDER_AND_TRACE_SF_qlDddddddddd(*((_QWORD *)WPP_GLOBAL_Control + 3), top, v30, *(_QWORD *)(v28 + 69152));
      v8 = v36;
    }
    if ( v35 )
    {
      if ( v11 == DpiDependentMetric )
      {
        v26 = GetDpiForSystem();
        if ( v8 == (unsigned int)GetDpiDependentMetric(0, v26) )
        {
          BitBltSysBmp(a3, v22, v33.top, (a5 & 1) != 0 ? 49 : 46, 1);
          BitBltSysBmp(a3, v22, bottom - v11, (a5 & 2) != 0 ? 53 : 50, 1);
          goto LABEL_17;
        }
      }
      v33.bottom = v11 + HIDWORD(v22);
      DrawFrameControl(a3, &v33, 3, (a5 & 1) << 8);
      v33.bottom = bottom;
      v27 = ((a5 & 2) << 7) | 1;
      v33.top = bottom - v11;
    }
    else
    {
      if ( v11 == DpiDependentMetric )
      {
        v23 = GetDpiForSystem();
        if ( v8 == (unsigned int)GetDpiDependentMetric(1, v23) )
        {
          v24 = v33.top;
          BitBltSysBmp(a3, v22, v33.top, (a5 & 1) != 0 ? 61 : 58, 1);
          BitBltSysBmp(a3, right - v11, v24, (a5 & 2) != 0 ? 57 : 54, 1);
LABEL_17:
          v25 = GreSelectBrush(a3, v40);
          DrawThumb2(v39, v42, a3, v41, v35, a5);
          GreSelectBrush(a3, v25);
          GreSetBkColor(a3, BkColor);
          GreSetTextColor(a3, v38);
          return;
        }
      }
      v33.right = v22 + v11;
      DrawFrameControl(a3, &v33, 3, ((a5 & 1) << 8) | 2);
      v33.right = right;
      v27 = ((a5 & 2) << 7) | 3;
      v33.left = right - v11;
    }
    DrawFrameControl(a3, &v33, 3, v27);
    goto LABEL_17;
  }
}
