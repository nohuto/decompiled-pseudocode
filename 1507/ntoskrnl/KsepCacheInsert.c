/*
 * XREFs of KsepCacheInsert @ 0x14054B314
 * Callers:
 *     KseAddHardwareId @ 0x14054B3B8 (KseAddHardwareId.c)
 *     KsepDbCacheInsertDevice @ 0x1405C6A60 (KsepDbCacheInsertDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KsepCacheInsert(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  _QWORD *v5; // r8
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 result; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rdx

  v4 = (*(__int64 (__fastcall **)(__int64))(a1 + 80))(a2);
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12)));
  if ( (_QWORD *)*v5 != v5 )
    ++*(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v4;
  v6 = a2 + 8;
  v7 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12)));
  v8 = *v7;
  *(_QWORD *)(a2 + 8) = *v7;
  *(_QWORD *)(a2 + 16) = v7;
  if ( *(__int64 **)(v8 + 8) != v7 )
    __fastfail(3u);
  *(_QWORD *)(v8 + 8) = v6;
  v9 = a2 + 24;
  *v7 = v6;
  v10 = *(_QWORD **)(a1 + 40);
  *(_QWORD *)(a2 + 24) = a1 + 32;
  *(_QWORD *)(a2 + 32) = v10;
  if ( *v10 != a1 + 32 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(a1 + 40) = v9;
  ++*(_DWORD *)(a1 + 8);
  ++*(_DWORD *)(a1 + 60);
  result = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)result > *(_DWORD *)(a1 + 24) )
  {
    v12 = (_QWORD *)(*(_QWORD *)(a1 + 32) - 24LL);
    v13 = **(_QWORD **)(a1 + 32);
    v14 = (_QWORD *)v12[4];
    if ( *(_QWORD *)(v13 + 8) != *(_QWORD *)(a1 + 32) || *v14 != *(_QWORD *)(a1 + 32) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = v12[1];
    v16 = (_QWORD *)v12[2];
    if ( *(_QWORD **)(v15 + 8) != v12 + 1 || (_QWORD *)*v16 != v12 + 1 )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    --*(_DWORD *)(a1 + 8);
    ++*(_DWORD *)(a1 + 64);
    return (*(__int64 (**)(void))(a1 + 88))();
  }
  return result;
}
