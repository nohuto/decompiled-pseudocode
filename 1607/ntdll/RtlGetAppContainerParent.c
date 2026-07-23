/*
 * XREFs of RtlGetAppContainerParent @ 0x180003330
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18000F000 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlDefaultNpAcl @ 0x18008B240 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x18000BB00 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x18000D5E0 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x18000DD60 (RtlGetAppContainerSidType.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  ULONG v4; // ebx
  __int64 v5; // rbp
  ULONG v6; // eax
  _DWORD *Heap; // rax
  _DWORD *v8; // rbx
  int v9; // edi
  _DWORD *v10; // rcx
  char *v11; // rsi
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp+10h] BYREF

  *AppContainerSidParent = 0LL;
  if ( RtlGetAppContainerSidType(AppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return -1073741811;
  }
  v4 = NtdllBaseTag;
  v5 = 8LL;
  v6 = RtlLengthRequiredSid(8u);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v4 + 1310720, v6);
  v8 = Heap;
  if ( !Heap )
    return -1073741670;
  v9 = RtlInitializeSid(Heap, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
  if ( v9 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  }
  else
  {
    v10 = v8 + 2;
    v11 = (char *)((_BYTE *)AppContainerSid - (_BYTE *)v8);
    do
    {
      *v10 = *(_DWORD *)((char *)v10 + (_QWORD)v11);
      ++v10;
      --v5;
    }
    while ( v5 );
    *AppContainerSidParent = v8;
    return 0;
  }
  return v9;
}
