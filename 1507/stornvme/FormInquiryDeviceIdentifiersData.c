/*
 * XREFs of FormInquiryDeviceIdentifiersData @ 0x1C00068F4
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0006D50 (ScsiInquiryRequest.c)
 * Callees:
 *     GUIDToSCSINameString @ 0x1C0006870 (GUIDToSCSINameString.c)
 *     NVMeSetSenseData @ 0x1C000D36C (NVMeSetSenseData.c)
 *     __security_check_cookie @ 0x1C000E9C0 (__security_check_cookie.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

__int64 __fastcall FormInquiryDeviceIdentifiersData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  char v6; // al
  _WORD *v7; // rbx
  unsigned int *v8; // r15
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rax
  BOOL v13; // r14d
  unsigned int v14; // ebp
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned __int64 v17; // rcx
  char v18; // al
  char v19; // al
  int v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  unsigned __int16 *v23; // [rsp+40h] [rbp-48h]

  v4 = 0;
  v23 = *(unsigned __int16 **)(a1 + 1072);
  v6 = *(_BYTE *)(a2 + 2);
  if ( v6 == 40 )
  {
    v7 = *(_WORD **)(a2 + 64);
    v8 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v7 = *(_WORD **)(a2 + 24);
    v8 = (unsigned int *)(a2 + 16);
  }
  if ( v6 == 40 )
    v9 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v9 = *(unsigned __int8 *)(a2 + 7);
  v10 = *(_QWORD *)(a1 + 8 * v9 + 1168);
  v11 = v10 + 68;
  v12 = *(_QWORD *)(v10 + 68);
  if ( !v12 )
    v12 = *(_QWORD *)(v10 + 76);
  v22 = v10 + 84;
  v13 = v12 != 0;
  if ( !*(_QWORD *)(v10 + 84) || v12 )
  {
    v21 = 0;
    v14 = 44;
    if ( !v12 )
      v14 = 76;
  }
  else
  {
    v21 = 1;
    v14 = 28;
  }
  v15 = *v8;
  if ( *v8 >= v14 )
  {
    if ( (v15 & 3) != 0 )
    {
      if ( v15 )
        memset(v7, 0, *v8);
    }
    else
    {
      v16 = v15 >> 2;
      if ( v16 )
        memset(v7, 0, 4LL * v16);
    }
    *v7 = -32000;
    *((_BYTE *)v7 + 3) = v14 - 4;
    *((_BYTE *)v7 + 4) = v7[2] & 0xF0 | 3;
    *((_BYTE *)v7 + 5) = *((_BYTE *)v7 + 5) & 0xC0 | 8;
    *((_BYTE *)v7 + 7) = v14 - 8;
    if ( v13 )
      GUIDToSCSINameString(v11, (_DWORD *)v7 + 2, 16, (unsigned __int8)(v14 - 8));
    if ( v21 )
    {
      GUIDToSCSINameString(v22, (_DWORD *)v7 + 2, 8, *((unsigned __int8 *)v7 + 7));
    }
    else
    {
      v17 = *v23;
      *((_BYTE *)v7 + 11) = `HexFromUshort'::`2'::hexDigits[v17 & 0xF];
      *((_BYTE *)v7 + 10) = `HexFromUshort'::`2'::hexDigits[(unsigned __int8)v17 >> 4];
      *((_BYTE *)v7 + 9) = `HexFromUshort'::`2'::hexDigits[((unsigned int)v17 >> 8) & 0xF];
      *((_BYTE *)v7 + 8) = `HexFromUshort'::`2'::hexDigits[v17 >> 12];
      *(_OWORD *)(v7 + 6) = *(_OWORD *)(v23 + 12);
      v18 = `HexFromUshort'::`2'::hexDigits[((_BYTE)v9 + 1) & 0xF];
      *(_OWORD *)(v7 + 14) = *(_OWORD *)(v23 + 20);
      *(_QWORD *)(v7 + 22) = *((_QWORD *)v23 + 7);
      *((_BYTE *)v7 + 55) = v18;
      *((_BYTE *)v7 + 54) = `HexFromUshort'::`2'::hexDigits[((unsigned __int64)(unsigned __int16)(v9 + 1) >> 4) & 0xF];
      v19 = `HexFromUshort'::`2'::hexDigits[((unsigned __int64)(unsigned __int16)(v9 + 1) >> 8) & 0xF];
      *((_BYTE *)v7 + 52) = `HexFromUshort'::`2'::hexDigits[(unsigned __int64)(unsigned __int16)(v9 + 1) >> 12];
      *((_BYTE *)v7 + 53) = v19;
      *(_OWORD *)(v7 + 28) = *(_OWORD *)(v23 + 2);
      *((_DWORD *)v7 + 18) = *((_DWORD *)v23 + 5);
    }
    *v8 = v14;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(v10) = 6;
    NVMeSetSenseData(a2, v10, a3, a4);
    return (unsigned int)-1056964602;
  }
  return v4;
}
