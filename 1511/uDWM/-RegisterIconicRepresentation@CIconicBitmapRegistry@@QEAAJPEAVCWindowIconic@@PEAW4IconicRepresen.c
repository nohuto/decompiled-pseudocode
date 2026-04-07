/*
 * XREFs of ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18003CDB0
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003B778 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800824C4 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18003CCFC (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x18003CE5C (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x1800772B4 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        struct CWindowIconic *a2,
        enum IconicRepresentationType *a3)
{
  __int64 v4; // rsi
  bool v6; // r14
  HWND v8; // r15
  char CanAcceptBitmap; // al
  char v10; // dl
  char v11; // r8
  char v12; // cl

  v4 = *((_QWORD *)a2 + 9);
  v6 = *((_DWORD *)a2 + 4) == 2;
  v8 = *(HWND *)(v4 + 40);
  if ( *((_BYTE *)a2 + 20) )
  {
    if ( *((_QWORD *)this + 12) && *((struct CWindowIconic **)this + 12) != a2 )
      CIconicBitmapRegistry::OnLivePreviewDismissed(this);
    if ( !*((_QWORD *)this + 12) )
    {
      *((_QWORD *)this + 12) = a2;
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    }
    v10 = *((_BYTE *)this + 90);
    CanAcceptBitmap = *(_BYTE *)(v4 + 570) & 1;
    v11 = *((_BYTE *)this + 88);
    v4 = -1LL;
    v12 = *((_BYTE *)this + 89);
  }
  else
  {
    CanAcceptBitmap = CIconicBitmapRegistry::CanAcceptBitmap(this, *((struct CWindowData **)a2 + 9));
    v10 = (*(_BYTE *)(v4 + 570) & 8) != 0;
    v11 = *(_QWORD *)(v4 + 376) != 0LL;
    v12 = (*(_BYTE *)(v4 + 570) & 4) != 0;
  }
  return CIconicBitmapRegistry::_RegisterIconicRepresentation(
           this,
           (struct CWindowData *)v4,
           v8,
           CanAcceptBitmap,
           v10,
           v11,
           v12,
           v6,
           a3);
}
