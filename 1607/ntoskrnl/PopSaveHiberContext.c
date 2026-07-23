/*
 * XREFs of PopSaveHiberContext @ 0x1403CCB40
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140167180 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     RtlSetAllBits @ 0x140005744 (RtlSetAllBits.c)
 *     RtlNumberOfClearBits @ 0x140076ADC (RtlNumberOfClearBits.c)
 *     RtlCopyBitMap @ 0x140076AF8 (RtlCopyBitMap.c)
 *     PopResetRangeEnum @ 0x1400B3DD0 (PopResetRangeEnum.c)
 *     IoGetDumpHiberRanges @ 0x140113318 (IoGetDumpHiberRanges.c)
 *     IoDumpStackResumeCapable @ 0x14011388C (IoDumpStackResumeCapable.c)
 *     IoInitializeDumpStack @ 0x1401138B0 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x140113928 (IoNotifyDump.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlDisableEnlightenment @ 0x1401BA768 (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x1401BEDF0 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401BEE4C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x1401BF134 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1401BF244 (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x1401C2C40 (VslNotifyShutdown.c)
 *     KdPowerTransition @ 0x1401D1594 (KdPowerTransition.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x1401FF28C (_PopInternalError.c)
 *     PopWriteSecurePages @ 0x140205A20 (PopWriteSecurePages.c)
 *     DbgUnLoadImageSymbols @ 0x140211200 (DbgUnLoadImageSymbols.c)
 *     PopMarkComponentsBootPhase @ 0x1403CAFB4 (PopMarkComponentsBootPhase.c)
 *     PopWriteHeaderPages @ 0x1403CBC90 (PopWriteHeaderPages.c)
 *     PopCreateDumpMdl @ 0x1403CCEFC (PopCreateDumpMdl.c)
 *     PopWriteHiberImage @ 0x1403CCFC4 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x1403CD2CC (PopCompressHiberBlocks.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     xHalPciMultiStageResumeCapable @ 0x1403D6AE8 (xHalPciMultiStageResumeCapable.c)
 *     PopWriteChecksumPages @ 0x1403DF160 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x1403DF1F4 (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x1403DF960 (PopNotifyShutdownListener.c)
 *     CmpMarkLockTryAcquired @ 0x140528708 (CmpMarkLockTryAcquired.c)
 */

