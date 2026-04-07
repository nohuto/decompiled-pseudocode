/*
 * XREFs of ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x180098C74
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180011FA0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180077D80 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008C038 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800989E0 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CPerMonitorDesktopThumbnail@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180098610 (-Create@CPerMonitorDesktopThumbnail@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopThumbnail::GetPerMonitorDesktopThumbnail(
        CDesktopThumbnail *this,
        struct tagRECT *a2,
        struct CPerMonitorDesktopThumbnail **a3)
{
  HMONITOR v5; // rax
  unsigned int v6; // ebx
  HMONITOR v7; // rbp
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  struct CPerMonitorDesktopThumbnail *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // edi
  struct CPerMonitorDesktopThumbnail *v16; // rax
  int v18; // eax
  struct CPerMonitorDesktopThumbnail *v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v19[0] = 0LL;
  *a3 = 0LL;
  v5 = MonitorFromRect(a2, 0);
  v6 = 0;
  v7 = v5;
  if ( !v5 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0xF7u);
    goto LABEL_16;
  }
  v8 = *((_DWORD *)this + 82);
  v9 = 0LL;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v9);
      if ( *(HMONITOR *)(v10 + 64) == v5 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v8 )
        goto LABEL_8;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *a3 = (struct CPerMonitorDesktopThumbnail *)v10;
  }
LABEL_8:
  if ( !*a3 )
  {
    v11 = CPerMonitorDesktopThumbnail::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), v19);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x107u);
      goto LABEL_16;
    }
    v12 = v19[0];
    *((_QWORD *)v19[0] + 3) = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    *((_QWORD *)v12 + 9) = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    *((_QWORD *)v19[0] + 8) = v7;
    v13 = *((_DWORD *)this + 82);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v15 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v6 = -2147024362;
LABEL_22:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x10Au);
      goto LABEL_16;
    }
    v6 = 0;
    if ( v14 > *((_DWORD *)this + 81) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 304, 8u, 1, v19);
      v15 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0xC0u);
      v6 = v15;
      if ( v15 < 0 )
        goto LABEL_22;
    }
    else
    {
      *(struct CPerMonitorDesktopThumbnail **)(*((_QWORD *)this + 38) + 8LL * *((unsigned int *)this + 82)) = v19[0];
      *((_DWORD *)this + 82) = v14;
    }
    v16 = v19[0];
    v19[0] = 0LL;
    *a3 = v16;
  }
LABEL_16:
  if ( v19[0] )
    CBaseObject::Release(v19[0]);
  return v6;
}
