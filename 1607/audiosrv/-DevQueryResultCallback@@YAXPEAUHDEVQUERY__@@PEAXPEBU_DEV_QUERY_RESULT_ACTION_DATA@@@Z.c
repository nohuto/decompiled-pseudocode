/*
 * XREFs of ?DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z @ 0x1800545C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002545C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180025520 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCOnDeviceWorkItem@@PEAV312@1@Z @ 0x1800549F0 (-NewNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@.c)
 */

void __fastcall DevQueryResultCallback(
        struct HDEVQUERY__ *a1,
        _DWORD *a2,
        const struct _DEV_QUERY_RESULT_ACTION_DATA *a3)
{
  unsigned __int16 *v4; // rcx
  const unsigned __int16 *v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // eax
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rcx
  unsigned __int16 *v12; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( !*(_DWORD *)a3 )
  {
    a2[2] = *((_DWORD *)a3 + 2);
LABEL_14:
    CoTaskMemFree(v4);
    return;
  }
  if ( *(_DWORD *)a3 != 1 )
    goto LABEL_14;
  if ( *((_DWORD *)a3 + 2) != 1 )
    goto LABEL_14;
  v5 = (const unsigned __int16 *)*((_QWORD *)a3 + 2);
  v6 = -1LL;
  do
    ++v6;
  while ( v5[v6] );
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
    goto LABEL_14;
  v12 = 0LL;
  if ( !is_mul_ok(v7, 2uLL) )
    goto LABEL_14;
  v8 = CTCoAllocPolicy::Alloc(0LL, (v7 * (unsigned __int128)2uLL) >> 64, 2 * v7, (void **)&v12);
  v4 = v12;
  if ( v8 < 0 )
    goto LABEL_14;
  StringCchCopyNExW((char *)v12, v6 + 1, v5, v6);
  v9 = *(__int64 **)a2;
  v10 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::NewNode(
          *(_QWORD *)a2,
          &v12,
          *(_QWORD *)(*(_QWORD *)a2 + 8LL));
  v11 = (__int64 *)v9[1];
  if ( v11 )
    *v11 = v10;
  else
    *v9 = v10;
  v9[1] = v10;
  CoTaskMemFree(0LL);
}
