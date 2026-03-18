/*
 * XREFs of GreGetStockObject @ 0x1C0035660
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 *     bInitICM @ 0x1C0156614 (bInitICM.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0035710 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

void *__fastcall GreGetStockObject(int a1)
{
  __int64 v1; // rbx
  int v2; // esi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // eax
  void *result; // rax
  __int64 CurrentProcessWin32Process; // rax

  v1 = a1;
  LOBYTE(v2) = 18;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v5 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v5 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( *(_DWORD *)(v5 + 340) )
      {
        LOBYTE(v2) = *(_DWORD *)(v5 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
        if ( CurrentProcessWin32Process )
          v2 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  if ( (unsigned int)v1 > 0x11
    || (v6 = 205824, !_bittest(&v6, v1))
    || (v2 & 0xF) != 0
    || (result = gahStockObjects96[v1]) == 0LL )
  {
    if ( (unsigned int)v1 > 0x15 )
      return 0LL;
    else
      return gahStockObjects[v1];
  }
  return result;
}
