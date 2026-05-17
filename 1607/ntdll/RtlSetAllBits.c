/*
 * XREFs of RtlSetAllBits @ 0x1800813B0
 * Callers:
 *     RtlSparseBitmapCtxInitializeRange @ 0x180051508 (RtlSparseBitmapCtxInitializeRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetAllBits(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 result; // rax
  unsigned __int64 v3; // r9

  v1 = *(_DWORD **)(a1 + 8);
  result = (*(_DWORD *)a1 & 0x1F) != 0;
  v3 = (unsigned __int64)(unsigned int)(4 * (result + (*(_DWORD *)a1 >> 5))) >> 2;
  if ( v3 )
  {
    if ( ((unsigned __int8)v1 & 4) != 0 )
    {
      *v1 = -1;
      if ( !--v3 )
        return result;
      ++v1;
    }
    result = -1LL;
    memset(v1, 0xFFu, 8 * (v3 >> 1));
    if ( (v3 & 1) != 0 )
      v1[v3 - 1] = -1;
  }
  return result;
}
