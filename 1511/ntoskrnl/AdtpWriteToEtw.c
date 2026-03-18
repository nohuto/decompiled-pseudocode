/*
 * XREFs of AdtpWriteToEtw @ 0x14053A414
 * Callers:
 *     SepRmCallLsa @ 0x1400D4F24 (SepRmCallLsa.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x14013B194 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x14013B1E0 (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x14013B28C (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x14013EEC0 (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x14053A6C0 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v4; // bx
  int v5; // r8d
  __int64 v6; // r14
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
  unsigned int v17; // eax
  unsigned int v18; // ecx
  char *v19; // rax
  bool v21; // cc
  unsigned __int16 v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v23; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v24; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26; // [rsp+52h] [rbp-AEh]
  __int16 v27; // [rsp+53h] [rbp-ADh]
  char v28; // [rsp+55h] [rbp-ABh]
  __int16 v29; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v30; // [rsp+58h] [rbp-A8h]
  _WORD v31[160]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v32; // [rsp+1A0h] [rbp+A0h] BYREF
  char v33; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v34[48]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _WORD v35[1024]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v22[0] = 0;
  memset(v35, 0, sizeof(v35));
  memset(v31, 0, sizeof(v31));
  memset(v34, 0, sizeof(v34));
  *a2 = 0;
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v7 = -1073741811;
    goto LABEL_23;
  }
  v6 = 0x10000000000000LL;
  if ( *(_WORD *)(a1 + 18) == 8 )
    v6 = 0x20000000000000LL;
  v7 = AdtpPackageParameters(a1, 0LL, v5, (__int64)v35, (__int64)v31, (__int64)&v32, v22, (__int64)v34);
  if ( v7 < 0 )
  {
    v4 = v22[0];
    goto LABEL_23;
  }
  v8 = *(_WORD *)(a1 + 16);
  if ( v8 && (int)AdtpGetCategoryAndSubCategoryId(v8, &v23, &v24) >= 0 )
  {
    v9 = (unsigned __int16)(v23 + 48) << 8;
    LOWORD(v9) = v24 + ((v23 + 48) << 8);
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
        goto LABEL_30;
      if ( v10 <= 0x187F )
        goto LABEL_29;
      if ( v10 <= 0x1881 )
        goto LABEL_17;
      v21 = v10 <= 0x1883;
    }
    else
    {
      if ( v10 >= 0x154B || v10 == 5125 || v10 == 5140 )
        goto LABEL_30;
      if ( v10 <= 0x1423 )
        goto LABEL_29;
      v21 = v10 <= 0x1425;
    }
    if ( !v21 )
      goto LABEL_29;
LABEL_30:
    v11 = 1;
    goto LABEL_17;
  }
  if ( v10 == 4816 )
    goto LABEL_30;
  v12 = v10 - 4616;
  if ( !v12 )
    goto LABEL_30;
  v13 = v12 - 8;
  if ( v13 )
  {
    v14 = v13 - 30;
    if ( v14 )
    {
      v15 = v14 - 2;
      if ( v15 )
      {
        v16 = v15 - 5;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 == 25 )
              goto LABEL_17;
LABEL_29:
            v11 = 0;
            goto LABEL_17;
          }
        }
      }
    }
    goto LABEL_30;
  }
LABEL_17:
  v25 = *(_WORD *)(a1 + 4);
  v26 = v11;
  v28 = 0;
  v18 = 0;
  v27 = 10;
  v4 = v22[0];
  v29 = v9;
  v30 = v6 | 0x8000000000000000uLL;
  if ( !v22[0] )
    goto LABEL_21;
  v19 = &v33;
  v9 = v22[0];
  do
  {
    v18 += *(_DWORD *)v19;
    v19 += 16;
    --v9;
  }
  while ( v9 );
  if ( v18 > 0xDC00 )
  {
    *a2 = 1;
    v7 = -2147483643;
  }
  else
  {
LABEL_21:
    v7 = EtwWriteKMSecurityEvent(&v25, v9, v22[0], (unsigned __int64)&v32 & -(__int64)(v22[0] != 0));
    if ( v7 == -1073741058 )
      *a2 = 1;
  }
LABEL_23:
  AdtpCleanupParameterAllocations(v34, &v32, v4);
  return (unsigned int)v7;
}
