/*
 * XREFs of PssNtDuplicateSnapshot @ 0x18008BD70
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x1800842D0 (PssNtValidateDescriptor.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18008BDD8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F67B8 (PsspDuplicateSnapshotRemoteToRemote.c)
 */

__int64 __fastcall PssNtDuplicateSnapshot(void *a1, unsigned int *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a3;
  if ( a1 == (void *)-1LL )
  {
    result = PssNtValidateDescriptor(a2, retaddr);
    if ( (int)result >= 0 )
    {
      if ( v6 == -1 )
        v9 = -1LL;
      else
        v9 = v6;
      return PsspDuplicateSnapshotLocalToRemote(a2, v9, a4, a5);
    }
  }
  else
  {
    if ( a3 == -1 )
      a3 = -1LL;
    return PsspDuplicateSnapshotRemoteToRemote(a1, a2, (HANDLE)a3, a5);
  }
  return result;
}
