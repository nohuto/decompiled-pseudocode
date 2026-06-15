/*
 * XREFs of ?Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG@Z @ 0x1800A41EC
 * Callers:
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x1800A4018 (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800323E0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
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
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Eu,
        (__int64)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
        v2);
    }
  }
  return (unsigned int)v2;
}
