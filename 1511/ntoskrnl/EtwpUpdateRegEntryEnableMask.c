/*
 * XREFs of EtwpUpdateRegEntryEnableMask @ 0x1404CE398
 * Callers:
 *     EtwpDisallowedGuidRemoval @ 0x1403B5278 (EtwpDisallowedGuidRemoval.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpApplyScopeFilters @ 0x1404382E0 (EtwpApplyScopeFilters.c)
 */

void __fastcall EtwpUpdateRegEntryEnableMask(__int64 a1, char a2, __int64 a3, int a4)
{
  _BYTE *v4; // rdi
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = (_BYTE *)(a1 + 99);
  if ( (_BYTE)a3 )
    v4 = (_BYTE *)(a1 + 100);
  if ( a4 == 1 )
  {
    v7 = a2;
    EtwpApplyScopeFilters(a1, 1, a3, &v7);
    if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
      *(_BYTE *)(a1 + 99) = v7;
    else
      *v4 = v7 | *v4 & ~a2;
  }
  else if ( !a4 && (*(_BYTE *)(a1 + 98) & 8) == 0 )
  {
    *v4 &= ~a2;
  }
}
