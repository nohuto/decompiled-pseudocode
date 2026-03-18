/*
 * XREFs of ?vComputeWtoDAccelFlags@EXFORMOBJ@@QEAAXXZ @ 0x1C000918C
 * Callers:
 *     ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C00091EC (-vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C001AAFC (-bIs16@EFLOAT@@QEAAHXZ.c)
 */

void __fastcall EXFORMOBJ::vComputeWtoDAccelFlags(EXFORMOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // r8
  EFLOAT **v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rdx

  *(_DWORD *)(*(_QWORD *)this + 32LL) = 8;
  v1 = *(_QWORD *)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 24LL) && !*(_DWORD *)(v1 + 28) )
    *(_DWORD *)(v1 + 32) |= 0x40u;
  if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)(*(_QWORD *)this + 4LL)) )
  {
    if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v2 + 8)) )
    {
      *(_DWORD *)(v4 + 32) |= 1u;
      if ( (unsigned int)EFLOAT::bIs16(*v3) )
      {
        if ( (unsigned int)EFLOAT::bIs16((EFLOAT *)(v5 + 12)) )
          *(_DWORD *)(v6 + 32) |= 2u;
      }
    }
  }
}
