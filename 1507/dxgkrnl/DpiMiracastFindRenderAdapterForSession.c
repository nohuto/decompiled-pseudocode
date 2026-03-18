/*
 * XREFs of DpiMiracastFindRenderAdapterForSession @ 0x1C00B43A0
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00B2490 (DpiPdoHandleOpmIoctls.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00B40C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiMiracastFindRenderAdapterForSession(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v7; // rax

  v4 = 0LL;
  if ( qword_1C0046E80 )
  {
    v4 = *(_QWORD *)(qword_1C0046E80 + 64);
    if ( v4 )
    {
      v5 = *(unsigned int *)(v4 + 236);
      if ( (_DWORD)v5 != 2 && (*(_DWORD *)(v4 + 240) != 2 || (((_DWORD)v5 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v5 == 4) )
      {
        v7 = WdLogNewEntry5_WdWarning(v4, v5, a3, a4);
        WdLogEvent5_WdWarning(v7);
        return 0LL;
      }
    }
  }
  return v4;
}
