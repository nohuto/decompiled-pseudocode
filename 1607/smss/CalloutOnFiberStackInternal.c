/*
 * XREFs of CalloutOnFiberStackInternal @ 0x14000CE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CalloutOnFiberStackInternal(unsigned __int64 *a1, __int64 (__fastcall *a2)(__int64), __int64 a3)
{
  unsigned __int64 *v3; // rdi
  __int64 result; // rax

  v3 = (unsigned __int64 *)((a1[25] & 0xFFFFFFFFFFFFFFF0uLL) - 64);
  v3[4] = (unsigned __int64)KeGetPcr()->NtTib.StackBase;
  v3[5] = KeGetPcr()->UserRsp;
  v3[6] = *(_QWORD *)&KeGetPcr()[13].PcrAlign1[18];
  v3[7] = *(_QWORD *)&KeGetPcr()[15].PcrAlign1[10];
  __writegsqword(8u, a1[2]);
  __writegsqword(0x10u, a1[3]);
  __writegsqword(0x1478u, a1[4]);
  __writegsqword(0x1748u, a1[163]);
  result = a2(a3);
  __writegsqword(8u, v3[4]);
  __writegsqword(0x10u, v3[5]);
  __writegsqword(0x1478u, v3[6]);
  __writegsqword(0x1748u, v3[7]);
  return result;
}
