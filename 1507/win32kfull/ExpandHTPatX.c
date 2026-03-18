/*
 * XREFs of ExpandHTPatX @ 0x1C00A8170
 * Callers:
 *     Generate_HTSC_WORD @ 0x1C00A7DDC (Generate_HTSC_WORD.c)
 *     GenerateWORDPat @ 0x1C00A7F6C (GenerateWORDPat.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall ExpandHTPatX(char *Src, int a2, int a3, int a4)
{
  int v4; // esi
  unsigned int v5; // ebp
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // r15d
  char *v10; // r13
  unsigned int v11; // r12d
  unsigned int v12; // edi
  __int64 v13; // [rsp+20h] [rbp-38h]

  v4 = a3;
  v5 = 6 * a2;
  result = (unsigned int)(6 * a4);
  if ( (unsigned int)result > 6 * a2 && a3 )
  {
    v8 = v5;
    v9 = result - v5;
    v13 = (unsigned int)(6 * a4);
    do
    {
      --v4;
      v10 = &Src[v8];
      v11 = v9;
      if ( v9 )
      {
        do
        {
          v12 = v11;
          if ( v11 > v5 )
            v12 = v5;
          memmove(v10, Src, v12);
          v10 += v12;
          v11 -= v12;
        }
        while ( v11 );
        result = v13;
        v8 = v5;
      }
      Src += result;
    }
    while ( v4 );
  }
  return result;
}
