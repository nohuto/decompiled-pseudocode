/*
 * XREFs of KeCompactServiceTable @ 0x1401533D8
 * Callers:
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 *     MiCompactServiceTable @ 0x140571924 (MiCompactServiceTable.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall KeCompactServiceTable(int *a1, unsigned __int8 *a2, unsigned int a3, char a4)
{
  size_t v4; // rbx
  unsigned __int8 *v6; // r9
  int *v8; // rdx
  int *v9; // rdi
  __int64 v10; // r10
  int v11; // r8d
  unsigned int v12; // eax

  v4 = a3;
  v6 = a2;
  v8 = a1;
  v9 = a1;
  if ( a3 )
  {
    v10 = a3;
    do
    {
      v11 = *v8;
      v8 += 2;
      v12 = *v6++;
      *a1++ = (v12 >> 2) | (16 * (v11 - (_DWORD)v9));
      --v10;
    }
    while ( v10 );
  }
  if ( a4 )
    memmove(a1, v8, v4);
  LOBYTE(v6) = a4;
  return KiLockServiceTable(v9, a2, (unsigned int)v4, v6);
}
