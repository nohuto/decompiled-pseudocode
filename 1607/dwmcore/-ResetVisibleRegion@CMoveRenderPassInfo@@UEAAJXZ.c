/*
 * XREFs of ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180130300
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18000B8F0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FEF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180050D9C (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800534B8 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x1801240B4 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x180138934 (-GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180036584 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180169220 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CMoveRenderPassInfo::ResetVisibleRegion(CMoveRenderPassInfo *this)
{
  signed int v2; // ebx
  __int64 v3; // rcx
  void *v4; // rcx
  HRGN RectRgn; // rax
  signed int LastError; // eax
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // r8d

  v2 = 0;
  if ( qword_1801EFD28 )
  {
    if ( CDisplaySet::NeedsDesktopMoves(qword_1801EFD28) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 224LL))(*((_QWORD *)this + 9)) )
      {
        v3 = *(_QWORD *)(*((_QWORD *)this + 8) + 352LL);
        if ( *((_QWORD *)this + 3) != v3 )
        {
          *((_QWORD *)this + 3) = v3;
          v4 = (void *)*((_QWORD *)this + 2);
          if ( v4 )
            DeleteObject(v4);
          *((_QWORD *)this + 2) = *((_QWORD *)this + 1);
          SetLastError(0);
          RectRgn = CreateRectRgn(0, 0, 0, 0);
          *((_QWORD *)this + 1) = RectRgn;
          if ( !RectRgn )
          {
            LastError = GetLastError();
            v2 = LastError;
            if ( LastError > 0 )
              v2 = (unsigned __int16)LastError | 0x80070000;
            if ( v2 >= 0 )
              v2 = CheckGUIHandleQuota(v8, v7, v9);
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x6Cu);
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
