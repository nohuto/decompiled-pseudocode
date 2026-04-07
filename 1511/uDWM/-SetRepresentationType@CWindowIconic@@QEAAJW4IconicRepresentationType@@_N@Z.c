/*
 * XREFs of ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003B1C0
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003B778 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800824C4 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x18001BAF0 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18003B178 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003B22C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003B48C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003B660 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003BCC8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18007E1C0 (-StartIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x1800822E4 (--0-$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z.c)
 */

__int64 __fastcall CWindowIconic::SetRepresentationType(__int64 a1, int a2, char a3)
{
  int v3; // eax
  unsigned int v4; // esi
  int CentralImage; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 16);
  v4 = 0;
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 != v3 )
  {
    if ( a2 == 1 )
    {
      CentralImage = CBitmapSourceArray::CopyAndAddRef(
                       (CBitmapSourceArray *)(a1 + 32),
                       (const struct CBitmapSourceArray *)&CWindowIconic::s_rgpBitmapPendingImages);
      v4 = CentralImage;
      if ( CentralImage < 0 )
      {
        v12 = 703;
        goto LABEL_26;
      }
      v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
             WPF::g_pProcessHeap,
             80LL);
      if ( v9 )
        v9 = CTimeline<unsigned int>::CTimeline<unsigned int>(v9, v10, v11, *(unsigned int *)(a1 + 56));
      *(_QWORD *)(a1 + 64) = v9;
      if ( !v9 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x2C1u);
        return v4;
      }
      CTopLevelWindow::StartIconicAnimation(*(CTopLevelWindow **)(a1 + 88));
    }
    else if ( v3 == 1 )
    {
      CWindowIconic::CleanupAnimationResources((CTopLevelWindow **)a1);
    }
    if ( !a3 )
      return v4;
    CentralImage = CWindowIconic::OnWindowStyleUpdated((CWindowIconic *)a1, 0);
    v4 = CentralImage;
    if ( CentralImage >= 0 )
    {
      CentralImage = CWindowIconic::LoadCentralImage((CWindowIconic *)a1);
      v4 = CentralImage;
      if ( CentralImage >= 0 )
      {
        CentralImage = CWindowIconic::UpdateSizeOrMargins((CWindowIconic *)a1, 1);
        v4 = CentralImage;
        if ( CentralImage >= 0 )
        {
          CentralImage = CWindowIconic::UpdateClientArea((CWindowIconic *)a1);
          v4 = CentralImage;
          if ( CentralImage >= 0 )
          {
            CentralImage = CVisual::RenderRecursive(*(CVisual **)(a1 + 88));
            v4 = CentralImage;
            if ( CentralImage >= 0 )
            {
              CentralImage = CVisual::RenderRecursive(*(CVisual **)(a1 + 104));
              v4 = CentralImage;
              if ( CentralImage >= 0 )
                return v4;
              v12 = 723;
            }
            else
            {
              v12 = 722;
            }
          }
          else
          {
            v12 = 719;
          }
        }
        else
        {
          v12 = 718;
        }
      }
      else
      {
        v12 = 717;
      }
    }
    else
    {
      v12 = 716;
    }
LABEL_26:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, CentralImage, v12);
  }
  return v4;
}
