/*
 * XREFs of _lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator() @ 0x1402A6864
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x1402A66F0 (W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___.c)
 *     W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x1402A67A0 (W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator()(__int64 *a1)
{
  unsigned int i; // ebx
  __int64 v3; // rbp
  __int64 v4; // rsi
  _QWORD *ProcessWin32Process; // rax

  for ( i = 0; i < *((_DWORD *)a1 + 2); ++i )
  {
    v3 = *a1;
    v4 = 32LL * i;
    ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(*(_QWORD *)(v4 + *a1));
    if ( ProcessWin32Process && *ProcessWin32Process )
      tagPROCESSINFO::UpdateCapabilities(ProcessWin32Process, *(_QWORD *)(v4 + v3 + 24), *(_QWORD *)(v4 + v3 + 16));
  }
  return 0LL;
}
