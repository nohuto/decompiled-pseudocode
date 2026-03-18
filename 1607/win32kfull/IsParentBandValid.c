/*
 * XREFs of IsParentBandValid @ 0x1C0075D10
 * Callers:
 *     ValidateNewParent @ 0x1C0075C7C (ValidateNewParent.c)
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 * Callees:
 *     IsTopLevelParent @ 0x1C0075D54 (IsTopLevelParent.c)
 */

_BOOL8 __fastcall IsParentBandValid(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  return (unsigned int)IsTopLevelParent(a2)
      || *(_DWORD *)(v2 + 304) == *(_DWORD *)(v3 + 304) && ((*(_BYTE *)(v2 + 290) ^ *(_BYTE *)(v3 + 290)) & 0x40) == 0;
}
