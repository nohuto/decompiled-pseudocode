/*
 * XREFs of AddHorizOff @ 0x1C00ACD24
 * Callers:
 *     CheckHorizTopology @ 0x1C00AE138 (CheckHorizTopology.c)
 * Callees:
 *     fsc_BeginElement @ 0x1C00B0CBC (fsc_BeginElement.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AddHorizOff(int a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // [rsp+58h] [rbp+10h] BYREF
  __int64 v3; // [rsp+60h] [rbp+18h] BYREF

  result = fsc_BeginElement(a1, 4, 2, 0, 0LL, 0LL, (__int64)&v2, (__int64)&v3);
  if ( !(_DWORD)result )
    return v2((unsigned int)((dword_1C0322ED8 + 32) >> 6), (unsigned int)(dword_1C0322EDC >> 6));
  return result;
}
