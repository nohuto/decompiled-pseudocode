/*
 * XREFs of RtlUnicodeStringValidateSrcWorker @ 0x18006CA98
 * Callers:
 *     RtlUnicodeStringCat @ 0x18006C91C (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x18006C9AC (RtlUnicodeStringCopy.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x18006CB44 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringValidateSrcWorker(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int16 *v4; // rcx
  unsigned __int64 *v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // rdx

  *a2 = 0LL;
  *a3 = 0LL;
  result = RtlUnicodeStringValidateWorker(a1, a2, a3, a3);
  if ( (int)result >= 0 )
  {
    if ( v4 )
    {
      v7 = *((_QWORD *)v4 + 1);
      *v5 = (unsigned __int64)*v4 >> 1;
      *v6 = v7;
    }
  }
  return result;
}
