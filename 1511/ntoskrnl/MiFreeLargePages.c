/*
 * XREFs of MiFreeLargePages @ 0x1401E1EA8
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiFreeLargePageMemory @ 0x1400BDF60 (MiFreeLargePageMemory.c)
 */

__int64 __fastcall MiFreeLargePages(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int8 v4; // al

  v1 = 0LL;
  v2 = a1;
  if ( a1 != 0xFFFFFFFFFLL )
  {
    do
    {
      v3 = *(_QWORD *)v2;
      v4 = MiLockPageInline(v2);
      *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xC000000000000000uLL | 1;
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v4);
      v1 += MiFreeLargePageMemory((v2 + 0x58000000000LL) / 48);
      v2 = v3;
    }
    while ( v3 != 0xFFFFFFFFFLL );
  }
  return v1;
}
