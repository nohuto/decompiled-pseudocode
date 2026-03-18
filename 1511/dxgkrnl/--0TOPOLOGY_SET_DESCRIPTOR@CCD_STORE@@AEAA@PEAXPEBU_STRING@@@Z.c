/*
 * XREFs of ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C0060C00
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C005E674 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C005F3AC (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0061B74 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C0061EA8 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C0061FA8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 */

CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        const struct _STRING *a3)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  _BYTE v11[64]; // [rsp+20h] [rbp-48h] BYREF

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = a2;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a3 )
  {
    CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v11, a3);
    v7 = *(int *)CCD_SET_STRING_ID::operator=(this);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v11);
    if ( (int)v7 < 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(v8);
      v10[3] = v7;
      v10[4] = this;
      v10[5] = a2;
      v10[6] = a3;
      WdLogEvent5_WdAssertion(v10);
      CCD_SET_STRING_ID::_Cleanup(this);
    }
  }
  return this;
}
