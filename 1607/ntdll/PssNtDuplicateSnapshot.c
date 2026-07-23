/*
 * XREFs of PssNtDuplicateSnapshot @ 0x180007BB0
 * Callers:
 *     <none>
 * Callees:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180004424 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180004D60 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PssNtValidateDescriptor @ 0x180008270 (PssNtValidateDescriptor.c)
 */

__int64 __fastcall PssNtDuplicateSnapshot(void *a1, void *a2, __int64 a3, PVOID *a4, char a5)
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
      return PsspDuplicateSnapshotLocalToRemote((__int64)a2, (void *)v9, a4, a5);
    }
  }
  else
  {
    if ( a3 == -1 )
      a3 = -1LL;
    return PsspDuplicateSnapshotRemoteToRemote(a1, a2, (HANDLE)a3, a4, a5);
  }
  return result;
}
