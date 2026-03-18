/*
 * XREFs of DpGetPostDisplayInfoPlusEdid @ 0x1C0192560
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     DpAcquirePostDisplayOwnership @ 0x1C00FC3E0 (DpAcquirePostDisplayOwnership.c)
 */

__int64 __fastcall DpGetPostDisplayInfoPlusEdid(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rax

  if ( a1 && a2 )
  {
    v3 = DpAcquirePostDisplayOwnership(a1, a2);
    if ( v3 >= 0 )
      memmove(a2 + 8, &xmmword_1C00570F0, 0x80uLL);
  }
  else
  {
    v3 = -1073741811;
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
  }
  return (unsigned int)v3;
}
