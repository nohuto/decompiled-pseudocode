/*
 * XREFs of ?GetOpacitiesCore@CAtlasedRectsMesh@@MEAAJPEAMI@Z @ 0x18009CB30
 * Callers:
 *     ?GetOpacitiesCore@CAtlasedRectsGroup@@MEAAJPEAMI@Z @ 0x18009D290 (-GetOpacitiesCore@CAtlasedRectsGroup@@MEAAJPEAMI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasedRectsMesh::GetOpacitiesCore(CAtlasedRectsMesh *this, float *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9

  v3 = *((_DWORD *)this + 54);
  v4 = 0;
  if ( a3 < v3 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xE7u);
  }
  else if ( v3 )
  {
    v5 = 0LL;
    v6 = v3;
    do
    {
      a2[v5] = (float)*(unsigned __int8 *)(v5 * 4 + *((_QWORD *)this + 32)) / 255.0;
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  return v4;
}
