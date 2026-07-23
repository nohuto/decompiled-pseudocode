/*
 * XREFs of PopSaveHiberContext @ 0x1403F4080
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x14018B250 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     RtlSetAllBits @ 0x1400D8FF8 (RtlSetAllBits.c)
 *     RtlNumberOfClearBits @ 0x1400EF684 (RtlNumberOfClearBits.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     RtlCopyBitMap @ 0x1400EF940 (RtlCopyBitMap.c)
 *     PopResetRangeEnum @ 0x140131CD0 (PopResetRangeEnum.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     IoGetDumpHiberRanges @ 0x14014D2F4 (IoGetDumpHiberRanges.c)
 *     IoNotifyDump @ 0x14014EBE0 (IoNotifyDump.c)
 *     PopGetRangeCount @ 0x14014EC20 (PopGetRangeCount.c)
 *     IoInitializeDumpStack @ 0x14014ECB8 (IoInitializeDumpStack.c)
 *     IoDumpStackResumeCapable @ 0x14014ECE4 (IoDumpStackResumeCapable.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     xHalTimerWatchdogStop @ 0x14017DF20 (xHalTimerWatchdogStop.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     HvlDisableEnlightenment @ 0x1401E4A64 (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x1401ECA70 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401ECACC (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x1401ECF1C (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1401ED27C (HvlPrepareForSecureHibernate.c)
 *     HvlNotifyShutdown @ 0x1401EDE2C (HvlNotifyShutdown.c)
 *     KdPowerTransition @ 0x1401FDE40 (KdPowerTransition.c)
 *     PopInternalAddToDumpFile @ 0x140233810 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x140233CCC (_PopInternalError.c)
 *     PopWriteSecurePages @ 0x14023B064 (PopWriteSecurePages.c)
 *     DbgUnLoadImageSymbols @ 0x140246660 (DbgUnLoadImageSymbols.c)
 *     PopMarkComponentsBootPhase @ 0x1403F1A14 (PopMarkComponentsBootPhase.c)
 *     PopWriteHeaderPages @ 0x1403F2B2C (PopWriteHeaderPages.c)
 *     PopWriteHiberImage @ 0x1403F3A20 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x1403F3D28 (PopCompressHiberBlocks.c)
 *     PopCreateDumpMdl @ 0x1403F4A20 (PopCreateDumpMdl.c)
 *     xHalPciMultiStageResumeCapable @ 0x1403FB1D0 (xHalPciMultiStageResumeCapable.c)
 *     PopWriteChecksumPages @ 0x1404036B8 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x14040374C (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x140403F14 (PopNotifyShutdownListener.c)
 *     AlpcMessageDeleteProcedure @ 0x14055E308 (AlpcMessageDeleteProcedure.c)
 */

