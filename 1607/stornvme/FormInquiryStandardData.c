/*
 * XREFs of FormInquiryStandardData @ 0x1C00093DC
 * Callers:
 *     ScsiInquiryRequest @ 0x1C000B970 (ScsiInquiryRequest.c)
 * Callees:
 *     GetSrbScsiAddress @ 0x1C0001F1C (GetSrbScsiAddress.c)
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     memmove @ 0x1C0002E40 (memmove.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     NVMeCopyFirmwareRevision @ 0x1C000A084 (NVMeCopyFirmwareRevision.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned int v6; // edi
  void *SrbDataBuffer; // r15
  __int128 v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v17; // [rsp+30h] [rbp-29h] BYREF
  int v18; // [rsp+34h] [rbp-25h] BYREF
  int v19; // [rsp+38h] [rbp-21h] BYREF
  unsigned int *v20; // [rsp+40h] [rbp-19h] BYREF
  _OWORD Src[4]; // [rsp+48h] [rbp-11h] BYREF

  v4 = 60;
  memset(Src, 0, 0x3CuLL);
  v5 = *(_QWORD *)(a1 + 1080);
  v6 = 0;
  v20 = 0LL;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  SrbDataBuffer = (void *)GetSrbDataBuffer(a2, &v20);
  GetSrbScsiAddress(a2, &v19, &v18, &v17);
  LOWORD(Src[0]) &= 0x7F00u;
  BYTE3(Src[0]) = BYTE3(Src[0]) & 0xF0 | 2;
  BYTE2(Src[0]) = 6;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v17 + 1184) + 74LL) )
    BYTE5(Src[0]) |= 1u;
  v8 = *(_OWORD *)(v5 + 24);
  BYTE7(Src[0]) |= 2u;
  BYTE4(Src[0]) = 55;
  LODWORD(Src[2]) = 538976288;
  Src[1] = v8;
  *((_QWORD *)&Src[0] + 1) = 0x20202020654D564ELL;
  NVMeCopyFirmwareRevision(v5, &Src[2], 4LL);
  if ( (*(_BYTE *)(v5 + 256) & 1) != 0 )
    WORD5(Src[3]) = -16129;
  v12 = v20;
  if ( *v20 < 0x3C )
    v4 = *v20;
  if ( v4 && SrbDataBuffer )
  {
    memmove(SrbDataBuffer, Src, v4);
    *v12 = v4;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(v11) = 36;
    LOBYTE(v9) = 48;
    NVMeSetSenseData(a2, v9, v10, v11);
    v6 = -1056964602;
  }
  LOBYTE(v15) = v17;
  LOBYTE(v14) = v18;
  LOBYTE(v13) = v19;
  StorPortSetDeviceQueueDepth(a1, v13, v14, v15, 4096);
  return v6;
}
