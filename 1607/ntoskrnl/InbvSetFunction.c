/*
 * XREFs of InbvSetFunction @ 0x1401416AC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1401273D8 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x1407B1F00 (InbvDriverInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rdx
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140328E08;
  if ( (unsigned int)(dword_140328E08 - 3) <= 1 )
  {
    if ( qword_140328E10 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_140328E10 + 136);
      if ( v3 )
        v3(0LL);
    }
    result = 4LL;
    if ( a1 == 4 )
    {
      v4 = off_1402F38E0;
    }
    else
    {
      result = 3LL;
      v4 = off_1402F39A0;
    }
    qword_140328E10 = (__int64)v4;
    dword_140328E08 = result;
  }
  return result;
}
