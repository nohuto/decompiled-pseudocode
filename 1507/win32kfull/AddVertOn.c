/*
 * XREFs of AddVertOn @ 0x1C00ACD80
 * Callers:
 *     CheckVertTopology @ 0x1C00AE5EC (CheckVertTopology.c)
 * Callees:
 *     fsc_BeginElement @ 0x1C00B0CBC (fsc_BeginElement.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AddVertOn(int a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // [rsp+58h] [rbp+10h] BYREF
  __int64 v3; // [rsp+60h] [rbp+18h] BYREF

  result = fsc_BeginElement(a1, 2, 2, 0, 0LL, 0LL, (__int64)&v3, (__int64)&v2);
  if ( !(_DWORD)result )
    return v2((unsigned int)(dword_1C0322ED8 >> 6), (unsigned int)((dword_1C0322EDC + 31) >> 6));
  return result;
}
