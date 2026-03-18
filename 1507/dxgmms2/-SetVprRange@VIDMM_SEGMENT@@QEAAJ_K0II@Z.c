/*
 * XREFs of ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II@Z @ 0x1C007115C
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C003B7A8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::SetVprRange(
        VIDMM_SEGMENT *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // r10
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r10

  if ( !(_DWORD)a4 || (((_DWORD)a4 - 1) & (unsigned int)a4) != 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 4507LL;
    goto LABEL_18;
  }
  v5 = *((_QWORD *)this + 5);
  if ( a2 >= v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 4512LL;
LABEL_18:
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
  if ( a3 > v5 || (v7 = a2 + a3, a2 + a3 > v5) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 4517LL;
    goto LABEL_18;
  }
  v8 = (unsigned int)a4 - 1LL;
  if ( (v8 & a3) != 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 4523LL;
    goto LABEL_18;
  }
  if ( (v8 & a2) != 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 4528LL;
    goto LABEL_18;
  }
  if ( a5 > 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 4537LL;
    goto LABEL_18;
  }
  *((_DWORD *)this + 100) = a4;
  *((_QWORD *)this + 47) = a2;
  *((_QWORD *)this + 48) = a3;
  *((_DWORD *)this + 101) = a5;
  *((_QWORD *)this + 49) = v8;
  if ( a5 == 1 )
  {
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 51) = v7;
    *((_QWORD *)this + 52) = v7;
  }
  return 0LL;
}
