/*
 * XREFs of KsepCacheLookup @ 0x14050CEE4
 * Callers:
 *     KseAddHardwareId @ 0x14050D830 (KseAddHardwareId.c)
 *     KsepDbCacheQueryDevice @ 0x140535324 (KsepDbCacheQueryDevice.c)
 *     KsepDbCacheInsertDevice @ 0x14057DF68 (KsepDbCacheInsertDevice.c)
 *     KseQueryDeviceDataList @ 0x140652418 (KseQueryDeviceDataList.c)
 *     KseLookupHardwareId @ 0x140653AC4 (KseLookupHardwareId.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KsepCacheLookup(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  _QWORD **v5; // r9
  _QWORD *v6; // rsi
  _QWORD *result; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx

  v4 = (*(__int64 (__fastcall **)(__int64))(a1 + 80))(a2);
  v5 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12)));
  v6 = *v5;
  if ( *v5 == v5 )
  {
LABEL_2:
    ++*(_DWORD *)(a1 + 52);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v8 = v6 - 1;
      if ( v4 == *((_DWORD *)v6 - 2) )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD *))(a1 + 72))(a2, v6 - 1) )
          break;
      }
      v6 = (_QWORD *)*v6;
      if ( v6 == (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12))) )
        goto LABEL_2;
    }
    v9 = v8 + 3;
    v10 = v8[3];
    v11 = (_QWORD *)v8[4];
    if ( *(_QWORD **)(v10 + 8) != v8 + 3 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    v12 = *(_QWORD **)(a1 + 40);
    if ( *v12 != a1 + 32 )
      __fastfail(3u);
    *v9 = a1 + 32;
    v8[4] = v12;
    *v12 = v9;
    *(_QWORD *)(a1 + 40) = v9;
    result = v6 - 1;
    ++*(_DWORD *)(a1 + 48);
  }
  return result;
}
