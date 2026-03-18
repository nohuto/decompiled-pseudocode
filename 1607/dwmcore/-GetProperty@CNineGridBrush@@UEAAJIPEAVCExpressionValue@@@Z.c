/*
 * XREFs of ?GetProperty@CNineGridBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18013FB90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x18013FDE4 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 */

__int64 __fastcall CNineGridBrush::GetProperty(CNineGridBrush *this, unsigned int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  float *InsetFieldPointer; // rax
  __int64 v5; // r8

  v3 = 0;
  InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(this, a2);
  if ( InsetFieldPointer )
  {
    *(float *)v5 = *InsetFieldPointer;
    *(_DWORD *)(v5 + 64) = 18;
    *(_BYTE *)(v5 + 68) = 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xBAu);
  }
  return v3;
}
