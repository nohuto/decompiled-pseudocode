/*
 * XREFs of ?DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z @ 0x18006AA90
 * Callers:
 *     <none>
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800323E0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCDuckWorkItem@@PEAV312@1@Z @ 0x180068490 (-NewNode@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@AEAAPEAV.c)
 */

void __fastcall DevQueryResultCallback(
        struct HDEVQUERY__ *a1,
        _DWORD *a2,
        const struct _DEV_QUERY_RESULT_ACTION_DATA *a3)
{
  __int64 v3; // rcx
  __int16 *v5; // r8
  unsigned __int64 v6; // r9
  __int64 **v7; // rdi
  __int64 *v8; // rax
  __int64 **v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h]
  char *v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(unsigned int *)a3;
  v11 = 0LL;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 && *((_DWORD *)a3 + 2) == 1 )
    {
      v5 = (__int16 *)*((_QWORD *)a3 + 2);
      v6 = -1LL;
      do
        ++v6;
      while ( v5[v6] );
      if ( (int)_AllocStringWorker<CTCoAllocPolicy>(v3, (__int64)a2, v5, v6, v10, &v11) < 0 )
      {
        CoTaskMemFree(v11);
        return;
      }
      v7 = *(__int64 ***)a2;
      v8 = ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::NewNode(
             (__int64)v7,
             (__int64 *)&v11,
             (__int64)v7[1]);
      v9 = (__int64 **)v7[1];
      if ( v9 )
        *v9 = v8;
      else
        *v7 = v8;
      v7[1] = v8;
    }
  }
  else
  {
    a2[2] = *((_DWORD *)a3 + 2);
  }
  CoTaskMemFree(0LL);
}
