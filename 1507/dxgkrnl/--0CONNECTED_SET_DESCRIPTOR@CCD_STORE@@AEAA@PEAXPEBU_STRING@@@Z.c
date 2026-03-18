/*
 * XREFs of ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C009ED24
 * Callers:
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C009EA88 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 * Callees:
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0067128 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C006745C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C006755C (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 */

CCD_STORE::CONNECTED_SET_DESCRIPTOR *__fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR(
        CCD_STORE::CONNECTED_SET_DESCRIPTOR *this,
        void *a2,
        const struct _STRING *a3,
        __int64 a4)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  _BYTE v15[64]; // [rsp+20h] [rbp-48h] BYREF

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = a2;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( a3 )
  {
    CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v15, a3);
    v7 = *(int *)CCD_SET_STRING_ID::operator=(this, (__int64)v15);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v15);
    if ( (int)v7 < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      v14[3] = v7;
      v14[4] = this;
      v14[5] = a2;
      v14[6] = a3;
      WdLogEvent5_WdAssertion(v14);
      CCD_SET_STRING_ID::_Cleanup(this);
    }
  }
  return this;
}
