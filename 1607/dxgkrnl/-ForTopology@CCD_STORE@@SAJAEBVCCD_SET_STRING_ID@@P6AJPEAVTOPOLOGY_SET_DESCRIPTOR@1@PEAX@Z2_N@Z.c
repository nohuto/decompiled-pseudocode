/*
 * XREFs of ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00B87F0
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008D0CC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00B8A64 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 * Callees:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00B73F8 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 */

__int64 __fastcall CCD_STORE::ForTopology(
        const struct CCD_SET_STRING_ID *a1,
        int (*a2)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *),
        __int64 a3,
        char a4)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rbx
  const struct CCD_SET_STRING_ID *v9; // rsi
  __int64 v10; // r8
  __int64 v12; // rax

  v4 = *((_WORD *)a1 + 4);
  v5 = 0LL;
  v9 = a1;
  if ( v4 )
  {
    v10 = *((_QWORD *)a1 + 2);
    while ( 1 )
    {
      LOBYTE(a1) = *(_BYTE *)(v5 + v10) - 94;
      if ( ((unsigned __int8)a1 & 0xDF) == 0 )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v4 )
        return CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
                 (__int64)a1,
                 (struct _STRING *)((char *)v9 + 8),
                 (int (__fastcall *)(_BYTE *, __int64))a2,
                 a3,
                 a4);
    }
    v12 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v12 + 24) = (unsigned int)v5;
    *(_QWORD *)(v12 + 32) = *(char *)(*((_QWORD *)v9 + 2) + v5);
    WdLogEvent5_WdError(v12);
  }
  return CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
           (__int64)a1,
           (struct _STRING *)((char *)v9 + 8),
           (int (__fastcall *)(_BYTE *, __int64))a2,
           a3,
           a4);
}
