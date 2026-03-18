/*
 * XREFs of ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180116090
 * Callers:
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180048C68 (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004B800 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004CDF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18010DC40 (-PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 *     ?GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x180120934 (-GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18013EC1C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CMoveRenderPassInfo::ResetVisibleRegion(CMoveRenderPassInfo *this)
{
  unsigned int v1; // esi
  __int64 v3; // rdx
  __int64 v4; // r9
  int v5; // edx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  void *v8; // rcx
  HRGN RectRgn; // rax
  signed int LastError; // eax
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // r8d

  v1 = 0;
  if ( qword_1801A39E8 )
  {
    v3 = 0LL;
    if ( *((_DWORD *)qword_1801A39E8 + 18) )
    {
      v4 = *((_QWORD *)qword_1801A39E8 + 6);
      while ( !(unsigned __int8)CDisplay::NeedsDesktopMoves(*(CDisplay **)(v4 + 8 * v3)) )
      {
        v3 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v3 >= v6 )
          return v1;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 216LL))(*((_QWORD *)this + 9)) )
      {
        v7 = *(_QWORD *)(*((_QWORD *)this + 8) + 352LL);
        if ( *((_QWORD *)this + 3) != v7 )
        {
          *((_QWORD *)this + 3) = v7;
          v8 = (void *)*((_QWORD *)this + 2);
          if ( v8 )
            DeleteObject(v8);
          *((_QWORD *)this + 2) = *((_QWORD *)this + 1);
          SetLastError(0);
          RectRgn = CreateRectRgn(0, 0, 0, 0);
          *((_QWORD *)this + 1) = RectRgn;
          if ( !RectRgn )
          {
            LastError = GetLastError();
            v1 = LastError;
            if ( LastError > 0 )
              v1 = (unsigned __int16)LastError | 0x80070000;
            if ( (v1 & 0x80000000) == 0 )
              v1 = CheckGUIHandleQuota(v12, v11, v13);
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x6Cu);
          }
        }
      }
    }
  }
  return v1;
}
