/*
 * XREFs of ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C0259D24
 * Callers:
 *     GreChangeGhostFont @ 0x1C026727C (GreChangeGhostFont.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C012986C (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::ChangeGhostFont(struct PFT **const *this, void *a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edi
  unsigned int v8; // r14d
  unsigned int CurrentThreadId; // r15d
  unsigned int v10; // r8d
  __int64 v11; // r9
  struct PFF **v12; // rcx
  struct PFF *i; // rcx
  struct PFF *v14; // rax
  struct PFF *v15; // r10
  struct PFF *v16; // rdx
  __int64 j; // rcx
  int v18; // eax
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = (unsigned int)a2;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v8 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v19 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  GetPFFFromId(gpPFTPrivate, v5, 0LL);
  v10 = 0;
  v11 = 5LL;
  do
  {
    if ( v3 )
      break;
    v12 = &(*this)[v11];
    if ( v12 )
    {
      for ( i = *v12; ; i = (struct PFF *)*((_QWORD *)v16 + 1) )
      {
        v14 = SkipInvalidPff(i);
        v16 = v14;
        if ( !v14 )
          break;
        if ( v15 == v14 )
        {
          for ( j = *((_QWORD *)v14 + 20); j; j = *(_QWORD *)(j + 16) )
          {
            if ( (*(_DWORD *)(j + 8) & 4) != 0 && *(_DWORD *)(j + 12) == CurrentThreadId
              || (*(_DWORD *)(j + 8) & 4) == 0 && *(_DWORD *)(j + 12) == v8 )
            {
              if ( a3 )
              {
                ++*(_DWORD *)(j + 4);
                v3 = 1;
                *(_DWORD *)(j + 8) |= 0x40u;
                goto LABEL_21;
              }
              v18 = *(_DWORD *)(j + 4);
              if ( v18 )
              {
                *(_DWORD *)(j + 8) &= ~0x40u;
                *(_DWORD *)(j + 4) = v18 - 1;
              }
              break;
            }
          }
        }
      }
    }
LABEL_21:
    ++v10;
    ++v11;
  }
  while ( v10 < 0x14 );
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  return v3;
}
