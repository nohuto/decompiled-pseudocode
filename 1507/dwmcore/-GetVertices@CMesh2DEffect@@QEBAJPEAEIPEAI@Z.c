/*
 * XREFs of ?GetVertices@CMesh2DEffect@@QEBAJPEAEIPEAI@Z @ 0x18015B208
 * Callers:
 *     ??$BlobGetter@P8CMesh2DEffect@@EBAJPEAEIPEAI@Z$H?GetVertices@1@QEBAJ0I1@ZA@UID2D1EffectImpl@@@@YAJPEBUIUnknown@@PEAEIPEAI@Z @ 0x18015AB80 (--$BlobGetter@P8CMesh2DEffect@@EBAJPEAEIPEAI@Z$H-GetVertices@1@QEBAJ0I1@ZA@UID2D1EffectImpl@@@@Y.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CMesh2DEffect::GetVertices(
        CMesh2DEffect *this,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  size_t v5; // rax
  int v8; // eax
  unsigned int v9; // ecx
  size_t v10; // r8

  v4 = 0;
  v5 = a3;
  if ( a2 )
  {
    v9 = *((_DWORD *)this + 41);
    v10 = 32LL * v9;
    if ( v5 < v10 )
    {
      *a4 = 0;
      v4 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1CBu);
      return v4;
    }
    if ( v9 )
      memcpy_0(a2, *((const void **)this + 21), v10);
    v8 = *((_DWORD *)this + 41);
  }
  else
  {
    v8 = *((_DWORD *)this + 41);
  }
  *a4 = 32 * v8;
  return v4;
}
