/*
 * XREFs of ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x180046E58
 * Callers:
 *     ??_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z @ 0x180046E00 (--_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800190F0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x18004714C (--1DPIImages@WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 */

void __fastcall CTopLevelWindow::WindowFrame::~WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  char *v2; // r12
  char *v3; // r13
  __int64 v4; // r15
  char *v5; // rdi
  __int64 v6; // rsi
  CBaseObject **v7; // rsi
  __int64 v8; // r14
  CBaseObject **v9; // rdi
  __int64 v10; // rbp
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CTopLevelWindow::WindowFrame::DPIImages *v14; // rbx
  char *v15; // [rsp+70h] [rbp+8h]
  char *v16; // [rsp+78h] [rbp+10h]
  char *v17; // [rsp+80h] [rbp+18h]
  char *v18; // [rsp+88h] [rbp+20h]

  v2 = (char *)this + 8;
  *(_QWORD *)this = &CTopLevelWindow::WindowFrame::`vftable';
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 8), 1);
  v3 = (char *)this + 40;
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 40), 1);
  v18 = (char *)this + 72;
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 72), 1);
  v17 = (char *)this + 104;
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 104), 1);
  v16 = (char *)this + 136;
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 136), 1);
  v15 = (char *)this + 168;
  CBitmapSourceArray::ReleaseContents((CTopLevelWindow::WindowFrame *)((char *)this + 168), 1);
  v4 = 4LL;
  v5 = (char *)this + 248;
  v6 = 4LL;
  do
  {
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v5 - 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)v5, 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v5 + 32), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v5 + 64), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v5 + 96), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v5 + 128), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v5 + 160), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v5 + 192), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v5 + 224), 1);
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(v5 + 256), 1);
    v5 += 320;
    --v6;
  }
  while ( v6 );
  v7 = (CBaseObject **)((char *)this + 1496);
  v8 = 2LL;
  do
  {
    v9 = v7;
    v10 = 22LL;
    do
    {
      if ( *v9 )
      {
        CBaseObject::Release(*v9);
        *v9 = 0LL;
      }
      v9 += 2;
      --v10;
    }
    while ( v10 );
    ++v7;
    --v8;
  }
  while ( v8 );
  v11 = (CBaseObject *)*((_QWORD *)this + 25);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 25) = 0LL;
  }
  v12 = (CBaseObject *)*((_QWORD *)this + 26);
  if ( v12 )
  {
    CBaseObject::Release(v12);
    *((_QWORD *)this + 26) = 0LL;
  }
  v13 = (CBaseObject *)*((_QWORD *)this + 232);
  if ( v13 )
  {
    CBaseObject::Release(v13);
    *((_QWORD *)this + 232) = 0LL;
  }
  v14 = (CTopLevelWindow::WindowFrame *)((char *)this + 1496);
  do
  {
    v14 = (CTopLevelWindow::WindowFrame::DPIImages *)((char *)v14 - 320);
    CTopLevelWindow::WindowFrame::DPIImages::~DPIImages(v14);
    --v4;
  }
  while ( v4 );
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v15);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v16);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v17);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v18);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v3);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v2);
}
