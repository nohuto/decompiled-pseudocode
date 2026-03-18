/*
 * XREFs of xxxMetricsRecalc @ 0x1C01CEDD8
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C008E328 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01CE450 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     IsNonImmersiveBand @ 0x1C00AC030 (IsNonImmersiveBand.c)
 */

void __fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, unsigned int a6, unsigned int a7)
{
  struct tagBWL *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagBWL *v13; // rsi
  unsigned __int64 *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  BOOL v23; // eax
  _DWORD *Prop; // rax
  char v25; // r11
  unsigned int v26; // edx
  int v27; // r9d
  __int64 DesktopWindow; // rax
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  int v32; // r10d
  __int64 v33; // r11
  char v34; // al
  char v35; // cl
  int v36; // edx
  __int64 v37; // r9
  __int128 v38; // [rsp+50h] [rbp-30h]
  struct tagBWL *v39; // [rsp+60h] [rbp-20h]
  _QWORD v40[3]; // [rsp+68h] [rbp-18h] BYREF

  v9 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 16LL) + 96LL), (struct tagWND *)3, 0LL);
  v39 = v9;
  v13 = v9;
  if ( !v9 )
    return;
  v14 = (unsigned __int64 *)((char *)v9 + 32);
  v15 = (*((_QWORD *)v9 + 1) - (_QWORD)v9 - 32LL) >> 3;
  if ( (int)v15 <= 0 )
    goto LABEL_47;
  do
  {
    LOBYTE(v10) = 1;
    v16 = HMValidateHandleNoSecure(*v14, v10, v11, v12);
    v17 = v16;
    if ( !v16 )
      goto LABEL_45;
    if ( !IsNonImmersiveBand(v16) )
      goto LABEL_45;
    v10 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 376LL);
    if ( (*(_DWORD *)(v10 + 768) & 0x30) == 0x10 )
      goto LABEL_45;
    v19 = 0;
    v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v40;
    v40[1] = v17;
    ++*(_DWORD *)(v17 + 8);
    if ( (a1 & 4) != 0 && (*(_BYTE *)(v17 + 55) & 0x20) != 0 )
    {
LABEL_28:
      v19 = 1;
      DesktopWindow = GetDesktopWindow(v17);
      if ( v33 != DesktopWindow )
      {
        v29 -= *(_DWORD *)(v33 + 132);
        v32 -= *(_DWORD *)(v33 + 128);
        v30 -= *(_DWORD *)(v33 + 128);
        v31 -= *(_DWORD *)(v33 + 132);
      }
      xxxSetWindowPosAndBand((struct tagWND *)v17, 0, v32, v31, v30 - v32, v29 - v31, 316, 0);
      goto LABEL_31;
    }
    v20 = 12582912LL;
    LOBYTE(v20) = (*(_DWORD *)(v17 + 52) & 0xC00000) != 12582912;
    v23 = 0;
    if ( ((unsigned __int8)v20 & !_bittest((const signed __int32 *)(v17 + 52), 0x12u)) == 0 )
    {
      v21 = *(_QWORD *)(v17 + 16);
      v22 = *(_DWORD *)(v21 + 552) <= 0x9900u ? *(_DWORD *)(v21 + 568) : 0;
      if ( (v22 & 0x30000000) == 0 )
        v23 = 1;
    }
    if ( (a1 & 1) != 0 && ((*(_BYTE *)(v17 + 54) & 4) != 0 || v23) )
    {
      Prop = (_DWORD *)GetProp(v17, (unsigned __int16)atomCheckpointProp, 1LL);
      v26 = a7;
      if ( v25 )
        v26 = a6;
      v20 = a7;
      v27 = a2 + v26 * *(_DWORD *)(gpsi + 1900LL);
      if ( v25 )
        v20 = a6;
      v10 = (unsigned int)(a3 + v20 * *(_DWORD *)(gpsi + 1904LL));
      if ( Prop && (Prop[8] & 0x10) != 0 )
      {
        Prop[6] -= v27;
        Prop[7] -= v10;
      }
      if ( (*(_BYTE *)(v17 + 55) & 0x20) == 0 )
        goto LABEL_28;
      if ( Prop )
      {
        *Prop -= v27;
        Prop[2] += v27;
        Prop[1] -= v10;
        Prop[3] += v10;
      }
    }
LABEL_31:
    if ( (a1 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((struct tagWND *)v17, 128LL, 3LL, 0LL, 0, 0, 0LL, 1, 1);
      }
      v34 = *(_BYTE *)(v17 + 55);
      if ( (v34 & 0x20) == 0 && !v19 )
      {
        v35 = *(_BYTE *)(v17 + 40);
        v38 = *(_OWORD *)(v17 + 112);
        if ( (v35 & 1) != 0 )
          v36 = a5 + HIDWORD(v38);
        else
          v36 = HIDWORD(*(_OWORD *)(v17 + 112));
        if ( (v35 & 8) != 0
          && (v36 += a4, (v34 & 0x41) == 0x41)
          && (v37 = *(_QWORD *)(v17 + 88), (*(_WORD *)(v37 + 66) & 0x3FFF) == 0x2A7) )
        {
          xxxSetWindowPosAndBand(
            (struct tagWND *)v17,
            0,
            v38 - *(_DWORD *)(v37 + 112),
            DWORD1(v38) - *(_DWORD *)(v37 + 116) - a4,
            DWORD2(v38) - v38,
            v36 - DWORD1(v38),
            60,
            0);
        }
        else
        {
          xxxSetWindowPosAndBand((struct tagWND *)v17, 0, 0, 0, DWORD2(v38) - v38, v36 - DWORD1(v38), 318, 0);
        }
      }
    }
    ThreadUnlock1(v20, v10);
LABEL_45:
    LODWORD(v15) = v15 - 1;
    ++v14;
  }
  while ( (int)v15 > 0 );
  v13 = v39;
LABEL_47:
  FreeHwndList(v13);
}
