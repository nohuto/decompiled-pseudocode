/*
 * XREFs of ?vStrMirror32@@YAXPEAVSURFACE@@@Z @ 0x1C013C4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStrMirror32(struct SURFACE *a1)
{
  int *v2; // r9
  int v3; // edx
  __int64 i; // rdi
  int *v5; // r10
  int *v6; // r11
  __int64 v7; // rbx
  int v8; // ecx

  v2 = (int *)*((_QWORD *)a1 + 10);
  v3 = 0;
  for ( i = (unsigned int)(*((_DWORD *)a1 + 14) / 2);
        v3 < *((_DWORD *)a1 + 15);
        v2 = (int *)((char *)v2 + *((int *)a1 + 22)) )
  {
    v5 = v2;
    v6 = &v2[*((int *)a1 + 14) - 1];
    if ( (int)i > 0 )
    {
      v7 = i;
      do
      {
        v8 = *v5;
        *v5++ = *v6;
        *v6-- = v8;
        --v7;
      }
      while ( v7 );
    }
    ++v3;
  }
}
