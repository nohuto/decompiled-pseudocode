/*
 * XREFs of NVMeStartAsyncEventCommands @ 0x1C0008574
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeIssueAsyncEventCommand @ 0x1C000D574 (NVMeIssueAsyncEventCommand.c)
 */

char __fastcall NVMeStartAsyncEventCommands(__int64 a1)
{
  int v3; // edx
  unsigned __int16 v4; // cx
  __int64 v5; // rsi
  __int64 v6; // rbp

  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  v3 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1080) + 259LL);
  v4 = 4;
  if ( v3 + 1 < 4 )
    v4 = v3 + 1;
  if ( v4 )
  {
    v5 = a1 + 664;
    v6 = v4;
    do
    {
      NVMeIssueAsyncEventCommand(a1, v5);
      v5 += 104LL;
      --v6;
    }
    while ( v6 );
  }
  return 1;
}
