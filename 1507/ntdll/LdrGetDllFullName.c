/*
 * XREFs of LdrGetDllFullName @ 0x18006C490
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1800027E4 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180015F14 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     RtlCopyUnicodeString @ 0x18001FCD0 (RtlCopyUnicodeString.c)
 */

NTSTATUS __cdecl LdrGetDllFullName(PVOID DllHandle, PUNICODE_STRING FullDllName)
{
  NTSTATUS v2; // esi
  const UNICODE_STRING *v4; // rdi
  char *v5; // rbx
  void *SubSystemTib; // rcx
  NTSTATUS LoadedDllByHandle; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( DllHandle )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)DllHandle, &v10, &v9);
    v5 = (char *)v10;
    v2 = LoadedDllByHandle;
    if ( !v10 )
      return v2;
    v4 = (const UNICODE_STRING *)(v10 + 72);
  }
  else
  {
    v10 = LdrpImageEntry;
    v4 = (const UNICODE_STRING *)(LdrpImageEntry + 72);
    v5 = (char *)LdrpImageEntry;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && *((_QWORD *)SubSystemTib + 1) )
      v4 = (const UNICODE_STRING *)*((_QWORD *)SubSystemTib + 1);
  }
  if ( v5 )
  {
    RtlCopyUnicodeString(FullDllName, v4);
    if ( v4->Length > FullDllName->MaximumLength )
      v2 = -1073741789;
    if ( v5 != (char *)LdrpImageEntry )
      LdrpDereferenceModule(v5);
  }
  return v2;
}
