/*
 * XREFs of xxxCallJournalPlaybackHook @ 0x1C01E6D28
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     zzzInternalSetCursorPos @ 0x1C0040BC0 (zzzInternalSetCursorPos.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 *     StoreQMessage @ 0x1C00707A0 (StoreQMessage.c)
 *     PhkFirstGlobalValid @ 0x1C008C504 (PhkFirstGlobalValid.c)
 *     LogicalCursorPos @ 0x1C0090A74 (LogicalCursorPos.c)
 */

__int64 __fastcall xxxCallJournalPlaybackHook(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // r15
  LARGE_INTEGER v2; // r12
  LARGE_INTEGER *v3; // r14
  __int64 GlobalValid; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  int v9; // r10d
  DWORD v10; // r11d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  unsigned __int16 v16; // r8
  int v17; // edx
  __int64 v18; // rax
  LONGLONG v19; // rax
  DWORD v20; // r10d
  LARGE_INTEGER v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rcx
  DWORD v24; // [rsp+70h] [rbp-9h] BYREF
  __int64 v25; // [rsp+74h] [rbp-5h]
  __int64 v26; // [rsp+7Ch] [rbp+3h]
  int v27; // [rsp+84h] [rbp+Bh]
  _QWORD v28[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v29; // [rsp+E8h] [rbp+6Fh] BYREF
  DWORD v30; // [rsp+F0h] [rbp+77h] BYREF
  int v31; // [rsp+F4h] [rbp+7Bh]

  v24 = 0;
  v29 = 0;
  v1.QuadPart = 0LL;
  v2.QuadPart = 0LL;
  v25 = 0LL;
  v3 = 0LL;
  v26 = 0LL;
  v27 = 0;
  while ( 1 )
  {
    LODWORD(v26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1);
    v28[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v28;
    v28[1] = GlobalValid;
    if ( GlobalValid )
      ++*(_DWORD *)(GlobalValid + 8);
    v8 = xxxCallHook2(GlobalValid, 1u, 0LL, (int *)&v24, &v29);
    if ( v8 == -1 )
      break;
    v9 = v24;
    v10 = 0;
    a1[3].LowPart = v24;
    if ( v8 > 0 )
    {
      v11 = *(_DWORD *)(gptiCurrent + 448LL);
      if ( (v11 & 0x200000) == 0 )
        goto LABEL_39;
      *(_DWORD *)(gptiCurrent + 448LL) = v11 & 0xFFDFFFFF;
      v9 = v24;
    }
    if ( (unsigned int)(v9 - 512) <= 0xE )
    {
      v2.QuadPart = (unsigned __int16)v25 | (WORD2(v25) << 16);
      v18 = LogicalCursorPos(gptiCurrent);
      if ( v25 != v18 )
      {
        zzzInternalSetCursorPos(v25, HIDWORD(v25), 1);
        v10 = 0;
      }
      goto LABEL_37;
    }
    if ( (unsigned int)(v9 - 256) <= 8 )
    {
      v16 = 0;
      if ( ((v9 - 257) & 0xFFFFFFFB) == 0 && (v16 = 0x8000, v9 == 261) || v9 == 260 )
        v16 |= 0x2000u;
      if ( (v25 & 0x800000000000LL) != 0 )
        v16 |= 0x100u;
      if ( (*(_BYTE *)(((unsigned __int64)(unsigned __int8)v25 >> 2) + *(_QWORD *)(gptiCurrent + 392LL) + 184) & (unsigned __int8)(1 << (2 * (v25 & 3)))) != 0 )
        v16 |= 0x4000u;
      v2.QuadPart = ((v16 | BYTE4(v25)) << 16) | 1;
      if ( (_WORD)v25 != 231 || BYTE4(v25) )
      {
        v17 = 255;
        if ( (!v29 || (*gpsi & 2) != 0) && (v24 & 2) != 0 )
          v17 = 0xFFFF;
        v1.QuadPart = (unsigned int)v25 & v17;
      }
      else
      {
        *(_WORD *)(gptiCurrent + 762LL) = WORD1(v25);
      }
      goto LABEL_37;
    }
    if ( v9 == 35 )
    {
      if ( !(_DWORD)v25 || (v15 = HMValidateHandleNoSecure((int)v25, 1), v10 = 0, (v3 = (LARGE_INTEGER *)v15) == 0LL) )
        v3 = *(LARGE_INTEGER **)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
LABEL_37:
      v30 = v10;
      v31 = 1;
      v19 = LogicalCursorPos(gptiCurrent);
      StoreQMessage(
        a1,
        v3,
        v20,
        v1,
        v2,
        v21.LowPart,
        v21.LowPart,
        v21.LowPart,
        v21,
        v21.QuadPart,
        &v30,
        v19,
        v21,
        (LARGE_INTEGER *)v21.QuadPart);
      ThreadUnlock1(v23, v22);
      return 0LL;
    }
    if ( !GlobalValid || !*(_QWORD *)(GlobalValid + 56) )
    {
      ThreadUnlock1(v7, v6);
      return 0xFFFFFFFFLL;
    }
    xxxCallHook(2, 0, 0LL, 1u);
    ThreadUnlock1(v13, v12);
  }
  v8 = -1;
LABEL_39:
  ThreadUnlock1(v7, v6);
  return (unsigned int)v8;
}
