/*
 * XREFs of ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C012D294
 * Callers:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C012D188 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 * Callees:
 *     ?redloop@@YAHXZ @ 0x1C012D428 (-redloop@@YAHXZ.c)
 */

void __fastcall inv_cmap(int a1, struct RGBX *a2, __int64 a3, unsigned int *a4, unsigned __int8 *a5)
{
  int v6; // ebp
  unsigned int *v7; // rdi
  __int64 i; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // rcx

  dword_1C0323F18 = 8;
  dword_1C0323F20 = 32;
  v6 = 0;
  dword_1C0323F10 = 32;
  dword_1C0323F1C = 64;
  dword_1C0323F14 = 1024;
  v7 = a4;
  dword_1C0323F24 = 0;
  for ( i = 0x8000LL; i; --i )
    *v7++ = -1;
  if ( a1 > 0 )
  {
    do
    {
      v11 = *((unsigned __int8 *)a2 + 4 * v6);
      v12 = *((unsigned __int8 *)a2 + 4 * v6 + 1);
      v13 = *((unsigned __int8 *)a2 + 4 * v6 + 2);
      dword_1C0323EC0 = v11 >> 3;
      dword_1C0323EBC = v12 >> 3;
      dword_1C0323EB8 = v13 >> 3;
      dword_1C0323EC4 = v12 - 8 * (v12 >> 3) - 4;
      dword_1C0323EC8 = v11 - 8 * (v11 >> 3) - 4;
      dword_1C0323ED8 = 16 * (8 * (v11 >> 3) + 8 - v11);
      dword_1C0323ED4 = 16 * (8 * (v12 >> 3) + 8 - v12);
      dword_1C0323ED0 = 16 * (8 * (v13 >> 3) + 8 - v13);
      dword_1C0323ECC = dword_1C0323EC8 * dword_1C0323EC8
                      + dword_1C0323EC4 * dword_1C0323EC4
                      + (v13 - 8 * (v13 >> 3) - 4) * (v13 - 8 * (v13 >> 3) - 4);
      v14 = (v13 >> 3) + (int)(32 * (v12 >> 3)) + (__int64)(int)(v11 >> 3 << 10);
      qword_1C0323EF0 = (__int64)&a4[v14];
      qword_1C0323F08 = (__int64)&a5[v14];
      redloop();
      dword_1C0323F24 = ++v6;
    }
    while ( v6 < a1 );
  }
}
