/*
 * XREFs of NtOpenSession @ 0x1404EADB8
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x1404EB13C (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenSession(_QWORD *a1, ACCESS_MASK a2, __int64 a3)
{
  char PreviousMode; // r8
  __int64 result; // rax
  _QWORD *v8; // rdx
  _QWORD v9[4]; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
  }
  result = ObOpenObjectByName(a3, MmSessionObjectType, PreviousMode, 0LL, a2, 0LL, v9);
  *a1 = v9[0];
  return result;
}
