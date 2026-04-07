/*
 * XREFs of ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x180088C6C
 * Callers:
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x180088BA4 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180020C8C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180020CC0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180039B20 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800487C8 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTextTetherVisual::_UpdateHandleInstructions(CTextTetherVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebp
  int v4; // eax
  CContactManager *v5; // rcx
  int v6; // eax
  int v7; // edx
  int v8; // esi
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = CImage::SetBitmapSource(*((CImage **)this + 48), *((struct CBitmapSource **)this + 47));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CImage::SetBitmapSource(*((CImage **)this + 50), *((struct CBitmapSource **)this + 49));
    v3 = v4;
    if ( v4 >= 0 )
    {
      v6 = *((_DWORD *)this + 81) - *((_DWORD *)this + 79);
      if ( v6 < 0 )
        v6 = 0;
      v7 = *((_DWORD *)this + 82) - *((_DWORD *)this + 80);
      if ( v7 < 0 )
        v7 = 0;
      if ( v6 > v7 )
        v7 = v6;
      v8 = (int)(CContactManager::GetBoundedContactWidth(v5, v7, *(struct tagPOINT *)((char *)this + 308))
               * *((_DWORD *)this + 75))
         / 100;
      v14 = *(_QWORD *)((char *)this + 332);
      v9 = v14 - v8 / 2;
      v10 = HIDWORD(v14) - v8 / 2;
      CVisual::SetInsetFromParentLeft(*((CVisual **)this + 48), v9);
      CVisual::SetInsetFromParentTop(*((CVisual **)this + 48), v10);
      v11 = *((_QWORD *)this + 48);
      LODWORD(v14) = v8;
      HIDWORD(v14) = v8;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 80LL))(v11, &v14);
      CVisual::SetInsetFromParentLeft(*((CVisual **)this + 50), v9);
      CVisual::SetInsetFromParentTop(*((CVisual **)this + 50), v10);
      v12 = *((_QWORD *)this + 50);
      LODWORD(v14) = v8;
      HIDWORD(v14) = v8;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 80LL))(v12, &v14);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x85u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x84u);
  }
  return v3;
}
