/*
 * XREFs of MiGetZeroedPages @ 0x140077560
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x140059A30 (MiSetPfnTbFlushStamp.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140077838 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiChangePageAttributeBatch @ 0x1400E57F0 (MiChangePageAttributeBatch.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 */

__int64 __fastcall MiGetZeroedPages(__int64 a1, __int64 a2, int a3, unsigned int a4, char a5, unsigned __int64 *a6)
{
  __int64 v7; // r11
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int *p_PageColor; // r14
  int v10; // ecx
  __int64 v12; // rbp
  __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // rbx
  int v16; // eax
  __int16 v17; // cx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 Page; // rax
  __int64 v21; // rdi
  signed __int64 v22; // rdx
  signed __int64 v23; // r8
  signed __int64 v24; // rcx
  signed __int64 v25; // rdx
  __int64 v26; // rbp
  signed __int64 v27; // r8
  signed __int64 v28; // rcx
  signed __int32 v30[10]; // [rsp+0h] [rbp-68h] BYREF
  int i; // [rsp+78h] [rbp+10h]
  unsigned int v33; // [rsp+80h] [rbp+18h]
  __int16 v34; // [rsp+98h] [rbp+30h]

  v7 = a1;
  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    LOWORD(a3) = ((_WORD)a3 - 1) << byte_14034EB89;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    LOWORD(a3) = CurrentPrcb->NodeShiftedColor;
  }
  if ( !a2 || (p_PageColor = (unsigned int *)(a2 + 192), (*(_BYTE *)(a2 + 216) & 7u) >= 2) )
    p_PageColor = &CurrentPrcb->PageColor;
  if ( a4 >> 3 == 3 && (a4 & 7) != 0 )
    v10 = 2;
  else
    v10 = a4 >> 3 != 1;
  v12 = 0xFFFFFFFFFLL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v33 = MiPlatformCacheAttributes[v10];
  if ( *a6 )
  {
    v16 = a5 & 2;
    v17 = (1 << byte_14034EB98) - 1;
    a3 = (unsigned __int16)a3;
    v34 = v17;
    for ( i = (unsigned __int16)a3; ; a3 = i )
    {
      v18 = a3 | (unsigned int)(unsigned __int16)(v17 & ++*(_WORD *)p_PageColor);
      v19 = v16 ? 2LL : 0LL;
      Page = MiGetPage(v7, v18, v19);
      v21 = Page;
      if ( Page == -1 )
        break;
      v15 = 48 * Page - 0x58000000000LL;
      if ( *(_QWORD *)(v15 + 16) && (a5 & 0x40) != 0 )
      {
        MiZeroPhysicalPage(Page, 1LL, v33);
        *(_QWORD *)(v15 + 16) = 0LL;
        _InterlockedOr(v30, 0);
        MiSetPfnTbFlushStamp(v15, (unsigned int)KiTbFlushTimeStamp, 0);
      }
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v15, v33) == 1 )
      {
        *(_QWORD *)(v15 + 16) = v13;
        v13 = v15;
      }
      else
      {
        v22 = *(_QWORD *)(v15 + 24);
        v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 24), v22 & 0xF0FFFFFFFFFFFFFFuLL, v22);
        if ( v22 != v23 )
        {
          do
          {
            v24 = v23;
            v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 24), v23 & 0xF0FFFFFFFFFFFFFFuLL, v23);
          }
          while ( v24 != v23 );
        }
      }
      v25 = *(_QWORD *)(v15 + 24);
      v26 = v12 & 0xFFFFFFFFFLL;
      v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 24), v26 | v25 & 0xFFFFFFF000000000uLL, v25);
      if ( v25 != v27 )
      {
        do
        {
          v28 = v27;
          v27 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v15 + 24),
                  v26 | v27 & 0xFFFFFFF000000000uLL,
                  v27);
        }
        while ( v28 != v27 );
      }
      ++v14;
      v12 = v21;
      if ( (v14 & 0xF) == 0 && (*(_DWORD *)a2 & 0x40000000) != 0 )
        break;
      if ( KeShouldYieldProcessor() )
        break;
      if ( v14 >= *a6 )
        goto LABEL_32;
      v7 = a1;
      v16 = a5 & 2;
      v17 = v34;
    }
    *a6 = v14;
LABEL_32:
    if ( v13 )
      MiChangePageAttributeBatch(v13, v33, ZeroPte);
  }
  return v15;
}
