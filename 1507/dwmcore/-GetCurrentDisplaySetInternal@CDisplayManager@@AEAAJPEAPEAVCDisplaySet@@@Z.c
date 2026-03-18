/*
 * XREFs of ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x180054A68
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180022F20 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplayManager::GetCurrentDisplaySetInternal(CDisplayManager *this, struct CDisplaySet **a2)
{
  unsigned int v2; // esi
  volatile signed __int32 *v5; // rax
  struct CDisplaySet *v6; // rbx
  CDisplaySet *v7; // rcx
  int v9; // eax
  struct CDisplaySet *v10; // [rsp+50h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  v11 = (struct _RTL_CRITICAL_SECTION *)this;
  v10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    v10 = (struct CDisplaySet *)*((_QWORD *)this + 7);
    _InterlockedIncrement(v5);
    goto LABEL_3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  v9 = CDisplayManager::DeriveCurrentDisplaySet(this, &v10, 0LL, 0);
  v2 = v9;
  if ( v9 >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ( *((_QWORD *)this + 7) )
    {
      if ( v10 )
        CDisplaySet::Release(v10);
      v6 = (struct CDisplaySet *)*((_QWORD *)this + 7);
      v10 = v6;
    }
    else
    {
      v6 = v10;
      *((_QWORD *)this + 7) = v10;
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
