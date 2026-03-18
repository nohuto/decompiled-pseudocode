/*
 * XREFs of FormInquiryStandardData @ 0x1C000658C
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0006D50 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C000D36C (NVMeSetSenseData.c)
 *     __security_check_cookie @ 0x1C000E9C0 (__security_check_cookie.c)
 *     memmove @ 0x1C000EAC0 (memmove.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  char v5; // al
  __int64 v6; // r8
  void *v7; // r9
  unsigned int *v8; // r15
  __int64 v9; // rax
  char v10; // r12
  __int64 v11; // r14
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // rdx
  int v15; // r10d
  __int64 v16; // rcx
  _BYTE *v17; // rcx
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  char v23; // [rsp+30h] [rbp-50h]
  _OWORD Src[4]; // [rsp+38h] [rbp-48h] BYREF

  v2 = 0;
  memset(Src, 0, 60);
  v5 = *(_BYTE *)(a2 + 2);
  v6 = *(_QWORD *)(a1 + 1072);
  if ( v5 == 40 )
  {
    v7 = *(void **)(a2 + 64);
    v8 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v7 = *(void **)(a2 + 24);
    v8 = (unsigned int *)(a2 + 16);
  }
  if ( v5 == 40 )
  {
    v9 = *(unsigned int *)(a2 + 52);
    v10 = *(_BYTE *)(v9 + a2 + 8);
    v11 = *(unsigned __int8 *)(v9 + a2 + 10);
    v23 = *(_BYTE *)(v9 + a2 + 9);
  }
  else
  {
    v10 = *(_BYTE *)(a2 + 5);
    v11 = *(unsigned __int8 *)(a2 + 7);
    v23 = *(_BYTE *)(a2 + 6);
  }
  v12 = *(_QWORD *)(a1 + 8 * v11 + 1168);
  LOWORD(Src[0]) &= 0x7F00u;
  BYTE2(Src[0]) = 6;
  BYTE3(Src[0]) = BYTE3(Src[0]) & 0xF0 | 2;
  if ( *(_BYTE *)(v12 + 66) )
    BYTE5(Src[0]) |= 1u;
  v13 = *(_OWORD *)(v6 + 24);
  BYTE7(Src[0]) |= 2u;
  v14 = 7LL;
  Src[1] = v13;
  BYTE4(Src[0]) = 55;
  v15 = 0;
  LODWORD(Src[2]) = 538976288;
  v16 = 7LL;
  *((_QWORD *)&Src[0] + 1) = 0x20202020654D564ELL;
  do
  {
    if ( (unsigned __int8)(*(_BYTE *)(v6 + v16 + 64) - 33) <= 0x5Du && ++v15 == 4 )
      break;
    if ( !v16 )
      break;
    v14 = (unsigned int)(v14 - 1);
    --v16;
  }
  while ( v16 >= 0 );
  if ( (int)v14 < 8LL )
  {
    v17 = (_BYTE *)((int)v14 + v6 + 64);
    v14 = 0LL;
    do
    {
      if ( (unsigned __int8)(*v17 - 33) <= 0x5Du )
      {
        *((_BYTE *)&Src[2] + v14++) = *v17;
        if ( v14 >= 4 )
          break;
      }
      ++v17;
    }
    while ( (__int64)&v17[-64 - v6] < 8 );
  }
  if ( (*(_BYTE *)(v6 + 256) & 1) != 0 )
    WORD5(Src[3]) = -16129;
  v18 = 60;
  if ( *v8 < 0x3C )
    v18 = *v8;
  if ( v18 && v7 )
  {
    memmove(v7, Src, v18);
    *v8 = v18;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(v7) = 36;
    LOBYTE(v14) = 48;
    NVMeSetSenseData(a2, v14, v6, v7);
    v2 = -1056964602;
  }
  LOBYTE(v20) = v23;
  LOBYTE(v21) = v11;
  LOBYTE(v19) = v10;
  StorPortSetDeviceQueueDepth(a1, v19, v20, v21, 4096);
  return v2;
}
