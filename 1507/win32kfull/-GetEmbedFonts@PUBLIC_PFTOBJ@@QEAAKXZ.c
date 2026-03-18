/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C025CD40
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x1C02A70C0 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(struct PFT **const *this)
{
  unsigned int v1; // ebx
  unsigned int v4; // r14d
  unsigned int CurrentThreadId; // r15d
  __int64 v6; // rdi
  __int64 v7; // rbp
  struct PFF **v8; // rcx
  struct PFF *i; // rcx
  __int64 j; // rcx
  bool v11; // zf
  struct PFF *v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v4 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v13 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v6 = 4LL;
  v7 = 20LL;
  do
  {
    v8 = &(*this)[v6];
    if ( v8 )
    {
      for ( i = *v8; ; i = (struct PFF *)*((_QWORD *)v12 + 1) )
      {
        v12 = SkipInvalidPff(i);
        if ( !v12 )
          break;
        for ( j = *((_QWORD *)v12 + 20); j; j = *(_QWORD *)(j + 16) )
        {
          if ( (*(_DWORD *)(j + 8) & 4) != 0 )
            v11 = *(_DWORD *)(j + 12) == CurrentThreadId;
          else
            v11 = *(_DWORD *)(j + 12) == v4;
          if ( v11 )
            ++v1;
        }
      }
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v1;
}
