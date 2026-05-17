/*
 * XREFs of RtlQueryWnfStateData @ 0x18007A910
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1800A7A30 (ZwQueryWnfStateData.c)
 *     _alloca_probe @ 0x1800A99F0 (_alloca_probe.c)
 *     RtlResetStackOverflow @ 0x1800D1444 (RtlResetStackOverflow.c)
 */

__int64 __fastcall RtlQueryWnfStateData(
        unsigned int *a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD, __int64, __int64, _BYTE *, int),
        __int64 a4,
        __int64 a5)
{
  void *v8; // rsp
  __int64 result; // rax
  unsigned int v10; // ebx
  _BYTE v11[4096]; // [rsp+10h] [rbp-1000h] BYREF
  int v12; // [rsp+1010h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+1014h] [rbp+4h] BYREF
  _BYTE *v14; // [rsp+1018h] [rbp+8h]
  __int64 v15; // [rsp+1020h] [rbp+10h] BYREF

  v15 = a2;
  v8 = alloca(4096LL);
  v14 = v11;
  v12 = 4096;
  result = ZwQueryWnfStateData(&v15, a5, 0LL, &v13, v11, &v12);
  if ( (int)result >= 0 )
  {
    v10 = v13;
    *a1 = v13;
    return a3(v15, v10, a5, a4, v11, v12);
  }
  return result;
}
