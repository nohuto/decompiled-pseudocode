/*
 * XREFs of sfac_GetMultiGlyphIDs @ 0x1C02D9BC8
 * Callers:
 *     fs_GetGlyphIDs @ 0x1C02D97E0 (fs_GetGlyphIDs.c)
 * Callees:
 *     InvokeGlyphMappingF @ 0x1C00A402C (InvokeGlyphMappingF.c)
 *     InvokeReleaseSfntFrag @ 0x1C00A631C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00A6330 (sfac_GetDataPtr.c)
 */

__int64 sfac_GetMultiGlyphIDs(__int64 a1, __int64 a2, unsigned __int16 a3, ...)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int16 v7; // ax
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  _WORD *v10; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _WORD *);
  if ( (*(_WORD *)(a1 + 208) & 0xFFF9) != 0 )
    return 5130LL;
  result = sfac_GetDataPtr(a1, 0, 0xFFFFFFFF, 8, 1, (__int64 *)va);
  v6 = 0;
  if ( !(_DWORD)result )
  {
    if ( (unsigned int)a3 + 1 <= 0xFFFF )
    {
      v7 = InvokeGlyphMappingF(*(_DWORD *)(a1 + 212), (_WORD *)(v8 + *(unsigned int *)(a1 + 20)), a3, a1);
      *v10 = v7;
    }
    else
    {
      v6 = 4108;
    }
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    return v6;
  }
  return result;
}
