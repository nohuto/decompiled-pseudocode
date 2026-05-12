/*
 * XREFs of TranslateToExtendedSrb @ 0x1C0014EB4
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0004DF0 (RaidUnitClaimIrp.c)
 * Callees:
 *     TranslateScsiRequestBlockToIoInfoSrbExData @ 0x1C0006C14 (TranslateScsiRequestBlockToIoInfoSrbExData.c)
 *     TranslateScsiRequestBlockToStorageRequestBlock @ 0x1C0006F68 (TranslateScsiRequestBlockToStorageRequestBlock.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 *     Template_zx @ 0x1C00302C4 (Template_zx.c)
 */

__int64 __fastcall TranslateToExtendedSrb(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  int v10; // ebp
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER v12; // rbx
  unsigned int v13; // eax
  int v14; // ecx
  char v15; // r15
  unsigned int v16; // eax
  int v17; // r13d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __int64 v22; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v24; // rdx
  LARGE_INTEGER v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rtt
  unsigned __int64 v28; // rtt
  union _LARGE_INTEGER v30; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(v6) = 0;
  v7 = a3;
  v10 = 0;
  v30.QuadPart = 1LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
    v11 = KeQueryPerformanceCounter(&v30);
  else
    v11.QuadPart = KeQueryUnbiasedInterruptTime();
  v12 = v11;
  v13 = *(unsigned __int8 *)(a2 + 2);
  if ( v13 <= 0x15 )
  {
    if ( v13 != 21 )
    {
      if ( !*(_BYTE *)(a2 + 2) )
      {
        v15 = a6;
        v16 = 184;
        if ( a6 == 1 )
          v16 = 224;
        if ( (unsigned int)v7 < v16 )
          goto LABEL_45;
        v17 = 128;
        if ( a6 == 1 )
          v17 = 136;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, a6, v16);
        v18 = (unsigned int)(v17 + 16);
        *(_DWORD *)(a1 + 120) = v18;
        v19 = v7;
        if ( v18 + 40 > v7 )
        {
          v10 = -1073741670;
        }
        else
        {
          *(_DWORD *)(v18 + a1) = 64;
          *(_DWORD *)(v18 + a1 + 4) = 32;
          *(_BYTE *)(v18 + a1 + 10) = *(_BYTE *)(a2 + 10);
          *(_BYTE *)(v18 + a1 + 8) = *(_BYTE *)(a2 + 4);
          *(_BYTE *)(v18 + a1 + 9) = *(_BYTE *)(a2 + 11);
          *(_QWORD *)(v18 + a1 + 16) = *(_QWORD *)(a2 + 32);
          v20 = *(_BYTE *)(a2 + 10);
          if ( v20 )
          {
            memmove((void *)(a1 + v18 + 24), (const void *)(a2 + 72), v20);
            v19 = v7;
          }
          else
          {
            *(_QWORD *)(v18 + a1 + 24) = 0LL;
            *(_QWORD *)(v18 + a1 + 32) = 0LL;
          }
        }
        if ( v15 == 1 )
        {
          v21 = (unsigned int)(v17 + 56);
          *(_DWORD *)(a1 + 124) = v21;
          if ( v21 + 32 > v19 )
            v10 = -1073741670;
          else
            TranslateScsiRequestBlockToIoInfoSrbExData(a1 + (unsigned int)(v17 + 56), a2, a5);
        }
        if ( v10 < 0 )
          goto LABEL_46;
        goto LABEL_26;
      }
      if ( v13 > 0x13 )
        goto LABEL_11;
      v14 = 852950;
      if ( !_bittest(&v14, v13) )
        goto LABEL_11;
    }
    goto LABEL_36;
  }
  if ( v13 == 23 )
  {
    if ( (unsigned int)v7 < 0xA8 )
      goto LABEL_45;
    TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
    *(_DWORD *)(a1 + 120) = 144;
    *(_DWORD *)(a1 + 144) = 96;
    *(_DWORD *)(a1 + 148) = 16;
    *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
    *(_BYTE *)(a1 + 153) = *(_BYTE *)(a2 + 9);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 32);
    goto LABEL_26;
  }
  if ( *(unsigned __int8 *)(a2 + 2) <= 0x17u )
    goto LABEL_11;
  if ( *(unsigned __int8 *)(a2 + 2) <= 0x1Au || v13 == 32 )
    goto LABEL_36;
  switch ( v13 )
  {
    case '$':
      if ( (unsigned int)v7 < 0xA8 )
        goto LABEL_45;
      TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
      *(_DWORD *)(a1 + 120) = 144;
      *(_DWORD *)(a1 + 144) = 97;
      *(_DWORD *)(a1 + 148) = 12;
LABEL_40:
      *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
      *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 64);
      goto LABEL_26;
    case '%':
      if ( (unsigned int)v7 < 0xA8 )
        goto LABEL_45;
      TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
      *(_DWORD *)(a1 + 120) = 144;
      *(_DWORD *)(a1 + 144) = 98;
      *(_DWORD *)(a1 + 148) = 16;
      goto LABEL_40;
    case '&':
LABEL_36:
      if ( (unsigned int)v7 < 0x90 )
        goto LABEL_45;
      TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 0, 0, 144);
LABEL_26:
      v22 = *(unsigned int *)(a1 + 52);
      if ( v22 + 16 <= v7 )
      {
        *(_DWORD *)(v22 + a1) = 1;
        *(_DWORD *)(v22 + a1 + 4) = 4;
        *(_BYTE *)(v22 + a1 + 8) = *(_BYTE *)(a2 + 5);
        *(_BYTE *)(v22 + a1 + 9) = *(_BYTE *)(a2 + 6);
        *(_BYTE *)(v22 + a1 + 10) = *(_BYTE *)(a2 + 7);
        goto LABEL_46;
      }
LABEL_45:
      v10 = -1073741670;
      goto LABEL_46;
  }
LABEL_11:
  v10 = -1073741811;
LABEL_46:
  if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v12.QuadPart )
    v26 = PerformanceCounter.QuadPart - v12.QuadPart;
  else
    v26 = PerformanceCounter.QuadPart - v12.QuadPart - 1;
  if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
  {
    if ( v30.QuadPart && v26 )
    {
      v27 = 1000 * (v26 % v30.QuadPart);
      v25.QuadPart = v27 / v30.QuadPart + 1000 * (v26 / v30.QuadPart);
      v28 = 10000 * (v27 % v30.QuadPart);
      v24.QuadPart = v28 % v30.QuadPart;
      v6 = v28 / v30.QuadPart + 10000 * v25.QuadPart;
    }
  }
  else
  {
    LOBYTE(v6) = v26;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x40) != 0 )
    Template_zx(WPP_MAIN_CB.Dpc.DpcData, v24.LowPart, v25.LowPart, (unsigned int)L"Translate SCSI_REQUEST_BLOCK", v6);
  return (unsigned int)v10;
}
