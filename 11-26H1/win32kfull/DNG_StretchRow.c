/*
 * XREFs of DNG_StretchRow @ 0x1400E1110
 * Callers:
 *     DNG_DrawRow @ 0x1400E0D70 (DNG_DrawRow.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DNG_StretchRow(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rdi
  unsigned int v6; // esi
  unsigned int v7; // r11d
  _DWORD *v8; // r10
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r9
  bool v11; // cf

  result = (int)a4[6];
  v5 = a4[3];
  v6 = a4[2];
  v7 = a4[1];
  v8 = (_DWORD *)(a2 + 4 * result);
  if ( *(_QWORD *)(a1 + 216) <= (unsigned __int64)v8 )
  {
    result = (int)a4[7];
    v9 = a2 + 4 * result;
    if ( v9 <= *(_QWORD *)(a1 + 224) )
    {
      result = a3 + 4LL * *a4;
      if ( *(_QWORD *)(a1 + 232) <= result )
      {
        v10 = a3 + 4LL * (*(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 56));
        if ( v10 <= *(_QWORD *)(a1 + 240) && (unsigned __int64)v8 < v9 )
        {
          do
          {
            if ( result >= v10 )
              break;
            v11 = v7 + v6 < v7;
            *v8 = *(_DWORD *)result;
            v7 += v6;
            ++v8;
            result += 4 * (v11 + v5);
          }
          while ( (unsigned __int64)v8 < v9 );
        }
      }
    }
  }
  return result;
}
