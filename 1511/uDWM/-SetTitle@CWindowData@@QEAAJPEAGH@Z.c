/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x18001DB40
 * Callers:
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x1800303DC (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003BAF0 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z @ 0x18002B400 (-Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B4D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowData::SetTitle(CWindowData *this, char *a2, int a3)
{
  char **v3; // r14
  char *v4; // r12
  int v6; // ebp
  char *v7; // rax
  __int64 v8; // rdx
  int v9; // ebx
  signed __int64 v10; // rsi
  __int16 v11; // cx
  int (*v13)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64); // r15
  int v14; // eax
  void *(__fastcall *v15)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r15
  char *v16; // rax

  v3 = (char **)((char *)this + 16);
  v4 = (char *)this + 1166;
  v6 = a3 + 1;
  if ( *((CWindowData **)this + 2) == (CWindowData *)((char *)this + 1166) )
  {
    if ( v6 > 26 )
    {
      v15 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      v16 = v15 == WPF::ProcessHeapImpl::Alloc
          ? (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 2LL * v6)
          : (char *)v15(WPF::g_pProcessHeap, 2LL * v6);
      *v3 = v16;
      if ( !v16 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1F29u);
        return 2147942414LL;
      }
    }
    goto LABEL_3;
  }
  if ( v6 <= 26 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 2));
    *v3 = v4;
    goto LABEL_3;
  }
  v13 = *(int (**)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL);
  if ( v13 == WPF::ProcessHeapImpl::Realloc )
    v14 = WPF::ProcessHeapImpl::Realloc(WPF::g_pProcessHeap, (void **)this + 2, 2LL * v6);
  else
    v14 = ((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, char *, __int64))v13)(
            WPF::g_pProcessHeap,
            (char *)this + 16,
            2LL * v6);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x1F3Bu);
    return (unsigned int)v9;
  }
  if ( *v3 )
  {
LABEL_3:
    v7 = *v3;
    v8 = v6;
    v9 = 0;
    if ( (unsigned __int64)(v6 - 1LL) > 0x7FFFFFFE )
      v9 = -2147024809;
    if ( v9 < 0 )
    {
      if ( !v6 )
      {
LABEL_14:
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1F40u);
        return (unsigned int)v9;
      }
    }
    else
    {
      v9 = 0;
      if ( !v6 )
        goto LABEL_32;
      v10 = a2 - v7;
      while ( 2147483646LL - v6 + v8 )
      {
        v11 = *(_WORD *)&v7[v10];
        if ( !v11 )
          break;
        *(_WORD *)v7 = v11;
        v7 += 2;
        if ( !--v8 )
          goto LABEL_32;
      }
      if ( !v8 )
      {
LABEL_32:
        v7 -= 2;
        v9 = -2147024774;
      }
    }
    *(_WORD *)v7 = 0;
    goto LABEL_14;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1F3Cu);
  return 2147942414LL;
}
