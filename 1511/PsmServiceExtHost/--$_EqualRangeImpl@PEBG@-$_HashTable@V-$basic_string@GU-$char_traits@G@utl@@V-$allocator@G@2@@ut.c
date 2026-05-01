/*
 * XREFs of ??$_EqualRangeImpl@PEBG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEBGAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@utl@@@1@2AEA_K@Z @ 0x18001B410
 * Callers:
 *     ?DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x18001A404 (-DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 *     ?IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x18001A4F8 (-IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,unsigned long>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,unsigned long>>,0>::_EqualRangeImpl<unsigned short const *>(
        __int64 a1,
        __int64 a2,
        char **a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rbx
  char *v9; // r10
  unsigned int v10; // r11d
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  char v14; // cl
  _QWORD *v15; // r11
  _QWORD *i; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // rdx
  __int64 v20; // r8
  signed __int64 v21; // r9
  _QWORD *result; // rax
  unsigned __int64 v23; // [rsp+10h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    v9 = *a3;
    v10 = 0;
    v11 = 0LL;
    if ( *(_WORD *)*a3 )
    {
      do
        ++v11;
      while ( *(_WORD *)&v9[2 * v11] );
    }
    v12 = 0LL;
    if ( v11 )
    {
      do
      {
        v13 = *(unsigned __int16 *)&v9[2 * v12++];
        v10 = (1025 * (v10 + v13)) ^ ((1025 * (v10 + v13)) >> 6);
      }
      while ( v12 != v11 );
    }
    v23 = 32769 * (((9 * v10) >> 11) ^ (9 * v10));
    v14 = *(_BYTE *)(a1 + 32);
    LODWORD(v23) = 32769
                 * (((294921 * (((9 * v10) >> 11) ^ (9 * v10))) >> 11) ^ (294921 * (((9 * v10) >> 11) ^ (9 * v10))));
    v15 = *(_QWORD **)(v6 + 16 * (v23 & ((8LL << v14) - 1)));
    if ( v15 )
    {
      for ( i = **(_QWORD ***)(v6 + 16 * (v23 & ((8LL << v14) - 1)) + 8); v15 != i; v15 = (_QWORD *)*v15 )
      {
        v17 = v15[2];
        if ( v17 >= v23 )
        {
          if ( v17 > v23 )
            break;
          v18 = 0LL;
          if ( *(_WORD *)v9 )
          {
            do
              ++v18;
            while ( *(_WORD *)&v9[2 * v18] );
          }
          v19 = (char *)v15[3];
          if ( v18 == (__int64)(v15[4] - (_QWORD)v19) >> 1 )
          {
            if ( v9 == v19 || (v20 = 0LL, !v18) )
            {
LABEL_18:
              *a4 = v15;
              *a5 = *v15;
              result = a6;
              *a6 = 1LL;
              return result;
            }
            v21 = v9 - v19;
            while ( *(_WORD *)&v19[v21] == *(_WORD *)v19 )
            {
              ++v20;
              v19 += 2;
              if ( v20 == v18 )
                goto LABEL_18;
            }
          }
        }
      }
    }
  }
  *a4 = a1;
  *a5 = a1;
  result = a6;
  *a6 = 0LL;
  return result;
}
