/*
 * XREFs of AdtpWriteToEtw @ 0x14056B25C
 * Callers:
 *     SepRmCallLsa @ 0x1400AF870 (SepRmCallLsa.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x140144900 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x14014494C (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1401449C0 (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x140147FE0 (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x14056B578 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v4; // bx
  int v5; // r8d
  int v6; // edi
  __int64 v7; // r14
  unsigned __int16 v8; // ax
  __int16 v9; // r8
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  bool v14; // zf
  char v15; // dl
  unsigned int v16; // ecx
  char *v17; // rax
  __int64 v18; // rdx
  unsigned __int16 v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v21; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v22[5]; // [rsp+48h] [rbp-B8h] BYREF
  char v23; // [rsp+52h] [rbp-AEh]
  __int16 v24; // [rsp+53h] [rbp-ADh]
  char v25; // [rsp+55h] [rbp-ABh]
  __int16 v26; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v27; // [rsp+58h] [rbp-A8h]
  _BYTE v28[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v29; // [rsp+1A0h] [rbp+A0h] BYREF
  char v30; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v31[48]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v32[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v20[0] = 0;
  memset(v32, 0, sizeof(v32));
  memset(v28, 0, sizeof(v28));
  memset(v31, 0, sizeof(v31));
  *a2 = 0;
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v6 = -1073741811;
    goto LABEL_48;
  }
  v7 = 0x10000000000000LL;
  if ( *(_WORD *)(a1 + 18) == 8 )
    v7 = 0x20000000000000LL;
  v6 = AdtpPackageParameters(a1, 0LL, v5, (__int64)v32, (__int64)v28, (__int64)&v29, v20, (__int64)v31);
  if ( v6 < 0 )
  {
    v4 = v20[0];
    goto LABEL_48;
  }
  v8 = *(_WORD *)(a1 + 16);
  if ( v8 && (int)AdtpGetCategoryAndSubCategoryId(v8, &v21, v22) >= 0 )
    v9 = v22[0] + ((v21 + 48) << 8);
  else
    v9 = -256;
  v10 = *(_DWORD *)(a1 + 4);
  if ( v10 <= 0x12D0 )
  {
    if ( v10 == 4816 )
      goto LABEL_23;
    if ( v10 > 0x1235 )
    {
      if ( v10 == 4663 )
        goto LABEL_23;
      if ( v10 != 4688 )
      {
        if ( v10 > 0x129F )
        {
          if ( v10 <= 0x12A1 )
            goto LABEL_44;
          if ( v10 == 4770 )
            goto LABEL_23;
        }
LABEL_31:
        v15 = 0;
        goto LABEL_32;
      }
    }
    else
    {
      if ( v10 == 4661 )
        goto LABEL_23;
      v11 = v10 - 4616;
      if ( !v11 )
        goto LABEL_23;
      v12 = v11 - 8;
      if ( v12 )
      {
        v13 = v12 - 30;
        if ( !v13 )
          goto LABEL_23;
        v14 = v13 == 2;
        goto LABEL_30;
      }
    }
LABEL_44:
    v15 = 2;
    goto LABEL_32;
  }
  if ( v10 > 0x1425 )
  {
    if ( v10 < 0x154B )
      goto LABEL_31;
    if ( v10 <= 0x154C || v10 == 5632 )
      goto LABEL_23;
    if ( v10 <= 0x187F )
      goto LABEL_31;
    if ( v10 > 0x1881 )
    {
      if ( v10 > 0x1883 )
        goto LABEL_31;
      goto LABEL_23;
    }
    goto LABEL_44;
  }
  if ( v10 >= 0x1424 || v10 - 4928 <= 5 || v10 == 4937 || v10 == 5125 )
    goto LABEL_23;
  v14 = v10 == 5140;
LABEL_30:
  if ( !v14 )
    goto LABEL_31;
LABEL_23:
  v15 = 1;
LABEL_32:
  v16 = 0;
  v22[4] = *(_WORD *)(a1 + 4);
  v25 = 0;
  v23 = v15;
  v4 = v20[0];
  v24 = 10;
  v26 = v9;
  v27 = v7 | 0x8000000000000000uLL;
  if ( !v20[0] )
    goto LABEL_45;
  v17 = &v30;
  v18 = v20[0];
  do
  {
    v16 += *(_DWORD *)v17;
    v17 += 16;
    --v18;
  }
  while ( v18 );
  if ( v16 > 0xDC00 )
  {
    *a2 = 1;
    v6 = -2147483643;
  }
  else
  {
LABEL_45:
    v6 = EtwWriteKMSecurityEvent();
    if ( v6 == -1073741058 )
      *a2 = 1;
  }
LABEL_48:
  AdtpCleanupParameterAllocations(v31, &v29, v4);
  return (unsigned int)v6;
}
