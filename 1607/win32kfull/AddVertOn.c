/*
 * XREFs of AddVertOn @ 0x1C00BD5CC
 * Callers:
 *     CheckVertTopology @ 0x1C00BD6E0 (CheckVertTopology.c)
 * Callees:
 *     fsc_BeginElement @ 0x1C00C0F2C (fsc_BeginElement.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AddVertOn(int a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // [rsp+58h] [rbp+10h] BYREF
  __int64 v3; // [rsp+60h] [rbp+18h] BYREF

  result = fsc_BeginElement(a1, 2, 2, 0, 0LL, 0LL, (__int64)&v3, (__int64)&v2);
  if ( !(_DWORD)result )
    return v2((unsigned int)(dword_1C03292F8 >> 6), (unsigned int)((dword_1C03292FC + 31) >> 6));
  return result;
}
