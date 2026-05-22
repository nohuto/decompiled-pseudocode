/*
 * XREFs of McGenControlCallbackV2 @ 0x180001990
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall McGenControlCallbackV2(__int64 a1, int a2, char a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  unsigned int v7; // r11d
  __int64 result; // rax
  unsigned __int8 v9; // dl
  __int64 v10; // rcx

  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v7 = 0;
        result = a5;
        *(_QWORD *)(a7 + 16) = a4;
        *(_DWORD *)(a7 + 36) = 1;
        *(_BYTE *)(a7 + 40) = a3;
        *(_QWORD *)(a7 + 24) = a5;
        if ( *(_WORD *)(a7 + 42) )
        {
          do
          {
            v9 = *(_BYTE *)(a7 + 40);
            v10 = *(_QWORD *)(*(_QWORD *)(a7 + 56) + 8LL * v7);
            if ( (*(_BYTE *)(v7 + *(_QWORD *)(a7 + 64)) <= v9 || !v9)
              && (!v10 || (v10 & *(_QWORD *)(a7 + 16)) != 0 && (v10 & *(_QWORD *)(a7 + 24)) == *(_QWORD *)(a7 + 24)) )
            {
              *(_DWORD *)(*(_QWORD *)(a7 + 48) + 4 * ((unsigned __int64)v7 >> 5)) |= 1 << (v7 & 0x1F);
            }
            else
            {
              *(_DWORD *)(*(_QWORD *)(a7 + 48) + 4 * ((unsigned __int64)v7 >> 5)) &= ~(1 << (v7 & 0x1F));
            }
            result = *(unsigned __int16 *)(a7 + 42);
            ++v7;
          }
          while ( v7 < (unsigned int)result );
        }
      }
    }
    else
    {
      *(_DWORD *)(a7 + 36) = 0;
      *(_BYTE *)(a7 + 40) = 0;
      *(_QWORD *)(a7 + 16) = 0LL;
      *(_QWORD *)(a7 + 24) = 0LL;
      if ( *(_WORD *)(a7 + 42) )
        return (__int64)memset(*(void **)(a7 + 48), 0, 4LL * ((*(unsigned __int16 *)(a7 + 42) - 1) / 32 + 1));
    }
  }
  return result;
}
