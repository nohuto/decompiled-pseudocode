/*
 * XREFs of PssValidateSnapshotDescriptor @ 0x1800F6860
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180083478 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F68A4 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PssValidateSnapshotDescriptor(__int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1[102] < 0 || a1[105] < 0 || a1[108] < 0 || a1[111] < 0 || a1[115] < 0 || a1[119] < 0 )
    return 3221225480LL;
  return result;
}
