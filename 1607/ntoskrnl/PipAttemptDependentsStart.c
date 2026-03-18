/*
 * XREFs of PipAttemptDependentsStart @ 0x1404C4D08
 * Callers:
 *     IoResolveDependency @ 0x1401428E4 (IoResolveDependency.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404C4CE4 (PnpStartedDeviceNodeDependencyCheck.c)
 * Callees:
 *     PiGetDependentList @ 0x1404C4D38 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x14062AD1C (PiEnumerateDependentListEntry.c)
 *     PipAttemptDependentStart @ 0x14062AEC8 (PipAttemptDependentStart.c)
 */

_QWORD **__fastcall PipAttemptDependentsStart(__int64 a1)
{
  _QWORD **result; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  result = (_QWORD **)PiGetDependentList(*(_QWORD *)(a1 + 32));
  v2 = result;
  v3 = *result;
  while ( v3 != v2 )
  {
    result = (_QWORD **)PiEnumerateDependentListEntry(v3, &Object, &v4);
    v3 = (_QWORD *)*v3;
    if ( Object )
      result = (_QWORD **)PipAttemptDependentStart(Object);
  }
  return result;
}
