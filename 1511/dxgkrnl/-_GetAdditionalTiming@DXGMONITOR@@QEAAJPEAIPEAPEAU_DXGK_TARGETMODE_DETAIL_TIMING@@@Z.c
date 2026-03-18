/*
 * XREFs of ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0188F78
 * Callers:
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0187DB0 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 * Callees:
 *     sub_1C01890D8 @ 0x1C01890D8 (sub_1C01890D8.c)
 */

__int64 __fastcall DXGMONITOR::_GetAdditionalTiming(
        DXGMONITOR *this,
        unsigned int *a2,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int *v8; // rdi
  bool v9; // cf
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  *a2 = 0;
  v8 = (unsigned int *)((char *)this + 424);
  *a3 = 0LL;
  v9 = *((_DWORD *)this + 106) != -1;
  if ( *((_DWORD *)this + 106) != -1 )
    goto LABEL_10;
  if ( *((_DWORD *)this + 8) == -2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  result = sub_1C01890D8(*((unsigned int *)this + 8), (char *)this + 424, (char *)this + 432);
  if ( (int)result >= 0 )
  {
    v9 = *v8 != -1;
LABEL_10:
    if ( !v9 )
    {
      v12 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v12);
    }
    if ( !*((_QWORD *)this + 54) )
    {
      v13 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v13);
    }
    ++*((_DWORD *)this + 110);
    *a2 = *v8;
    *a3 = (struct _DXGK_TARGETMODE_DETAIL_TIMING *)*((_QWORD *)this + 54);
    return 0LL;
  }
  return result;
}
