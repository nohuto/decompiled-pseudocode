/*
 * XREFs of TranslateToExtendedSrb @ 0x1C001A3E8
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0004D00 (RaidUnitClaimIrp.c)
 * Callees:
 *     TranslateScsiRequestBlockToIoInfoSrbExData @ 0x1C000994C (TranslateScsiRequestBlockToIoInfoSrbExData.c)
 *     TranslateScsiRequestBlockToStorageRequestBlock @ 0x1C0009B1C (TranslateScsiRequestBlockToStorageRequestBlock.c)
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     Template_zx @ 0x1C0033434 (Template_zx.c)
 */

__int64 __fastcall TranslateToExtendedSrb(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  int v10; // ebp
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rax
  char v15; // r15
  unsigned int v16; // eax
  int v17; // r13d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  LARGE_INTEGER v21; // rax
  LARGE_INTEGER v22; // rbx
  unsigned int v23; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v25; // rdx
  LARGE_INTEGER v26; // r8
  unsigned __int64 v27; // rtt
  unsigned __int64 v28; // rtt
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(v6) = 0;
  v7 = a3;
  v10 = 0;
  PerformanceFrequency.QuadPart = 1LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( UseQPCTime )
    v21 = KeQueryPerformanceCounter(&PerformanceFrequency);
  else
    v21.QuadPart = KeQueryUnbiasedInterruptTime();
  v22 = v21;
  v23 = *(unsigned __int8 *)(a2 + 2);
  if ( v23 > 0x15 )
  {
    if ( v23 == 23 )
    {
      if ( (unsigned int)v7 < 0xA8 )
        goto LABEL_19;
      TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
      *(_DWORD *)(a1 + 120) = 144;
      *(_DWORD *)(a1 + 144) = 96;
      *(_DWORD *)(a1 + 148) = 16;
      *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
      *(_BYTE *)(a1 + 153) = *(_BYTE *)(a2 + 9);
      *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 32);
      goto LABEL_30;
    }
    if ( *(unsigned __int8 *)(a2 + 2) <= 0x17u )
      goto LABEL_60;
    if ( *(unsigned __int8 *)(a2 + 2) <= 0x1Au || v23 == 32 )
      goto LABEL_36;
    switch ( v23 )
    {
      case '$':
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_19;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 97;
        *(_DWORD *)(a1 + 148) = 12;
        break;
      case '%':
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_19;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 98;
        *(_DWORD *)(a1 + 148) = 16;
        break;
      case '&':
        goto LABEL_36;
      default:
LABEL_60:
        v10 = -1073741811;
        goto LABEL_62;
    }
    *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
    *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 64);
    goto LABEL_30;
  }
  if ( v23 == 21 )
  {
LABEL_36:
    if ( (unsigned int)v7 < 0x90 )
      goto LABEL_19;
    TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 0, 0, 144);
    goto LABEL_30;
  }
  if ( *(_BYTE *)(a2 + 2) )
  {
    if ( *(unsigned __int8 *)(a2 + 2) > 2u
      && v23 != 4
      && (*(unsigned __int8 *)(a2 + 2) <= 5u
       || *(unsigned __int8 *)(a2 + 2) > 9u
       && v23 != 16
       && (*(unsigned __int8 *)(a2 + 2) <= 0x11u || *(unsigned __int8 *)(a2 + 2) > 0x13u)) )
    {
      goto LABEL_60;
    }
    goto LABEL_36;
  }
  v15 = a6;
  v16 = 184;
  if ( a6 == 1 )
    v16 = 224;
  if ( (unsigned int)v7 < v16 )
    goto LABEL_19;
  v17 = 128;
  if ( a6 == 1 )
    v17 = 136;
  TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, a6, v16);
  v18 = (unsigned int)(v17 + 16);
  *(_DWORD *)(a1 + 120) = v18;
  v19 = v7;
  if ( v18 + 40 <= v7 )
  {
    *(_DWORD *)(v18 + a1) = 64;
    *(_DWORD *)(v18 + a1 + 4) = 32;
    *(_BYTE *)(v18 + a1 + 10) = *(_BYTE *)(a2 + 10);
    *(_BYTE *)(v18 + a1 + 8) = *(_BYTE *)(a2 + 4);
    *(_BYTE *)(v18 + a1 + 9) = *(_BYTE *)(a2 + 11);
    *(_QWORD *)(v18 + a1 + 16) = *(_QWORD *)(a2 + 32);
    v13 = *(_BYTE *)(a2 + 10);
    if ( v13 )
    {
      memmove((void *)(a1 + v18 + 24), (const void *)(a2 + 72), v13);
      v19 = v7;
    }
    else
    {
      *(_QWORD *)(v18 + a1 + 24) = 0LL;
      *(_QWORD *)(v18 + a1 + 32) = 0LL;
    }
  }
  else
  {
    v10 = -1073741670;
  }
  if ( v15 == 1 && *(_DWORD *)(a1 + 56) > 1u )
  {
    v14 = (unsigned int)(v17 + 56);
    *(_DWORD *)(a1 + 124) = v14;
    if ( v14 + 32 > v19 )
      v10 = -1073741670;
    else
      TranslateScsiRequestBlockToIoInfoSrbExData(a1 + (unsigned int)(v17 + 56), a2, a5);
  }
  if ( v10 < 0 )
    goto LABEL_62;
LABEL_30:
  v20 = *(unsigned int *)(a1 + 52);
  if ( v20 + 16 <= v7 )
  {
    *(_DWORD *)(v20 + a1) = 1;
    *(_DWORD *)(v20 + a1 + 4) = 4;
    *(_BYTE *)(v20 + a1 + 8) = *(_BYTE *)(a2 + 5);
    *(_BYTE *)(v20 + a1 + 9) = *(_BYTE *)(a2 + 6);
    *(_BYTE *)(v20 + a1 + 10) = *(_BYTE *)(a2 + 7);
    goto LABEL_62;
  }
LABEL_19:
  v10 = -1073741670;
LABEL_62:
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v22.QuadPart )
    v12 = PerformanceCounter.QuadPart - v22.QuadPart;
  else
    v12 = PerformanceCounter.QuadPart - v22.QuadPart - 1;
  if ( UseQPCTime )
  {
    if ( PerformanceFrequency.QuadPart && v12 )
    {
      v27 = 1000 * (v12 % PerformanceFrequency.QuadPart);
      v26.QuadPart = v27 / PerformanceFrequency.QuadPart + 1000 * (v12 / PerformanceFrequency.QuadPart);
      v28 = 10000 * (v27 % PerformanceFrequency.QuadPart);
      v25.QuadPart = v28 % PerformanceFrequency.QuadPart;
      v6 = v28 / PerformanceFrequency.QuadPart + 10000 * v26.QuadPart;
    }
  }
  else
  {
    LOBYTE(v6) = v12;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
    Template_zx(
      Microsoft_Windows_StorPortEnableBits,
      v25.LowPart,
      v26.LowPart,
      (unsigned int)L"Translate SCSI_REQUEST_BLOCK",
      v6);
  return (unsigned int)v10;
}
