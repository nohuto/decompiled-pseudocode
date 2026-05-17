/*
 * XREFs of RtlGetProcessHeaps @ 0x18007F020
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800D8750 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180008524 (RtlpEnumProcessHeaps.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlGetProcessHeaps(unsigned int a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  unsigned int v8; // [rsp+30h] [rbp-18h]

  v8 = 0;
  v7 = a2;
  v6 = a2 + 8LL * a1;
  RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlGetProcessHeapsCallback, (__int64)&v6, 2);
  v4 = v8;
  if ( dword_180143C88 )
    v4 += qword_180143CD0(a1 - (unsigned int)((v7 - a2) >> 3), v7);
  return v4;
}
