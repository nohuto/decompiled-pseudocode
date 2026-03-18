/*
 * XREFs of FormInquirySerialNumberData @ 0x1C0006898
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0006E78 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C000D49C (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquirySerialNumberData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // al
  __int64 v7; // r10
  _DWORD *v8; // r11
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // r9d
  _BYTE *v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx

  v6 = *(_BYTE *)(a2 + 2);
  if ( v6 == 40 )
  {
    v7 = *(_QWORD *)(a2 + 64);
    v8 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = (_DWORD *)(a2 + 16);
  }
  if ( *v8 < 0x18u )
  {
    LOBYTE(a4) = 36;
    LOBYTE(a1) = 6;
    NVMeSetSenseData(a2, a1, a2, a4);
    return (unsigned int)-1056964602;
  }
  if ( v6 == 40 )
    v10 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v10 = *(unsigned __int8 *)(a2 + 7);
  v9 = 0;
  *(_WORD *)v7 = 0x8000;
  *(_BYTE *)(v7 + 3) = 20;
  v11 = 0;
  v12 = (_BYTE *)(*(_QWORD *)(a1 + 8 * v10 + 1176) + 91LL);
  while ( v11 <= 0xE )
  {
    v13 = 16912;
    if ( !_bittest(&v13, v11) )
      break;
    v14 = v11++;
    *(_BYTE *)(v14 + v7 + 4) = 95;
LABEL_15:
    if ( v11 >= 0x14 )
      goto LABEL_18;
  }
  if ( v11 != 19 )
  {
    v15 = v11;
    v16 = v11 + 1;
    v17 = *v12 & 0xF;
    *(_BYTE *)(v15 + v7 + 4) = `HexFromUshort'::`2'::hexDigits[(unsigned __int64)(unsigned __int8)*v12 >> 4];
    *(_BYTE *)(v16 + v7 + 4) = `HexFromUshort'::`2'::hexDigits[v17];
    v11 = v16 + 1;
    --v12;
    goto LABEL_15;
  }
  *(_BYTE *)(v7 + 23) = 46;
LABEL_18:
  *v8 = *(unsigned __int8 *)(v7 + 3) + 4;
  *(_BYTE *)(a2 + 3) = 1;
  return v9;
}
