/*
 * XREFs of vAlphaPerPixelAndConst @ 0x140132960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vAlphaPerPixelAndConst(_DWORD *a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // r9d
  __int64 v5; // rsi
  int v6; // ebx
  _DWORD *v7; // r11
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v10; // ebp
  int v11; // edi
  int v12; // r8d
  int v13; // edx
  unsigned int v14; // r8d
  unsigned int v15; // r10d
  int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // ecx

  if ( a3 )
  {
    v4 = HIWORD(a4);
    v5 = a2 - (_QWORD)a1;
    v6 = a3;
    v7 = a1;
    do
    {
      v8 = *(_DWORD *)((char *)v7 + v5);
      --v6;
      v9 = HIBYTE(v8);
      if ( HIBYTE(v8) )
      {
        v10 = *v7 & 0xFF00FF;
        v11 = (*v7 >> 8) & 0xFF00FF;
        v12 = (v8 >> 8) & 0xFF00FF;
        v13 = v8 & 0xFF00FF;
        if ( (_BYTE)v9 == 0xFF )
        {
          v17 = (((unsigned __int8)v4 * (v13 - v10)
                + 8388736
                + 255 * v10
                + ((((unsigned int)(unsigned __int8)v4 * (v13 - v10) + 8388736 + 255 * v10) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF;
          v18 = ((unsigned __int8)v4 * (v12 - v11)
               + 8388736
               + 255 * v11
               + ((((unsigned int)(unsigned __int8)v4 * (v12 - v11) + 8388736 + 255 * v11) >> 8) & 0xFF00FF)) & 0xFF00FF00;
        }
        else
        {
          v14 = (unsigned __int8)v4 * v12
              + 8388736
              + ((((unsigned int)(unsigned __int8)v4 * v12 + 8388736) >> 8) & 0xFF00FF);
          v15 = v14 ^ (v14 ^ (((unsigned __int8)v4 * v13
                             + 8388736
                             + ((((unsigned int)(unsigned __int8)v4 * v13 + 8388736) >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF;
          v16 = 255 - HIBYTE(v15);
          v17 = (v11 * v16 + 8388736 + (((unsigned int)(v11 * v16 + 8388736) >> 8) & 0xFF00FF)) & 0xFF00FF00;
          v18 = v15
              + (((v10 * v16 + 8388736 + (((unsigned int)(v10 * v16 + 8388736) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF);
        }
        *v7 = v18 + v17;
      }
      ++v7;
    }
    while ( v6 );
  }
}
