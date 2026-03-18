/*
 * XREFs of PopDispatchQuerySetIrp @ 0x1401219F8
 * Callers:
 *     PoHandleIrp @ 0x1401216F8 (PoHandleIrp.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 */

__int64 __fastcall PopDispatchQuerySetIrp(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 *v4; // rax
  __int64 **v5; // rdx
  __int64 v7; // rdx

  v2 = a1[23];
  *(_BYTE *)(v2 + 3) |= 1u;
  ObfReferenceObjectWithTag(*(PVOID *)(v2 + 40), 0x746C6644u);
  v4 = a1 + 21;
  if ( a1 == (_QWORD *)PopInrushIrp )
  {
    v7 = PopIrpWorkerList;
    *v4 = PopIrpWorkerList;
    a1[22] = &PopIrpWorkerList;
    if ( *(__int64 **)(v7 + 8) != &PopIrpWorkerList )
      __fastfail(3u);
    *(_QWORD *)(v7 + 8) = v4;
    PopIrpWorkerList = (__int64)(a1 + 21);
  }
  else
  {
    v5 = (__int64 **)qword_1402DDC68;
    *v4 = (__int64)&PopIrpWorkerList;
    a1[22] = v5;
    if ( *v5 != &PopIrpWorkerList )
      __fastfail(3u);
    *v5 = v4;
    qword_1402DDC68 = (__int64)(a1 + 21);
  }
  return KeReleaseSemaphoreEx((__int64)&PopIrpWorkerSemaphore, 0, 1LL, v3, 0);
}
