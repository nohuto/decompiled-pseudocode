/*
 * XREFs of SmProcessRegistrationRequest @ 0x14057BB40
 * Callers:
 *     SmQueryStoreInformation @ 0x1403E4980 (SmQueryStoreInformation.c)
 * Callees:
 *     SmGetRegistrationInfo @ 0x14057BBE8 (SmGetRegistrationInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessRegistrationRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  __int128 *v5; // rbx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = (__int128 *)a1;
  v7 = 0uLL;
  if ( a2 != 16 )
    return 3221225990LL;
  if ( a4 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_BYTE *)a1 = *(_BYTE *)a1;
    *(_BYTE *)(a1 + 15) = *(_BYTE *)(a1 + 15);
  }
  v7 = *v5;
  if ( (_BYTE)v7 != 2 || (v7 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  LOBYTE(a1) = a4;
  result = SmGetRegistrationInfo(a1, &v7);
  if ( (int)result >= 0 )
  {
    *v5 = v7;
    *a3 = 16;
  }
  return result;
}
