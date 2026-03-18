/*
 * XREFs of PipAttemptDependentsStart @ 0x1404EA64C
 * Callers:
 *     IoResolveDependency @ 0x14013888C (IoResolveDependency.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404EA628 (PnpStartedDeviceNodeDependencyCheck.c)
 * Callees:
 *     PiGetDependentList @ 0x14049F368 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x140600CD0 (PiEnumerateDependentListEntry.c)
 *     PipAttemptDependentStart @ 0x140600E7C (PipAttemptDependentStart.c)
 */

__int64 *__fastcall PipAttemptDependentsStart(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  result = PiGetDependentList(*(_QWORD *)(a1 + 32));
  v2 = result;
  v3 = (__int64 *)*result;
  while ( v3 != v2 )
  {
    result = (__int64 *)PiEnumerateDependentListEntry(v3, &Object, &v4);
    v3 = (__int64 *)*v3;
    if ( Object )
      result = (__int64 *)PipAttemptDependentStart(Object);
  }
  return result;
}
