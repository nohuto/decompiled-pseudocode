/*
 * XREFs of RtlpValidLabelSubjectContext @ 0x1800E1128
 * Callers:
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominates @ 0x180004160 (RtlSidDominates.c)
 *     RtlInitializeSid @ 0x18000D5F0 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x1800A8910 (ZwPrivilegeCheck.c)
 */

char __fastcall RtlpValidLabelSubjectContext(__int64 a1, _BYTE *a2, char a3, int *a4)
{
  _BYTE *v7; // rdi
  int InformationToken; // eax
  _BYTE *v10; // rax
  int v11; // eax
  int v12; // eax
  char v13; // cl
  char v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v16; // [rsp+38h] [rbp-C8h]
  __int64 v17; // [rsp+40h] [rbp-C0h]
  int v18; // [rsp+48h] [rbp-B8h]
  int v19; // [rsp+4Ch] [rbp-B4h]
  __int64 v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A8h]
  _BYTE v22[8]; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+B0h] [rbp-50h]

  v16 = 4096;
  v14[0] = 0;
  v15 = 0;
  RtlInitializeSid((__int64)v22, (__int64)&v15, 1u);
  v23 = 0x2000;
  v7 = v22;
  if ( a2 )
    v7 = a2;
  InformationToken = NtQueryInformationToken();
  *a4 = InformationToken;
  if ( InformationToken < 0 )
    return 0;
  if ( (a3 & 8) != 0 )
  {
    if ( (int)RtlSidDominates((__int64)v7, (__int64)v22, v14) < 0 )
      return 0;
    v10 = v22;
    if ( v14[0] )
      v10 = v7;
    v7 = v10;
  }
  v11 = RtlSidDominates(v24, (__int64)v7, v14);
  *a4 = v11;
  if ( v11 < 0 )
    return 0;
  if ( !v14[0] )
  {
    v17 = 32LL;
    v20 = 32LL;
    v18 = 1;
    v19 = 1;
    v21 = 0;
    v12 = ZwPrivilegeCheck();
    v13 = v14[0];
    if ( v12 < 0 )
      v13 = 0;
    if ( !v13 )
    {
      *a4 = -1073740730;
      return 0;
    }
  }
  return 1;
}
