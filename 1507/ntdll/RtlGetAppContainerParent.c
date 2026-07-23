/*
 * XREFs of RtlGetAppContainerParent @ 0x1800030B0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18003EE10 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlDefaultNpAcl @ 0x180050BE0 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlGetAppContainerSidType @ 0x18004AA20 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x18004EAE0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
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
