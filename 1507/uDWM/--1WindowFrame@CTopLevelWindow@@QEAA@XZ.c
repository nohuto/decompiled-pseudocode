/*
 * XREFs of ??1WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180045838
 * Callers:
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x180045738 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180015AB8 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180045A38 (--1DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
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
  v2 = (char *)this + 176;
  v3 = 4LL;
  do
  {
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 - 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)v2, 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 64), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v2 + 96), 1);
    v2 += 160;
    --v3;
  }
  while ( v3 );
  v4 = (CBaseObject **)((char *)this + 784);
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
  v8 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 16) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 17);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 17) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 143);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 143) = 0LL;
  }
  v11 = (CTopLevelWindow::WindowFrame *)((char *)this + 784);
  for ( i = 3; i >= 0; --i )
  {
    v11 = (CTopLevelWindow::WindowFrame::DPIImages *)((char *)v11 - 160);
    CTopLevelWindow::WindowFrame::DPIImages::~DPIImages(v11);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 12);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this);
}
