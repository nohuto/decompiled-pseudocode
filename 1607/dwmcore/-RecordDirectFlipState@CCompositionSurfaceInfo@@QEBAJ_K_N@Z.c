/*
 * XREFs of ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x180152670
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x18012C870 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x18012CCF0 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::RecordDirectFlipState(CCompositionSurfaceInfo *this, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v3 = 0;
  v4 = NtSetCompositionSurfaceDirectFlipState(*((_QWORD *)this + 4), &v6, a3 == 1);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4 | 0x10000000, 0x101u);
  }
  return v3;
}
