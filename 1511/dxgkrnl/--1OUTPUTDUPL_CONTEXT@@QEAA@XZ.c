/*
 * XREFs of ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C015B014
 * Callers:
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0020934 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000C10C (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     Template_p @ 0x1C0010C14 (Template_p.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C0156498 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C01591FC (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::~OUTPUTDUPL_CONTEXT(OUTPUTDUPL_CONTEXT *this, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  void *v5; // rsi
  __int64 v6; // r14
  _QWORD **v7; // rdi
  __int64 v8; // rbp
  _QWORD *v9; // rsi
  AUTOEXPANDALLOCATION *v10; // rcx
  AUTOEXPANDALLOCATION *v11; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct DXGFASTMUTEX *const *v16; // rcx
  AUTOEXPANDALLOCATION **v17; // rdi
  AUTOEXPANDALLOCATION *v18; // rcx

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
    if ( SessionData )
    {
      v16 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionData + 1);
      if ( v16 )
      {
        OUTPUTDUPL_SESSION_MGR::Release(v16, *((struct _EPROCESS **)this + 3));
        goto LABEL_20;
      }
      v15 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v15 + 24) = 1356LL;
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = 1349LL;
    }
    WdLogEvent5_WdError(v15);
LABEL_20:
    *((_DWORD *)this + 76) = 0;
  }
  v17 = (AUTOEXPANDALLOCATION **)((char *)this + 160);
  do
  {
    v18 = *v17;
    if ( *v17 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(v18);
      *v17 = 0LL;
    }
    v17 += 12;
    --v6;
  }
  while ( v6 );
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_p((__int64)v18, &EventOutputDuplicationDestroy, a3, this);
}
