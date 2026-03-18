/*
 * XREFs of PiDqPropertyCallback @ 0x1404413FC
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     PiDqPnPGetObjectProperty @ 0x14043F954 (PiDqPnPGetObjectProperty.c)
 *     PiDqGetPnpObjectType @ 0x14044161C (PiDqGetPnpObjectType.c)
 *     PiDqOpenObjectRegKey @ 0x140507EBC (PiDqOpenObjectRegKey.c)
 */

__int64 __fastcall PiDqPropertyCallback(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  int v5; // esi
  __int64 v6; // r14
  __int64 v7; // rbp
  _DWORD *v9; // r12
  __int64 v10; // rdi
  __int64 v12; // rcx
  const wchar_t *v13; // rcx
  int v15; // ecx
  unsigned int v16; // ebp
  int PnpObjectType; // eax
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx

  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v9 = a3;
  v10 = a2;
  if ( *(_DWORD *)(a1 + 24) )
  {
    while ( 1 )
    {
      a3 = *(_DWORD **)(a1 + 16);
      a2 = 48 * v7;
      if ( *(_DWORD *)(v10 + 16) == a3[12 * v7 + 4] )
      {
        v12 = *(_QWORD *)v10 - *(_QWORD *)((char *)a3 + a2);
        if ( *(_QWORD *)v10 == *(_QWORD *)((char *)a3 + a2) )
          v12 = *(_QWORD *)(v10 + 8) - *(_QWORD *)((char *)a3 + a2 + 8);
        if ( !v12 && *(_DWORD *)(v10 + 20) == *(_DWORD *)((char *)a3 + a2 + 20) )
        {
          v13 = *(const wchar_t **)(v10 + 24);
          a2 = *(_QWORD *)((char *)a3 + a2 + 24);
          if ( v13 == (const wchar_t *)a2 || v13 && a2 && !wcsicmp(v13, (const wchar_t *)a2) )
            break;
        }
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 24) )
        goto LABEL_11;
    }
    *v9 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48 * v7 + 32);
    *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48 * v7 + 36);
    *a5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48 * v7 + 40);
  }
  else
  {
LABEL_11:
    v15 = *(_DWORD *)(v10 + 20);
    if ( v15 )
    {
      if ( v15 != 1 )
        return (unsigned int)-1073741811;
      v16 = 0;
      if ( !*(_QWORD *)a1 )
      {
        PnpObjectType = PiDqGetPnpObjectType(
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL) + 16LL),
                          a2,
                          a3,
                          *(_QWORD *)(a1 + 40) + 32LL);
        v5 = PiDqOpenObjectRegKey(1, *(_QWORD *)(a1 + 32), PnpObjectType, 1, 0, v18, a1);
        if ( v5 == -1073741772 )
        {
          v5 = 0;
          *(_QWORD *)a1 = -1LL;
        }
      }
      v6 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 == -1LL )
      {
        v19 = *(_QWORD *)(a1 + 16);
        v20 = 6LL * *(unsigned int *)(a1 + 24);
        *(_OWORD *)(v19 + 8 * v20) = *(_OWORD *)v10;
        *(_OWORD *)(v19 + 8 * v20 + 16) = *(_OWORD *)(v10 + 16);
        ++*(_DWORD *)(a1 + 24);
        *v9 = 0;
        *a4 = 0;
        *a5 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      v16 = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL) + 16LL), a2, a3, a4);
    }
    if ( v5 >= 0 )
    {
      v5 = PiDqPnPGetObjectProperty(
             *(_QWORD *)(a1 + 32),
             v16,
             v6,
             v10,
             *(_DWORD *)(v10 + 20),
             0LL,
             (_OWORD *)(*(_QWORD *)(a1 + 16) + 48LL * *(unsigned int *)(a1 + 24)));
      if ( v5 >= 0 )
      {
        *v9 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL * *(unsigned int *)(a1 + 24) + 32);
        *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL * *(unsigned int *)(a1 + 24) + 36);
        *a5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL * (unsigned int)(*(_DWORD *)(a1 + 24))++ + 40);
      }
    }
  }
  return (unsigned int)v5;
}
