/*
 * XREFs of ??$_EqualRangeImpl@PEBG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEBGAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@utl@@@1@2AEA_K@Z @ 0x180018A60
 * Callers:
 *     ?DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x1800184C4 (-DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
 *     ?IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x1800185B8 (-IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z.c)
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
  unsigned __int64 v10; // r11
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  char v15; // cl
  _QWORD *v16; // r11
  _QWORD *i; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rdx
  __int64 v21; // r8
  signed __int64 v22; // r9
  _QWORD *result; // rax

  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    v9 = *a3;
    v10 = 0LL;
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
    v14 = 32769 * ((294921 * ((9 * v10) ^ ((9 * v10) >> 11))) ^ ((294921 * ((9 * v10) ^ ((9 * v10) >> 11))) >> 11));
    v15 = *(_BYTE *)(a1 + 32);
    v16 = *(_QWORD **)(v6 + 16 * (v14 & ((8LL << v15) - 1)));
    if ( v16 )
    {
      for ( i = **(_QWORD ***)(v6 + 16 * (v14 & ((8LL << v15) - 1)) + 8); v16 != i; v16 = (_QWORD *)*v16 )
      {
        v18 = v16[2];
        if ( v18 >= v14 )
        {
          if ( v18 > v14 )
            break;
          v19 = 0LL;
          if ( *(_WORD *)v9 )
          {
            do
              ++v19;
            while ( *(_WORD *)&v9[2 * v19] );
          }
          v20 = (char *)v16[3];
          if ( v19 == (__int64)(v16[4] - (_QWORD)v20) >> 1 )
          {
            if ( v9 == v20 || (v21 = 0LL, !v19) )
            {
LABEL_18:
              *a4 = v16;
              *a5 = *v16;
              result = a6;
              *a6 = 1LL;
              return result;
            }
            v22 = v9 - v20;
            while ( *(_WORD *)&v20[v22] == *(_WORD *)v20 )
            {
              ++v21;
              v20 += 2;
              if ( v21 == v19 )
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
