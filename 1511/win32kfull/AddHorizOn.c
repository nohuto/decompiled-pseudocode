/*
 * XREFs of AddHorizOn @ 0x1C00A4ACC
 * Callers:
 *     CheckHorizTopology @ 0x1C00A6840 (CheckHorizTopology.c)
 * Callees:
 *     fsc_BeginElement @ 0x1C00A9014 (fsc_BeginElement.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AddHorizOn(int a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // [rsp+58h] [rbp+10h] BYREF
  __int64 v3; // [rsp+60h] [rbp+18h] BYREF

  result = fsc_BeginElement(a1, 1, 2, 0, 0LL, 0LL, (__int64)&v2, (__int64)&v3);
  if ( !(_DWORD)result )
    return v2((unsigned int)((dword_1C0323BF8 + 31) >> 6), (unsigned int)(dword_1C0323BFC >> 6));
  return result;
}
