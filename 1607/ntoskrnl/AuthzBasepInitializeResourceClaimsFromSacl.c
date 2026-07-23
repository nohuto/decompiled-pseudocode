/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C
 * Callers:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheck @ 0x140061220 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140061FC0 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepMaximumAccessCheckEx @ 0x140133534 (SepMaximumAccessCheckEx.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1401366B8 (SepNormalAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x140691504 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140691E34 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14000CF3C (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepMemAlloc @ 0x14000EE20 (AuthzBasepMemAlloc.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14010C930 (AuthzBasepFreeSecurityAttributesList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140233A2C (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepInitializeResourceClaimsFromSacl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _BYTE *v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // r15d
  bool v10; // zf
  int v12; // r12d
  __int64 v13; // rdx
  _BYTE *v14; // rax
  int v15; // eax
  size_t v16; // [rsp+20h] [rbp-E0h]
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v21; // [rsp+50h] [rbp-B0h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v21 = (_QWORD *)a2;
  v19 = 2;
  memset(v20, 0, sizeof(v20));
  v3 = 0;
  v4 = P;
  v5 = AuthzBasepMemAlloc(0x30uLL, a2, 0x74416553u);
  v6 = (__int64)v5;
  if ( !v5 )
    return (unsigned int)-1073741801;
  *v5 = 0;
  v7 = a1 + 8;
  v8 = v5 + 2;
  v9 = 0;
  v8[1] = v8;
  *v8 = v8;
  *(_DWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 40) = v6 + 32;
  *(_QWORD *)(v6 + 32) = v6 + 32;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_12;
  while ( 1 )
  {
    if ( v4 && v4 != P )
      ExFreePoolWithTag(v4, 0);
    v10 = *(_BYTE *)v7 == 18;
    v4 = P;
    v17 = 256;
    if ( !v10 || (*(_BYTE *)(v7 + 1) & 8) != 0 )
      goto LABEL_7;
    v12 = *(unsigned __int16 *)(v7 + 2) - 4 * *(unsigned __int8 *)(v7 + 9);
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(v7 + 9) + 8,
           (unsigned int)(v12 - 16),
           P,
           &v17);
    if ( v3 == -1073741789 )
      break;
LABEL_19:
    if ( v3 < 0 )
      goto LABEL_8;
    v20[1] = v4;
    LOWORD(v20[0]) = 1;
    HIDWORD(v20[0]) = 1;
    LODWORD(v16) = 0;
    v15 = AuthzBasepQuerySecurityAttributesToken((_DWORD *)v6, (__int64)v4, 1u, 0LL, v16, &v18);
    v3 = v15;
    if ( v15 == -1073741789 || v15 == -1073741275 )
      v3 = 0;
    if ( v3 < 0 )
      goto LABEL_8;
    if ( v18 <= 0x10 )
      v3 = AuthzBasepSetSecurityAttributesToken(v6, &v19, (__int64)v20);
    if ( v3 < 0 )
      goto LABEL_8;
LABEL_7:
    ++v9;
    v7 += *(unsigned __int16 *)(v7 + 2);
    if ( v9 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_8;
  }
  v14 = AuthzBasepMemAlloc(v17, v13, 0x74416553u);
  v4 = v14;
  if ( v14 )
  {
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v7 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(v7 + 9) + 8,
           (unsigned int)(v12 - 16),
           v14,
           &v17);
    goto LABEL_19;
  }
  v3 = -1073741801;
LABEL_8:
  if ( v4 && v4 != P )
    ExFreePoolWithTag(v4, 0);
  if ( v3 < 0 )
  {
    AuthzBasepFreeSecurityAttributesList(v6);
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  else
  {
LABEL_12:
    *v21 = v6;
  }
  return (unsigned int)v3;
}
