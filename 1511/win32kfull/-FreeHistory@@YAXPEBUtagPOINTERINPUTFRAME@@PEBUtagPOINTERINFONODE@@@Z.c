/*
 * XREFs of ?FreeHistory@@YAXPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C022F834
 * Callers:
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C022F8CC (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 * Callees:
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0230D3C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

void __fastcall FreeHistory(struct _LIST_ENTRY **a1, const struct tagPOINTERINFONODE *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *v6; // rcx
  __int64 v7; // rdx
  struct _LIST_ENTRY *Blink; // rax

  v2 = *((_DWORD *)a2 + 31);
  v3 = *((_DWORD *)a2 + 52);
  v5 = *a1;
  while ( v5 != &gFrameListHead && v2 > 1 )
  {
    v6 = v5;
    v5 = v5->Flink;
    if ( v6[2].Blink == a1[5] )
    {
      v7 = 216LL * v3;
      v3 = *(_DWORD *)((char *)&v6[4].Blink[13].Flink + v7);
      _InterlockedIncrement((volatile signed __int32 *)&v6[1].Flink + 1);
      Blink = v6[4].Blink;
      *(_DWORD *)((char *)&Blink->Flink + v7) |= 0x1000u;
      *(struct _LIST_ENTRY **)((char *)&Blink[1].Flink + v7) = 0LL;
      ++HIDWORD(v6[1].Blink);
      UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v6);
      --v2;
    }
  }
}
