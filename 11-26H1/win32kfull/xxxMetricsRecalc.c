/*
 * XREFs of xxxMetricsRecalc @ 0x14023D32C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14023CE68 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x14023D21C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x140032708 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     IsNonImmersiveBand @ 0x140163FA0 (IsNonImmersiveBand.c)
 */

void __fastcall xxxMetricsRecalc(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char v8; // r13
  __int64 v9; // r14
  struct tagBWL *v10; // rax
  __int64 v11; // rdx
  struct tagBWL *v12; // rsi
  __int64 *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rax
  struct tagWND *v16; // rbx
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  _BOOL8 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  int v25; // ecx
  int v26; // edx
  int v27; // r8d
  __int64 v28; // rcx
  struct tagRECT v29; // xmm0
  LONG v30; // edx
  char v31; // cl
  __int64 DesktopWindow; // rax
  __int64 v33; // rdx
  int v34; // r8d
  int v35; // r9d
  unsigned int v36; // r10d
  unsigned int v37; // r11d
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // al
  char v41; // dl
  LONG bottom; // ecx
  int v43; // edx
  __int64 v44; // r10
  struct tagTHREADINFO *v45; // [rsp+40h] [rbp-30h]
  struct tagBWL *v46; // [rsp+48h] [rbp-28h]
  struct tagRECT v47; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-10h] BYREF

  v8 = a1;
  v45 = PtiCurrent(a1);
  v9 = (__int64)v45;
  v10 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)v45 + 62) + 24LL) + 112LL), 3LL, 0LL, 1);
  v46 = v10;
  v12 = v10;
  if ( !v10 )
    return;
  v13 = (__int64 *)((char *)v10 + 32);
  v14 = (*((_QWORD *)v10 + 1) - (_QWORD)v10 - 32LL) >> 3;
  if ( (int)v14 <= 0 )
    goto LABEL_46;
  do
  {
    v15 = HMValidateHandleNoSecure(*v13, 1);
    v16 = (struct tagWND *)v15;
    if ( !v15 )
      goto LABEL_44;
    if ( !IsNonImmersiveBand(v15) )
      goto LABEL_44;
    v11 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 456LL);
    if ( (*(_BYTE *)(v11 + 808) & 0x30) == 0x10 )
      goto LABEL_44;
    Win32HM_LockIntoThread<0>(v9, (__int64)v16, BugCheckParameter3);
    v17 = 0;
    if ( (v8 & 4) != 0 )
    {
      v18 = *((_QWORD *)v16 + 5);
      if ( (*(_BYTE *)(v18 + 31) & 0x20) != 0 )
      {
        v47 = *(struct tagRECT *)(v18 + 88);
LABEL_27:
        v17 = 1;
        DesktopWindow = GetDesktopWindow((__int64)v16);
        if ( v33 != DesktopWindow )
        {
          v38 = *(_QWORD *)(v33 + 40);
          v34 -= *(_DWORD *)(v38 + 108);
          v37 -= *(_DWORD *)(v38 + 104);
          v35 -= *(_DWORD *)(v38 + 104);
          v36 -= *(_DWORD *)(v38 + 108);
        }
        xxxSetWindowPos(v16, 0LL, v37, v36, v35 - v37, v34 - v36, 16700);
        goto LABEL_30;
      }
    }
    v19 = *((_QWORD *)v16 + 5);
    v20 = *(unsigned int *)(v19 + 28);
    v22 = 0;
    if ( (*(_DWORD *)(v19 + 28) & 0xC00000) == 12582912 || (v20 & 0x40000) != 0 )
    {
      v21 = *((_QWORD *)v16 + 2);
      if ( *(_DWORD *)(v21 + 664) > 0x9900u || (*(_DWORD *)(v21 + 680) & 0x30000000) == 0 )
        v22 = 1;
    }
    if ( (v8 & 1) != 0 && ((*(_BYTE *)(v19 + 30) & 4) != 0 || v22) )
    {
      UserSessionState = W32GetUserSessionState(v22, v20);
      Prop = GetProp((__int64)v16, *(unsigned __int16 *)(UserSessionState + 41374), 1u);
      v25 = a6;
      if ( (*(_BYTE *)(*((_QWORD *)v16 + 5) + 30LL) & 4) == 0 )
        v25 = a7;
      v26 = v25 + a2;
      v27 = v25 + a3;
      if ( Prop && (*(_DWORD *)(Prop + 16) & 0x20) != 0 )
      {
        *(_DWORD *)(Prop + 8) -= v26;
        *(_DWORD *)(Prop + 12) -= v27;
      }
      v28 = *((_QWORD *)v16 + 5);
      if ( (*(_BYTE *)(v28 + 31) & 0x20) != 0 )
      {
        if ( Prop )
        {
          v47 = *(struct tagRECT *)(Prop + 20);
          v29 = v47;
          v47.right += v26;
          v47.top -= v27;
          v47.bottom += v27;
          v47.left = _mm_cvtsi128_si32((__m128i)v29) - v26;
          CHECKPOINT::SetNormalRect((CHECKPOINT *)Prop, v16, &v47, 0);
        }
        goto LABEL_30;
      }
      v30 = v27 + *(_DWORD *)(v28 + 100);
      v31 = *(_BYTE *)(v28 + 16);
      v47.bottom = v30;
      if ( (v31 & 8) != 0 )
        v47.bottom = v30 + a4;
      goto LABEL_27;
    }
LABEL_30:
    if ( (v8 & 2) != 0 )
    {
      if ( a4 )
        xxxSendNotifyMessage(v16, 0x80u, 3uLL, 0LL, 1);
      v39 = *((_QWORD *)v16 + 5);
      v40 = *(_BYTE *)(v39 + 31);
      if ( (v40 & 0x20) == 0 && !v17 )
      {
        v41 = *(_BYTE *)(v39 + 16);
        v47 = *(struct tagRECT *)(v39 + 88);
        if ( (v41 & 1) != 0 )
          bottom = a5 + v47.bottom;
        else
          bottom = v47.bottom;
        if ( (v41 & 8) != 0
          && (v43 = bottom + a4, bottom += a4, (v40 & 0x41) == 0x41)
          && (v44 = *(_QWORD *)(*((_QWORD *)v16 + 13) + 40LL), (*(_WORD *)(v44 + 42) & 0x2FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            v16,
            0LL,
            (unsigned int)(v47.left - *(_DWORD *)(v44 + 88)),
            (unsigned int)(v47.top - *(_DWORD *)(v44 + 92) - a4),
            v47.right - v47.left,
            v43 - v47.top,
            16444);
        }
        else
        {
          xxxSetWindowPos(v16, 0LL, 0LL, 0LL, v47.right - v47.left, bottom - v47.top, 16702);
        }
      }
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    v9 = (__int64)v45;
LABEL_44:
    LODWORD(v14) = v14 - 1;
    ++v13;
  }
  while ( (int)v14 > 0 );
  v12 = v46;
LABEL_46:
  FreeHwndList(v12, v11);
}
