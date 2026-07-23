/*
 * XREFs of PopSaveHiberContext @ 0x1403A13B0
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x14015B770 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140021DFC (RtlNumberOfClearBits.c)
 *     RtlCopyBitMap @ 0x1400220C8 (RtlCopyBitMap.c)
 *     PopResetRangeEnum @ 0x1400F46F0 (PopResetRangeEnum.c)
 *     RtlSetAllBits @ 0x1400F9D20 (RtlSetAllBits.c)
 *     IoGetDumpHiberRanges @ 0x1401187F8 (IoGetDumpHiberRanges.c)
 *     IoNotifyDump @ 0x140119D7C (IoNotifyDump.c)
 *     IoInitializeDumpStack @ 0x140119DBC (IoInitializeDumpStack.c)
 *     IoDumpStackResumeCapable @ 0x140119DE8 (IoDumpStackResumeCapable.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     xHalTimerWatchdogStop @ 0x140148598 (xHalTimerWatchdogStop.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     HvlDisableEnlightenment @ 0x1401AE114 (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x1401B25C0 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401B261C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x1401B2900 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1401B2A10 (HvlPrepareForSecureHibernate.c)
 *     HvlNotifyShutdown @ 0x1401B3200 (HvlNotifyShutdown.c)
 *     KdPowerTransition @ 0x1401C2138 (KdPowerTransition.c)
 *     PopInternalAddToDumpFile @ 0x1401E66D8 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x1401E6AE0 (_PopInternalError.c)
 *     PopWriteSecurePages @ 0x1401ECDA8 (PopWriteSecurePages.c)
 *     DbgUnLoadImageSymbols @ 0x1401F7830 (DbgUnLoadImageSymbols.c)
 *     PopMarkComponentsBootPhase @ 0x14039F020 (PopMarkComponentsBootPhase.c)
 *     PopWriteHeaderPages @ 0x14039FEF0 (PopWriteHeaderPages.c)
 *     PopWriteHiberImage @ 0x1403A0D54 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x1403A105C (PopCompressHiberBlocks.c)
 *     PopCreateDumpMdl @ 0x1403A1C80 (PopCreateDumpMdl.c)
 *     xHalPciMultiStageResumeCapable @ 0x1403AAAAC (xHalPciMultiStageResumeCapable.c)
 *     PopWriteChecksumPages @ 0x1403B247C (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x1403B2510 (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x1403B2C74 (PopNotifyShutdownListener.c)
 *     AlpcMessageDeleteProcedure @ 0x1404E2C00 (AlpcMessageDeleteProcedure.c)
 */

