/*
 * XREFs of RtlQueryWnfStateDataWithExplicitScope @ 0x1800772B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x180094D90 (ZwQueryWnfStateData.c)
 *     _alloca_probe @ 0x180096610 (_alloca_probe.c)
 *     RtlResetStackOverflow @ 0x1800C8A08 (RtlResetStackOverflow.c)
 */

__int64 __fastcall RtlQueryWnfStateDataWithExplicitScope(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, _QWORD, __int64, __int64, _BYTE *, int),
        __int64 a5,
        __int64 a6)
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
  result = ZwQueryWnfStateData(&v15, a6, a3, &v13, v11, &v12);
  if ( (int)result >= 0 )
  {
    v10 = v13;
    *a1 = v13;
    return a4(v15, v10, a6, a5, v11, v12);
  }
  return result;
}
