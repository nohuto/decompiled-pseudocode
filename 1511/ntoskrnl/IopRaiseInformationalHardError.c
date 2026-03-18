/*
 * XREFs of IopRaiseInformationalHardError @ 0x1405F848C
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x140673360 (ExRaiseHardError.c)
 */

void __fastcall IopRaiseInformationalHardError(_QWORD *P)
{
  bool v1; // zf
  void *v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  char *v5; // [rsp+58h] [rbp+20h] BYREF

  v1 = P[4] == 0LL;
  v5 = (char *)(P + 3);
  if ( ExReadyForErrors )
    ExRaiseHardError(*((_DWORD *)P + 4), !v1, !v1, (unsigned __int64)&v5 & -(__int64)!v1, 7, (__int64)&v4);
  v3 = (void *)P[4];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_1402FB69C);
}
