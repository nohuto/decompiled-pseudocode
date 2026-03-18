/*
 * XREFs of ExpOwnerEntryToThread @ 0x1400DA08C
 * Callers:
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     ExReinitializeResourceLite @ 0x1400D9F40 (ExReinitializeResourceLite.c)
 *     ExQuerySystemLockInformation @ 0x1403B2F6C (ExQuerySystemLockInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExpOwnerEntryToThread(_DWORD *a1)
{
  unsigned __int64 result; // rax

  if ( (a1[2] & 2) != 0 )
    return *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  if ( (*(_QWORD *)a1 & 3) == 0 )
    return *(_QWORD *)a1;
  return result;
}
