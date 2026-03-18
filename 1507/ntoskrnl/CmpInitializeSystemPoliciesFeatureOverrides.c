/*
 * XREFs of CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407F8760
 * Callers:
 *     CmGetSystemControlValues @ 0x1407BBAF0 (CmGetSystemControlValues.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     reg_FeatureDescriptors_SkipPadding @ 0x1401DE77C (reg_FeatureDescriptors_SkipPadding.c)
 *     CmpFindValueByName @ 0x140429D14 (CmpFindValueByName.c)
 *     RtlIntegerToUnicodeString @ 0x1404FE908 (RtlIntegerToUnicodeString.c)
 *     CmpValueToData @ 0x14059110C (CmpValueToData.c)
 *     CmpWalkPath @ 0x140591164 (CmpWalkPath.c)
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
  int v13; // [rsp+38h] [rbp-29h] BYREF
  int v14; // [rsp+3Ch] [rbp-25h] BYREF
  int v15; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-1Dh] BYREF
  UNICODE_STRING String; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v18[64]; // [rsp+58h] [rbp-9h] BYREF

  *(_DWORD *)&String.Length = 4194368;
  v13 = -1;
  v2 = 0LL;
  v15 = -1;
  v14 = -1;
  String.Buffer = (wchar_t *)v18;
  v3 = CmpWalkPath((__int64)&CmControlHive, a2, L"Policies\\Microsoft\\FeatureManagement\\Overrides");
  if ( v3 != -1 )
    v2 = qword_14080E168(&CmControlHive, v3, &v13);
  for ( i = &g_Feature_Servicing_HibernateRelaxVBSPolicy_57571857_FeatureDescriptorDetails; ; i = v12 + 2 )
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
        v7 = qword_14080E168(&CmControlHive, ValueByName, &v14);
        if ( v7 )
        {
          if ( *(_DWORD *)(v7 + 12) == 4 )
          {
            v8 = CmpValueToData((__int64)&CmControlHive, v6, v7, &v16, (__int64)&v15);
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
              qword_14080E170(&CmControlHive, &v15);
            }
          }
          qword_14080E170(&CmControlHive, &v14);
        }
      }
    }
  }
  if ( v2 )
    return (_QWORD *)qword_14080E170(&CmControlHive, &v13);
  return result;
}
