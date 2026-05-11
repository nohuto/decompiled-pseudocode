/*
 * XREFs of PropertyInitializeGeqLevelCache @ 0x1C0019FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyInitializeGeqLevelCache(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v6; // ebx
  unsigned int *PoolWithTag; // rax
  unsigned int *v8; // rdi
  __int64 v9; // rax
  _DWORD *v10; // r14
  unsigned int v11; // r8d
  __int64 v12; // rdx
  int v13; // r15d
  __int64 i; // r8
  char v16; // [rsp+88h] [rbp+20h] BYREF

  v6 = -1073741670;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x41627845u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 8;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, _DWORD, int, char *))(a2 + 136))(
           a1,
           a2,
           152LL,
           PoolWithTag,
           *(_DWORD *)(a3 + 8),
           129,
           &v16);
    if ( v6 >= 0 )
    {
      *(_DWORD *)(a3 + 16) = v8[1];
      v9 = *v8;
      *(_DWORD *)(a3 + 12) = v9;
      if ( !*v8 )
        v6 = -1073741438;
      if ( v6 >= 0 )
      {
        v10 = ExAllocatePoolWithTag(PagedPool, 20 * v9, 0x41627845u);
        if ( !v10 )
          v6 = -1073741670;
        if ( v6 >= 0 )
        {
          v11 = 0;
          for ( *(_QWORD *)(a3 + 32) = v10;
                v11 < *(_DWORD *)(a3 + 12);
                v10[5 * v12] = *(_DWORD *)(*((_QWORD *)v8 + 2) + 4 * v12) )
          {
            v12 = v11++;
          }
          v13 = 130;
          while ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, _DWORD, int, char *))(a2 + 136))(
                   a1,
                   a2,
                   152LL,
                   v8,
                   *(_DWORD *)(a3 + 8),
                   v13,
                   &v16);
            if ( v6 >= 0 )
            {
              for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a3 + 12); i = (unsigned int)(i + 1) )
              {
                switch ( v13 )
                {
                  case 130:
                    v10[5 * i + 3] = *(_DWORD *)(*((_QWORD *)v8 + 2) + 4 * i);
                    break;
                  case 131:
                    v10[5 * i + 4] = *(_DWORD *)(*((_QWORD *)v8 + 2) + 4 * i);
                    break;
                  case 132:
                    v10[5 * i + 1] = *(_DWORD *)(*((_QWORD *)v8 + 2) + 4 * i);
                    break;
                }
              }
            }
            if ( (unsigned int)++v13 > 0x84 )
            {
              if ( v6 >= 0 )
              {
                *(_DWORD *)(a2 + 96) |= 1 << *(_DWORD *)(a3 + 4);
                v6 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v10, ExFreePool);
                goto LABEL_26;
              }
              break;
            }
          }
          ExFreePool(v10);
        }
      }
    }
LABEL_26:
    ExFreePool(v8);
  }
  return (unsigned int)v6;
}
