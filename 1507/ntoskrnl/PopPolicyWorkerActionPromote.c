/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x1405699EC
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400D0054 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1400D042C (PopGetPolicyWorker.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerActionPromote()
{
  char v1; // bl
  __int64 v2; // rcx
  int v3; // ecx

  PopAcquirePolicyLock();
  if ( !PopAction )
    goto LABEL_2;
  v1 = PopAction;
  if ( !byte_14032E641 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    byte_14032E641 = 1;
    v3 = 2;
    goto LABEL_15;
  }
  v2 = (unsigned int)(unsigned __int8)byte_14032E641 - 2;
  if ( byte_14032E641 != 2 )
  {
    if ( byte_14032E641 != 3 && (PoDebug & 1) != 0 )
      DbgPrint("PopAction: invalid state %d\n", (unsigned __int8)byte_14032E641);
    goto LABEL_2;
  }
  LODWORD(v2) = 1;
  if ( (int)PopIssueActionRequest(
              v2,
              (unsigned int)qword_14032E644,
              HIDWORD(qword_14032E644),
              (unsigned int)dword_14032E64C) >= 0 )
  {
    PopAction &= ~v1;
    goto LABEL_2;
  }
  if ( byte_14032E641 != 2 )
  {
    v3 = 1;
LABEL_15:
    PopGetPolicyWorker(v3);
  }
LABEL_2:
  PopReleasePolicyLock();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
