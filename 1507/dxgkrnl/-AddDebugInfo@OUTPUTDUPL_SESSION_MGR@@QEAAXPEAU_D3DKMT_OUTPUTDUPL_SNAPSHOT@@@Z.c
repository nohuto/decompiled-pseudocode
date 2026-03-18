/*
 * XREFs of ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C0152400
 * Callers:
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01531E4 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::AddDebugInfo(
        struct DXGFASTMUTEX *const *this,
        struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v4; // edi
  UINT v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  bool v14; // zf
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, this[1]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v10 = **((_QWORD **)this + 2);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = 3778LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_DWORD *)this + 1);
  if ( v12 )
  {
    v13 = v12;
    do
    {
      if ( *(_QWORD *)(v10 + 8) && *(_DWORD *)v10 )
      {
        ++v4;
        v5 += *(_DWORD *)v10;
      }
      v10 += 32LL;
      --v13;
    }
    while ( v13 );
  }
  v14 = v15[8] == 0;
  a2->SessionProcessCount = v4;
  a2->SessionActiveConnectionsCount = v5;
  if ( !v14 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
}
