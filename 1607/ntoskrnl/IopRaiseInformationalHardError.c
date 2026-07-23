/*
 * XREFs of IopRaiseInformationalHardError @ 0x1406223C8
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x1406B61A0 (ExRaiseHardError.c)
 */

void __fastcall IopRaiseInformationalHardError(char *P)
{
  bool v1; // zf
  void *v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  char *v5; // [rsp+58h] [rbp+20h] BYREF

  v1 = *((_QWORD *)P + 4) == 0LL;
  v5 = P + 24;
  if ( ExReadyForErrors )
    ExRaiseHardError(*((unsigned int *)P + 4), !v1, !v1, (unsigned __int64)&v5 & -(__int64)!v1, 7, &v4);
  v3 = (void *)*((_QWORD *)P + 4);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_140320C1C);
}
