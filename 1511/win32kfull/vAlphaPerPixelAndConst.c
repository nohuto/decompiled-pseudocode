/*
 * XREFs of vAlphaPerPixelAndConst @ 0x1C00C5AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vAlphaPerPixelAndConst(unsigned int *a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // r9d
  __int64 v5; // rdi
  int v6; // ebx
  unsigned int *v7; // r11
  unsigned int v8; // r10d
  unsigned int v9; // esi
  unsigned int v10; // edx
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v13; // r10d
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // edx

  if ( a3 )
  {
    v4 = HIWORD(a4);
    v5 = a2 - (_QWORD)a1;
    v6 = a3;
    v7 = a1;
    do
    {
      v8 = *(unsigned int *)((char *)v7 + v5);
      --v6;
      if ( HIBYTE(v8) )
      {
        v9 = *v7;
        if ( HIBYTE(v8) == 0xFF )
        {
          v15 = (unsigned __int8)v4 * ((v8 & 0xFF00FF) - (v9 & 0xFF00FF)) + 8388736 + 255 * (v9 & 0xFF00FF);
          v16 = (unsigned __int8)v4 * (((v8 >> 8) & 0xFF00FF) - ((v9 >> 8) & 0xFF00FF))
              + 8388736
              + 255 * ((v9 >> 8) & 0xFF00FF);
          v14 = (v16 + ((v16 >> 8) & 0xFF00FF)) ^ ((v16 + ((v16 >> 8) & 0xFFFF00FF)) ^ ((v15 + ((v15 >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF;
        }
        else
        {
          v10 = (unsigned __int8)v4 * ((v8 >> 8) & 0xFF00FF) + 8388736;
          v11 = (v10 + ((v10 >> 8) & 0xFF00FF)) ^ ((v10 + ((v10 >> 8) & 0xFFFF00FF)) ^ (((unsigned __int8)v4
                                                                                       * (v8 & 0xFF00FF)
                                                                                       + 8388736
                                                                                       + ((((unsigned __int8)v4
                                                                                          * (v8 & 0xFF00FF)
                                                                                          + 8388736) >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF;
          v12 = 255 - HIBYTE(v11);
          v13 = v12 * ((v9 >> 8) & 0xFF00FF) + 8388736;
          v14 = v11
              + ((v13 + ((v13 >> 8) & 0xFF00FF)) ^ ((v13 + ((v13 >> 8) & 0xFFFF00FF)) ^ ((v12 * (v9 & 0xFF00FF)
                                                                                        + 8388736
                                                                                        + (((v12 * (v9 & 0xFF00FF)
                                                                                           + 8388736) >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF);
        }
        *v7 = v14;
      }
      ++v7;
    }
    while ( v6 );
  }
}
