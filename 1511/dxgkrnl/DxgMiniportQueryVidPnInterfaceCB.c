/*
 * XREFs of DxgMiniportQueryVidPnInterfaceCB @ 0x1C008DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 */

__int64 __fastcall DxgMiniportQueryVidPnInterfaceCB(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7056);
  v6 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    v7 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a1);
    if ( v7 )
    {
      v12 = *(_QWORD *)(v7 + 48);
      if ( KeGetCurrentIrql() )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v24, v12);
        if ( !*(_QWORD *)(v12 + 8) )
        {
          v19 = WdLogNewEntry5_WdAssertion(v17);
          WdLogEvent5_WdAssertion(v19);
        }
        v20 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL);
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 176) + 64LL);
        if ( *(_DWORD *)(*(_QWORD *)(v21 + 40) + 28LL) >= 0x2003u )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v16, v18);
          v22[3] = 275LL;
          v22[4] = 20LL;
          v22[5] = v20;
          v22[6] = 0LL;
          v22[7] = 0LL;
          WdLogEvent5_WdCriticalError(v22);
        }
        DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v24 + 40));
      }
      if ( (_DWORD)v4 == 1 )
      {
        *a3 = *(_QWORD *)(v12 + 368);
      }
      else
      {
        *a3 = 0LL;
        v23 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
        *(_QWORD *)(v23 + 24) = v4;
        WdLogEvent5_WdWarning(v23);
        v6 = -1073741637;
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v15 + 24) = a1;
      WdLogEvent5_WdError(v15);
      v6 = -1071774973;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v14[3] = 0LL;
    v14[4] = v4;
    v14[5] = a1;
    WdLogEvent5_WdError(v14);
    v6 = -1073741811;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 7056);
  return v6;
}
