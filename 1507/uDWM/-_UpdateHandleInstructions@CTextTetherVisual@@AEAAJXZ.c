/*
 * XREFs of ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x180083FAC
 * Callers:
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x180083AF8 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180012700 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18001C938 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18001C978 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800476DC (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTextTetherVisual::_UpdateHandleInstructions(CTextTetherVisual *this)
{
  int v2; // eax
  unsigned int v3; // r15d
  int v4; // eax
  CContactManager *v5; // rcx
  int v6; // eax
  int v7; // edx
  int v8; // r14d
  int v9; // esi
  int v10; // ebp
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = CImage::SetBitmapSource(*((CImage **)this + 54), *((struct CBitmapSource **)this + 53));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CImage::SetBitmapSource(*((CImage **)this + 56), *((struct CBitmapSource **)this + 55));
    v3 = v4;
    if ( v4 >= 0 )
    {
      v6 = *((_DWORD *)this + 82) - *((_DWORD *)this + 80);
      if ( v6 < 0 )
        v6 = 0;
      v7 = *((_DWORD *)this + 83) - *((_DWORD *)this + 81);
      if ( v7 < 0 )
        v7 = 0;
      if ( v6 > v7 )
        v7 = v6;
      v8 = (int)(CContactManager::GetBoundedContactWidth(v5, v7, *(struct tagPOINT *)((char *)this + 312))
               * *((_DWORD *)this + 76))
         / 100;
      v14 = *((_QWORD *)this + 42);
      v9 = v14 - v8 / 2;
      v10 = HIDWORD(v14) - v8 / 2;
      CVisual::SetInsetFromParentLeft(*((CVisual **)this + 54), v9);
      CVisual::SetInsetFromParentTop(*((CVisual **)this + 54), v10);
      v11 = *((_QWORD *)this + 54);
      LODWORD(v14) = v8;
      HIDWORD(v14) = v8;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 80LL))(v11, &v14);
      CVisual::SetInsetFromParentLeft(*((CVisual **)this + 56), v9);
      CVisual::SetInsetFromParentTop(*((CVisual **)this + 56), v10);
      v12 = *((_QWORD *)this + 56);
      LODWORD(v14) = v8;
      HIDWORD(v14) = v8;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 80LL))(v12, &v14);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x9Du);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x9Cu);
  }
  return v3;
}
