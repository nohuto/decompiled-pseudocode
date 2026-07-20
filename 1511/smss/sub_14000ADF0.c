/*
 * XREFs of sub_14000ADF0 @ 0x14000ADF0
 * Callers:
 *     sub_140009D20 @ 0x140009D20 (sub_140009D20.c)
 * Callees:
 *     <none>
 */

__int64 sub_14000ADF0()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rax

  v0 = 0LL;
  qword_14001FC18 = (__int64)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), Flags, 0x300uLL);
  v1 = qword_14001FC18;
  if ( !qword_14001FC18 )
    return 3221225495LL;
  v2 = 0LL;
  v3 = 32LL;
  while ( 1 )
  {
    v4 = (_QWORD *)(v0 + v1);
    v4[1] = v4;
    *v4 = v4;
    RtlInitializeSRWLock(v2 + v1 + 16);
    v2 += 24LL;
    v0 += 24LL;
    if ( !--v3 )
      break;
    v1 = qword_14001FC18;
  }
  RtlInitializeConditionVariable(&unk_14001FC10);
  qword_14001FC08 = (__int64)&qword_14001FC00;
  qword_14001FC00 = (__int64)&qword_14001FC00;
  return 0LL;
}
