/*
 * XREFs of IopHardErrorThread @ 0x140621894
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IopCheckHardErrorEmpty @ 0x1401C4868 (IopCheckHardErrorEmpty.c)
 *     IopRemoveHardErrorPacket @ 0x1401C52B8 (IopRemoveHardErrorPacket.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x1406B61A0 (ExRaiseHardError.c)
 */

void IopHardErrorThread()
{
  __int64 v0; // rax
  _QWORD *v1; // rbx
  bool v2; // zf
  char v3; // al
  void *v4; // rcx
  char v5; // di
  char v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  do
  {
    KeWaitForSingleObject(&Semaphore, Executive, 0, 0, 0LL);
    v0 = IopRemoveHardErrorPacket();
    v1 = (_QWORD *)v0;
    v2 = *(_QWORD *)(v0 + 32) == 0LL;
    v7 = v0 + 24;
    if ( ExReadyForErrors )
      ExRaiseHardError(*(unsigned int *)(v0 + 16), !v2, !v2, (unsigned __int64)&v7 & -(__int64)!v2, 7, &v6);
    v3 = IopCheckHardErrorEmpty();
    v4 = (void *)v1[4];
    v5 = v3;
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    ExFreePoolWithTag(v1, 0);
  }
  while ( v5 );
}
