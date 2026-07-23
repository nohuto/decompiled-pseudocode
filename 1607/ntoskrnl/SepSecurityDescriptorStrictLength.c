/*
 * XREFs of SepSecurityDescriptorStrictLength @ 0x140695898
 * Callers:
 *     RtlLengthSecurityDescriptorStrict @ 0x140210CB0 (RtlLengthSecurityDescriptorStrict.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x140219F5C (SepCheckAndCopySelfRelativeSD.c)
 *     SeOperationAuditAlarm @ 0x14068E9CC (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406900F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSecurityDescriptorStrictLength(__int64 a1)
{
  __int16 v1; // r11
  __int16 v3; // r10
  char v4; // bl
  unsigned int v5; // r9d
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // r8

  v1 = *(_WORD *)(a1 + 2);
  v3 = v1 & 0x8000;
  if ( v1 >= 0 )
  {
    v4 = 0;
    v5 = 40;
  }
  else
  {
    v4 = 1;
    v5 = 20;
  }
  v6 = a1 + v5;
  if ( v3 )
  {
    v7 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v7 )
      goto LABEL_10;
    v8 = a1 + v7;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 8);
  }
  if ( v8 )
  {
    v5 += (4 * *(unsigned __int8 *)(v8 + 1) + 11) & 0xFFFFFFFC;
    v6 = v8 + ((4 * *(unsigned __int8 *)(v8 + 1) + 11) & 0xFFFFFFFC);
  }
LABEL_10:
  if ( v3 )
  {
    v9 = *(unsigned int *)(a1 + 8);
    if ( !(_DWORD)v9 )
      goto LABEL_17;
    v10 = a1 + v9;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 16);
  }
  if ( v10 )
  {
    v11 = (4 * *(unsigned __int8 *)(v10 + 1) + 11) & 0xFFFFFFFC;
    v12 = v11 + v10;
    v5 += v11;
    if ( v12 > v6 )
      v6 = v12;
  }
LABEL_17:
  if ( (v1 & 4) == 0 )
    goto LABEL_25;
  if ( v3 )
  {
    v13 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v13 )
      goto LABEL_25;
    v14 = a1 + v13;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 32);
  }
  if ( v14 )
  {
    v15 = (*(unsigned __int16 *)(v14 + 2) + 3) & 0xFFFFFFFC;
    v16 = v15 + v14;
    v5 += v15;
    if ( v16 > v6 )
      v6 = v16;
  }
LABEL_25:
  if ( (v1 & 0x10) == 0 )
    goto LABEL_33;
  if ( v3 )
  {
    v17 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v17 )
      goto LABEL_33;
    v18 = a1 + v17;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 24);
  }
  if ( v18 )
  {
    v19 = (*(unsigned __int16 *)(v18 + 2) + 3) & 0xFFFFFFFC;
    v20 = v19 + v18;
    v5 += v19;
    if ( v20 > v6 )
      LODWORD(v6) = v20;
  }
LABEL_33:
  if ( v4 == 1 )
    return (unsigned int)(v6 - a1);
  else
    return v5;
}
