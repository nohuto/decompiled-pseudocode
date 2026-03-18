/*
 * XREFs of InbvSetFunction @ 0x14014113C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140126E68 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x1407B1F00 (InbvDriverInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rdx
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140328DC8;
  if ( (unsigned int)(dword_140328DC8 - 3) <= 1 )
  {
    if ( qword_140328DD0 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_140328DD0 + 136);
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
    qword_140328DD0 = (__int64)v4;
    dword_140328DC8 = result;
  }
  return result;
}
