/*
 * XREFs of RtlLookupFunctionTable @ 0x14012D42C
 * Callers:
 *     KiLockExtendedServiceTable @ 0x14017B604 (KiLockExtendedServiceTable.c)
 *     CcInitializeBcbProfiler @ 0x14079A2C4 (CcInitializeBcbProfiler.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14001F3E0 (RtlpxLookupFunctionTable.c)
 */

PVOID __fastcall RtlLookupFunctionTable(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  PVOID result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( a1 < *(&xmmword_14031EF70 + 1) || a1 >= *(&xmmword_14031EF70 + 1) + (unsigned int)qword_14031EF80 )
  {
    result = RtlpxLookupFunctionTable(a1, (__int64 *)&v6);
  }
  else
  {
    v6 = *(_OWORD *)&xmmword_14031EF70;
    v7 = qword_14031EF80;
    result = (PVOID)xmmword_14031EF70;
  }
  if ( result )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    *a3 = HIDWORD(v7);
  }
  return result;
}
