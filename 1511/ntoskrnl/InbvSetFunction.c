/*
 * XREFs of InbvSetFunction @ 0x140137BA4
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14011BC4C (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x140767874 (InbvDriverInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rdx
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140305D68;
  if ( (unsigned int)(dword_140305D68 - 3) <= 1 )
  {
    if ( qword_140305D60 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_140305D60 + 136);
      if ( v3 )
        v3(0LL);
    }
    result = 4LL;
    if ( a1 == 4 )
    {
      v4 = off_1402D1B50;
    }
    else
    {
      result = 3LL;
      v4 = off_1402D1C10;
    }
    qword_140305D60 = (__int64)v4;
    dword_140305D68 = result;
  }
  return result;
}
