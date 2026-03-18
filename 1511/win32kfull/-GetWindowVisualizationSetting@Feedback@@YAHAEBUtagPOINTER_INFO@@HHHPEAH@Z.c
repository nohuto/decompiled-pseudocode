/*
 * XREFs of ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01DB63C
 * Callers:
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DB1E0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 * Callees:
 *     FeedbackGetWindowSetting @ 0x1C01DBE2C (FeedbackGetWindowSetting.c)
 *     ?GetPointerVisualization@PointerList@@YAHGPEAH@Z @ 0x1C01FC9B0 (-GetPointerVisualization@PointerList@@YAHGPEAH@Z.c)
 *     ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01FCE44 (-SetPointerVisualization@PointerList@@YAHGHPEAHH@Z.c)
 */

__int64 __fastcall Feedback::GetWindowVisualizationSetting(
        Feedback *this,
        const struct tagPOINTER_INFO *a2,
        int *a3,
        int a4,
        _DWORD *a5)
{
  _DWORD *v5; // rsi
  int v6; // eax
  unsigned int PointerVisualization; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int *v12; // r8
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // bx
  unsigned __int16 v15; // bx
  unsigned int v16; // eax
  int v18; // [rsp+20h] [rbp-8h]
  int v19; // [rsp+30h] [rbp+8h] BYREF
  int v20; // [rsp+38h] [rbp+10h] BYREF

  v5 = a5;
  v6 = *((_DWORD *)this + 3);
  PointerVisualization = (_DWORD)a2 == 0;
  v19 = 0;
  *a5 = 0;
  if ( (v6 & 0x10000) != 0 )
  {
    if ( (_DWORD)a3 || a4 )
    {
      PointerVisualization = 1;
      v19 = 1;
    }
    else if ( !(_DWORD)a2 && *(_DWORD *)this == 2 )
    {
      v9 = *((_QWORD *)this + 3);
      v20 = 1;
      if ( v9 )
      {
        v10 = ValidateHwnd(v9);
        if ( v10 )
        {
          if ( (unsigned int)FeedbackGetWindowSetting(v10, 1LL, 1LL, &v20) )
            PointerVisualization = v20;
        }
      }
    }
    v11 = *((unsigned __int16 *)this + 2);
    v12 = &v19;
    v13 = PointerVisualization;
    goto LABEL_14;
  }
  if ( (v6 & 0x40000) != 0 )
  {
    v14 = *((_WORD *)this + 2);
    PointerVisualization = PointerList::GetPointerVisualization((PointerList *)v14, (unsigned __int16)v5, a3);
    LODWORD(v12) = 0;
    v11 = v14;
    v13 = 1;
LABEL_14:
    PointerList::SetPointerVisualization((PointerList *)v11, v13, (int)v12, 0LL, v18);
    return PointerVisualization;
  }
  if ( (v6 & 4) != 0 )
  {
    v15 = *((_WORD *)this + 2);
    v16 = PointerList::GetPointerVisualization((PointerList *)v15, (unsigned __int16)v5, a3);
    PointerVisualization = v16;
    if ( *v5 )
    {
      PointerList::SetPointerVisualization((PointerList *)v15, v16, 0, 0LL, v18);
      if ( PointerVisualization )
        *v5 = 0;
    }
  }
  return PointerVisualization;
}
