/*
 * XREFs of ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18006F600
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180037290 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 * Callees:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CDisplayManager::GetCurrentDisplaySetInternal(
        volatile signed __int32 **this,
        struct CDisplaySet **a2)
{
  unsigned int v2; // esi
  volatile signed __int32 *v5; // rax
  struct CDisplaySet *v6; // rbx
  CDisplaySet *v7; // rcx
  int v9; // eax
  struct CDisplaySet *v10; // [rsp+50h] [rbp+20h] BYREF
  CDisplayManager *v11; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  v11 = (CDisplayManager *)this;
  v10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  v5 = this[7];
  if ( v5 )
  {
    v10 = (struct CDisplaySet *)this[7];
    _InterlockedIncrement(v5);
    goto LABEL_3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  v9 = CDisplayManager::DeriveCurrentDisplaySet((CDisplayManager *)this, &v10, 0LL, 0);
  v2 = v9;
  if ( v9 >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ( this[7] )
    {
      if ( v10 )
        CDisplaySet::Release(v10);
      v6 = (struct CDisplaySet *)this[7];
      v10 = v6;
    }
    else
    {
      v6 = v10;
      this[7] = (volatile signed __int32 *)v10;
    }
    if ( !v6 )
      goto LABEL_4;
    _InterlockedIncrement((volatile signed __int32 *)v6);
LABEL_3:
    v6 = v10;
LABEL_4:
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    v7 = 0LL;
    *a2 = v6;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xDEu);
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  v7 = v10;
LABEL_5:
  if ( v7 )
    CDisplaySet::Release(v7);
  return v2;
}
