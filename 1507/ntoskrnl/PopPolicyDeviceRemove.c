/*
 * XREFs of PopPolicyDeviceRemove @ 0x1406BADA4
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x1406BAE04 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PopPolicyDeviceRemove(__int64 a1)
{
  LONG_PTR result; // rax
  LONG_PTR *v3; // rcx
  __int64 v4; // rax

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(LONG_PTR **)(a1 + 8);
    if ( *(_QWORD *)(result + 8) != a1 || *v3 != a1 )
      __fastfail(3u);
    *v3 = result;
    *(_QWORD *)(result + 8) = v3;
    v4 = *(int *)(a1 + 16);
    *(_QWORD *)a1 = 0LL;
    (*((void (__fastcall **)(__int64))&unk_140321388 + 4 * v4))(a1);
    IoFreeIrp(*(PIRP *)(a1 + 56));
    return ObfDereferenceObject(*(PVOID *)(a1 + 48));
  }
  return result;
}
