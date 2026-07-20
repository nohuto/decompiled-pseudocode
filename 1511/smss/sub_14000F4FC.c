/*
 * XREFs of sub_14000F4FC @ 0x14000F4FC
 * Callers:
 *     sub_14000F9D0 @ 0x14000F9D0 (sub_14000F9D0.c)
 * Callees:
 *     <none>
 */

void sub_14000F4FC()
{
  struct _UNICODE_STRING *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = (struct _UNICODE_STRING *)qword_140020450;
    if ( qword_140020450 == &qword_140020450 )
      break;
    v1 = *(_QWORD *)qword_140020450;
    if ( *((PVOID **)qword_140020450 + 1) != &qword_140020450 || *(PVOID *)(v1 + 8) != qword_140020450 )
      __fastfail(3u);
    qword_140020450 = *(PVOID *)qword_140020450;
    *(_QWORD *)(v1 + 8) = &qword_140020450;
    RtlFreeUnicodeString(v0 + 1);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v0);
  }
  dword_14002044C = 0;
}
