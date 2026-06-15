/*
 * XREFs of ?Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG@Z @ 0x1800A6DC0
 * Callers:
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x1800A6CD8 (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002C920 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CTransportControlRouterWorkItem::Initialize(
        CTransportControlRouterWorkItem *this,
        unsigned __int16 *a2)
{
  int v2; // ebx
  char **v3; // rcx
  unsigned __int64 v4; // r9
  __int64 v6; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    v3 = (char **)((char *)this + 16);
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v2 = _AllocStringWorker<CTCoAllocPolicy>((__int64)v3, (__int64)a2, (__int16 *)a2, v4, v6, v3);
    if ( v2 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Eu,
        (__int64)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
        v2);
    }
  }
  return (unsigned int)v2;
}
