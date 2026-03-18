/*
 * XREFs of ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F90B8
 * Callers:
 *     PrepareSentPointerMessageForClient @ 0x1C01E158C (PrepareSentPointerMessageForClient.c)
 *     TranslateSentPointerMessageForClient @ 0x1C01E1664 (TranslateSentPointerMessageForClient.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     GetDPITransformationMonitor @ 0x1C01E54D8 (GetDPITransformationMonitor.c)
 *     ?GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z @ 0x1C01F8264 (-GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F604 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
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
  unsigned int v13; // r15d
  __int64 v15; // r9
  struct tagPOINTERINPUTFRAME *FrameById; // r10
  __int64 v17; // rdi
  unsigned __int16 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // ecx
  unsigned __int64 v22; // rcx
  HWND v23; // rdx
  __int64 v24[2]; // [rsp+20h] [rbp-10h] BYREF
  struct tagPOINT v25; // [rsp+60h] [rbp+30h] BYREF

  v9 = 0;
  v13 = 1;
  if ( !a1 )
    return 0LL;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  v17 = *((_QWORD *)FrameById + 9) + 216LL * *(unsigned int *)(v15 + 32);
  v18 = *(_WORD *)(v17 + 60);
  if ( !GetAdjustedPointerPixelLocation(*(struct tagPOINT *)(v17 + 88), *(struct tagPOINT *)(v17 + 36), &v25) )
    v25 = *(struct tagPOINT *)(v17 + 88);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) == 0 )
  {
    v20 = HMValidateHandleNoSecure(*(_QWORD *)(v17 + 80), 1);
    v24[0] = 0LL;
    if ( v20 )
      GetDPITransformationMonitor(*(_QWORD *)&v25, v20, v24);
    PhysicalToLogicalDPIPoint(&v25, &v25, 0LL, v24);
  }
  if ( a2 <= 0x24B )
  {
    if ( a2 != 587 )
    {
      if ( a2 == 528 )
      {
        v22 = (v18 << 16) | 0x246LL;
        goto LABEL_20;
      }
      if ( a2 > 0x240 )
      {
        if ( a2 <= 0x243 )
        {
          v21 = *(unsigned __int16 *)(v17 + 32);
LABEL_19:
          v22 = v18 | (unsigned __int64)(unsigned int)(v21 << 16);
LABEL_20:
          *a4 = v22;
LABEL_21:
          *a5 = LOWORD(v25.x) | (unsigned __int64)(LOWORD(v25.y) << 16);
          goto LABEL_34;
        }
        if ( a2 <= 0x244 || a2 == 584 )
          return 0;
LABEL_30:
        v21 = *(_WORD *)(v17 + 68) & 0xE1F7;
        goto LABEL_19;
      }
      return 0;
    }
    *a4 = v18 | (unsigned __int64)(*(unsigned __int16 *)(v17 + 32) << 16);
    goto LABEL_33;
  }
  if ( a2 == 588 )
  {
    *a4 = v18;
LABEL_33:
    *a5 = a3;
    goto LABEL_34;
  }
  if ( a2 == 592 )
  {
    *a4 = v18;
    goto LABEL_21;
  }
  if ( a2 > 0x250 )
  {
    if ( a2 <= 0x252 )
      goto LABEL_30;
    if ( a2 == 595 )
    {
LABEL_34:
      *a6 = *(_WORD *)(v17 + 60);
      *a7 = *(_DWORD *)(v17 + 56);
      if ( (*(_DWORD *)v17 & 0x10000) != 0 || (*(_DWORD *)v17 & 0x20000) != 0 )
        v9 = 1;
      v23 = *(HWND *)(v17 + 80);
      *a8 = v9;
      *a9 = v23;
      return v13;
    }
  }
  return 0;
}
