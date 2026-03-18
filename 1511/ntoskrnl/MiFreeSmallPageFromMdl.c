/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x140011524
 * Callers:
 *     MiFreePagesFromMdl @ 0x140011298 (MiFreePagesFromMdl.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 */

__int64 __fastcall MiFreeSmallPageFromMdl(unsigned __int64 a1, char a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r10
  __int64 v6; // rdi
  unsigned __int8 v7; // bp
  bool v8; // zf
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  volatile signed __int32 *v12; // r8
  int v13; // eax
  int v14; // r10d
  unsigned __int64 v15; // rcx

  v2 = 48 * a1 - 0x58000000000LL;
  v3 = a1 >> 9;
  v6 = 1LL;
  if ( !_bittest64((const signed __int64 *)qword_1402FF6E8, a1 >> 9) )
    goto LABEL_2;
  v10 = (a1 >> 9) & 0x1F;
  LOBYTE(v11) = 1;
  v12 = (volatile signed __int32 *)(qword_1402FF6E8 + 4 * (a1 >> 14));
  if ( (unsigned __int64)(v10 + 1) <= 0x20 )
  {
    v13 = 1 << v10;
LABEL_16:
    _InterlockedAnd(v12, ~v13);
    goto LABEL_2;
  }
  if ( (v3 & 0x1F) == 0 )
    goto LABEL_15;
  v14 = v3 & 0x1F;
  _InterlockedAnd(v12++, ~(((1 << (32 - v14)) - 1) << v10));
  v11 = 1LL - (unsigned int)(32 - v14);
  if ( v11 >= 0x20 )
  {
    v15 = v11 >> 5;
    v11 += -32LL * (v11 >> 5);
    do
    {
      *v12++ = 0;
      --v15;
    }
    while ( v15 );
  }
  if ( v11 )
  {
LABEL_15:
    v13 = (1 << v11) - 1;
    goto LABEL_16;
  }
LABEL_2:
  v7 = MiLockPageInline(v2);
  if ( (a2 & 1) != 0 )
    *(_QWORD *)(v2 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
  v8 = *(_WORD *)(v2 + 32) == 2;
  *(_WORD *)(v2 + 32) -= 2;
  if ( v8 )
  {
    MiPfnReferenceCountIsZero(v2, a1);
  }
  else
  {
    *(_BYTE *)(v2 + 34) |= 7u;
    v6 = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v7);
  return v6;
}
