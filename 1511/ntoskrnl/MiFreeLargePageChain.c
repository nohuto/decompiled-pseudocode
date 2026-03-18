/*
 * XREFs of MiFreeLargePageChain @ 0x1401E17A0
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiGetLargePageChain @ 0x14001935C (MiGetLargePageChain.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
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
      MiInsertLargePageInNodeList((v1 + 0x58000000000LL) / 48, 0x200uLL, *(_BYTE *)(v1 + 34) & 7);
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v3);
      v1 = v2;
    }
    while ( v2 );
  }
}
