/*
 * XREFs of ?Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z @ 0x180003C6C
 * Callers:
 *     ?CreateInstance@CAppClosedWorkItem@@SAJPEBGKPEAPEAVIPBMWorkItem@@@Z @ 0x180003CBC (-CreateInstance@CAppClosedWorkItem@@SAJPEBGKPEAPEAVIPBMWorkItem@@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002C920 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
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
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        33LL,
        &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
        (unsigned int)v2);
    }
  }
  return (unsigned int)v2;
}
