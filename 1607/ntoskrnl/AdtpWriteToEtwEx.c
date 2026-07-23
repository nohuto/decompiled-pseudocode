/*
 * XREFs of AdtpWriteToEtwEx @ 0x1402379CC
 * Callers:
 *     SeAuditPlugAndPlay @ 0x14068E0CC (SeAuditPlugAndPlay.c)
 * Callees:
 *     AdtpCleanupParameterAllocations @ 0x140144900 (AdtpCleanupParameterAllocations.c)
 *     EtwWriteKMSecurityEvent @ 0x14014494C (EtwWriteKMSecurityEvent.c)
 *     AdtpPackageParameters @ 0x1401449C0 (AdtpPackageParameters.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x140147FE0 (AdtpNormalizeAuditInfoHelper.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x14056B578 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtwEx(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v4; // bx
  int v5; // r8d
  int v6; // edi
  __int64 v7; // r14
  unsigned __int16 v8; // ax
  __int16 v9; // dx
  unsigned int v10; // ecx
  char *v11; // rax
  __int64 v12; // rdx
  unsigned __int16 v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v15; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v16[5]; // [rsp+48h] [rbp-B8h] BYREF
  char v17; // [rsp+52h] [rbp-AEh]
  __int16 v18; // [rsp+53h] [rbp-ADh]
  char v19; // [rsp+55h] [rbp-ABh]
  __int16 v20; // [rsp+56h] [rbp-AAh]
  unsigned __int64 v21; // [rsp+58h] [rbp-A8h]
  _BYTE v22[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v23; // [rsp+1A0h] [rbp+A0h] BYREF
  char v24; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v25[48]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v26[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v14[0] = 0;
  memset(v26, 0, sizeof(v26));
  memset(v22, 0, sizeof(v22));
  memset(v25, 0, sizeof(v25));
  *a2 = 0;
  AdtpNormalizeAuditInfoHelper(0LL, a1);
  if ( *(_QWORD *)(a1 + 56) )
  {
    v7 = 0x10000000000000LL;
    if ( *(_WORD *)(a1 + 22) == 8 )
      v7 = 0x20000000000000LL;
    v6 = AdtpPackageParameters(0LL, a1, v5, (__int64)v26, (__int64)v22, (__int64)&v23, v14, (__int64)v25);
    if ( v6 < 0 )
    {
      v4 = v14[0];
    }
    else
    {
      v8 = *(_WORD *)(a1 + 20);
      if ( v8 && (int)AdtpGetCategoryAndSubCategoryId(v8, &v15, v16) >= 0 )
        v9 = v16[0] + ((v15 + 48) << 8);
      else
        v9 = -256;
      v10 = 0;
      v16[4] = *(_WORD *)(a1 + 4);
      v17 = *(_BYTE *)(a1 + 8);
      v19 = 0;
      v18 = 10;
      v4 = v14[0];
      v20 = v9;
      v21 = v7 | 0x8000000000000000uLL;
      if ( !v14[0] )
        goto LABEL_15;
      v11 = &v24;
      v12 = v14[0];
      do
      {
        v10 += *(_DWORD *)v11;
        v11 += 16;
        --v12;
      }
      while ( v12 );
      if ( v10 > 0xDC00 )
      {
        *a2 = 1;
        v6 = -2147483643;
      }
      else
      {
LABEL_15:
        v6 = EtwWriteKMSecurityEvent();
        if ( v6 == -1073741058 )
          *a2 = 1;
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  AdtpCleanupParameterAllocations(v25, &v23, v4);
  return (unsigned int)v6;
}
