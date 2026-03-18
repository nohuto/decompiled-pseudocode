/*
 * XREFs of DpiMiracastFindRenderAdapterForSession @ 0x1C00DF4F0
 * Callers:
 *     DpiPdoHandleOpmIoctls @ 0x1C00DCC84 (DpiPdoHandleOpmIoctls.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DF204 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     DpiMiracastGetFdoFromDevice @ 0x1C00DF51C (DpiMiracastGetFdoFromDevice.c)
 */

__int64 DpiMiracastFindRenderAdapterForSession()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax

  result = DpiMiracastGetFdoFromDevice(qword_1C00570C0);
  if ( result )
  {
    v4 = *(unsigned int *)(result + 236);
    if ( (_DWORD)v4 != 2 )
    {
      if ( *(_DWORD *)(result + 240) != 2 || (v1 = (unsigned int)(v4 - 3), (v1 & 0xFFFFFFFC) != 0) || (_DWORD)v4 == 4 )
      {
        v5 = WdLogNewEntry5_WdWarning(v1, v4, v2, v3);
        WdLogEvent5_WdWarning(v5);
        return 0LL;
      }
    }
  }
  return result;
}
