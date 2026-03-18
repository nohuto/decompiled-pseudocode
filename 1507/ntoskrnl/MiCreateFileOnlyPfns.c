/*
 * XREFs of MiCreateFileOnlyPfns @ 0x1406AA3C8
 * Callers:
 *     MiEnableFileExtents @ 0x140230720 (MiEnableFileExtents.c)
 * Callees:
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 *     MiAddFileOnlyPfns @ 0x1406AA220 (MiAddFileOnlyPfns.c)
 */

__int64 __fastcall MiCreateFileOnlyPfns(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v4; // esi
  __int64 *v5; // rax
  int v6; // r12d
  int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 *v10; // r15
  int v11; // ebp
  __int64 *v12; // rbx
  int v13; // eax
  __int64 *v15; // [rsp+60h] [rbp+8h]
  unsigned int v16; // [rsp+70h] [rbp+18h]

  v16 = a3;
  v4 = 0;
  v5 = (__int64 *)(a4 + 8);
  v6 = 0;
  v15 = (__int64 *)(a4 + 8);
  v7 = 0;
  v8 = -1LL;
  v9 = 0LL;
  v10 = 0LL;
  do
  {
LABEL_2:
    v11 = 0;
    v12 = v5;
    if ( !a3 )
      break;
    while ( 1 )
    {
      if ( !v9 )
        goto LABEL_11;
      if ( v9 + v8 != *v12 )
        break;
      ++v9;
LABEL_12:
      ++v12;
      if ( ++v11 >= a3 )
        goto LABEL_15;
    }
    if ( v10 )
    {
      if ( v10 == v12 )
        break;
      MiRemovePhysicalMemory(v8, v9, 2LL, a4);
      a3 = v16;
      goto LABEL_11;
    }
    v13 = MiAddFileOnlyPfns(v8, v9);
    a3 = v16;
    v4 = v13;
    if ( v13 >= 0 )
    {
      v6 = 1;
LABEL_11:
      v8 = *v12;
      v9 = 1LL;
      goto LABEL_12;
    }
    v10 = v12;
    v5 = v15;
  }
  while ( &v12[-v9] != v15 );
LABEL_15:
  if ( v4 < 0 || v9 && (v4 = MiAddFileOnlyPfns(v8, v9), v4 < 0) )
  {
    if ( v6 == 1 && !v7 )
    {
      a3 = v16;
      v7 = 1;
      v5 = v15;
      goto LABEL_2;
    }
  }
  return (unsigned int)v4;
}
