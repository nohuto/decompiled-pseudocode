/*
 * XREFs of ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0156CFC
 * Callers:
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0020A40 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000CBB8 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     Template_p @ 0x1C001F9FC (Template_p.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C01521F8 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0154F18 (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::~OUTPUTDUPL_CONTEXT(OUTPUTDUPL_CONTEXT *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdi
  void *v6; // rsi
  __int64 v7; // r14
  _QWORD **v8; // rdi
  __int64 v9; // rbp
  _QWORD *v10; // rsi
  AUTOEXPANDALLOCATION *v11; // rcx
  AUTOEXPANDALLOCATION *v12; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGFASTMUTEX *const *v20; // rcx
  AUTOEXPANDALLOCATION **v21; // rdi
  AUTOEXPANDALLOCATION *v22; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v6 = (void *)*((_QWORD *)this + i + 6);
    if ( v6 )
    {
      DXGDXGIKEYEDMUTEX::~DXGDXGIKEYEDMUTEX(*((DXGDXGIKEYEDMUTEX **)this + i + 6));
      operator delete(v6);
      *((_QWORD *)this + i + 6) = 0LL;
    }
  }
  v7 = 2LL;
  v8 = (_QWORD **)((char *)this + 80);
  v9 = 2LL;
  do
  {
    v10 = *v8;
    if ( *v8 )
    {
      v11 = (AUTOEXPANDALLOCATION *)v10[4];
      if ( v11 )
        AUTOEXPANDALLOCATION::`scalar deleting destructor'(v11);
      v12 = (AUTOEXPANDALLOCATION *)v10[6];
      if ( v12 )
        AUTOEXPANDALLOCATION::`scalar deleting destructor'(v12);
      operator delete(v10);
    }
    *v8 = 0LL;
    v8 += 12;
    --v9;
  }
  while ( v9 );
  if ( *((_DWORD *)this + 76) )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
    SessionData = DXGGLOBAL::GetSessionData(Global, v14, v15, v16);
    if ( SessionData )
    {
      v20 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionData + 1);
      if ( v20 )
      {
        OUTPUTDUPL_SESSION_MGR::Release(v20, *((struct _EPROCESS **)this + 3));
        goto LABEL_20;
      }
      v19 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v19 + 24) = 1356LL;
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v19 + 24) = 1349LL;
    }
    WdLogEvent5_WdError(v19);
LABEL_20:
    *((_DWORD *)this + 76) = 0;
  }
  v21 = (AUTOEXPANDALLOCATION **)((char *)this + 160);
  do
  {
    v22 = *v21;
    if ( *v21 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(v22);
      *v21 = 0LL;
    }
    v21 += 12;
    --v7;
  }
  while ( v7 );
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_p((__int64)v22, &EventOutputDuplicationDestroy, a3, this);
}
