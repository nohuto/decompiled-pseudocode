/*
 * XREFs of KsepCacheInsert @ 0x14050B568
 * Callers:
 *     KseAddHardwareId @ 0x14050D830 (KseAddHardwareId.c)
 *     KsepDbCacheInsertDevice @ 0x14057DF68 (KsepDbCacheInsertDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KsepCacheInsert(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  _QWORD *v5; // r8
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 result; // rax
  _QWORD *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rdx

  v4 = (*(__int64 (__fastcall **)(__int64))(a1 + 80))(a2);
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12)));
  if ( (_QWORD *)*v5 != v5 )
    ++*(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v4;
  v6 = (_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12));
  v8 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
    __fastfail(3u);
  *v6 = v8;
  *(_QWORD *)(a2 + 16) = v7;
  *(_QWORD *)(v8 + 8) = v6;
  v9 = (_QWORD *)(a2 + 24);
  *(_QWORD *)v7 = v6;
  v10 = (_QWORD *)(a1 + 32);
  v11 = *(_QWORD **)(a1 + 40);
  if ( *v11 != a1 + 32 )
    __fastfail(3u);
  *v9 = v10;
  *(_QWORD *)(a2 + 32) = v11;
  *v11 = v9;
  *(_QWORD *)(a1 + 40) = v9;
  ++*(_DWORD *)(a1 + 8);
  ++*(_DWORD *)(a1 + 60);
  result = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)result > *(_DWORD *)(a1 + 24) )
  {
    v13 = (_QWORD *)(*v10 - 24LL);
    v14 = v13[3];
    v15 = (_QWORD *)v13[4];
    if ( *(_QWORD **)(v14 + 8) != v13 + 3 || (_QWORD *)*v15 != v13 + 3 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = v13[1];
    v17 = (_QWORD *)v13[2];
    if ( *(_QWORD **)(v16 + 8) != v13 + 1 || (_QWORD *)*v17 != v13 + 1 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    --*(_DWORD *)(a1 + 8);
    ++*(_DWORD *)(a1 + 64);
    return (*(__int64 (**)(void))(a1 + 88))();
  }
  return result;
}
