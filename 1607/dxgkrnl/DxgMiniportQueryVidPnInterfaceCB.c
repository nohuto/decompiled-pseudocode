/*
 * XREFs of DxgMiniportQueryVidPnInterfaceCB @ 0x1C00D1060
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DxgMiniportQueryVidPnInterfaceCB(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  v5 = (int)a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7056);
  v7 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !a1 || (v8 = a1, *(_DWORD *)(a1 + 64) != 1833172997) )
      v8 = 0LL;
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 48);
      if ( KeGetCurrentIrql() )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, v9);
        if ( !*(_QWORD *)(v9 + 8) )
        {
          v16 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v16);
        }
        v17 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
        v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 64LL);
        if ( *(_DWORD *)(*(_QWORD *)(v18 + 40) + 28LL) >= 0x2003u )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v13, v15);
          v19[3] = 275LL;
          v19[4] = 20LL;
          v19[5] = v17;
          v19[6] = 0LL;
          v19[7] = 0LL;
          WdLogEvent5_WdCriticalError(v19);
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
      }
      if ( (_DWORD)v5 == 1 )
      {
        *a3 = *(_QWORD *)(v9 + 368);
      }
      else
      {
        *a3 = 0LL;
        v20 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
        *(_QWORD *)(v20 + 24) = v5;
        WdLogEvent5_WdWarning(v20);
        v7 = -1073741637;
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v12 + 24) = a1;
      WdLogEvent5_WdError(v12);
      v7 = -1071774973;
    }
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v11[3] = 0LL;
    v11[4] = v5;
    v11[5] = a1;
    WdLogEvent5_WdError(v11);
    v7 = -1073741811;
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerExit, (__int64)a3, 7056);
  return v7;
}
