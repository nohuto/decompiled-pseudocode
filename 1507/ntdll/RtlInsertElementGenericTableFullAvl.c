/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x180060980
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x180060910 (RtlInsertElementGenericTableAvl.c)
 * Callees:
 *     RebalanceNode @ 0x180060D7C (RebalanceNode.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 */

_QWORD *__fastcall RtlInsertElementGenericTableFullAvl(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        bool *a4,
        _QWORD *a5,
        int a6)
{
  size_t v6; // r13
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // r8
  _QWORD *v13; // rcx
  char v14; // dl

  v6 = a3;
  if ( a6 == 1 )
  {
    v11 = a5;
LABEL_15:
    if ( a4 )
      *a4 = a6 != 1;
    return v11 + 4;
  }
  if ( a3 + 32 >= a3 )
  {
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 80))(a1, a3 + 32);
    v11 = v10;
    if ( v10 )
    {
      memset(v10, 0, 0x20uLL);
      ++*(_DWORD *)(a1 + 44);
      if ( a6 )
      {
        v12 = v11;
        v13 = a5;
        if ( a6 == 2 )
          a5[1] = v11;
        else
          a5[2] = v11;
        *v11 = a5;
        *(_BYTE *)(a1 + 24) = -1;
        while ( 1 )
        {
          v14 = 1;
          if ( *(_QWORD **)(*v12 + 8LL) == v12 )
            v14 = -1;
          if ( *((_BYTE *)v13 + 24) )
            break;
          *((_BYTE *)v13 + 24) = v14;
          v12 = v13;
          v13 = (_QWORD *)*v13;
        }
        if ( *((_BYTE *)v13 + 24) == v14 )
        {
          RebalanceNode();
        }
        else
        {
          *((_BYTE *)v13 + 24) = 0;
          if ( !*(_BYTE *)(a1 + 24) )
            ++*(_DWORD *)(a1 + 48);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v11;
        *v11 = a1;
        *(_DWORD *)(a1 + 48) = 1;
      }
      memmove(v11 + 4, a2, v6);
      goto LABEL_15;
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
