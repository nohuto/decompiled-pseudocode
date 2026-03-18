/*
 * XREFs of ?EvictAllocationCallback@@YAEPEAX0@Z @ 0x1C009890C
 * Callers:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z @ 0x1C009F3BC (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
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
  if ( !a2 )
    return 1;
  if ( *((_DWORD *)a2 + 41) || (*((_DWORD *)a2 + 19) & 0x100) != 0 )
  {
    if ( (**((_DWORD **)a2 + 63) & 0x20000) == 0 )
    {
      a1[8] = 0;
      return 0;
    }
    return 1;
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v6 = a2 + 296;
  v7 = (char *)*((_QWORD *)a2 + 37);
LABEL_14:
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
        goto LABEL_14;
      }
      v8 = (_QWORD *)*((_QWORD *)i - 4);
      if ( !v8[3] || (*(_DWORD *)(v8[1] + 48LL) & 2) != 0 )
        break;
      v9 = v8 + 22;
      if ( !v8[22] )
      {
        v10 = *(_QWORD *)a1;
        v11 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
        if ( *v11 != *(_QWORD *)a1 )
          __fastfail(3u);
        *v9 = v10;
        v9[1] = v11;
        *v11 = v9;
        *(_QWORD *)(v10 + 8) = v9;
      }
    }
    a1[8] = 0;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), (__int64)v7, (__int64)i, (__int64)v6);
  return v2;
}
