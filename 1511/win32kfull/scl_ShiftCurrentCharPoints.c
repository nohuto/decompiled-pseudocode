/*
 * XREFs of scl_ShiftCurrentCharPoints @ 0x1C00ADAEC
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C00AD7C8 (fsg_MergeGlyphData.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall scl_ShiftCurrentCharPoints(__int64 a1, int a2, int a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r11
  unsigned int v6; // esi
  __int64 v7; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = 0LL;
  if ( a2 )
  {
    v6 = 0;
    result = *(_QWORD *)(a1 + 64);
    if ( *(_WORD *)(result + 2LL * *(__int16 *)(a1 + 80) - 2) != 0xFFFF )
    {
      do
      {
        v7 = v6++;
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v7) += a2;
        result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 1);
      }
      while ( v6 < (unsigned int)result );
    }
  }
  if ( a3 )
  {
    result = *(_QWORD *)(a1 + 64);
    if ( *(_WORD *)(result + 2LL * *(__int16 *)(a1 + 80) - 2) != 0xFFFF )
    {
      do
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v4) += a3;
        v4 = (unsigned int)(v4 + 1);
        result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 1);
      }
      while ( (unsigned int)v4 < (unsigned int)result );
    }
  }
  return result;
}
