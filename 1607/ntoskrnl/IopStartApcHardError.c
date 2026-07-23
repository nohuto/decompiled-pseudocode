/*
 * XREFs of IopStartApcHardError @ 0x1406232AC
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 */

void __fastcall IopStartApcHardError(PIRP *a1)
{
  HANDLE v2; // [rsp+58h] [rbp+10h] BYREF

  if ( PsCreateSystemThread(&v2, 0, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)IopApcHardError, a1) >= 0 )
  {
    ZwClose(v2);
  }
  else
  {
    IofCompleteRequest(a1[4], 1);
    ExFreePoolWithTag(a1, 0);
  }
}
