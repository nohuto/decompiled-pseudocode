/*
 * XREFs of FormInquiryDeviceIdentifiersData @ 0x1C0008FC4
 * Callers:
 *     ScsiInquiryRequest @ 0x1C000B970 (ScsiInquiryRequest.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     GetNamespaceId @ 0x1C0004770 (GetNamespaceId.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     GUIDToSCSINameString @ 0x1C00095BC (GUIDToSCSINameString.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryDeviceIdentifiersData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _WORD *SrbDataBuffer; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  BOOL v11; // r14d
  unsigned int v12; // ebp
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int16 *v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int16 NamespaceId; // ax
  __int64 v21; // r10
  unsigned __int64 v22; // rcx
  __int64 v23; // r9
  unsigned int *v25; // [rsp+30h] [rbp-78h] BYREF
  __int64 v26; // [rsp+38h] [rbp-70h]
  unsigned __int16 *v27; // [rsp+40h] [rbp-68h]
  __int64 v28; // [rsp+48h] [rbp-60h]
  __int128 v29; // [rsp+50h] [rbp-58h]

  v2 = 0;
  v27 = *(unsigned __int16 **)(a1 + 1080);
  v28 = a1;
  v29 = 0uLL;
  v25 = 0LL;
  SrbDataBuffer = (_WORD *)GetSrbDataBuffer(a2, &v25);
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(unsigned __int8 *)(a2 + 7);
  v8 = *(_QWORD *)(v6 + 8 * v7 + 1184);
  v9 = v8 + 76;
  v10 = *(_QWORD *)(v8 + 76) - v29;
  if ( !v10 )
    v10 = *(_QWORD *)(v8 + 84) - *((_QWORD *)&v29 + 1);
  v26 = v8 + 92;
  v11 = v10 != 0;
  if ( *(_QWORD *)(v8 + 92) == (_QWORD)v29 || v10 )
  {
    v13 = 0;
    v12 = 44;
    if ( !v10 )
      v12 = 76;
  }
  else
  {
    v12 = 28;
    v13 = 1;
  }
  v14 = *v25;
  if ( (unsigned int)v14 >= v12 )
  {
    NVMeZeroMemory(SrbDataBuffer, v14);
    *SrbDataBuffer = -32000;
    *((_BYTE *)SrbDataBuffer + 3) = v12 - 4;
    v15 = 8LL;
    *((_BYTE *)SrbDataBuffer + 4) = SrbDataBuffer[2] & 0xF0 | 3;
    *((_BYTE *)SrbDataBuffer + 5) = *((_BYTE *)SrbDataBuffer + 5) & 0xC0 | 8;
    *((_BYTE *)SrbDataBuffer + 7) = v12 - 8;
    if ( v11 )
    {
      v15 = 16LL;
      v16 = v9;
    }
    else
    {
      if ( !v13 )
      {
        v17 = v27;
        v18 = v28;
        v19 = *v27;
        *((_BYTE *)SrbDataBuffer + 11) = `HexFromUchar'::`2'::hexDigits[v19 & 0xF];
        *((_BYTE *)SrbDataBuffer + 10) = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v19 >> 4];
        *((_BYTE *)SrbDataBuffer + 9) = `HexFromUchar'::`2'::hexDigits[((unsigned int)v19 >> 8) & 0xF];
        *((_BYTE *)SrbDataBuffer + 8) = `HexFromUchar'::`2'::hexDigits[v19 >> 12];
        *(_OWORD *)(SrbDataBuffer + 6) = *(_OWORD *)(v17 + 12);
        *(_OWORD *)(SrbDataBuffer + 14) = *(_OWORD *)(v17 + 20);
        *(_QWORD *)(SrbDataBuffer + 22) = *((_QWORD *)v17 + 7);
        NamespaceId = GetNamespaceId(v18, v7);
        *((_BYTE *)SrbDataBuffer + 55) = *(_BYTE *)((NamespaceId & 0xF) + v21);
        *((_BYTE *)SrbDataBuffer + 54) = *(_BYTE *)((((unsigned __int64)NamespaceId >> 4) & 0xF) + v21);
        v22 = (unsigned __int64)NamespaceId >> 12;
        LOBYTE(NamespaceId) = *(_BYTE *)((((unsigned __int64)NamespaceId >> 8) & 0xF) + v21);
        *((_BYTE *)SrbDataBuffer + 52) = *(_BYTE *)(v22 + v21);
        *((_BYTE *)SrbDataBuffer + 53) = NamespaceId;
        *(_OWORD *)(SrbDataBuffer + 28) = *(_OWORD *)(v23 + 4);
        *((_DWORD *)SrbDataBuffer + 18) = *(_DWORD *)(v23 + 20);
        goto LABEL_19;
      }
      v16 = v26;
    }
    GUIDToSCSINameString(v16, SrbDataBuffer + 4, v15, (unsigned __int8)(v12 - 8));
LABEL_19:
    *v25 = v12;
    *(_BYTE *)(a2 + 3) = 1;
    return v2;
  }
  LOBYTE(v6) = 36;
  LOBYTE(v14) = 6;
  NVMeSetSenseData(a2, v14, v5, v6);
  return (unsigned int)-1056964602;
}
