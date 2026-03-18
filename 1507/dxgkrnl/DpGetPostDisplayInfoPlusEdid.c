/*
 * XREFs of DpGetPostDisplayInfoPlusEdid @ 0x1C0166250
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     DpAcquirePostDisplayOwnership @ 0x1C00DEA20 (DpAcquirePostDisplayOwnership.c)
 */

__int64 __fastcall DpGetPostDisplayInfoPlusEdid(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  _QWORD *v6; // rax

  if ( a1 && a2 )
  {
    v5 = DpAcquirePostDisplayOwnership(a1, a2, a3, a4);
    if ( v5 >= 0 )
      memmove(a2 + 8, &xmmword_1C0046EB0, 0x80uLL);
  }
  else
  {
    v5 = -1073741811;
    v6 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v6[4] = 0LL;
    v6[3] = DpGetPostDisplayInfoPlusEdid;
    v6[5] = -1073741811LL;
    WdLogEvent5_WdError(v6);
  }
  return (unsigned int)v5;
}
