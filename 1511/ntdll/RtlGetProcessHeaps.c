/*
 * XREFs of RtlGetProcessHeaps @ 0x18008E3D0
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800E07B0 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180051130 (RtlpEnumProcessHeaps.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
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
  if ( dword_1801420A8 )
    v4 += qword_1801420F0(a1 - (unsigned int)((v7 - a2) >> 3), v7);
  return v4;
}
