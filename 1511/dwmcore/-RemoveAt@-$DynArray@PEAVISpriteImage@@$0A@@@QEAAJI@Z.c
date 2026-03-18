/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z @ 0x180123D78
 * Callers:
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180062EA0 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<ISpriteImage *,0>::RemoveAt(__int64 *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // r8

  v1 = *((_DWORD *)a1 + 6);
  v2 = 0;
  if ( v1 )
  {
    v3 = *a1;
    v4 = 0LL;
    if ( v1 != 1 )
    {
      do
      {
        v5 = (unsigned int)(v4 + 1);
        *(_QWORD *)(v3 + 8 * v4) = *(_QWORD *)(v3 + 8 * v5);
        v4 = v5;
      }
      while ( (unsigned int)v5 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
  }
  return v2;
}
