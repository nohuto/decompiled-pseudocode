/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x1400E3044
 * Callers:
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiFreeSmallPageFromMdl(unsigned __int64 a1, char a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r10
  __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v8; // esi
  bool v9; // zf
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  volatile signed __int32 *v13; // r8
  int v14; // eax
  int v15; // r10d
  unsigned __int64 v16; // rcx

  v2 = 48 * a1 - 0x58000000000LL;
  v3 = a1 >> 9;
  v6 = 1LL;
  if ( !_bittest64((const signed __int64 *)qword_14034FBA8[0], a1 >> 9) )
    goto LABEL_2;
  v11 = (a1 >> 9) & 0x1F;
  LOBYTE(v12) = 1;
  v13 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (a1 >> 14));
  if ( (unsigned __int64)(v11 + 1) <= 0x20 )
  {
    v14 = 1 << v11;
LABEL_18:
    _InterlockedAnd(v13, ~v14);
    goto LABEL_2;
  }
  if ( (v3 & 0x1F) == 0 )
    goto LABEL_17;
  v15 = v3 & 0x1F;
  _InterlockedAnd(v13++, ~(((1 << (32 - v15)) - 1) << v11));
  v12 = 1LL - (unsigned int)(32 - v15);
  if ( v12 >= 0x20 )
  {
    v16 = v12 >> 5;
    v12 += -32LL * (v12 >> 5);
    do
    {
      *v13++ = 0;
      --v16;
    }
    while ( v16 );
  }
  if ( v12 )
  {
LABEL_17:
    v14 = (1 << v12) - 1;
    goto LABEL_18;
  }
LABEL_2:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    while ( *(__int64 *)(v2 + 24) < 0 );
  }
  if ( (a2 & 1) != 0 )
    *(_QWORD *)(v2 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
  v9 = *(_WORD *)(v2 + 32) == 2;
  *(_WORD *)(v2 + 32) -= 2;
  if ( v9 )
  {
    MiPfnReferenceCountIsZero(v2, a1);
  }
  else
  {
    *(_BYTE *)(v2 + 34) |= 7u;
    v6 = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v6;
}
