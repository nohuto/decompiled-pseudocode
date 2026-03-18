/*
 * XREFs of xxxMetricsRecalc @ 0x1C01D61DC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C0133044 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D5A6C (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 */

void __fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, unsigned int a6, unsigned int a7)
{
  struct tagBWL *v9; // rax
  struct tagBWL *v10; // rsi
  unsigned __int64 *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  BOOL v21; // eax
  _DWORD *Prop; // rax
  char v23; // r11
  unsigned int v24; // edx
  int v25; // r9d
  __int64 DesktopWindow; // rax
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v30; // r10d
  __int64 v31; // r11
  char v32; // al
  char v33; // cl
  int v34; // edx
  __int64 v35; // r9
  __int128 v36; // [rsp+50h] [rbp-30h]
  struct tagBWL *v37; // [rsp+60h] [rbp-20h]
  _QWORD v38[3]; // [rsp+68h] [rbp-18h] BYREF

  v9 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 16LL) + 96LL), 3, 0LL);
  v37 = v9;
  v10 = v9;
  if ( !v9 )
    return;
  v11 = (unsigned __int64 *)((char *)v9 + 32);
  v12 = (*((_QWORD *)v9 + 1) - (_QWORD)v9 - 32LL) >> 3;
  if ( (int)v12 <= 0 )
    goto LABEL_47;
  do
  {
    v13 = HMValidateHandleNoSecure(*v11, 1);
    v14 = v13;
    if ( !v13 )
      goto LABEL_45;
    if ( !IsNonImmersiveBand(v13) )
      goto LABEL_45;
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 384LL);
    if ( (*(_DWORD *)(v16 + 776) & 0x30) == 0x10 )
      goto LABEL_45;
    v17 = 0;
    v38[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v38;
    v38[1] = v14;
    ++*(_DWORD *)(v14 + 8);
    if ( (a1 & 4) != 0 && (*(_BYTE *)(v14 + 55) & 0x20) != 0 )
    {
LABEL_28:
      v17 = 1;
      DesktopWindow = GetDesktopWindow(v14);
      if ( v31 != DesktopWindow )
      {
        v27 -= *(_DWORD *)(v31 + 132);
        v30 -= *(_DWORD *)(v31 + 128);
        v28 -= *(_DWORD *)(v31 + 128);
        v29 -= *(_DWORD *)(v31 + 132);
      }
      xxxSetWindowPosAndBand((struct tagWND *)v14, 0LL, v30, v29, v28 - v30, v27 - v29, 316, 0);
      goto LABEL_31;
    }
    v18 = 12582912LL;
    LOBYTE(v18) = (*(_DWORD *)(v14 + 52) & 0xC00000) != 12582912;
    v21 = 0;
    if ( ((unsigned __int8)v18 & !_bittest((const signed __int32 *)(v14 + 52), 0x12u)) == 0 )
    {
      v19 = *(_QWORD *)(v14 + 16);
      v20 = *(_DWORD *)(v19 + 560) <= 0x9900u ? *(_DWORD *)(v19 + 576) : 0;
      if ( (v20 & 0x30000000) == 0 )
        v21 = 1;
    }
    if ( (a1 & 1) != 0 && ((*(_BYTE *)(v14 + 54) & 4) != 0 || v21) )
    {
      Prop = (_DWORD *)GetProp(v14, (unsigned __int16)atomCheckpointProp, 1LL);
      v24 = a7;
      if ( v23 )
        v24 = a6;
      v18 = a7;
      v25 = a2 + v24 * *(_DWORD *)(gpsi + 1900LL);
      if ( v23 )
        v18 = a6;
      v16 = (unsigned int)(a3 + v18 * *(_DWORD *)(gpsi + 1904LL));
      if ( Prop && (Prop[8] & 0x10) != 0 )
      {
        Prop[6] -= v25;
        Prop[7] -= v16;
      }
      if ( (*(_BYTE *)(v14 + 55) & 0x20) == 0 )
        goto LABEL_28;
      if ( Prop )
      {
        *Prop -= v25;
        Prop[2] += v25;
        Prop[1] -= v16;
        Prop[3] += v16;
      }
    }
LABEL_31:
    if ( (a1 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((struct tagWND *)v14, 0x80u, 3uLL, 0LL, 0, 0, 0LL, 1, 1);
      }
      v32 = *(_BYTE *)(v14 + 55);
      if ( (v32 & 0x20) == 0 && !v17 )
      {
        v33 = *(_BYTE *)(v14 + 40);
        v36 = *(_OWORD *)(v14 + 112);
        if ( (v33 & 1) != 0 )
          v34 = a5 + HIDWORD(v36);
        else
          v34 = HIDWORD(*(_OWORD *)(v14 + 112));
        if ( (v33 & 8) != 0
          && (v34 += a4, (v32 & 0x41) == 0x41)
          && (v35 = *(_QWORD *)(v14 + 88), (*(_WORD *)(v35 + 66) & 0x3FFF) == 0x2A7) )
        {
          xxxSetWindowPosAndBand(
            (struct tagWND *)v14,
            0LL,
            v36 - *(_DWORD *)(v35 + 112),
            DWORD1(v36) - *(_DWORD *)(v35 + 116) - a4,
            DWORD2(v36) - v36,
            v34 - DWORD1(v36),
            60,
            0);
        }
        else
        {
          xxxSetWindowPosAndBand((struct tagWND *)v14, 0LL, 0, 0, DWORD2(v36) - v36, v34 - DWORD1(v36), 318, 0);
        }
      }
    }
    ThreadUnlock1(v18, v16);
LABEL_45:
    LODWORD(v12) = v12 - 1;
    ++v11;
  }
  while ( (int)v12 > 0 );
  v10 = v37;
LABEL_47:
  FreeHwndList(v10);
}
