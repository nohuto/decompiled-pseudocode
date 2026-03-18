/*
 * XREFs of InbvSetFunction @ 0x1401663A8
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14014FED8 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x1407DB3A8 (InbvDriverInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rdx
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140353AE0;
  if ( (unsigned int)(dword_140353AE0 - 3) <= 1 )
  {
    if ( qword_140353AD8 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_140353AD8 + 136);
      if ( v3 )
        v3(0LL);
    }
    result = 4LL;
    if ( a1 == 4 )
    {
      v4 = off_140320CC0;
    }
    else
    {
      result = 3LL;
      v4 = off_140320D70;
    }
    qword_140353AD8 = (__int64)v4;
    dword_140353AE0 = result;
  }
  return result;
}
