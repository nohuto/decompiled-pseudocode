/*
 * XREFs of vAlphaPerPixelOnly @ 0x140132890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vAlphaPerPixelOnly(unsigned int *a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  unsigned int *v5; // r11
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ecx

  if ( a3 )
  {
    v3 = a3;
    v4 = a2 - (_QWORD)a1;
    v5 = a1;
    do
    {
      v6 = *(unsigned int *)((char *)v5 + v4);
      --v3;
      if ( HIBYTE(v6) )
      {
        if ( HIBYTE(v6) != 0xFF )
        {
          v8 = *v5;
          v7 = HIBYTE(v6);
          v6 += (((255 - v7) * ((v8 >> 8) & 0xFF00FF)
                + 8388736
                + ((((255 - v7) * ((v8 >> 8) & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) & 0xFF00FF00)
              + ((((255 - v7) * (v8 & 0xFF00FF) + 8388736 + ((((255 - v7) * (v8 & 0xFF00FF) + 8388736) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF);
        }
        *v5 = v6;
      }
      ++v5;
    }
    while ( v3 );
  }
}
