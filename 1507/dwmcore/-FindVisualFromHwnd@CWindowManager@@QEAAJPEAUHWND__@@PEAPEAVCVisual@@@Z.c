/*
 * XREFs of ?FindVisualFromHwnd@CWindowManager@@QEAAJPEAUHWND__@@PEAPEAVCVisual@@@Z @ 0x18000CFBC
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18000A1B0 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800396B0 (-PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x18005C6EC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowManager::FindVisualFromHwnd(CWindowManager *this, unsigned __int64 a2, struct CVisual **a3)
{
  int Entry; // eax
  unsigned int v5; // ebx
  struct CVisual *v6; // rcx
  struct CWindowAssociationMapEntry *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    Entry = CWindowManager::FindEntry(this, a2, &v8);
    v5 = Entry;
    if ( Entry < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016AB2C, 1u, Entry, 0x200u);
    }
    else
    {
      v6 = (struct CVisual *)*((_QWORD *)v8 + 1);
      if ( v6 )
        *a3 = v6;
      else
        return (unsigned int)-2147023728;
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v5;
}
