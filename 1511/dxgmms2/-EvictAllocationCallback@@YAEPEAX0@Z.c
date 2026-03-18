/*
 * XREFs of ?EvictAllocationCallback@@YAEPEAX0@Z @ 0x1C0084810
 * Callers:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z @ 0x1C008A094 (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

char __fastcall EvictAllocationCallback(_BYTE *a1, char *a2)
{
  char v2; // bl
  char *i; // r8
  char *v6; // r9
  char *v7; // rdx
  _QWORD *v8; // r10
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r10

  v2 = 0;
  if ( *((_DWORD *)a2 + 39) || (*((_DWORD *)a2 + 19) & 0x100) != 0 )
  {
    if ( (**((_DWORD **)a2 + 59) & 0x20000) != 0 )
    {
      return 1;
    }
    else
    {
      a1[8] = 0;
      return 0;
    }
  }
  else
  {
    DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)a2 + 39));
    v6 = a2 + 288;
    v7 = (char *)*((_QWORD *)a2 + 36);
LABEL_13:
    if ( v7 == v6 )
    {
      v2 = 1;
    }
    else
    {
      for ( i = (char *)*((_QWORD *)v7 - 2); ; i = *(char **)i )
      {
        if ( i == v7 - 16 )
        {
          v7 = *(char **)v7;
          goto LABEL_13;
        }
        v8 = (_QWORD *)*((_QWORD *)i - 4);
        if ( !v8[3] || (*(_DWORD *)(v8[1] + 48LL) & 2) != 0 )
          break;
        v9 = v8 + 21;
        if ( !v8[21] )
        {
          v10 = *(_QWORD *)a1;
          v11 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
          *v9 = *(_QWORD *)a1;
          v9[1] = v11;
          if ( *v11 != v10 )
            __fastfail(3u);
          *v11 = v9;
          *(_QWORD *)(v10 + 8) = v9;
        }
      }
      a1[8] = 0;
    }
    DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), (__int64)v7, (__int64)i, (__int64)v6);
    return v2;
  }
}