__int64 __fastcall PopSaveHiberContext(char *Address)
{
  __int64 Number; // rcx
  signed int v3; // edi
  __int64 v4; // rdi
  __int64 v5; // r13
  POPLOCK v6; // rcx
  int v7; // eax
  int v8; // edi
  _RTL_BITMAP *v9; // r12
  unsigned int v10; // r8d
  _DWORD *v11; // rcx
  _DWORD *v12; // rdx
  ULONG v13; // eax
  _RTL_BITMAP *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  ULONG_PTR v18; // rsi
  unsigned __int64 v19; // rax
  ULONG v20; // edi
  ULONG v21; // eax
  int RangeCount; // eax
  char *v23; // r14
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rdi
  char *v26; // rsi
  _QWORD *v27; // rcx
  PVOID v28; // rax
  unsigned __int64 v29; // rsi
  unsigned int v30; // edi
  __int64 v31; // rax
  __int64 v32; // rdx
  ULONG v33; // eax
  _QWORD *v34; // rcx
  int v35; // edx
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned int i; // r8d
  __int64 v40; // rdx
  ULONG v41; // eax
  _QWORD *v42; // rcx
  int v43; // edx
  __int64 v44; // r8
  __int64 v45; // rax
  __int16 v46; // cx
  struct _KFLOATING_SAVE *v47; // rcx
  char v49; // [rsp+30h] [rbp-2B8h]
  __int128 v50; // [rsp+40h] [rbp-2A8h]
  __int128 v51; // [rsp+50h] [rbp-298h]
  __int128 v52; // [rsp+60h] [rbp-288h]
  _OWORD v53[5]; // [rsp+A0h] [rbp-248h] BYREF
  _OWORD v54[5]; // [rsp+F0h] [rbp-1F8h] BYREF
  char v55; // [rsp+140h] [rbp-1A8h] BYREF
  _BYTE v56[24]; // [rsp+160h] [rbp-188h] BYREF
  void *Src; // [rsp+178h] [rbp-170h]
  size_t Size; // [rsp+188h] [rbp-160h]
  int v59; // [rsp+2E0h] [rbp-8h]

  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number && (HvlpFlags & 4) != 0 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)Address + 5) )
    {
      do
        _mm_pause();
      while ( *((_DWORD *)Address + 5) );
    }
    if ( PoResumeFromHibernate )
      return 1073742484;
    if ( _InterlockedIncrement((volatile signed __int32 *)Address + 6) )
    {
      do
        _mm_pause();
      while ( *((_DWORD *)Address + 6) );
    }
  }
  if ( (unsigned int)Number < *((_DWORD *)Address + 66) )
  {
    if ( (_DWORD)Number )
    {
      while ( !Address[5] )
        _mm_pause();
      v4 = Number << 7;
      PopCompressHiberBlocks((__int64)Address, (Number << 7) + *((_QWORD *)Address + 34), 1);
      if ( _InterlockedIncrement((volatile signed __int32 *)Address + 3) )
      {
        do
          _mm_pause();
        while ( *((_DWORD *)Address + 3) );
      }
      return (unsigned int)PopCompressHiberBlocks((__int64)Address, v4 + *((_QWORD *)Address + 34), 0);
    }
    else
    {
      PopWatchdogTimerCount = 0;
      _disable();
      if ( (v59 & 0x200) != 0 )
        PopInternalError(0xA1792uLL);
      v49 = IoDumpStackResumeCapable();
      if ( !v49 )
      {
        dword_14032E968 |= 4u;
        byte_14032E8E1 = 1;
      }
      if ( (unsigned int)PshedArePluginsPresent() )
      {
        dword_14032E968 |= 8u;
        byte_14032E8E1 = 1;
      }
      if ( !(unsigned __int8)off_140321A10() )
      {
        dword_14032E968 |= 1u;
        byte_14032E8E1 = 1;
      }
      v5 = *((_QWORD *)Address + 25);
      *((_QWORD *)Address + 20) = &v55;
      *((_QWORD *)Address + 22) = &PoWakeState;
      Address[2] = 1;
      if ( (HvlpFlags & 1) != 0 )
      {
        HvlDisableEnlightenment(0);
        off_140321960(v6);
        if ( (HvlpFlags & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)Address + 5);
          while ( *((_DWORD *)Address + 5) != (_DWORD)KeNumberProcessors_0 )
            _mm_pause();
          *(_QWORD *)&v50 = qword_14036AD58;
          *((_QWORD *)&v50 + 1) = qword_14036ACF8;
          *(_QWORD *)&v51 = qword_14036AD00;
          *((_QWORD *)&v51 + 1) = qword_14036ACF0;
          *(_QWORD *)&v52 = qword_14036AD10;
          *((_QWORD *)&v52 + 1) = qword_14036AD08;
          if ( Address[460] )
          {
            v53[0] = v50;
            v53[2] = v52;
            v53[1] = v51;
            v53[4] = xmmword_14036AD48;
            v53[3] = xmmword_14036AD38;
            v7 = HvlPrepareForSecureHibernate(v53);
          }
          else
          {
            v54[0] = v50;
            v54[2] = v52;
            v54[1] = v51;
            v54[4] = xmmword_14036AD48;
            v54[3] = xmmword_14036AD38;
            v7 = HvlPrepareForHibernate(
                   v54,
                   (_QWORD *)(v5 + 848),
                   (_QWORD *)(v5 + 856),
                   (_QWORD *)(v5 + 864),
                   (_QWORD *)(v5 + 872));
          }
          v8 = v7;
          if ( v7 < 0 )
          {
            if ( (PoDebug & 0x80u) != 0 )
              DbgPrint("PopSave: Hv PrepareForHibernate hypercall failed %08x\n", v7);
            PopInternalAddToDumpFile(*((_QWORD *)Address + 21), 0x178u, 0LL);
            KeBugCheckEx(0xA0u, 0xCuLL, v8, *((_QWORD *)Address + 21), 0LL);
          }
          *((_DWORD *)Address + 5) = 0;
          _InterlockedIncrement((volatile signed __int32 *)Address + 6);
          while ( *((_DWORD *)Address + 6) != (_DWORD)KeNumberProcessors_0 )
            _mm_pause();
          *((_DWORD *)Address + 5) = KeNumberProcessors_0;
          *((_DWORD *)Address + 6) = 0;
        }
        if ( Address[460] )
          HvlDiscardSecurePagesFromHibernation(Address);
        else
          HvlDiscardPagesFromHibernation(Address);
      }
      ++*(_DWORD *)v5;
      v9 = (_RTL_BITMAP *)(Address + 48);
      v10 = 0;
      v11 = (_DWORD *)*((_QWORD *)Address + 7);
      v12 = (_DWORD *)*((_QWORD *)Address + 5);
      if ( (*((_DWORD *)Address + 12) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          ++v10;
          *v11++ |= *v12++;
        }
        while ( v10 < v9->SizeOfBitMap >> 5 );
      }
      if ( (PoDebug & 0x81) != 0 )
      {
        v13 = RtlNumberOfSetBits((PRTL_BITMAP)Address + 2);
        DbgPrint("Inventoried: %d pages not required to hibernate\n", v13);
      }
      if ( byte_14032E8E1 )
      {
        v14 = (_RTL_BITMAP *)(Address + 32);
      }
      else
      {
        RtlCopyBitMap((PRTL_BITMAP)Address + 3, (PRTL_BITMAP)Address + 2, 0);
        v14 = (_RTL_BITMAP *)(Address + 48);
      }
      RtlSetAllBits(v14);
      v15 = *((_QWORD *)Address + 21);
      *((_DWORD *)Address + 46) = 8;
      IoGetDumpHiberRanges(v16, v15);
      if ( !byte_14032E8E1 )
        IoNotifyDump(1);
      v17 = __rdtsc();
      v18 = (int)IoInitializeDumpStack(*((_QWORD *)Address + 21));
      v19 = __rdtsc();
      qword_14032EBF0 += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v17;
      if ( (v18 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
      {
        if ( (PoDebug & 0x80u) != 0 )
          DbgPrint("PopSave: dump driver initialization failed %08x\n", v18);
        PopInternalAddToDumpFile(*((_QWORD *)Address + 21), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v18, *((_QWORD *)Address + 21), 0LL);
      }
      PopMarkComponentsBootPhase(Address);
      if ( (PoDebug & 0x81) != 0 )
      {
        v20 = RtlNumberOfClearBits((PRTL_BITMAP)Address + 2);
        v21 = RtlNumberOfClearBits((PRTL_BITMAP)Address + 3);
        DbgPrint("             %d pages to hibernate\n", v21 + v20);
      }
      if ( (PoDebug & 0x81) != 0 )
      {
        RangeCount = PopGetRangeCount((_DWORD *)qword_14032E680);
        DbgPrint("             %d ranges of consecutive physical pages\n", RangeCount);
      }
      v23 = (char *)*((_QWORD *)Address + 8);
      PoHiberInProgress = 1;
      if ( v23 != Address + 64 )
      {
        do
        {
          v24 = *((_QWORD *)v23 + 4);
          v25 = *((_QWORD *)v23 + 3);
          v26 = (char *)*((_QWORD *)v23 + 5);
          v23 = *(char **)v23;
          for ( *((_QWORD *)Address + 11) += v24 - v25; v25 < v24; v25 += (unsigned __int64)(unsigned int)Size >> 12 )
          {
            PopCreateDumpMdl(Address, v56, v25, v24);
            memmove(v26, Src, (unsigned int)Size);
            v26 += (unsigned int)Size;
          }
        }
        while ( v23 != Address + 64 );
        v9 = (_RTL_BITMAP *)(Address + 48);
      }
      PopResetRangeEnum(Address);
      if ( (PoDebug & 0x80u) != 0 )
        DbgPrint("PopSave: NoFree pages %08x\n", *(_DWORD *)(v5 + 72));
      if ( (PoDebug & 0x80u) != 0 )
        DbgPrint("PopSave: HiberPte %08p for %08x Ptes\n", (const void *)xmmword_14032E8C8, *(_DWORD *)(v5 + 60));
      v27 = (_QWORD *)*((_QWORD *)Address + 20);
      v28 = qword_14032E8B8;
      *v27 = qword_14032E8B8;
      v27[1] = v28;
      v27[2] = 0LL;
      v29 = __rdtsc();
      v3 = PopWriteHeaderPages((__int64)Address, (_DWORD *)v5);
      if ( v3 >= 0 )
      {
        v30 = *(_DWORD *)(v5 + 80);
        if ( Address[460] )
        {
          v31 = (unsigned int)PopHiberScratchPages;
          v32 = (unsigned int)(*((_DWORD *)Address + 64) + 2);
          *((_DWORD *)Address + 46) = 3;
          *(_QWORD *)(v5 + 96) = v32 + ((unsigned __int64)(4 * v31 + 4095) >> 12);
          PopWriteSecurePages((ULONG_PTR)Address);
          qword_14032ED60 = *((unsigned int *)Address + 65);
        }
        *((_DWORD *)Address + 46) = 4;
        *((_QWORD *)Address + 12) = v9;
        v33 = RtlNumberOfClearBits(v9);
        v34 = qword_14032E938;
        v35 = *((_DWORD *)Address + 72);
        v36 = *((_QWORD *)Address + 11) + v33;
        v37 = *((_QWORD *)Address + 35);
        *(_QWORD *)qword_14032E938 = 0LL;
        v34[1] = 0LL;
        v34[2] = 0LL;
        v34[3] = 0LL;
        v34[4] = 0LL;
        v34[5] = 0LL;
        v34[6] = 0LL;
        v34[7] = 0LL;
        *((_DWORD *)v34 + 6) = 0;
        *v34 = v37;
        *((_DWORD *)v34 + 2) = v35;
        v34[2] = v36 << 12;
        qword_14032ED68 = 0LL;
        qword_14032ED70 = 0LL;
        *((_DWORD *)Address + 84) = 0;
        *((_QWORD *)Address + 44) = 0LL;
        if ( v49 && *(_QWORD *)(*((_QWORD *)Address + 21) + 128LL) )
          Address[400] = 1;
        v38 = *((unsigned int *)Address + 65)
            + ((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
            + (unsigned int)(*((_DWORD *)Address + 64) + 2);
        *(_QWORD *)(v5 + 104) = v38;
        *((_QWORD *)Address + 48) = v38 << 12;
        Address[5] = 1;
        PopWriteHiberImage((ULONG_PTR)Address, 1);
        _InterlockedIncrement((volatile signed __int32 *)Address + 3);
        while ( *((_DWORD *)Address + 3) != *((_DWORD *)Address + 66) )
          _mm_pause();
        for ( i = 0; i < *((_DWORD *)Address + 66); *(_QWORD *)(*((_QWORD *)Address + 34) + v40 + 56) = 0LL )
        {
          v40 = i++;
          v40 <<= 7;
          qword_14032ED68 += *(_QWORD *)(*((_QWORD *)Address + 34) + v40 + 56);
        }
        qword_14032ED78 = qword_14032ED98;
        qword_14032ED88 = (unsigned int)dword_14032EDA0;
        qword_14032ED98 = 0LL;
        dword_14032EDA0 = 0;
        *((_DWORD *)Address + 46) = 5;
        *((_QWORD *)Address + 12) = Address + 32;
        *((_QWORD *)Address + 14) = 0LL;
        v41 = RtlNumberOfClearBits((PRTL_BITMAP)Address + 2);
        v42 = qword_14032E938;
        v43 = *((_DWORD *)Address + 72);
        v44 = v41;
        v45 = *((_QWORD *)Address + 35);
        *(_QWORD *)qword_14032E938 = 0LL;
        v42[1] = 0LL;
        v42[2] = 0LL;
        v42[3] = 0LL;
        v42[4] = 0LL;
        v42[5] = 0LL;
        v42[6] = 0LL;
        v42[7] = 0LL;
        *((_DWORD *)v42 + 6) = 0;
        *v42 = v45;
        *((_DWORD *)v42 + 2) = v43;
        v42[2] = v44 << 12;
        *(_QWORD *)(v5 + 112) = (unsigned __int64)(*((_QWORD *)Address + 48) + 4095LL) >> 12;
        *((_DWORD *)Address + 3) = 0;
        *((_QWORD *)Address + 44) = 0LL;
        PopWriteHiberImage((ULONG_PTR)Address, 0);
        *((_DWORD *)Address + 46) = 7;
        PopWriteChecksumPages(Address);
        *((_DWORD *)Address + 46) = 6;
        PopWriteImageHeader(Address, v5, v30, v29);
        v3 = *((_DWORD *)Address + 47);
        if ( v3 >= 0 )
        {
          v46 = PopSimulate;
          if ( (PopSimulate & 0x8000) == 0 && dword_14032E660 == dword_14032E668 )
          {
            DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFELL, 0LL);
            HvlNotifyShutdown(1u);
            v46 = PopSimulate;
          }
          v3 = (v46 & 0x1000) != 0 ? 0xC00000C0 : 0;
        }
      }
      KdPowerTransition(4);
      if ( v3 >= 0 && v3 != 1073742484 && dword_14032E660 == 5 )
        PopNotifyShutdownListener();
      off_140321A88(v47);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
