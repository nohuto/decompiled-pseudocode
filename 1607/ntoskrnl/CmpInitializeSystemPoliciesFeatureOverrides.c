/*
 * XREFs of CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407CD9B4
 * Callers:
 *     CmGetSystemControlValues @ 0x1407B0AC0 (CmGetSystemControlValues.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     reg_FeatureDescriptors_SkipPadding @ 0x1401B2B50 (reg_FeatureDescriptors_SkipPadding.c)
 *     RtlIntegerToUnicodeString @ 0x1403F4CE4 (RtlIntegerToUnicodeString.c)
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x1405606E0 (CmpValueToData.c)
 *     CmpWalkPath @ 0x140560738 (CmpWalkPath.c)
 */

_QWORD *__fastcall CmpInitializeSystemPoliciesFeatureOverrides(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  _QWORD *i; // rcx
  unsigned int ValueByName; // eax
  unsigned int v6; // esi
  ULONG_PTR v7; // rax
  _DWORD *v8; // rax
  bool v9; // zf
  _DWORD *v10; // rax
  _QWORD *result; // rax
  _QWORD *v12; // rbx
  __int64 v13; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v14[2]; // [rsp+40h] [rbp-31h] BYREF
  _DWORD v15[2]; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v16; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v18[64]; // [rsp+68h] [rbp-9h] BYREF

  *(_DWORD *)&String.Length = 4194368;
  v15[1] = 0;
  v15[0] = -1;
  v13 = 0xFFFFFFFFLL;
  v14[0] = -1;
  v14[1] = 0;
  v2 = 0LL;
  String.Buffer = (wchar_t *)v18;
  v3 = CmpWalkPath((__int64)&CmControlHive, a2, L"Policies\\Microsoft\\FeatureManagement\\Overrides");
  if ( v3 != -1 )
    v2 = qword_140763EF8(&CmControlHive, v3, v15);
  for ( i = &reg_FeatureDescriptors_a; ; i = v12 + 5 )
  {
    result = reg_FeatureDescriptors_SkipPadding(i);
    v12 = result;
    if ( !result )
      break;
    if ( *((_DWORD *)result + 3) <= 1u )
      *(_DWORD *)*result = 1;
    else
      *(_DWORD *)*result = 2;
    if ( v2 )
    {
      memset(v18, 0, sizeof(v18));
      RtlIntegerToUnicodeString(
        __ROR4__(_byteswap_ulong(*((_DWORD *)v12 + 2) ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF,
        0xAu,
        &String);
      ValueByName = CmpFindValueByName((int)&CmControlHive, v2, (int)&String);
      v6 = ValueByName;
      if ( ValueByName != -1 )
      {
        v7 = qword_140763EF8(&CmControlHive, ValueByName, v14);
        if ( v7 )
        {
          if ( *(_DWORD *)(v7 + 12) == 4 )
          {
            v8 = CmpValueToData((ULONG_PTR)&CmControlHive, v6, v7, &v16, (__int64)&v13);
            if ( v8 )
            {
              if ( v16 == 4 )
              {
                v9 = *v8 == 0;
                v10 = (_DWORD *)*v12;
                if ( v9 )
                  *v10 = 1;
                else
                  *v10 = 2;
              }
              qword_140763F00(&CmControlHive, &v13);
            }
          }
          qword_140763F00(&CmControlHive, v14);
        }
      }
    }
  }
  if ( v2 )
    return (_QWORD *)qword_140763F00(&CmControlHive, v15);
  return result;
}
