/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVCVisual@@$0A@@@QEAAJI@Z @ 0x18003D0B8
 * Callers:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CVisual *,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // r8

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  else
  {
    v4 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v5 = a2 + 1;
        *(_QWORD *)(v4 + 8LL * a2++) = *(_QWORD *)(v4 + 8 * v5);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  return v3;
}
