/*
 * XREFs of NtOpenPartition @ 0x1406A47E8
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenPartition(_QWORD *a1, ACCESS_MASK a2, __int64 a3)
{
  char PreviousMode; // r8
  _QWORD *v7; // rdx
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  result = ObOpenObjectByName(a3, (__int64)MmPartitionObjectType, PreviousMode, 0LL, a2, 0LL, v9);
  if ( (int)result >= 0 )
    *a1 = v9[0];
  return result;
}
