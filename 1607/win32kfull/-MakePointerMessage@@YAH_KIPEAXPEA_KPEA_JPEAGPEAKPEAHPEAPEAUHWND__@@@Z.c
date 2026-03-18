/*
 * XREFs of ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F02D0
 * Callers:
 *     PrepareSentPointerMessageForClient @ 0x1C01D78E4 (PrepareSentPointerMessageForClient.c)
 *     TranslateSentPointerMessageForClient @ 0x1C01D79BC (TranslateSentPointerMessageForClient.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A54 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01DBDF0 (GetDPITransformationMonitor.c)
 *     ?GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z @ 0x1C01EF450 (-GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z.c)
 */

__int64 __fastcall MakePointerMessage(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 *a5,
        unsigned __int16 *a6,
        unsigned int *a7,
        int *a8,
        HWND *a9)
{
  int v9; // esi
  unsigned int v13; // r14d
  struct _LIST_ENTRY *FrameById; // r9
  __int64 v16; // r10
  __int64 v17; // rdi
  unsigned __int16 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // ecx
  unsigned __int64 v24; // rcx
  HWND v25; // rdx
  __int64 v26; // [rsp+20h] [rbp-10h] BYREF
  struct tagPOINT v27; // [rsp+60h] [rbp+30h] BYREF

  v9 = 0;
  v13 = 1;
  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  v17 = (__int64)FrameById[5].Blink + 216 * *(unsigned int *)(v16 + 32);
  v18 = *(_WORD *)(v17 + 60);
  if ( !GetAdjustedPointerPixelLocation(*(struct tagPOINT *)(v17 + 88), *(struct tagPOINT *)(v17 + 36), &v27) )
    v27 = *(struct tagPOINT *)(v17 + 88);
  LOBYTE(v19) = 1;
  v22 = HMValidateHandleNoSecure(*(_QWORD *)(v17 + 80), v19, v20, v21);
  if ( v22 && (*(_DWORD *)(v22 + 352) & 0xF) != 2 )
  {
    v26 = 0LL;
    GetDPITransformationMonitor(*(_QWORD *)&v27, v22, &v26);
    PhysicalToLogicalDPIPoint(&v27, &v27, 0LL);
  }
  if ( a2 <= 0x24B )
  {
    if ( a2 != 587 )
    {
      if ( a2 == 528 )
      {
        v24 = (v18 << 16) | 0x246LL;
        goto LABEL_19;
      }
      if ( a2 > 0x240 )
      {
        if ( a2 <= 0x243 )
        {
          v23 = *(unsigned __int16 *)(v17 + 32);
LABEL_18:
          v24 = v18 | (unsigned __int64)(unsigned int)(v23 << 16);
LABEL_19:
          *a4 = v24;
LABEL_20:
          *a5 = LOWORD(v27.x) | (unsigned __int64)(LOWORD(v27.y) << 16);
          goto LABEL_33;
        }
        if ( a2 - 581 > 2 && a2 - 585 > 1 )
          return 0;
LABEL_29:
        v23 = *(_WORD *)(v17 + 68) & 0xE1F7;
        goto LABEL_18;
      }
      return 0;
    }
    *a4 = v18 | (unsigned __int64)(*(unsigned __int16 *)(v17 + 32) << 16);
    goto LABEL_32;
  }
  if ( a2 == 588 )
  {
    *a4 = v18;
LABEL_32:
    *a5 = a3;
    goto LABEL_33;
  }
  if ( a2 == 592 )
  {
    *a4 = v18;
    goto LABEL_20;
  }
  if ( a2 > 0x250 )
  {
    if ( a2 <= 0x252 )
      goto LABEL_29;
    if ( a2 == 595 )
    {
LABEL_33:
      *a6 = *(_WORD *)(v17 + 60);
      *a7 = *(_DWORD *)(v17 + 56);
      if ( (*(_DWORD *)v17 & 0x20000) != 0 || (*(_DWORD *)v17 & 0x40000) != 0 )
        v9 = 1;
      v25 = *(HWND *)(v17 + 80);
      *a8 = v9;
      *a9 = v25;
      return v13;
    }
  }
  return 0;
}
