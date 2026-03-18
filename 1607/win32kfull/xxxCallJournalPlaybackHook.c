/*
 * XREFs of xxxCallJournalPlaybackHook @ 0x1C01DD958
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0057C74 (PhkFirstGlobalValid.c)
 *     LogicalQmsgCursorPos @ 0x1C005C314 (LogicalQmsgCursorPos.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C005C35C (-LogicalCursorPosFromDpiAwarenessContext@@YA-AUtagPOINT@@K@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxCallJournalPlaybackHook(__int64 a1)
{
  LARGE_INTEGER v1; // r15
  LARGE_INTEGER v2; // r12
  InputTransform *v3; // rsi
  __int64 GlobalValid; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v24; // edx
  unsigned int v25; // edi
  unsigned int v26; // r14d
  __int64 v27; // rcx
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v29; // rdx
  struct tagPOINT v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  DWORD v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+74h] [rbp-8Ch]
  __int64 v35; // [rsp+7Ch] [rbp-84h]
  int v36; // [rsp+84h] [rbp-7Ch]
  _QWORD v37[29]; // [rsp+88h] [rbp-78h] BYREF
  int v38; // [rsp+188h] [rbp+88h] BYREF
  DWORD v39; // [rsp+190h] [rbp+90h] BYREF
  int v40; // [rsp+194h] [rbp+94h]

  v33 = 0;
  v38 = 0;
  v1.QuadPart = 0LL;
  v2.QuadPart = 0LL;
  v34 = 0LL;
  v3 = 0LL;
  v35 = 0LL;
  v36 = 0;
  while ( 1 )
  {
    LODWORD(v35) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1);
    v37[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v37;
    v37[1] = GlobalValid;
    if ( GlobalValid )
      ++*(_DWORD *)(GlobalValid + 8);
    v8 = xxxCallHook2(GlobalValid, 1u, 0LL, (int *)&v33, &v38, 0);
    if ( v8 == -1 )
      break;
    memset(&v37[3], 0, 0x98uLL);
    v7 = v33;
    v6 = 128LL;
    v11 = *(_OWORD *)&v37[5];
    *(_OWORD *)a1 = *(_OWORD *)&v37[3];
    v12 = *(_OWORD *)&v37[7];
    *(_OWORD *)(a1 + 16) = v11;
    v13 = *(_OWORD *)&v37[9];
    *(_OWORD *)(a1 + 32) = v12;
    v14 = *(_OWORD *)&v37[11];
    *(_OWORD *)(a1 + 48) = v13;
    v15 = *(_OWORD *)&v37[13];
    *(_OWORD *)(a1 + 64) = v14;
    v16 = *(_OWORD *)&v37[15];
    *(_OWORD *)(a1 + 80) = v15;
    v17 = *(_OWORD *)&v37[17];
    *(_OWORD *)(a1 + 96) = v16;
    v18 = *(_OWORD *)&v37[19];
    v19 = v37[21];
    *(_OWORD *)(a1 + 112) = v17;
    *(_OWORD *)(a1 + 128) = v18;
    *(_QWORD *)(a1 + 144) = v19;
    *(_DWORD *)(a1 + 24) = v7;
    if ( v8 > 0 )
    {
      v20 = *(_DWORD *)(gptiCurrent + 440LL);
      if ( (v20 & 0x200000) == 0 )
        goto LABEL_39;
      *(_DWORD *)(gptiCurrent + 440LL) = v20 & 0xFFDFFFFF;
      v7 = v33;
    }
    if ( (unsigned int)(v7 - 512) <= 0xE )
    {
      v25 = HIDWORD(v34);
      v26 = v34;
      v27 = (unsigned __int16)v34 | (WORD2(v34) << 16);
      v2.QuadPart = (int)v27;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v27, 128LL, v9, v10);
      if ( __PAIR64__(v25, v26) != LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext) )
        zzzInternalSetCursorPos(v26, v25, 1);
      goto LABEL_37;
    }
    if ( (unsigned int)(v7 - 256) <= 8 )
    {
      v9 = 0LL;
      if ( (((_DWORD)v7 - 257) & 0xFFFFFFFB) == 0 && (v9 = 0x8000LL, (_DWORD)v7 == 261) || (_DWORD)v7 == 260 )
        LODWORD(v9) = v9 | 0x2000;
      if ( (v34 & 0x800000000000LL) != 0 )
        LODWORD(v9) = v9 | 0x100;
      if ( (*(_BYTE *)(((unsigned __int64)(unsigned __int8)v34 >> 2) + *(_QWORD *)(gptiCurrent + 384LL) + 192) & (unsigned __int8)(1 << (2 * (v34 & 3)))) != 0 )
        LODWORD(v9) = v9 | 0x4000;
      v2.QuadPart = (((unsigned __int16)v9 | BYTE4(v34)) << 16) | 1;
      if ( (_WORD)v34 != 231 || BYTE4(v34) )
      {
        v24 = 255;
        if ( (!v38 || (*gpsi & 2) != 0) && (v33 & 2) != 0 )
          v24 = 0xFFFF;
        v1.QuadPart = (unsigned int)v34 & v24;
      }
      else
      {
        *(_WORD *)(gptiCurrent + 762LL) = WORD1(v34);
      }
      goto LABEL_37;
    }
    if ( (_DWORD)v7 == 35 )
    {
      if ( !(_DWORD)v34
        || (LOBYTE(v6) = 1, (v3 = (InputTransform *)HMValidateHandleNoSecure((int)v34, v6, v9, v10)) == 0LL) )
      {
        v3 = *(InputTransform **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
      }
LABEL_37:
      v29 = *(_QWORD *)(gptiCurrent + 384LL);
      v39 = 0;
      v40 = 1;
      v30 = LogicalQmsgCursorPos((__int64)v3, v29, v9);
      StoreQMessage((LARGE_INTEGER *)a1, v3, v33, v1, v2, 0, 0LL, 0, 0LL, 0, &v39, *(_QWORD *)&v30, 0LL, 0LL);
      ThreadUnlock1(v32, v31);
      return 0LL;
    }
    if ( !GlobalValid || !*(_QWORD *)(GlobalValid + 56) )
    {
      ThreadUnlock1(v7, 128LL);
      return 0xFFFFFFFFLL;
    }
    xxxCallHook(2u, 0LL, 0LL, 1u);
    ThreadUnlock1(v22, v21);
  }
  v8 = -1;
LABEL_39:
  ThreadUnlock1(v7, v6);
  return (unsigned int)v8;
}
