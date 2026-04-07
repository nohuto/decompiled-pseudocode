/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x18001A6E0
 * Callers:
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x180031AF8 (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180038EAC (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z @ 0x18002AD80 (-Realloc@ProcessHeapImpl@WPF@@UEAAJPEAPEAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowData::SetTitle(CWindowData **this, char *a2, int a3)
{
  void **v3; // rsi
  char *v5; // rbp
  int v6; // edi
  char *v7; // rax
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r8
  signed __int64 v11; // rbx
  __int16 v12; // cx
  unsigned __int64 v14; // r8
  int (*v15)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64); // rax
  int v16; // eax
  unsigned int v17; // ebp
  unsigned __int64 v18; // rdx
  void *(__fastcall *v19)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v20; // rax

  v3 = (void **)(this + 2);
  v5 = (char *)this + 1174;
  v6 = a3 + 1;
  if ( this[2] == (CWindowData *)((char *)this + 1174) )
  {
    if ( v6 > 26 )
    {
      v18 = 2LL * v6;
      v19 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      v20 = v19 == WPF::ProcessHeapImpl::Alloc
          ? WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v18)
          : v19(WPF::g_pProcessHeap, v18);
      *v3 = v20;
      if ( !v20 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1B1Du);
        return 2147942414LL;
      }
    }
  }
  else if ( v6 <= 26 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *v3 = v5;
  }
  else
  {
    v14 = 2LL * v6;
    v15 = *(int (**)(WPF::ProcessHeapImpl *__hidden, void **, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL);
    if ( v15 == WPF::ProcessHeapImpl::Realloc )
      v16 = WPF::ProcessHeapImpl::Realloc(WPF::g_pProcessHeap, v3, v14);
    else
      v16 = ((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, void **, unsigned __int64))v15)(
              WPF::g_pProcessHeap,
              v3,
              v14);
    v17 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1B2Eu);
      return v17;
    }
    if ( !*v3 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1B2Fu);
      return 2147942414LL;
    }
  }
  v7 = (char *)*v3;
  v8 = v6;
  v9 = 0;
  if ( (unsigned __int64)(v8 - 1) > 0x7FFFFFFE )
    v9 = -2147024809;
  if ( v9 < 0 )
  {
    if ( !v8 )
      goto LABEL_13;
  }
  else
  {
    v9 = 0;
    if ( v8 )
    {
      v10 = 2147483646 - v8;
      v11 = a2 - v7;
      while ( v10 + v8 )
      {
        v12 = *(_WORD *)&v7[v11];
        if ( !v12 )
          break;
        *(_WORD *)v7 = v12;
        v7 += 2;
        if ( !--v8 )
          goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      v7 -= 2;
      v9 = -2147024774;
    }
  }
  *(_WORD *)v7 = 0;
LABEL_13:
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1B33u);
  return (unsigned int)v9;
}
