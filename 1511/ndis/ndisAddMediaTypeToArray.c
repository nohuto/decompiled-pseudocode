/*
 * XREFs of ndisAddMediaTypeToArray @ 0x1C01004F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 */

__int64 __fastcall ndisAddMediaTypeToArray(__int64 a1, int a2, int *a3)
{
  unsigned int v4; // ebx
  int v5; // edx
  PVOID v6; // rdi
  _DWORD *v7; // rcx
  bool v8; // cf
  PVOID PoolWithTag; // rax
  PVOID v10; // rbp
  int v11; // eax

  if ( a2 == 4 && a3 && (unsigned int)*a3 > 0x11 )
  {
    v4 = ndisMediumArraySize;
    v5 = ndisMediumArraySize;
    v6 = ndisMediumArray;
    v7 = ndisMediumArray;
    if ( (_DWORD)ndisMediumArraySize )
    {
      while ( *a3 != *v7 )
      {
        ++v7;
        v5 -= 4;
        if ( !v5 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v8 = (unsigned int)ndisMediumArraySize < 0x60;
      if ( (_DWORD)ndisMediumArraySize == 96 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x746D444Eu);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v4 = ndisMediumArraySize;
          v10 = ndisMediumArray;
          memmove(PoolWithTag, ndisMediumArray, (unsigned int)ndisMediumArraySize);
          if ( v10 != &ndisMediumBuffer )
          {
            ExFreePoolWithTag(v10, 0);
            v4 = ndisMediumArraySize;
          }
          ndisMediumArray = v6;
        }
        else
        {
          v6 = ndisMediumArray;
          v4 = ndisMediumArraySize;
        }
        v8 = v4 < 0x60;
      }
      if ( v8 )
      {
        v11 = *a3;
        LODWORD(ndisMediumArraySize) = v4 + 4;
        *((_DWORD *)v6 + ((unsigned __int64)v4 >> 2)) = v11;
      }
    }
  }
  return 0LL;
}
