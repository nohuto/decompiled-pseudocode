/*
 * XREFs of ?Initialize@?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C330
 * Callers:
 *     ?SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C0180A18 (-SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::Initialize(
        __int64 a1,
        unsigned __int64 a2,
        const void *a3)
{
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rax

  if ( a2 - 1 > 0xFFFFF )
  {
    v14 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v14 + 24) = a2;
    WdLogEvent5_WdError(v14);
    return 3221225990LL;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = operator new[](a2, 0x4E506456u, PagedPool);
    *(_QWORD *)(a1 + 32) = v7;
    if ( v7 )
    {
      *(_QWORD *)(a1 + 40) = a2;
      *(_DWORD *)(a1 + 48) = 1;
      if ( a3 )
        memmove(v7, a3, a2);
      else
        memset(v7, 0, a2);
      return 0LL;
    }
    else
    {
      v12 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v12 + 24) = a2;
      WdLogEvent5_WdLowResource(v12);
      return 3221225495LL;
    }
  }
}
