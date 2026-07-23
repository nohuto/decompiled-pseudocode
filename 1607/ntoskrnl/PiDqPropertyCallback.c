/*
 * XREFs of PiDqPropertyCallback @ 0x1404E535C
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     PiDqPnPGetObjectProperty @ 0x1404E4B74 (PiDqPnPGetObjectProperty.c)
 *     PiDqGetPnpObjectType @ 0x1404E557C (PiDqGetPnpObjectType.c)
 *     PiDqOpenObjectRegKey @ 0x140631DB0 (PiDqOpenObjectRegKey.c)
 */

__int64 __fastcall PiDqPropertyCallback(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  int v5; // esi
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rdx
  int v18; // ecx
  unsigned int v19; // ebp
  int PnpObjectType; // eax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx

  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( *(_DWORD *)(a1 + 24) )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 16);
      v13 = 48 * v7;
      if ( *(_DWORD *)(a2 + 16) == *(_DWORD *)(48 * v7 + v12 + 16) )
      {
        v14 = *(_QWORD *)a2 - *(_QWORD *)(v13 + v12);
        if ( *(_QWORD *)a2 == *(_QWORD *)(v13 + v12) )
          v14 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(v13 + v12 + 8);
        if ( !v14 && *(_DWORD *)(a2 + 20) == *(_DWORD *)(v13 + v12 + 20) )
        {
          v15 = *(const wchar_t **)(a2 + 24);
          v16 = *(const wchar_t **)(v13 + v12 + 24);
          if ( v15 == v16 || v15 && v16 && !wcsicmp(v15, v16) )
            break;
        }
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 24) )
        goto LABEL_11;
    }
    *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48 * v7 + 32);
    *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48 * v7 + 36);
    *a5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48 * v7 + 40);
  }
  else
  {
LABEL_11:
    v18 = *(_DWORD *)(a2 + 20);
    if ( v18 )
    {
      if ( v18 != 1 )
        return (unsigned int)-1073741811;
      v19 = 0;
      if ( !*(_QWORD *)a1 )
      {
        PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL) + 16LL));
        v5 = PiDqOpenObjectRegKey(1, *(_QWORD *)(a1 + 32), PnpObjectType, 1, 0, v21, a1);
        if ( v5 == -1073741772 )
        {
          v5 = 0;
          *(_QWORD *)a1 = -1LL;
        }
      }
      v6 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 == -1LL )
      {
        v22 = *(_QWORD *)(a1 + 16);
        v23 = 6LL * *(unsigned int *)(a1 + 24);
        *(_OWORD *)(v22 + 8 * v23) = *(_OWORD *)a2;
        *(_OWORD *)(v22 + 8 * v23 + 16) = *(_OWORD *)(a2 + 16);
        ++*(_DWORD *)(a1 + 24);
        *a3 = 0;
        *a4 = 0;
        *a5 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      v19 = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL) + 16LL));
    }
    if ( v5 >= 0 )
    {
      v5 = PiDqPnPGetObjectProperty(
             *(_QWORD *)(a1 + 32),
             v19,
             v6,
             a2,
             *(_DWORD *)(a2 + 20),
             0LL,
             (_OWORD *)(*(_QWORD *)(a1 + 16) + 48LL * *(unsigned int *)(a1 + 24)));
      if ( v5 >= 0 )
      {
        *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL * *(unsigned int *)(a1 + 24) + 32);
        *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL * *(unsigned int *)(a1 + 24) + 36);
        *a5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL * (unsigned int)(*(_DWORD *)(a1 + 24))++ + 40);
      }
    }
  }
  return (unsigned int)v5;
}
