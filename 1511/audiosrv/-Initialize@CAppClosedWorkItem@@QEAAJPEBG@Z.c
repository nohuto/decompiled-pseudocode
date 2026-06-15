/*
 * XREFs of ?Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z @ 0x18000281C
 * Callers:
 *     ?CreateInstance@CAppClosedWorkItem@@SAJPEBGKPEAPEAVIPBMWorkItem@@@Z @ 0x1800026C8 (-CreateInstance@CAppClosedWorkItem@@SAJPEBGKPEAPEAVIPBMWorkItem@@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800323E0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CAppClosedWorkItem::Initialize(CAppClosedWorkItem *this, const unsigned __int16 *a2)
{
  int v2; // ebx
  int v3; // ecx
  __int64 v4; // r9

  v2 = 0;
  if ( a2 )
  {
    v3 = (_DWORD)this + 8;
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v2 = _AllocStringWorker<CTCoAllocPolicy>(v3, (_DWORD)a2, (_DWORD)a2, v4);
    if ( v2 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        33LL,
        &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
        (unsigned int)v2);
    }
  }
  return (unsigned int)v2;
}
