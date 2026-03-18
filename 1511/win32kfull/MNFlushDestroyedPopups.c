/*
 * XREFs of MNFlushDestroyedPopups @ 0x1C013A0E0
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01377F0 (xxxMNEndMenuState.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 * Callees:
 *     MNFreePopup @ 0x1C0138BE0 (MNFreePopup.c)
 */

void __fastcall MNFlushDestroyedPopups(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx

  v1 = a1;
  while ( *(_QWORD *)(v1 + 72) )
  {
    v2 = *(_QWORD *)(v1 + 72);
    if ( (*(_DWORD *)v2 & 0x8000) != 0 )
    {
      v3 = *(_QWORD *)(v1 + 72);
      *(_QWORD *)(v1 + 72) = *(_QWORD *)(v2 + 72);
      MNFreePopup(v3);
      if ( (*(_DWORD *)v2 & 0x40000000) != 0 )
        *(_DWORD *)v2 &= ~0x20000000u;
      else
        Win32FreePool(v2);
    }
    else
    {
      v1 = *(_QWORD *)(v1 + 72);
    }
  }
}
