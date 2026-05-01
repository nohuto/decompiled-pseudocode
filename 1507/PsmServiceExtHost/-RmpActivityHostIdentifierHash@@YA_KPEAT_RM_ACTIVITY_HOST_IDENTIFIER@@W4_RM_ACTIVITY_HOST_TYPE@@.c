/*
 * XREFs of ?RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@@Z @ 0x1800089B0
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800087C0 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostIdentifierHash(unsigned __int64 a1, int a2)
{
  WCHAR *v2; // rbx
  __int64 v3; // rdi
  WCHAR *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  WCHAR v10; // [rsp+38h] [rbp+10h]

  v2 = (WCHAR *)a1;
  v3 = 314159LL;
  if ( a2 )
  {
    v8 = 69LL;
    do
    {
      v9 = *(unsigned __int8 *)v2;
      v2 += 4;
      v3 = *((unsigned __int8 *)v2 - 1)
         + 37
         * (*((unsigned __int8 *)v2 - 2)
          + 37
          * (*((unsigned __int8 *)v2 - 3)
           + 37
           * (*((unsigned __int8 *)v2 - 4)
            + 37
            * (*((unsigned __int8 *)v2 - 5)
             + 37 * (*((unsigned __int8 *)v2 - 6) + 37 * (*((unsigned __int8 *)v2 - 7) + 37 * (v9 + 37 * v3)))))));
      --v8;
    }
    while ( v8 );
  }
  else
  {
    v4 = (WCHAR *)(a1 + 464);
    if ( a1 < a1 + 464 )
    {
      do
      {
        v10 = RtlUpcaseUnicodeChar(*v2++);
        v3 = HIBYTE(v10) + 37 * ((unsigned __int8)v10 + 37 * v3);
      }
      while ( v2 < v4 );
    }
    v5 = 11LL;
    do
    {
      v6 = *(unsigned __int8 *)v4;
      v4 += 4;
      v3 = *((unsigned __int8 *)v4 - 1)
         + 37
         * (*((unsigned __int8 *)v4 - 2)
          + 37
          * (*((unsigned __int8 *)v4 - 3)
           + 37
           * (*((unsigned __int8 *)v4 - 4)
            + 37
            * (*((unsigned __int8 *)v4 - 5)
             + 37 * (*((unsigned __int8 *)v4 - 6) + 37 * (*((unsigned __int8 *)v4 - 7) + 37 * (v6 + 37 * v3)))))));
      --v5;
    }
    while ( v5 );
  }
  return v3;
}
