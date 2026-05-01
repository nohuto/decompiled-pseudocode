/*
 * XREFs of ??$_EqualRangeImpl@PEBG@?$_HashTable@PEBGU?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEBGAEAV?$_DlistIt@U?$_HashNode@U?$pair@QEBGPEAVGameConfigStoreServer@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18001C274
 * Callers:
 *     ?GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z @ 0x18001C0CC (-GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z.c)
 * Callees:
 *     ??$_HashRange@PEBG@utl@@YAIPEBG0I@Z @ 0x18001C480 (--$_HashRange@PEBG@utl@@YAIPEBG0I@Z.c)
 */

_QWORD *__fastcall utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,ExecutionModel::GameConfigStoreServer *>>,0>::_EqualRangeImpl<unsigned short const *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // r11
  unsigned __int16 *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // r10
  unsigned __int16 *v14; // rax
  int v15; // r9d
  int v16; // edx
  _QWORD *result; // rax
  unsigned __int64 v18; // [rsp+30h] [rbp+8h]

  v7 = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v8 = (unsigned __int16 *)*a3;
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = utl::_HashRange<unsigned short const *>(*a3, &v8[v9]);
    v18 = v10;
    LODWORD(v18) = 32769 * (((9 * v10) >> 11) ^ (9 * v10));
    v11 = *(_QWORD *)(v7 + 16) + 16 * (v18 & ((8LL << *(_BYTE *)(v7 + 32)) - 1));
    v12 = *(_QWORD **)v11;
    if ( *(_QWORD *)v11 )
    {
      v13 = **(_QWORD ***)(v11 + 8);
      while ( v12 != v13 )
      {
        if ( v12[2] >= v18 )
        {
          if ( v12[2] > v18 )
            break;
          v14 = v8;
          do
          {
            v15 = *(unsigned __int16 *)((char *)v14 + v12[3] - (_QWORD)v8);
            v16 = *v14 - v15;
            if ( v16 )
              break;
            ++v14;
          }
          while ( v15 );
          if ( !v16 )
          {
            *a4 = v12;
            *a5 = *v12;
            result = a6;
            *a6 = 1LL;
            return result;
          }
        }
        v12 = (_QWORD *)*v12;
      }
    }
  }
  *a4 = v7;
  *a5 = v7;
  result = a6;
  *a6 = 0LL;
  return result;
}
