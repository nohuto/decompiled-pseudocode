/*
 * XREFs of ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C025D550
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C026AA60 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::VerifyPFF(struct PFT **const *this, struct PFF *a2)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned int v7; // ebx
  struct PFF **v8; // rcx
  struct PFF *i; // rcx
  struct PFF *v10; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *this != gpPFTPrivate )
    return 0LL;
  v11 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v5 = 0;
  v6 = 4LL;
  v7 = 1;
  do
  {
    v8 = &(*this)[v6];
    if ( v8 )
    {
      for ( i = *v8; ; i = (struct PFF *)*((_QWORD *)v10 + 1) )
      {
        v10 = SkipInvalidPff(i);
        if ( !v10 )
          break;
        if ( a2 == v10 )
          goto LABEL_11;
      }
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 0x14 );
  v7 = 0;
LABEL_11:
  SEMOBJ::vUnlock((SEMOBJ *)&v11);
  return v7;
}
