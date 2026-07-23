/*
 * XREFs of MiFreeLargePageChain @ 0x1401FB558
 * Callers:
 *     MiGetLargePageChain @ 0x140089B54 (MiGetLargePageChain.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 */

void __fastcall MiFreeLargePageChain(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = *(_QWORD *)v1;
      v3 = (unsigned __int8)MiLockPageInline(v1);
      MiInsertLargePageInNodeListHelper((v1 + 0x58000000000LL) / 48, 0x200uLL, *(_BYTE *)(v1 + 34) & 7, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v3);
      v1 = v2;
    }
    while ( v2 );
  }
}
