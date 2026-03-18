/*
 * XREFs of ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0154CE0
 * Callers:
 *     OutputDuplRemoteSessionReconnected @ 0x1C0156750 (OutputDuplRemoteSessionReconnected.c)
 * Callees:
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C00D1AC0 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C011EDDC (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0152E80 (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReconfigureNumSources(OUTPUTDUPL_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  v4 = a2;
  if ( *((_DWORD *)this + 12) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 2307LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( v4 <= 0x10 )
  {
    v9 = 0;
    if ( *((_DWORD *)this + 13) )
    {
      while ( !(unsigned int)OUTPUTDUPL_MGR::QueryActiveContextCount(this, v9) )
      {
        if ( ++v9 >= *((_DWORD *)this + 13) )
          goto LABEL_8;
      }
      v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v14 + 24) = 2321LL;
      WdLogEvent5_WdAssertion(v14);
      return 3223192386LL;
    }
    else
    {
LABEL_8:
      OUTPUTDUPL_MGR::DestroySourceContextLists(this);
      *((_DWORD *)this + 13) = v4;
      result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
      if ( (int)result < 0 )
        *((_DWORD *)this + 13) = 0;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = 16LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  return result;
}
