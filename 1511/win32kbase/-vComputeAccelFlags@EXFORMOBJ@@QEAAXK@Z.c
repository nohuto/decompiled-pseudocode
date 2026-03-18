/*
 * XREFs of ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C00156F0
 * Callers:
 *     ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C00152D0 (-bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z.c)
 *     GreExtCreateRegion @ 0x1C0074050 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C0015080 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C0015098 (-bIs1@EFLOAT@@QEAAHXZ.c)
 *     ?bIs1Over16@EFLOAT@@QEAAHXZ @ 0x1C00B36C0 (-bIs1Over16@EFLOAT@@QEAAHXZ.c)
 */

void __fastcall EXFORMOBJ::vComputeAccelFlags(EFLOAT **this, int a2)
{
  EFLOAT *v2; // rax
  EFLOAT *v3; // rax
  int v4; // eax
  __int64 v5; // rdx
  EFLOAT *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx

  *((_DWORD *)*this + 8) = a2;
  v2 = *this;
  if ( !*((_DWORD *)*this + 6) && !*((_DWORD *)v2 + 7) )
    *((_DWORD *)v2 + 8) |= 0x40u;
  v3 = *this;
  if ( *((float *)*this + 1) == 0.0 && *((float *)v3 + 2) == 0.0 )
  {
    *((_DWORD *)v3 + 8) |= 1u;
    if ( a2 == 8 )
    {
      if ( *(float *)*this != 16.0 )
        return;
      v4 = EFLOAT::bIs16((EFLOAT *)((char *)*this + 12));
    }
    else
    {
      v6 = *this;
      if ( a2 == 32 )
      {
        if ( !EFLOAT::bIs1(v6) )
          return;
        v4 = EFLOAT::bIs1((EFLOAT *)(v8 + 12));
      }
      else
      {
        if ( !(unsigned int)EFLOAT::bIs1Over16(v6) )
          return;
        v4 = EFLOAT::bIs1Over16((EFLOAT *)(v7 + 12));
      }
    }
    if ( v4 )
      *(_DWORD *)(v5 + 32) |= 2u;
  }
}
