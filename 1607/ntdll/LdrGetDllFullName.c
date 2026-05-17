/*
 * XREFs of LdrGetDllFullName @ 0x180079B30
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180079858 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x180015220 (RtlCopyUnicodeString.c)
 *     LdrpFindLoadedDllByHandle @ 0x180031C50 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrGetDllFullName(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned __int16 *v6; // rdi
  __int64 v7; // rbx
  void *SubSystemTib; // rcx
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int LoadedDllByHandle; // eax
  int v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v15 = 0LL;
  if ( a1 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, (char *)&v15, &v14, a4);
    v7 = v15;
    v4 = LoadedDllByHandle;
    if ( !v15 )
      return v4;
    v6 = (unsigned __int16 *)(v15 + 72);
  }
  else
  {
    v15 = LdrpImageEntry;
    v6 = (unsigned __int16 *)(LdrpImageEntry + 72);
    v7 = LdrpImageEntry;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && *((_QWORD *)SubSystemTib + 1) )
      v6 = (unsigned __int16 *)*((_QWORD *)SubSystemTib + 1);
  }
  if ( v7 )
  {
    RtlCopyUnicodeString(a2, v6);
    if ( *v6 > a2[1] )
      v4 = -1073741789;
    if ( v7 != LdrpImageEntry )
      LdrpDereferenceModule(v7, v9, v10, v11);
  }
  return v4;
}
