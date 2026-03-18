/*
 * XREFs of Fatal @ 0x1C0046D00
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Fatal(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"III");
  if ( !(_DWORD)result )
  {
    if ( ghFatal )
      ghFatal(
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 16LL),
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL),
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 96LL),
        a1,
        qword_1C005AAB8);
    return 3222536198LL;
  }
  return result;
}
