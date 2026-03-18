/*
 * XREFs of FormInquiryBlockProvisioningData @ 0x1C0006D80
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0006E78 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C000D49C (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockProvisioningData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v6; // rdx
  _DWORD *v7; // r11
  __int64 v8; // rbx
  unsigned int v9; // r9d
  char v10; // al
  char v11; // al

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
  {
    v6 = *(_QWORD *)(a2 + 64);
    v7 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 24);
    v7 = (_DWORD *)(a2 + 16);
  }
  if ( v4 == 40 )
    v8 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v8 = *(unsigned __int8 *)(a2 + 7);
  if ( *v7 >= 8u )
  {
    *(_WORD *)v6 = -19968;
    v9 = 0;
    *(_BYTE *)(v6 + 3) = 4;
    *(_BYTE *)(v6 + 5) &= 0x98u;
    if ( (*(_DWORD *)(a1 + 52) & 1) != 0 || (v10 = 1, (*(_BYTE *)(*(_QWORD *)(a1 + 1072) + 520LL) & 4) == 0) )
      v10 = 0;
    *(_BYTE *)(v6 + 5) = *(_BYTE *)(v6 + 5) & 0x7F | ((v10 != 0) << 7);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8 * v8 + 1176) + 65LL) )
    {
      v11 = *(_BYTE *)(v6 + 6) & 0xF8 | 2;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 52) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 1072) + 520LL) & 4) == 0 )
      {
        *(_BYTE *)(v6 + 6) &= 0xF8u;
        goto LABEL_19;
      }
      v11 = *(_BYTE *)(v6 + 6) & 0xF8 | 1;
    }
    *(_BYTE *)(v6 + 6) = v11;
LABEL_19:
    *v7 = 8;
    *(_BYTE *)(a2 + 3) = 1;
    return v9;
  }
  LOBYTE(a4) = 36;
  LOBYTE(v6) = 6;
  NVMeSetSenseData(a2, v6, a2, a4);
  return (unsigned int)-1056964602;
}
