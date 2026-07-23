/*
 * XREFs of KeCompactServiceTable @ 0x14012DF9C
 * Callers:
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     MiCompactServiceTable @ 0x14053A788 (MiCompactServiceTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCompactServiceTable(int *a1, unsigned __int8 *a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned __int8 *v6; // rsi
  int *v7; // rbx
  __int64 v8; // rbp
  unsigned int v9; // edx

  v6 = a2;
  v7 = a1;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v9 = *v6++;
      *v7 = (16 * (a5 - (_DWORD)a1 + *v7)) | (v9 >> 2);
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  return KiLockServiceTable(a1, a2);
}
