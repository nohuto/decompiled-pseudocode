/*
 * XREFs of ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031E10
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031F30 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001D5D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031848 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032060 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Hide@CAnimatedGlassSheet@@UEAAXXZ @ 0x180083000 (-Hide@CAnimatedGlassSheet@@UEAAXXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18008389C (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800842D8 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::DestroyWindow(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rsi
  int v5; // edi
  CWindowData *v6; // rbp
  void (__fastcall ***v8)(_QWORD, _QWORD); // r14
  __int64 v9; // rbp
  struct CWindowData *v10; // rcx
  struct CWindowData **v11; // rax
  __int64 v12; // rbx
  CWindowData *v13; // rax
  int v14; // eax
  CRippleEffect *v15; // rcx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_3;
  v13 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         1224LL);
  if ( v13 )
    v6 = CWindowData::CWindowData(v13);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x5F8u);
    goto LABEL_21;
  }
  *((_QWORD *)v6 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v6);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v14 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v14;
  if ( v14 >= 0 )
LABEL_3:
    v4 = v6;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x5FCu);
  if ( v5 < 0 )
  {
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x6A2u);
    goto LABEL_6;
  }
  if ( v4 )
  {
    v8 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)v4 + 3);
    if ( v8 )
    {
      (**v8)(*((_QWORD *)v4 + 3), 0LL);
      *((_QWORD *)v4 + 3) = 0LL;
    }
    v9 = *((_QWORD *)v4 + 5);
    if ( (*((_BYTE *)v4 + 568) & 4) == 0 )
    {
      v10 = *(struct CWindowData **)v4;
      v11 = (struct CWindowData **)*((_QWORD *)v4 + 1);
      if ( *(struct CWindowData **)(*(_QWORD *)v4 + 8LL) != v4 || *v11 != v4 )
        __fastfail(3u);
      *v11 = v10;
      *((_QWORD *)v10 + 1) = v11;
      *((_QWORD *)v4 + 1) = v4;
      *(_QWORD *)v4 = v4;
      CWindowList::ImmediateDestroyWindow(this, v4);
    }
    v12 = *((_QWORD *)this + 65);
    if ( v12 && v9 == *(_QWORD *)(v12 + 16) )
    {
      if ( *(_QWORD *)v12 )
      {
        CAnimatedGlassSheet::StopAnimation(*(CAnimatedGlassSheet **)v12);
        CAnimatedGlassSheet::Hide(*(CAnimatedGlassSheet **)v12);
      }
      v15 = *(CRippleEffect **)(v12 + 8);
      if ( v15 )
        CRippleEffect::Stop(v15);
      *(_QWORD *)(v12 + 16) = 0LL;
    }
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v5;
}
