/*
 * XREFs of ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C01A0A48
 * Callers:
 *     ?IsWaitingForPowerOn@DXGADAPTER@@QEAAEI@Z @ 0x1C0145914 (-IsWaitingForPowerOn@DXGADAPTER@@QEAAEI@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004864 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1C007E5E8 (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DmmIsWaitingForPowerOn(_QWORD *a1, int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r10
  int v14; // edx
  DMMVIDPN *v15; // r10
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225473LL;
  }
  if ( !a1[266] )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a1[267] )
  {
    v9 = a1[266];
    v10 = *(_QWORD *)(v9 + 88);
    if ( !v10 )
    {
      v6 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v6 + 24) = a1;
      goto LABEL_3;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v18, *(_QWORD *)(v9 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 72) + 32LL));
    v11 = *(_QWORD *)(v10 + 80);
    v12 = *(_QWORD *)(v10 + 72);
    v16 = v12;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v13 = *(_QWORD *)(v10 + 80);
      v12 = v16;
    }
    else
    {
      v13 = 0LL;
    }
    v17 = v13;
    if ( (!v12 || !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v12 + 96), a2))
      && v13
      && DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v13 + 96), a2)
      && !DMMVIDPN::IsPathFromSourcePoweredOff(v15, v14) )
    {
      *a3 = 1;
    }
    auto_rc<DMMVIDPN const>::reset(&v17, 0LL);
    auto_rc<DMMVIDPN const>::reset(&v16, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v18 + 40));
  }
  return 0LL;
}
