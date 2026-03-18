/*
 * XREFs of FormInquirySerialNumberData @ 0x1C0009214
 * Callers:
 *     ScsiInquiryRequest @ 0x1C000B970 (ScsiInquiryRequest.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     memmove @ 0x1C0002E40 (memmove.c)
 *     HexFromUshort @ 0x1C00097B8 (HexFromUshort.c)
 *     SerialNumberFromNvmeId @ 0x1C000C570 (SerialNumberFromNvmeId.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquirySerialNumberData(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v3; // ebp
  unsigned __int8 v4; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r10
  _QWORD *v10; // r12
  __int64 v11; // rax
  bool v12; // si
  bool v13; // bl
  unsigned int v14; // r13d
  __int64 SrbDataBuffer; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // r10
  unsigned int v20; // r11d
  __int64 result; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // r12
  __int64 v26; // r9
  unsigned int v27; // esi
  __int64 v28; // r9
  unsigned int *v29; // [rsp+30h] [rbp-68h] BYREF
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int128 v31; // [rsp+40h] [rbp-58h]

  v2 = *(_QWORD *)(a1 + 1080);
  v3 = 0;
  v31 = 0uLL;
  v4 = 40;
  v29 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(unsigned __int8 *)(a2 + 7);
  v30 = (unsigned int)v7;
  v8 = *(_QWORD *)(a1 + 8 * v7 + 1184);
  v9 = v8 + 76;
  v10 = (_QWORD *)(v8 + 92);
  v11 = *(_QWORD *)(v8 + 76) - v31;
  if ( !v11 )
    v11 = *(_QWORD *)(v9 + 8) - *((_QWORD *)&v31 + 1);
  v12 = v11 != 0;
  v13 = *v10 != (_QWORD)v31;
  if ( !v11 )
    v4 = *v10 != (_QWORD)v31 ? 20 : 30;
  v14 = v4 + 4;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v29);
  if ( *v29 < v14 )
  {
    LOBYTE(v18) = 36;
    LOBYTE(v16) = 6;
    NVMeSetSenseData(a2, v16, v17, v18);
    return 3238002694LL;
  }
  *(_WORD *)SrbDataBuffer = 0x8000;
  *(_BYTE *)(SrbDataBuffer + 3) = v18;
  if ( v12 )
  {
    v22 = 16LL;
    v23 = v19;
  }
  else
  {
    if ( !v13 )
    {
      v24 = 0LL;
      v25 = SrbDataBuffer + 4;
      if ( *(_BYTE *)(v2 + 4) )
      {
        do
          v24 = (unsigned int)(v24 + 1);
        while ( (unsigned int)v24 < 0x14 && *(_BYTE *)(v24 + v2 + 4) );
      }
      memmove((void *)(SrbDataBuffer + 4), (const void *)(v2 + 4), (unsigned int)v24);
      v26 = v30;
      *(_BYTE *)(v24 + v25) = 95;
      v27 = v24 + 1;
      HexFromUshort(*(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v26 + 1184) + 18LL), v25 + v27);
      v27 += 4;
      HexFromUshort(*(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v28 + 1184) + 16LL), v25 + v27);
      *(_BYTE *)(v27 + 4 + v25) = 46;
      goto LABEL_19;
    }
    v22 = 8LL;
    v23 = v10;
  }
  v3 = SerialNumberFromNvmeId(v23, v22, SrbDataBuffer + 4, v20);
LABEL_19:
  if ( v3 )
    return v3;
  *v29 = v14;
  result = 0LL;
  *(_BYTE *)(a2 + 3) = 1;
  return result;
}
