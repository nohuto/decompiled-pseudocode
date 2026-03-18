/*
 * XREFs of AdtpWriteToEtw @ 0x1405A166C
 * Callers:
 *     SepRmCallLsa @ 0x140117528 (SepRmCallLsa.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x1401642C4 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x140164310 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1401643D0 (AdtpPackageParameters.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x1405A18B8 (AdtpGetCategoryAndSubCategoryId.c)
 *     AdtpNormalizeAuditInfo @ 0x1405A1AD4 (AdtpNormalizeAuditInfo.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v2; // bx
  __int64 v5; // rdx
  __int64 v6; // r15
  int v7; // edi
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  unsigned int v10; // eax
  char v11; // cl
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  char *v18; // rax
  unsigned int v20; // eax
  bool v21; // cc
  unsigned __int16 v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v23; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v24; // [rsp+38h] [rbp-C8h] BYREF
  char v25; // [rsp+3Ah] [rbp-C6h]
  __int16 v26; // [rsp+3Bh] [rbp-C5h]
  char v27; // [rsp+3Dh] [rbp-C3h]
  __int16 v28; // [rsp+3Eh] [rbp-C2h]
  unsigned __int64 v29; // [rsp+40h] [rbp-C0h]
  __int16 v30; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v31; // [rsp+50h] [rbp-B0h] BYREF
  char v32; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v33[48]; // [rsp+350h] [rbp+250h] BYREF

  v2 = 0;
  v22[0] = 0;
  memset(v33, 0, sizeof(v33));
  *a2 = 0;
  AdtpNormalizeAuditInfo(a1);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v7 = -1073741811;
    goto LABEL_22;
  }
  v6 = 0x10000000000000LL;
  if ( *(_WORD *)(a1 + 18) == 8 )
    v6 = 0x20000000000000LL;
  v7 = AdtpPackageParameters(a1, v5, (__int64)&v31, v22, (__int64)v33);
  if ( v7 < 0 )
  {
    v2 = v22[0];
    goto LABEL_22;
  }
  v8 = *(_WORD *)(a1 + 16);
  if ( v8 && (int)AdtpGetCategoryAndSubCategoryId(v8, &v30, &v23) >= 0 )
  {
    v9 = (unsigned __int16)(v30 + 48) << 8;
    LOWORD(v9) = v23 + ((v30 + 48) << 8);
  }
  else
  {
    v9 = 65280LL;
  }
  v10 = *(_DWORD *)(a1 + 4);
  v11 = 2;
  if ( v10 > 0x12D0 )
  {
    if ( v10 > 0x154C )
    {
      if ( v10 == 5632 )
        goto LABEL_15;
      if ( v10 <= 0x187F )
      {
LABEL_31:
        v11 = 0;
        goto LABEL_16;
      }
      if ( v10 <= 0x1881 )
        goto LABEL_16;
      v21 = v10 <= 0x1883;
    }
    else
    {
      if ( v10 >= 0x154B || v10 == 5125 || v10 == 5140 )
        goto LABEL_15;
      if ( v10 <= 0x1423 )
        goto LABEL_31;
      v21 = v10 <= 0x1425;
    }
    if ( !v21 )
      goto LABEL_31;
    goto LABEL_15;
  }
  if ( v10 == 4816 )
    goto LABEL_15;
  v12 = v10 - 4616;
  if ( !v12 )
    goto LABEL_15;
  v13 = v12 - 8;
  if ( !v13 )
    goto LABEL_16;
  v14 = v13 - 30;
  if ( !v14 || (v15 = v14 - 2) == 0 || (v16 = v15 - 5) == 0 || (v20 = v16 - 2) == 0 )
  {
LABEL_15:
    v11 = 1;
    goto LABEL_16;
  }
  if ( v20 != 25 )
    goto LABEL_31;
LABEL_16:
  v24 = *(_WORD *)(a1 + 4);
  v25 = v11;
  v27 = 0;
  v17 = 0;
  v26 = 10;
  v2 = v22[0];
  v28 = v9;
  v29 = v6 | 0x8000000000000000uLL;
  if ( !v22[0] )
    goto LABEL_20;
  v18 = &v32;
  v9 = v22[0];
  do
  {
    v17 += *(_DWORD *)v18;
    v18 += 16;
    --v9;
  }
  while ( v9 );
  if ( v17 > 0xDC00 )
  {
    *a2 = 1;
    v7 = -2147483643;
  }
  else
  {
LABEL_20:
    v7 = EtwWriteKMSecurityEvent(&v24, v9, v22[0], (unsigned __int64)&v31 & -(__int64)(v22[0] != 0));
    if ( v7 == -1073741058 )
      *a2 = 1;
  }
LABEL_22:
  AdtpCleanupParameterAllocations(v33, &v31, v2);
  return (unsigned int)v7;
}
