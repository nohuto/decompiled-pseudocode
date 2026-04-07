/*
 * XREFs of ??1WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180045ACC
 * Callers:
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x1800459C4 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001BA30 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180045D80 (--1DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 */

void __fastcall CTopLevelWindow::WindowFrame::~WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  char *v2; // rdi
  __int64 v3; // rsi
  CBaseObject **v4; // rsi
  __int64 v5; // rbp
  CBaseObject **v6; // rdi
  __int64 v7; // r14
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CTopLevelWindow::WindowFrame::DPIImages *v11; // rdi
  int i; // esi

  CBitmapSourceArray::ReleaseContents(this, 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 32), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 64), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 96), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 128), 1);
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 160), 1);
  v2 = (char *)this + 240;
  v3 = 4LL;
  do
  {
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 - 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)v2, 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 64), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 96), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 128), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 160), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 192), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 224), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 256), 1);
    v2 += 320;
    --v3;
  }
  while ( v3 );
  v4 = (CBaseObject **)((char *)this + 1488);
  v5 = 2LL;
  do
  {
    v6 = v4;
    v7 = 22LL;
    do
    {
      if ( *v6 )
      {
        CBaseObject::Release(*v6);
        *v6 = 0LL;
      }
      v6 += 2;
      --v7;
    }
    while ( v7 );
    ++v4;
    --v5;
  }
  while ( v5 );
  v8 = (CBaseObject *)*((_QWORD *)this + 24);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 24) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 25);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 25) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 231);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 231) = 0LL;
  }
  v11 = (CTopLevelWindow::WindowFrame *)((char *)this + 1488);
  for ( i = 3; i >= 0; --i )
  {
    v11 = (CTopLevelWindow::WindowFrame::DPIImages *)((char *)v11 - 320);
    CTopLevelWindow::WindowFrame::DPIImages::~DPIImages(v11);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 20);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 16);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 12);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this);
}
