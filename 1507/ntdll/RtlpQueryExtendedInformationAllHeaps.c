/*
 * XREFs of RtlpQueryExtendedInformationAllHeaps @ 0x1800D9AE0
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1800D9644 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180008524 (RtlpEnumProcessHeaps.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationAllHeaps(__int64 a1)
{
  int v2; // ecx
  int v3; // ebx
  __int64 (__fastcall *v4)(_QWORD *, _QWORD); // rbx
  _QWORD v6[22]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v7; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v8; // [rsp+D8h] [rbp+3Fh]
  int v9; // [rsp+E0h] [rbp+47h]

  v2 = *(_DWORD *)a1;
  if ( (unsigned int)(v2 - 1) <= 4 || v2 == 0x80000000 )
  {
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpLockUlockAllHeapsCallback, 1LL, 1);
    if ( *(_DWORD *)a1 == 0x80000000 )
      goto LABEL_8;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0;
    v3 = RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHeapQueryTotalReserveSize, (__int64)&v7, 3);
    if ( v3 >= 0 )
    {
      memset(v6, 0, 0xA8uLL);
      v4 = *(__int64 (__fastcall **)(_QWORD *, _QWORD))(a1 + 8);
      LODWORD(v6[4]) = v9;
      v6[2] = v7;
      v6[3] = v8;
      LODWORD(v6[0]) = 1;
      v6[1] = 48LL;
      v3 = v4(v6, *(_QWORD *)(a1 + 16));
      if ( v3 >= 0 && *(_DWORD *)a1 >= 2u )
LABEL_8:
        v3 = RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpQueryExtendedInformationHeap, a1, 3);
    }
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpLockUlockAllHeapsCallback, 0LL, 1);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
