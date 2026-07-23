/*
 * XREFs of MiGetPageChain @ 0x14003D000
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140038C30 (MiCreateSharedZeroPages.c)
 *     MiResolvePrivateZeroFault @ 0x14003ADC0 (MiResolvePrivateZeroFault.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiGetClusterPage @ 0x1401F6144 (MiGetClusterPage.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14001D1C0 (MiChangePageAttributeBatch.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiSetPfnTbFlushStamp @ 0x1400E5330 (MiSetPfnTbFlushStamp.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiPerformFinalZeroing @ 0x1401F2C6C (MiPerformFinalZeroing.c)
 *     EtwTraceShouldYieldProcessor @ 0x140225FE8 (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiGetPageChain(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  unsigned __int64 *v8; // rsi
  __int64 v9; // r11
  struct _KPRCB *CurrentPrcb; // r10
  unsigned __int16 v11; // dx
  unsigned int *p_PageColor; // r10
  unsigned int v13; // r12d
  __int64 v14; // rbx
  __int64 v15; // r13
  unsigned int v16; // r9d
  unsigned int v17; // r15d
  __int64 v18; // rdi
  unsigned int v19; // ecx
  unsigned __int64 v20; // r14
  ULONG_PTR Page; // r14
  unsigned int v22; // ebx
  __int64 v23; // rbp
  __int64 v24; // r13
  unsigned int v25; // esi
  unsigned int v26; // ebx
  int v27; // ecx
  unsigned int v28; // r9d
  signed __int64 v29; // rdx
  signed __int64 v30; // r8
  signed __int64 v31; // rcx
  signed __int64 v32; // rdx
  __int64 v33; // r9
  signed __int64 v34; // r8
  signed __int64 v35; // rcx
  struct _KPRCB *v36; // rcx
  unsigned int DpcWatchdogCount; // ebp
  volatile int DpcRequestSummary; // r9d
  unsigned int DpcTimeCount; // esi
  int v40; // edx
  char v41; // cl
  unsigned int v42; // eax
  _KTHREAD *NextThread; // rax
  signed __int32 v45[8]; // [rsp+0h] [rbp-138h] BYREF
  unsigned int v46; // [rsp+20h] [rbp-118h]
  unsigned int v47; // [rsp+24h] [rbp-114h]
  int v48; // [rsp+28h] [rbp-110h]
  int v49; // [rsp+2Ch] [rbp-10Ch]
  __int64 v50; // [rsp+30h] [rbp-108h]
  unsigned __int64 v51; // [rsp+38h] [rbp-100h]
  __int64 v52; // [rsp+40h] [rbp-F8h]
  __int64 v53; // [rsp+48h] [rbp-F0h]
  unsigned int *v54; // [rsp+50h] [rbp-E8h]
  unsigned __int64 *v55; // [rsp+58h] [rbp-E0h]
  __int64 v56; // [rsp+60h] [rbp-D8h]
  _QWORD v57[16]; // [rsp+70h] [rbp-C8h] BYREF

  v8 = a7;
  v9 = a1;
  v56 = a2;
  v50 = a1;
  v55 = a7;
  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    LOWORD(a3) = ((_WORD)a3 - 1) << byte_140326A09;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    LOWORD(a3) = CurrentPrcb->NodeShiftedColor;
  }
  v11 = (1 << byte_140326A18) - 1;
  if ( a2 && (*(_BYTE *)(a2 + 184) & 7u) < 2 )
    p_PageColor = (unsigned int *)a2;
  else
    p_PageColor = &CurrentPrcb->PageColor;
  v54 = p_PageColor;
  if ( a4 == 31 )
  {
    v13 = 1;
  }
  else if ( a4 >> 3 == 3 && (a4 & 7) != 0 )
  {
    v13 = dword_1403A92D0;
  }
  else
  {
    v13 = 1;
    if ( a4 >> 3 == 1 )
      v13 = MiPlatformCacheAttributes;
  }
  v14 = 0LL;
  v15 = a6;
  v16 = 0;
  v17 = a5 & 0xFFFFFC3F;
  v52 = 0LL;
  v18 = 0LL;
  v46 = 0;
  v19 = 1;
  v47 = 1;
  v53 = 0xFFFFFFFFFLL;
  if ( a6 != -1 )
  {
    v17 = a5 & 0xFFFFEC3F | 0x1000;
    v19 = (unsigned int)(dword_140326A38 + 1) >> 4;
    if ( !v19 )
      v19 = 1;
    v47 = v19;
  }
  v20 = 0LL;
  v51 = 0LL;
  if ( !*a7 )
    goto LABEL_81;
  a3 = (unsigned __int16)a3;
  v48 = v11;
  v49 = (unsigned __int16)a3;
  while ( 1 )
  {
    ++*(_WORD *)p_PageColor;
    Page = -1LL;
    v22 = (unsigned __int16)(v11 & *(_WORD *)p_PageColor) | a3;
    if ( v15 == -1 )
      break;
    v23 = 15LL;
    if ( (unsigned int)dword_140326A38 < 0xFuLL )
      v23 = (unsigned int)dword_140326A38;
    v24 = v23 & v15;
    v25 = 0;
    v22 = v24 | v22 & 0xFFFFFFF0;
    if ( v19 )
    {
      while ( 1 )
      {
        Page = MiGetPage(v9, v22, v17);
        if ( Page != -1LL )
          break;
        v9 = v50;
        ++v25;
        v22 = v22 & ~dword_140326A38 | dword_140326A38 & (v22 + 16);
        if ( v25 >= v47 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      v17 &= ~0x1000u;
    }
    v15 = v23 & (v24 + 1);
    if ( Page == -1LL )
    {
      v9 = v50;
      break;
    }
LABEL_31:
    if ( v15 != -1 )
      v17 |= 0x1000u;
    v18 = 48 * Page - 0x58000000000LL;
    v26 = 1;
    v27 = *(unsigned __int8 *)(v18 + 34) >> 6;
    if ( v27 != v13 && ((unsigned __int8)((1 << v27) | (1 << v13)) & (unsigned __int8)byte_140326AA0) != 0 )
    {
      v28 = v46;
      v57[v46] = Page;
      v46 = v28 + 1;
      if ( v28 == 15 )
      {
        MiPerformFinalZeroing(v57, 16LL, v13);
        v46 = 0;
      }
      goto LABEL_46;
    }
    if ( *(_QWORD *)(v18 + 16) && (a5 & 0x40) != 0 )
    {
      MiZeroPhysicalPage(Page);
      *(_QWORD *)(v18 + 16) = 0LL;
      _InterlockedOr(v45, 0);
      MiSetPfnTbFlushStamp(48 * Page - 0x58000000000LL, (unsigned int)KiTbFlushTimeStamp, 0LL);
    }
    if ( *(unsigned __int8 *)(v18 + 34) >> 6 != v13 )
    {
      if ( v13 != 1
        || (*(_BYTE *)(v18 + 34) & 0xC0) != 0xC0
        && (v41 = *(_BYTE *)(v18 + 31) & 0xF,
            _InterlockedOr(v45, 0),
            v42 = ((_BYTE)KiTbFlushTimeStamp - v41) & 0xF,
            v42 <= 2)
        && ((v41 & 1) != 0 || v42 < 2) )
      {
        if ( *(_QWORD *)(v18 + 16) )
          MiZeroPhysicalPage(Page);
        *(_QWORD *)(v18 + 16) = v52;
        v52 = 48 * Page - 0x58000000000LL;
        goto LABEL_46;
      }
      MiChangePageAttribute(48 * Page - 0x58000000000LL, 1u, 4);
    }
    v29 = *(_QWORD *)(v18 + 24);
    v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v29 & 0xF0FFFFFFFFFFFFFFuLL, v29);
    if ( v29 != v30 )
    {
      do
      {
        v31 = v30;
        v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v30 & 0xF0FFFFFFFFFFFFFFuLL, v30);
      }
      while ( v31 != v30 );
    }
LABEL_46:
    v32 = *(_QWORD *)(v18 + 24);
    v33 = v53 & 0xFFFFFFFFFLL;
    v34 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v18 + 24),
            v53 & 0xFFFFFFFFFLL | v32 & 0xFFFFFFF000000000uLL,
            v32);
    if ( v32 != v34 )
    {
      do
      {
        v35 = v34;
        v34 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v18 + 24),
                v33 | v34 & 0xFFFFFFF000000000uLL,
                v34);
      }
      while ( v35 != v34 );
    }
    v53 = Page;
    v20 = v51 + 1;
    v51 = v20;
    if ( (v20 & 0xF) == 0 && (unsigned int)MiWorkingSetIsContended(v56) )
      goto LABEL_80;
    v36 = KeGetCurrentPrcb();
    DpcWatchdogCount = v36->DpcWatchdogCount;
    DpcRequestSummary = v36->DpcRequestSummary;
    DpcTimeCount = v36->DpcTimeCount;
    if ( (DpcRequestSummary & 1) == 0 )
    {
      v40 = 0;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v26 = 2;
        goto LABEL_74;
      }
      if ( v36->QuantumEnd )
      {
        v26 = 3;
        goto LABEL_74;
      }
      NextThread = v36->NextThread;
      if ( NextThread && NextThread != v36->CurrentThread )
      {
        v26 = 4;
        goto LABEL_74;
      }
LABEL_67:
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_77;
      if ( v40 )
      {
LABEL_69:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v26 = 5;
          goto LABEL_74;
        }
        if ( v36->CurrentThread != v36->IdleThread )
        {
          v26 = 6;
          goto LABEL_74;
        }
      }
      _disable();
      v36->DpcWatchdogCount = 0;
      v36->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler();
      _enable();
      v26 = 0;
      goto LABEL_74;
    }
    v40 = 1;
    if ( DpcTimeCount <= 7 )
      goto LABEL_67;
    if ( !v36->QuantumEnd )
      goto LABEL_69;
LABEL_74:
    if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      EtwTraceShouldYieldProcessor(v26, DpcWatchdogCount, DpcTimeCount);
    if ( v26 )
      goto LABEL_80;
LABEL_77:
    v19 = v47;
    v9 = v50;
    p_PageColor = v54;
    v11 = v48;
    a3 = v49;
    if ( v20 >= *v55 )
      goto LABEL_80;
  }
  Page = MiGetPage(v9, v22, v17);
  if ( Page != -1LL )
    goto LABEL_31;
  v20 = v51;
LABEL_80:
  v16 = v46;
  v14 = v52;
  v8 = v55;
LABEL_81:
  *v8 = v20;
  if ( v16 )
    MiPerformFinalZeroing(v57, v16, v13);
  if ( v14 )
    MiChangePageAttributeBatch(v14, v13, ZeroPte);
  return v18;
}
