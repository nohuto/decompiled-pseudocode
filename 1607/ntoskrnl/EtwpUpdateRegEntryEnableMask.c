/*
 * XREFs of EtwpUpdateRegEntryEnableMask @ 0x140491C28
 * Callers:
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidRemoval @ 0x14069FC4C (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     EtwpApplyScopeFilters @ 0x14040CB48 (EtwpApplyScopeFilters.c)
 */

char __fastcall EtwpUpdateRegEntryEnableMask(__int64 a1, char a2, char a3, int a4)
{
  _BYTE *v4; // rdi
  char result; // al
  char v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = (_BYTE *)(a1 + 100);
  if ( a3 )
    v4 = (_BYTE *)(a1 + 101);
  if ( a4 == 1 )
  {
    v8 = a2;
    result = EtwpApplyScopeFilters(a1, 1, a3, &v8);
    if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
    {
      result = v8;
      *(_BYTE *)(a1 + 100) = v8;
    }
    else
    {
      *v4 = v8 | *v4 & ~a2;
    }
  }
  else if ( !a4 && (*(_BYTE *)(a1 + 98) & 8) == 0 )
  {
    *v4 &= ~a2;
  }
  return result;
}
