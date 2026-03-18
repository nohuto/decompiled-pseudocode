/*
 * XREFs of vAlphaConstOnly @ 0x140132520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vAlphaConstOnly(__int64 a1, _DWORD *a2, int a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v5; // r9d
  _DWORD *v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // ecx

  result = a3;
  v5 = HIWORD(a4);
  v6 = &a2[a3];
  if ( a2 != v6 )
  {
    v7 = a1 - (_QWORD)a2;
    do
    {
      v8 = (unsigned __int8)v5 * (((*a2 >> 8) & 0xFF00FF) - ((*(_DWORD *)((char *)a2 + v7) >> 8) & 0xFF00FF))
         + 255 * ((*(_DWORD *)((char *)a2 + v7) >> 8) & 0xFF00FF)
         + 8388736;
      result = (v8 + ((v8 >> 8) & 0xFF00FF)) & 0xFF00FF00;
      *(_DWORD *)((char *)a2 + v7) = result
                                   + ((((unsigned __int8)v5
                                      * ((*a2 & 0xFF00FF) - (*(_DWORD *)((char *)a2 + v7) & 0xFF00FF))
                                      + 8388736
                                      + 255 * (*(_DWORD *)((char *)a2 + v7) & 0xFF00FF)
                                      + ((((unsigned __int8)v5
                                         * ((*a2 & 0xFF00FF) - (*(_DWORD *)((char *)a2 + v7) & 0xFF00FF))
                                         + 8388736
                                         + 255 * (*(_DWORD *)((char *)a2 + v7) & 0xFF00FFu)) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF);
      ++a2;
    }
    while ( a2 != v6 );
  }
  return result;
}
