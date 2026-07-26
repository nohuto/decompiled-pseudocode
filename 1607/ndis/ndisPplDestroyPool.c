/*
 * XREFs of ndisPplDestroyPool @ 0x1C001F3E8
 * Callers:
 *     NdisFreeNetBufferListPool @ 0x1C001F360 (NdisFreeNetBufferListPool.c)
 *     NdisFreeNetBufferPool @ 0x1C004CD80 (NdisFreeNetBufferPool.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisPplDestroyPool(char *P)
{
  unsigned int v1; // eax
  struct _LOOKASIDE_LIST_EX *v3; // rbx
  _SLIST_HEADER *v4; // rdi
  __int64 v5; // rbp
  PSLIST_ENTRY v6; // rcx

  if ( P )
  {
    v1 = ndisMaxNumberOfProcessors;
    if ( ndisMaxNumberOfProcessors > 1 )
      v1 = ndisMaxNumberOfProcessors + 1;
    v3 = (struct _LOOKASIDE_LIST_EX *)(P + 128);
    if ( v1 )
    {
      v4 = (_SLIST_HEADER *)(P + 256);
      v5 = v1;
      do
      {
        if ( *((_BYTE *)&v4[5].HeaderX64 + 8) )
        {
          while ( 1 )
          {
            v6 = ExpInterlockedPopEntrySList(v4);
            if ( !v6 )
              break;
            ((void (__fastcall *)(PSLIST_ENTRY, struct _LOOKASIDE_LIST_EX *))v4[-5].Region)(v6, v3);
          }
          ExDeleteLookasideListEx(v3);
        }
        v3 = (struct _LOOKASIDE_LIST_EX *)((char *)v3 + 256);
        v4 += 16;
        --v5;
      }
      while ( v5 );
    }
    ExFreePoolWithTag(P, 0);
  }
}
