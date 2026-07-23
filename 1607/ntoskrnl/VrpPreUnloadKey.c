/*
 * XREFs of VrpPreUnloadKey @ 0x1406169FC
 * Callers:
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     RegistryCallback @ 0x1404635D0 (RegistryCallback.c)
 * Callees:
 *     VrpLockJobContextExclusive @ 0x140612FD8 (VrpLockJobContextExclusive.c)
 *     VrpUnlockJobContextExclusive @ 0x140613114 (VrpUnlockJobContextExclusive.c)
 *     VrpFindExactNamespaceNode @ 0x140614D50 (VrpFindExactNamespaceNode.c)
 */

__int64 __fastcall VrpPreUnloadKey(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 ExactNamespaceNode; // rax
  unsigned int v6; // ebx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  VrpLockJobContextExclusive(a2);
  ExactNamespaceNode = VrpFindExactNamespaceNode(a2, (int)v2 + 16, (int)&v8);
  v6 = 0;
  if ( ExactNamespaceNode )
  {
    if ( (*(_DWORD *)(ExactNamespaceNode + 48) & 1) != 0 )
    {
      *(_QWORD *)(a1 + 16) = ExactNamespaceNode;
      return v6;
    }
    v6 = -1073741790;
  }
  else
  {
    v6 = -1073741772;
  }
  VrpUnlockJobContextExclusive(a2);
  return v6;
}
