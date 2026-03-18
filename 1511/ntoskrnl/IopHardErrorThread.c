/*
 * XREFs of IopHardErrorThread @ 0x1405F7A20
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IopCheckHardErrorEmpty @ 0x1401B6EAC (IopCheckHardErrorEmpty.c)
 *     IopRemoveHardErrorPacket @ 0x1401B76AC (IopRemoveHardErrorPacket.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x140673360 (ExRaiseHardError.c)
 */

void IopHardErrorThread()
{
  __int64 v0; // rax
  _QWORD *v1; // rbx
  char v2; // al
  void *v3; // rcx
  char v4; // di
  char v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  do
  {
    KeWaitForSingleObject(&Semaphore, Executive, 0, 0, 0LL);
    v0 = IopRemoveHardErrorPacket();
    v1 = (_QWORD *)v0;
    v6 = v0 + 24;
    if ( ExReadyForErrors )
      ExRaiseHardError(
        *(_DWORD *)(v0 + 16),
        *(_QWORD *)(v0 + 32) != 0LL,
        *(_QWORD *)(v0 + 32) != 0LL,
        (unsigned __int64)&v6 & -(__int64)(*(_QWORD *)(v0 + 32) != 0LL),
        7,
        (__int64)&v5);
    v2 = IopCheckHardErrorEmpty();
    v3 = (void *)v1[4];
    v4 = v2;
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v1, 0);
  }
  while ( v4 );
}
