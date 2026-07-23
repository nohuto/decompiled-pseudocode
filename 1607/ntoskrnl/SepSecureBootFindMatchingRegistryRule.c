/*
 * XREFs of SepSecureBootFindMatchingRegistryRule @ 0x1406942A8
 * Callers:
 *     SeQuerySecureBootPolicyValue @ 0x140581B88 (SeQuerySecureBootPolicyValue.c)
 * Callees:
 *     SepEqualAsciiWideStringCaseInSensitive @ 0x14069404C (SepEqualAsciiWideStringCaseInSensitive.c)
 */

_DWORD *__fastcall SepSecureBootFindMatchingRegistryRule(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  _DWORD *v4; // r11
  unsigned __int64 v6; // rbx
  unsigned __int16 *v7; // rcx
  unsigned __int16 *v8; // rcx
  unsigned __int16 v10; // [rsp+20h] [rbp-18h] BYREF
  __int16 v11; // [rsp+22h] [rbp-16h]
  unsigned __int16 *v12; // [rsp+28h] [rbp-10h]

  v4 = (_DWORD *)qword_1403581B8;
  v6 = qword_1403581B8 + 16LL * *((unsigned __int16 *)qword_140341C48 + 19);
  while ( 1 )
  {
    if ( (unsigned __int64)v4 >= v6 )
      return 0LL;
    if ( *v4 == -2130706432 )
    {
      v7 = (unsigned __int16 *)(qword_1403581C8 + (unsigned int)v4[1]);
      v12 = v7 + 1;
      v10 = *v7;
      v11 = v10 + 2;
      if ( SepEqualAsciiWideStringCaseInSensitive(a2, &v10) )
      {
        v8 = (unsigned __int16 *)(qword_1403581C8 + (unsigned int)v4[2]);
        v12 = v8 + 1;
        v10 = *v8;
        v11 = v10 + 2;
        if ( SepEqualAsciiWideStringCaseInSensitive(a3, &v10) )
          break;
      }
    }
    v4 += 4;
  }
  return v4;
}