__int64 __fastcall PopSaveHiberContext(ULONG_PTR BugCheckParameter3)
{
  __int64 Number; // rcx
  signed int v3; // edi
  __int64 v4; // rdi
  __int64 v5; // rsi
  POPLOCK v6; // rcx
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // r12
  unsigned int v10; // r8d
  _DWORD *v11; // rcx
  _DWORD *v12; // rdx
  _RTL_BITMAP *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  ULONG_PTR v17; // rbp
  unsigned __int64 v18; // rax
  _QWORD *v19; // r14
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rdi
  char *v22; // rsi
  _QWORD *v23; // rcx
  PVOID v24; // rax
  unsigned __int64 v25; // rbp
  unsigned int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rdx
  ULONG v29; // eax
  _QWORD *v30; // rcx
  int v31; // edx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned int i; // r8d
  __int64 v36; // rdx
  ULONG v37; // eax
  _QWORD *v38; // rcx
  int v39; // edx
  __int64 v40; // r8
  __int64 v41; // rax
  __int16 v42; // cx
  struct _KFLOATING_SAVE *v43; // rcx
  char v45; // [rsp+30h] [rbp-2B8h]
  __int64 v46; // [rsp+38h] [rbp-2B0h]
  __int128 v47; // [rsp+50h] [rbp-298h]
  __int128 v48; // [rsp+60h] [rbp-288h]
  __int128 v49; // [rsp+70h] [rbp-278h]
  _OWORD v50[5]; // [rsp+A0h] [rbp-248h] BYREF
  _OWORD v51[5]; // [rsp+F0h] [rbp-1F8h] BYREF
  char v52; // [rsp+140h] [rbp-1A8h] BYREF
  _BYTE v53[24]; // [rsp+160h] [rbp-188h] BYREF
  void *Src; // [rsp+178h] [rbp-170h]
  size_t Size; // [rsp+188h] [rbp-160h]
  int v56; // [rsp+2E0h] [rbp-8h]

  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number && (HvlpFlags & 4) != 0 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20)) )
    {
      do
        _mm_pause();
      while ( *(_DWORD *)(BugCheckParameter3 + 20) );
    }
    if ( PoResumeFromHibernate )
      return 1073742484;
    if ( _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24)) )
    {
      do
        _mm_pause();
      while ( *(_DWORD *)(BugCheckParameter3 + 24) );
    }
  }
  if ( (unsigned int)Number < *(_DWORD *)(BugCheckParameter3 + 264) )
  {
    if ( (_DWORD)Number )
    {
      while ( !*(_BYTE *)(BugCheckParameter3 + 5) )
        _mm_pause();
      v4 = Number << 7;
      PopCompressHiberBlocks(BugCheckParameter3, (Number << 7) + *(_QWORD *)(BugCheckParameter3 + 272), 1);
      if ( _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12)) )
      {
        do
          _mm_pause();
        while ( *(_DWORD *)(BugCheckParameter3 + 12) );
      }
      return (unsigned int)PopCompressHiberBlocks(BugCheckParameter3, v4 + *(_QWORD *)(BugCheckParameter3 + 272), 0);
    }
    else
    {
      PopWatchdogTimerCount = 0;
      _disable();
      if ( (v56 & 0x200) != 0 )
        PopInternalError(0xA1831uLL);
      v45 = IoDumpStackResumeCapable();
      if ( !v45 )
      {
        dword_1402DE3A8 |= 4u;
        byte_1402DE321 = 1;
      }
      if ( (unsigned int)PshedArePluginsPresent() )
      {
        dword_1402DE3A8 |= 8u;
        byte_1402DE321 = 1;
      }
      if ( !(unsigned __int8)off_1402D28C0() )
      {
        dword_1402DE3A8 |= 1u;
        byte_1402DE321 = 1;
      }
      v5 = *(_QWORD *)(BugCheckParameter3 + 200);
      *(_QWORD *)(BugCheckParameter3 + 160) = &v52;
      *(_QWORD *)(BugCheckParameter3 + 176) = &PoWakeState;
      *(_BYTE *)(BugCheckParameter3 + 2) = 1;
      v46 = v5;
      if ( (HvlpFlags & 1) != 0 )
      {
        HvlDisableEnlightenment(0);
        off_1402D2810(v6);
        if ( (HvlpFlags & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20));
          while ( *(_DWORD *)(BugCheckParameter3 + 20) != (_DWORD)KeNumberProcessors_0 )
            _mm_pause();
          *(_QWORD *)&v47 = qword_14031A968;
          *((_QWORD *)&v47 + 1) = qword_14031A908;
          *(_QWORD *)&v48 = qword_14031A910;
          *((_QWORD *)&v48 + 1) = qword_14031A900;
          *(_QWORD *)&v49 = qword_14031A920;
          *((_QWORD *)&v49 + 1) = qword_14031A918;
          if ( *(_BYTE *)(BugCheckParameter3 + 460) )
          {
            v51[0] = v47;
            v51[2] = v49;
            v51[1] = v48;
            v51[4] = xmmword_14031A958;
            v51[3] = xmmword_14031A948;
            v7 = HvlPrepareForSecureHibernate(v51);
          }
          else
          {
            v50[0] = v47;
            v50[2] = v49;
            v50[1] = v48;
            v50[4] = xmmword_14031A958;
            v50[3] = xmmword_14031A948;
            v7 = HvlPrepareForHibernate(
                   v50,
                   (_QWORD *)(v5 + 848),
                   (_QWORD *)(v5 + 856),
                   (_QWORD *)(v5 + 864),
                   (_QWORD *)(v5 + 872));
          }
          v8 = v7;
          if ( v7 < 0 )
          {
            PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
            KeBugCheckEx(0xA0u, 0xCuLL, v8, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
          }
          *(_DWORD *)(BugCheckParameter3 + 20) = 0;
          _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24));
          while ( *(_DWORD *)(BugCheckParameter3 + 24) != (_DWORD)KeNumberProcessors_0 )
            _mm_pause();
          *(_DWORD *)(BugCheckParameter3 + 20) = KeNumberProcessors_0;
          *(_DWORD *)(BugCheckParameter3 + 24) = 0;
        }
        if ( *(_BYTE *)(BugCheckParameter3 + 460) )
          HvlDiscardSecurePagesFromHibernation((PVOID)BugCheckParameter3);
        else
          HvlDiscardPagesFromHibernation((PVOID)BugCheckParameter3);
      }
      ++*(_DWORD *)v5;
      v9 = (_DWORD *)(BugCheckParameter3 + 48);
      v10 = 0;
      v11 = *(_DWORD **)(BugCheckParameter3 + 56);
      v12 = *(_DWORD **)(BugCheckParameter3 + 40);
      if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          ++v10;
          *v11++ |= *v12++;
        }
        while ( v10 < *v9 >> 5 );
      }
      if ( byte_1402DE321 )
      {
        v13 = (_RTL_BITMAP *)(BugCheckParameter3 + 32);
      }
      else
      {
        RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter3 + 48), (PRTL_BITMAP)(BugCheckParameter3 + 32), 0);
        v13 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
      }
      RtlSetAllBits(v13);
      v14 = *(_QWORD *)(BugCheckParameter3 + 168);
      *(_DWORD *)(BugCheckParameter3 + 184) = 8;
      IoGetDumpHiberRanges(v15, v14);
      if ( !byte_1402DE321 )
        IoNotifyDump(1);
      v16 = __rdtsc();
      v17 = (int)IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
      v18 = __rdtsc();
      qword_1402DE630 += (((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) - v16;
      if ( (v17 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
      {
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v17, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
      }
      PopMarkComponentsBootPhase((PVOID)BugCheckParameter3);
      v19 = *(_QWORD **)(BugCheckParameter3 + 64);
      PoHiberInProgress = 1;
      if ( v19 != (_QWORD *)(BugCheckParameter3 + 64) )
      {
        do
        {
          v20 = v19[4];
          v21 = v19[3];
          v22 = (char *)v19[5];
          v19 = (_QWORD *)*v19;
          for ( *(_QWORD *)(BugCheckParameter3 + 88) += v20 - v21;
                v21 < v20;
                v21 += (unsigned __int64)(unsigned int)Size >> 12 )
          {
            PopCreateDumpMdl(BugCheckParameter3, v53, v21, v20);
            memmove(v22, Src, (unsigned int)Size);
            v22 += (unsigned int)Size;
          }
        }
        while ( v19 != (_QWORD *)(BugCheckParameter3 + 64) );
        v5 = v46;
      }
      PopResetRangeEnum((_QWORD *)BugCheckParameter3);
      v23 = *(_QWORD **)(BugCheckParameter3 + 160);
      v24 = qword_1402DE2F8;
      *v23 = qword_1402DE2F8;
      v23[1] = v24;
      v23[2] = 0LL;
      v25 = __rdtsc();
      v3 = PopWriteHeaderPages(BugCheckParameter3, (_DWORD *)v5);
      if ( v3 >= 0 )
      {
        v26 = *(_DWORD *)(v5 + 80);
        if ( *(_BYTE *)(BugCheckParameter3 + 460) )
        {
          v27 = (unsigned int)PopHiberScratchPages;
          v28 = (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 256) + 2);
          *(_DWORD *)(BugCheckParameter3 + 184) = 3;
          *(_QWORD *)(v5 + 96) = v28 + ((unsigned __int64)(4 * v27 + 4095) >> 12);
          PopWriteSecurePages(BugCheckParameter3);
          qword_1402DE7A0 = *(unsigned int *)(BugCheckParameter3 + 260);
        }
        *(_DWORD *)(BugCheckParameter3 + 184) = 4;
        *(_QWORD *)(BugCheckParameter3 + 96) = v9;
        v29 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 48));
        v30 = qword_1402DE378;
        v31 = *(_DWORD *)(BugCheckParameter3 + 288);
        v32 = *(_QWORD *)(BugCheckParameter3 + 88) + v29;
        v33 = *(_QWORD *)(BugCheckParameter3 + 280);
        *(_QWORD *)qword_1402DE378 = 0LL;
        v30[1] = 0LL;
        v30[2] = 0LL;
        v30[3] = 0LL;
        v30[4] = 0LL;
        v30[5] = 0LL;
        v30[6] = 0LL;
        v30[7] = 0LL;
        *((_DWORD *)v30 + 6) = 0;
        *v30 = v33;
        *((_DWORD *)v30 + 2) = v31;
        v30[2] = v32 << 12;
        qword_1402DE7A8 = 0LL;
        qword_1402DE7B0 = 0LL;
        *(_DWORD *)(BugCheckParameter3 + 336) = 0;
        *(_QWORD *)(BugCheckParameter3 + 352) = 0LL;
        if ( v45 && *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 168) + 128LL) )
          *(_BYTE *)(BugCheckParameter3 + 400) = 1;
        v34 = *(unsigned int *)(BugCheckParameter3 + 260)
            + ((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
            + (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 256) + 2);
        *(_QWORD *)(v5 + 104) = v34;
        *(_QWORD *)(BugCheckParameter3 + 384) = v34 << 12;
        *(_BYTE *)(BugCheckParameter3 + 5) = 1;
        PopWriteHiberImage(BugCheckParameter3, 1);
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12));
        while ( *(_DWORD *)(BugCheckParameter3 + 12) != *(_DWORD *)(BugCheckParameter3 + 264) )
          _mm_pause();
        for ( i = 0;
              i < *(_DWORD *)(BugCheckParameter3 + 264);
              *(_QWORD *)(v36 + *(_QWORD *)(BugCheckParameter3 + 272) + 56) = 0LL )
        {
          v36 = i++;
          v36 <<= 7;
          qword_1402DE7A8 += *(_QWORD *)(v36 + *(_QWORD *)(BugCheckParameter3 + 272) + 56);
        }
        qword_1402DE7B8 = qword_1402DE7D8;
        qword_1402DE7C8 = (unsigned int)dword_1402DE7E0;
        qword_1402DE7D8 = 0LL;
        dword_1402DE7E0 = 0;
        *(_DWORD *)(BugCheckParameter3 + 184) = 5;
        *(_QWORD *)(BugCheckParameter3 + 96) = BugCheckParameter3 + 32;
        *(_QWORD *)(BugCheckParameter3 + 112) = 0LL;
        v37 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 32));
        v38 = qword_1402DE378;
        v39 = *(_DWORD *)(BugCheckParameter3 + 288);
        v40 = v37;
        v41 = *(_QWORD *)(BugCheckParameter3 + 280);
        *(_QWORD *)qword_1402DE378 = 0LL;
        v38[1] = 0LL;
        v38[2] = 0LL;
        v38[3] = 0LL;
        v38[4] = 0LL;
        v38[5] = 0LL;
        v38[6] = 0LL;
        v38[7] = 0LL;
        *((_DWORD *)v38 + 6) = 0;
        *v38 = v41;
        *((_DWORD *)v38 + 2) = v39;
        v38[2] = v40 << 12;
        *(_QWORD *)(v5 + 112) = (unsigned __int64)(*(_QWORD *)(BugCheckParameter3 + 384) + 4095LL) >> 12;
        *(_DWORD *)(BugCheckParameter3 + 12) = 0;
        *(_QWORD *)(BugCheckParameter3 + 352) = 0LL;
        PopWriteHiberImage(BugCheckParameter3, 0);
        *(_DWORD *)(BugCheckParameter3 + 184) = 7;
        PopWriteChecksumPages(BugCheckParameter3);
        *(_DWORD *)(BugCheckParameter3 + 184) = 6;
        PopWriteImageHeader(BugCheckParameter3, v5, v26, v25);
        v3 = *(_DWORD *)(BugCheckParameter3 + 188);
        if ( v3 >= 0 )
        {
          v42 = PopSimulate;
          if ( (PopSimulate & 0x8000) == 0 && dword_1402DE0A0 == dword_1402DE0A8 )
          {
            DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFELL, 0LL);
            HvlNotifyShutdown(1u);
            v42 = PopSimulate;
          }
          v3 = (v42 & 0x1000) != 0 ? 0xC00000C0 : 0;
        }
      }
      KdPowerTransition(4);
      if ( v3 >= 0 && v3 != 1073742484 && dword_1402DE0A0 == 5 )
        PopNotifyShutdownListener();
      off_1402D2938(v43);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