__int64 __fastcall PopSaveHiberContext(char *Address, __int64 a2, __int64 a3)
{
  __int64 Number; // rdi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // r13
  _RTL_BITMAP *v8; // rsi
  unsigned int v9; // r8d
  _DWORD *v10; // rcx
  _DWORD *v11; // rdx
  _RTL_BITMAP *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  ULONG_PTR v16; // rbp
  unsigned __int64 v17; // rax
  char *v18; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbp
  char *v21; // rsi
  _QWORD *v22; // rcx
  PVOID v23; // rax
  signed int v24; // edi
  unsigned int v25; // r12d
  ULONG v26; // eax
  _DWORD *v27; // rsi
  int v28; // ebp
  __int64 v29; // rdi
  __int64 v30; // r14
  unsigned __int64 v31; // rcx
  POPLOCK v32; // rcx
  int v33; // eax
  int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int i; // r8d
  __int64 v38; // rdx
  ULONG v39; // eax
  _DWORD *v40; // rsi
  int v41; // ebp
  __int64 v42; // rdi
  unsigned __int64 v43; // r14
  __int16 v44; // cx
  char v46; // [rsp+30h] [rbp-2A8h]
  unsigned __int64 v47; // [rsp+38h] [rbp-2A0h]
  __int128 v48; // [rsp+40h] [rbp-298h]
  __int128 v49; // [rsp+50h] [rbp-288h]
  __int128 v50; // [rsp+60h] [rbp-278h]
  _OWORD v51[5]; // [rsp+90h] [rbp-248h] BYREF
  _OWORD v52[5]; // [rsp+E0h] [rbp-1F8h] BYREF
  char v53; // [rsp+130h] [rbp-1A8h] BYREF
  _BYTE v54[24]; // [rsp+150h] [rbp-188h] BYREF
  void *Src; // [rsp+168h] [rbp-170h]
  size_t Size; // [rsp+178h] [rbp-160h]
  int v57; // [rsp+2D0h] [rbp-8h]

  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number )
  {
    if ( (HvlpFlags & 2) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)Address + 5);
      while ( *((_DWORD *)Address + 5) )
        _mm_pause();
      if ( PoResumeFromHibernate )
        return 1073742484;
      _InterlockedIncrement((volatile signed __int32 *)Address + 6);
      while ( *((_DWORD *)Address + 6) )
        _mm_pause();
    }
  }
  else
  {
    PopCheckpointSystemSleep(19LL);
  }
  if ( (unsigned int)Number >= *((_DWORD *)Address + 66) )
  {
    return 0;
  }
  else if ( (_DWORD)Number )
  {
    while ( !Address[4] )
      _mm_pause();
    LOBYTE(a3) = 1;
    v5 = Number << 7;
    PopCompressHiberBlocks(Address, v5 + *((_QWORD *)Address + 34), a3);
    _InterlockedIncrement((volatile signed __int32 *)Address + 3);
    while ( *((_DWORD *)Address + 3) )
      _mm_pause();
    return (unsigned int)PopCompressHiberBlocks(Address, v5 + *((_QWORD *)Address + 34), 0LL);
  }
  else
  {
    PopWatchdogTimerCount = 0;
    _disable();
    if ( (v57 & 0x200) != 0 )
      PopInternalError(0xA1791uLL);
    v46 = IoDumpStackResumeCapable();
    if ( !v46 )
    {
      dword_140303588 |= 4u;
      byte_140303501 = 1;
    }
    if ( (unsigned int)PshedArePluginsPresent() )
    {
      dword_140303588 |= 8u;
      byte_140303501 = 1;
    }
    if ( !(unsigned __int8)off_1402F2560() )
    {
      dword_140303588 |= 1u;
      byte_140303501 = 1;
    }
    v6 = HvlHypervisorConnected == 0;
    v7 = *((_QWORD *)Address + 25);
    *((_QWORD *)Address + 20) = &v53;
    *((_QWORD *)Address + 22) = &PoWakeState;
    Address[2] = 1;
    if ( !v6 )
    {
      HvlDisableEnlightenment(0);
      off_1402F24B0(v32);
      if ( (HvlpFlags & 2) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)Address + 5);
        while ( *((_DWORD *)Address + 5) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *(_QWORD *)&v48 = qword_14033E788;
        *((_QWORD *)&v48 + 1) = qword_14033E728;
        *(_QWORD *)&v49 = qword_14033E730;
        *((_QWORD *)&v49 + 1) = qword_14033E720;
        *(_QWORD *)&v50 = qword_14033E740;
        *((_QWORD *)&v50 + 1) = qword_14033E738;
        if ( Address[460] )
        {
          v51[0] = v48;
          v51[2] = v50;
          v51[1] = v49;
          v51[4] = xmmword_14033E778;
          v51[3] = xmmword_14033E768;
          v33 = HvlPrepareForSecureHibernate(v51);
        }
        else
        {
          v52[0] = v48;
          v52[2] = v50;
          v52[1] = v49;
          v52[4] = xmmword_14033E778;
          v52[3] = xmmword_14033E768;
          v33 = HvlPrepareForHibernate(
                  v52,
                  (_QWORD *)(v7 + 856),
                  (_QWORD *)(v7 + 864),
                  (_QWORD *)(v7 + 872),
                  (_QWORD *)(v7 + 880));
        }
        v34 = v33;
        if ( v33 < 0 )
        {
          PopInternalAddToDumpFile(*((_QWORD *)Address + 21), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v34, *((_QWORD *)Address + 21), 0LL);
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
    ++*(_DWORD *)v7;
    v8 = (_RTL_BITMAP *)(Address + 48);
    v9 = 0;
    v10 = (_DWORD *)*((_QWORD *)Address + 7);
    v11 = (_DWORD *)*((_QWORD *)Address + 5);
    if ( (*((_DWORD *)Address + 12) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        ++v9;
        *v10++ |= *v11++;
      }
      while ( v9 < v8->SizeOfBitMap >> 5 );
    }
    if ( byte_140303501 )
    {
      v12 = (_RTL_BITMAP *)(Address + 32);
    }
    else
    {
      RtlCopyBitMap((PRTL_BITMAP)Address + 3, (PRTL_BITMAP)Address + 2, 0);
      v12 = (_RTL_BITMAP *)(Address + 48);
    }
    RtlSetAllBits(v12);
    v13 = *((_QWORD *)Address + 21);
    *((_DWORD *)Address + 46) = 8;
    IoGetDumpHiberRanges(v14, v13);
    if ( !byte_140303501 )
      IoNotifyDump(1);
    v15 = __rdtsc();
    v16 = (int)IoInitializeDumpStack(*((_QWORD *)Address + 21));
    v17 = __rdtsc();
    qword_140303808 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v15;
    if ( (v16 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
    {
      PopCheckpointSystemSleep(20LL);
      PopInternalAddToDumpFile(*((_QWORD *)Address + 21), 0x178u, 0LL);
      KeBugCheckEx(0xA0u, 0xCuLL, v16, *((_QWORD *)Address + 21), 0LL);
    }
    PopMarkComponentsBootPhase((unsigned int *)Address);
    v18 = (char *)*((_QWORD *)Address + 8);
    PoHiberInProgress = 1;
    if ( v18 != Address + 64 )
    {
      do
      {
        v19 = *((_QWORD *)v18 + 4);
        v20 = *((_QWORD *)v18 + 3);
        v21 = (char *)*((_QWORD *)v18 + 5);
        v18 = *(char **)v18;
        for ( *((_QWORD *)Address + 11) += v19 - v20; v20 < v19; v20 += (unsigned __int64)(unsigned int)Size >> 12 )
        {
          PopCreateDumpMdl(Address, v54, v20, v19);
          memmove(v21, Src, (unsigned int)Size);
          v21 += (unsigned int)Size;
        }
      }
      while ( v18 != Address + 64 );
      v8 = (_RTL_BITMAP *)(Address + 48);
    }
    PopResetRangeEnum(Address);
    v22 = (_QWORD *)*((_QWORD *)Address + 20);
    v23 = qword_1403034D8;
    *v22 = qword_1403034D8;
    v22[1] = v23;
    v22[2] = 0LL;
    v47 = __rdtsc();
    v24 = PopWriteHeaderPages((__int64)Address, (_DWORD *)v7);
    if ( v24 >= 0 )
    {
      v25 = *(_DWORD *)(v7 + 80);
      if ( Address[460] )
      {
        v35 = (unsigned int)PopHiberScratchPages;
        v36 = (unsigned int)(*((_DWORD *)Address + 64) + 2);
        *((_DWORD *)Address + 46) = 3;
        *(_QWORD *)(v7 + 96) = v36 + ((unsigned __int64)(4 * v35 + 4095) >> 12);
        PopWriteSecurePages((ULONG_PTR)Address);
        qword_140303980 = *((unsigned int *)Address + 65);
      }
      *((_DWORD *)Address + 46) = 4;
      *((_QWORD *)Address + 12) = v8;
      v26 = RtlNumberOfClearBits(v8);
      v27 = qword_140303558;
      v28 = *((_DWORD *)Address + 72);
      v29 = *((_QWORD *)Address + 35);
      v30 = (v26 + *((_QWORD *)Address + 11)) << 12;
      memset(qword_140303558, 0, 0x40uLL);
      v27[6] = 0;
      *(_QWORD *)v27 = v29;
      v27[2] = v28;
      *((_QWORD *)v27 + 2) = v30;
      qword_140303988 = 0LL;
      qword_140303990 = 0LL;
      *((_DWORD *)Address + 84) = 0;
      *((_QWORD *)Address + 44) = 0LL;
      if ( v46 && *(_QWORD *)(*((_QWORD *)Address + 21) + 128LL) )
        Address[400] = 1;
      v31 = *((unsigned int *)Address + 65)
          + ((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
          + (unsigned int)(*((_DWORD *)Address + 64) + 2);
      *(_QWORD *)(v7 + 104) = v31;
      *((_QWORD *)Address + 48) = v31 << 12;
      Address[4] = 1;
      PopWriteHiberImage((ULONG_PTR)Address);
      _InterlockedIncrement((volatile signed __int32 *)Address + 3);
      while ( *((_DWORD *)Address + 3) != *((_DWORD *)Address + 66) )
        _mm_pause();
      for ( i = 0; i < *((_DWORD *)Address + 66); *(_QWORD *)(v38 + *((_QWORD *)Address + 34) + 56) = 0LL )
      {
        v38 = i++;
        v38 <<= 7;
        qword_140303988 += *(_QWORD *)(v38 + *((_QWORD *)Address + 34) + 56);
      }
      qword_140303998 = qword_1403039B8;
      qword_1403039A8 = (unsigned int)dword_1403039C0;
      qword_1403039B8 = 0LL;
      dword_1403039C0 = 0;
      *((_DWORD *)Address + 46) = 5;
      *((_QWORD *)Address + 12) = Address + 32;
      *((_QWORD *)Address + 14) = 0LL;
      v39 = RtlNumberOfClearBits((PRTL_BITMAP)Address + 2);
      v40 = qword_140303558;
      v41 = *((_DWORD *)Address + 72);
      v42 = *((_QWORD *)Address + 35);
      v43 = (unsigned __int64)v39 << 12;
      memset(qword_140303558, 0, 0x40uLL);
      v40[6] = 0;
      *(_QWORD *)v40 = v42;
      v40[2] = v41;
      *((_QWORD *)v40 + 2) = v43;
      *(_QWORD *)(v7 + 112) = (unsigned __int64)(*((_QWORD *)Address + 48) + 4095LL) >> 12;
      *((_DWORD *)Address + 3) = 0;
      *((_QWORD *)Address + 44) = 0LL;
      PopWriteHiberImage((ULONG_PTR)Address);
      *((_DWORD *)Address + 46) = 7;
      PopWriteChecksumPages(Address);
      *((_DWORD *)Address + 46) = 6;
      PopWriteImageHeader(Address, v7, v25, v47);
      v24 = *((_DWORD *)Address + 47);
      if ( v24 >= 0 )
      {
        v44 = PopSimulate;
        if ( (PopSimulate & 0x8000) == 0 && dword_1403033C0 == dword_1403033C8 )
        {
          DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFELL, 0LL);
          VslNotifyShutdown(1u);
          v44 = PopSimulate;
        }
        v24 = (v44 & 0x1000) != 0 ? 0xC00000C0 : 0;
      }
    }
    KdPowerTransition(4);
    if ( v24 >= 0 && v24 != 1073742484 && dword_1403033C0 == 5 )
      PopNotifyShutdownListener();
    PopCheckpointSystemSleep(24LL);
    off_1402F25D8();
  }
  return (unsigned int)v24;
}
