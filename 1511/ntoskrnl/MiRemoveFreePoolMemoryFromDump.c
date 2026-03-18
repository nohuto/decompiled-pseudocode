/*
 * XREFs of MiRemoveFreePoolMemoryFromDump @ 0x1401DBA94
 * Callers:
 *     MmGetDumpRange @ 0x1401D6330 (MmGetDumpRange.c)
 * Callees:
 *     MiScanNonPagedPoolVa @ 0x1400B35F0 (MiScanNonPagedPoolVa.c)
 */

__int64 __fastcall MiRemoveFreePoolMemoryFromDump(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  int v6[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  char i; // [rsp+50h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v6[0] = 2;
  v8 = 0LL;
  v3 = 0;
  v7 = a1;
  for ( i = 1; v3 < (unsigned __int16)KeNumberNodes; ++v3 )
  {
    MiScanNonPagedPoolVa(1LL, v3, 0LL, (__int64)v6);
    result = (unsigned __int16)KeNumberNodes;
  }
  v4 = (_QWORD *)qword_1402FE1A0;
  while ( v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 8))(
               a1,
               (__int64)(v5 + 0xB000000000LL) / 48,
               1LL);
  }
  return result;
}
