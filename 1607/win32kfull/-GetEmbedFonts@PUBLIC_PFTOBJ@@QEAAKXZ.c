/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C0259E4C
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x1C02A82E0 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(struct PFT **const *this)
{
  unsigned int v1; // ebx
  unsigned int v4; // esi
  unsigned int CurrentThreadId; // ebp
  __int64 v6; // r9
  struct PFF **v7; // r8
  struct PFF *i; // rcx
  __int64 j; // rcx
  bool v10; // zf
  struct PFF *v11; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v4 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v12 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v6 = 20LL;
  v7 = *this + 5;
  do
  {
    if ( v7 )
    {
      for ( i = *v7; ; i = (struct PFF *)*((_QWORD *)v11 + 1) )
      {
        v11 = SkipInvalidPff(i);
        if ( !v11 )
          break;
        for ( j = *((_QWORD *)v11 + 20); j; j = *(_QWORD *)(j + 16) )
        {
          if ( (*(_DWORD *)(j + 8) & 4) != 0 )
            v10 = *(_DWORD *)(j + 12) == CurrentThreadId;
          else
            v10 = *(_DWORD *)(j + 12) == v4;
          if ( v10 )
            ++v1;
        }
      }
    }
    ++v7;
    --v6;
  }
  while ( v6 );
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  return v1;
}
