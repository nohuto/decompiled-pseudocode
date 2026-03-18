/*
 * XREFs of NtOpenSession @ 0x14052D874
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x140533638 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x140464694 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenSession(_QWORD *a1, ACCESS_MASK a2, __int64 a3)
{
  char PreviousMode; // r8
  __int64 result; // rax
  __int64 v8; // rdx
  _QWORD v9[4]; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = (__int64)a1;
    if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  result = ObOpenObjectByName(a3, (__int64)MmSessionObjectType, PreviousMode, 0LL, a2, 0LL, v9);
  *a1 = v9[0];
  return result;
}
