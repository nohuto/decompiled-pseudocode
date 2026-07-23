/*
 * XREFs of PipAttemptDependentsStart @ 0x14048890C
 * Callers:
 *     IoResolveDependency @ 0x140142E54 (IoResolveDependency.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404888E8 (PnpStartedDeviceNodeDependencyCheck.c)
 * Callees:
 *     PiGetDependentList @ 0x14048893C (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x14062ADD0 (PiEnumerateDependentListEntry.c)
 *     PipAttemptDependentStart @ 0x14062AF7C (PipAttemptDependentStart.c)
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
