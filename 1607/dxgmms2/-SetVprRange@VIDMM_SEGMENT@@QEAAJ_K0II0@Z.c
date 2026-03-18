/*
 * XREFs of ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C009A2E0
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C006DA98 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::SetVprRange(
        VIDMM_SEGMENT *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v6 = a2;
  if ( !a4 || ((a4 - 1) & a4) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 4898LL;
    goto LABEL_21;
  }
  v7 = *((_QWORD *)this + 5);
  if ( a2 >= v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 4903LL;
LABEL_21:
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
  if ( a3 > v7 || (a2 += a3, a2 > v7) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 4908LL;
    goto LABEL_21;
  }
  v9 = a4 - 1LL;
  if ( (v9 & a3) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 4914LL;
    goto LABEL_21;
  }
  if ( (v9 & v6) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 4919LL;
    goto LABEL_21;
  }
  if ( a5 > 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 4928LL;
    goto LABEL_21;
  }
  if ( a6 && a5 != 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 4938LL;
    goto LABEL_21;
  }
  *((_DWORD *)this + 100) = a4;
  *((_QWORD *)this + 47) = v6;
  *((_QWORD *)this + 48) = a3;
  *((_DWORD *)this + 101) = a5;
  *((_QWORD *)this + 49) = v9;
  *((_QWORD *)this + 57) = a6;
  if ( a5 == 1 )
  {
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 51) = a2;
    *((_QWORD *)this + 52) = a2;
  }
  return 0LL;
}
