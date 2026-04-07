/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x1800182C0
 * Callers:
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x18002D370 (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003AB34 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z @ 0x180028400 (-Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800284D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
  void *(__fastcall *v13)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r15
  char *v14; // rax
  int (*v15)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64); // r15
  int v16; // eax

  v3 = (char **)((char *)this + 16);
  v4 = (char *)this + 1158;
  v6 = a3 + 1;
  if ( *((CWindowData **)this + 2) != (CWindowData *)((char *)this + 1158) )
  {
    if ( v6 <= 26 )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 2));
      *v3 = v4;
    }
    else
    {
      v15 = *(int (**)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL);
      if ( v15 == WPF::ProcessHeapImpl::Realloc )
        v16 = WPF::ProcessHeapImpl::Realloc(WPF::g_pProcessHeap, (void **)this + 2, 2LL * v6);
      else
        v16 = ((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, char *, __int64))v15)(
                WPF::g_pProcessHeap,
                (char *)this + 16,
                2LL * v6);
      v9 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x1F47u);
        return (unsigned int)v9;
      }
      if ( !*v3 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1F48u);
        return 2147942414LL;
      }
    }
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1F4Cu);
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
  if ( v6 <= 26 )
    goto LABEL_3;
  v13 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  v14 = v13 == WPF::ProcessHeapImpl::Alloc
      ? (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 2LL * v6)
      : (char *)v13(WPF::g_pProcessHeap, 2LL * v6);
  *v3 = v14;
  if ( v14 )
    goto LABEL_3;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1F35u);
  return 2147942414LL;
}
