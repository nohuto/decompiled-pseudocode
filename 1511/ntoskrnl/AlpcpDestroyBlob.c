/*
 * XREFs of AlpcpDestroyBlob @ 0x1404253D4
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockBlob @ 0x140424050 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140425460 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14042B610 (AlpcpDispatchReplyToWaitingThread.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDestroyBlob(__int64 a1)
{
  _BYTE *v1; // rdi
  __int64 v2; // rbx
  int (*v3)(void); // rax

  v1 = (_BYTE *)(a1 - 48);
  v2 = AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 48 + 17)];
  v3 = *(int (**)(void))(v2 + 32);
  if ( !v3 || v3() >= 0 )
  {
    if ( (v1[16] & 2) != 0 )
    {
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v2 + 8), v1);
    }
    else if ( *(_QWORD *)(v2 + 40) )
    {
      (*((void (__fastcall **)(_BYTE *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v2 + 8) + 7))(v1);
    }
    else
    {
      ExFreePoolWithTag(v1, *(_DWORD *)(v2 + 4));
    }
  }
}
