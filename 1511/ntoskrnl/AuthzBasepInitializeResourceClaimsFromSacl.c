/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4
 * Callers:
 *     SepMaximumAccessCheck @ 0x14008A7E0 (SepMaximumAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x14008C110 (SepNormalAccessCheck.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheckEx @ 0x14012BB10 (SepMaximumAccessCheckEx.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140135D0C (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x140652140 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140652A74 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400059B0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepMemAlloc @ 0x140006788 (AuthzBasepMemAlloc.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000D930 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400E6034 (AuthzBasepQuerySecurityAttributesToken.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x14021994C (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepInitializeResourceClaimsFromSacl(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  _BYTE *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // r15d
  bool v11; // zf
  int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-B0h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v20 = a2;
  v17 = 2;
  memset(v18, 0, sizeof(v18));
  v3 = 0;
  v4 = P;
  v5 = (_DWORD *)AuthzBasepMemAlloc(48LL, a2, 1950442835LL);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)-1073741801;
  *v5 = 0;
  v7 = a1 + 8;
  v8 = v5 + 2;
  v9 = 0;
  v8[1] = v8;
  *v8 = v8;
  v6[6] = 0;
  *((_QWORD *)v6 + 5) = v6 + 8;
  *((_QWORD *)v6 + 4) = v6 + 8;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_3;
  while ( 1 )
  {
    if ( v4 && v4 != P )
      ExFreePoolWithTag(v4, 0);
    v11 = *(_BYTE *)v7 == 18;
    v4 = P;
    v16 = 256;
    if ( !v11 || (*(_BYTE *)(v7 + 1) & 8) != 0 )
      goto LABEL_9;
    v12 = *(unsigned __int16 *)(v7 + 2) - 4 * *(unsigned __int8 *)(v7 + 9);
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(v7 + 9) + 8,
           (unsigned int)(v12 - 16),
           P,
           &v16);
    if ( v3 == -1073741789 )
      break;
LABEL_20:
    if ( v3 < 0 )
      goto LABEL_10;
    v18[1] = v4;
    LOWORD(v18[0]) = 1;
    HIDWORD(v18[0]) = 1;
    v15 = AuthzBasepQuerySecurityAttributesToken(v6, v4, 1LL, 0LL, 0, &v19);
    v3 = v15;
    if ( v15 == -1073741789 || v15 == -1073741275 )
      v3 = 0;
    if ( v3 < 0 )
      goto LABEL_10;
    if ( v19 <= 0x10 )
      v3 = AuthzBasepSetSecurityAttributesToken(v6, &v17, v18);
    if ( v3 < 0 )
      goto LABEL_10;
LABEL_9:
    ++v9;
    v7 += *(unsigned __int16 *)(v7 + 2);
    if ( v9 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_10;
  }
  v14 = AuthzBasepMemAlloc(v16, v13, 1950442835LL);
  v4 = (_BYTE *)v14;
  if ( v14 )
  {
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(v7 + 9) + 8,
           (unsigned int)(v12 - 16),
           v14,
           &v16);
    goto LABEL_20;
  }
  v3 = -1073741801;
LABEL_10:
  if ( v4 && v4 != P )
    ExFreePoolWithTag(v4, 0);
  if ( v3 < 0 )
  {
    AuthzBasepFreeSecurityAttributesList(v6);
    ExFreePoolWithTag(v6, 0);
    return (unsigned int)v3;
  }
LABEL_3:
  *v20 = v6;
  return (unsigned int)v3;
}
