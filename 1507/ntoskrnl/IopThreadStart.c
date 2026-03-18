/*
 * XREFs of IopThreadStart @ 0x1405B7440
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall IopThreadStart(_QWORD *StartContext)
{
  PVOID Object[2]; // [rsp+20h] [rbp-38h]
  __int64 v2; // [rsp+40h] [rbp-18h]

  *(_OWORD *)Object = *(_OWORD *)StartContext;
  v2 = StartContext[2];
  ExFreePoolWithTag(StartContext, 0);
  ((void (__fastcall *)(__int64))_mm_srli_si128(*(__m128i *)Object, 8).m128i_i64[0])(v2);
  ObfDereferenceObject(Object[0]);
  PsTerminateSystemThread(0);
}
