/*
 * XREFs of ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0180970
 * Callers:
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0027454 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000D798 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     Template_p @ 0x1C00111E4 (Template_p.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C017AF78 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C0182E70 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::~OUTPUTDUPL_CONTEXT(OUTPUTDUPL_CONTEXT *this, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  void *v5; // rsi
  __int64 v6; // rbp
  _QWORD **v7; // rdi
  __int64 v8; // r14
  _QWORD *v9; // rsi
  AUTOEXPANDALLOCATION *v10; // rcx
  AUTOEXPANDALLOCATION *v11; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  AUTOEXPANDALLOCATION **v14; // rdi
  AUTOEXPANDALLOCATION *v15; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v5 = (void *)*((_QWORD *)this + i + 6);
    if ( v5 )
    {
      DXGDXGIKEYEDMUTEX::~DXGDXGIKEYEDMUTEX(*((DXGDXGIKEYEDMUTEX **)this + i + 6));
      operator delete(v5);
      *((_QWORD *)this + i + 6) = 0LL;
    }
  }
  v6 = 2LL;
  v7 = (_QWORD **)((char *)this + 80);
  v8 = 2LL;
  do
  {
    v9 = *v7;
    if ( *v7 )
    {
      v10 = (AUTOEXPANDALLOCATION *)v9[4];
      if ( v10 )
        AUTOEXPANDALLOCATION::`scalar deleting destructor'(v10);
      v11 = (AUTOEXPANDALLOCATION *)v9[6];
      if ( v11 )
        AUTOEXPANDALLOCATION::`scalar deleting destructor'(v11);
      operator delete(v9);
    }
    *v7 = 0LL;
    v7 += 12;
    --v8;
  }
  while ( v8 );
  if ( *((_DWORD *)this + 76) )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this);
    SessionData = DXGGLOBAL::GetSessionData(Global);
    OUTPUTDUPL_CONTEXT::ReleaseSessionReference(this, SessionData);
    *((_DWORD *)this + 76) = 0;
  }
  v14 = (AUTOEXPANDALLOCATION **)((char *)this + 160);
  do
  {
    v15 = *v14;
    if ( *v14 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(v15);
      *v14 = 0LL;
    }
    v14 += 12;
    --v6;
  }
  while ( v6 );
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_p((__int64)v15, &EventOutputDuplicationDestroy, a3, this);
}
