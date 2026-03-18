/*
 * XREFs of xxxCallJournalPlaybackHook @ 0x1C01E7198
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     StoreQMessage @ 0x1C0060180 (StoreQMessage.c)
 *     PhkFirstGlobalValid @ 0x1C0064BC4 (PhkFirstGlobalValid.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 */

__int64 __fastcall xxxCallJournalPlaybackHook(LARGE_INTEGER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER v4; // r15
  LARGE_INTEGER v5; // r12
  InputTransform *v6; // r14
  __int64 GlobalValid; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  int v12; // r10d
  DWORD v13; // r11d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rax
  unsigned __int16 v19; // r8
  int v20; // edx
  __int64 v21; // rax
  LONGLONG v22; // rax
  DWORD v23; // r10d
  LARGE_INTEGER *v24; // r11
  __int64 v25; // rdx
  __int64 v26; // rcx
  DWORD v27; // [rsp+70h] [rbp-9h] BYREF
  __int64 v28; // [rsp+74h] [rbp-5h]
  __int64 v29; // [rsp+7Ch] [rbp+3h]
  int v30; // [rsp+84h] [rbp+Bh]
  _QWORD v31[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v32; // [rsp+E8h] [rbp+6Fh] BYREF
  DWORD v33; // [rsp+F0h] [rbp+77h] BYREF
  int v34; // [rsp+F4h] [rbp+7Bh]

  v27 = 0;
  v32 = 0;
  v4.QuadPart = 0LL;
  v5.QuadPart = 0LL;
  v28 = 0LL;
  v6 = 0LL;
  v29 = 0LL;
  v30 = 0;
  while ( 1 )
  {
    LODWORD(v29) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1, a3, a4);
    v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v31;
    v31[1] = GlobalValid;
    if ( GlobalValid )
      ++*(_DWORD *)(GlobalValid + 8);
    v11 = xxxCallHook2(GlobalValid, 1u, 0LL, (int *)&v27, (__int64)&v32);
    if ( v11 == -1 )
      break;
    v12 = v27;
    v13 = 0;
    a1[3].LowPart = v27;
    if ( v11 > 0 )
    {
      v14 = *(_DWORD *)(gptiCurrent + 440LL);
      if ( (v14 & 0x200000) == 0 )
        goto LABEL_39;
      *(_DWORD *)(gptiCurrent + 440LL) = v14 & 0xFFDFFFFF;
      v12 = v27;
    }
    if ( (unsigned int)(v12 - 512) <= 0xE )
    {
      v5.QuadPart = (unsigned __int16)v28 | (WORD2(v28) << 16);
      v21 = LogicalCursorPos(gptiCurrent);
      if ( v28 != v21 )
      {
        zzzInternalSetCursorPos(v28, HIDWORD(v28), 1);
        v13 = 0;
      }
      goto LABEL_37;
    }
    if ( (unsigned int)(v12 - 256) <= 8 )
    {
      v19 = 0;
      if ( ((v12 - 257) & 0xFFFFFFFB) == 0 && (v19 = 0x8000, v12 == 261) || v12 == 260 )
        v19 |= 0x2000u;
      if ( (v28 & 0x800000000000LL) != 0 )
        v19 |= 0x100u;
      if ( (*(_BYTE *)(((unsigned __int64)(unsigned __int8)v28 >> 2) + *(_QWORD *)(gptiCurrent + 384LL) + 184) & (unsigned __int8)(1 << (2 * (v28 & 3)))) != 0 )
        v19 |= 0x4000u;
      v5.QuadPart = ((v19 | BYTE4(v28)) << 16) | 1;
      if ( (_WORD)v28 != 231 || BYTE4(v28) )
      {
        v20 = 255;
        if ( (!v32 || (*gpsi & 2) != 0) && (v27 & 2) != 0 )
          v20 = 0xFFFF;
        v4.QuadPart = (unsigned int)v28 & v20;
      }
      else
      {
        *(_WORD *)(gptiCurrent + 754LL) = WORD1(v28);
      }
      goto LABEL_37;
    }
    if ( v12 == 35 )
    {
      if ( !(_DWORD)v28 || (v18 = HMValidateHandleNoSecure((int)v28, 1), v13 = 0, (v6 = (InputTransform *)v18) == 0LL) )
        v6 = *(InputTransform **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
LABEL_37:
      v33 = v13;
      v34 = 1;
      v22 = LogicalCursorPos(gptiCurrent);
      StoreQMessage(
        a1,
        v6,
        v23,
        v4,
        v5,
        (int)v24,
        (__int64)v24,
        (DWORD)v24,
        (LARGE_INTEGER)v24,
        (char)v24,
        &v33,
        v22,
        (LARGE_INTEGER)v24,
        v24);
      ThreadUnlock1(v26, v25);
      return 0LL;
    }
    if ( !GlobalValid || !*(_QWORD *)(GlobalValid + 56) )
    {
      ThreadUnlock1(v10, v9);
      return 0xFFFFFFFFLL;
    }
    xxxCallHook(2u, 0LL, 0LL, 1u);
    ThreadUnlock1(v16, v15);
  }
  v11 = -1;
LABEL_39:
  ThreadUnlock1(v10, v9);
  return (unsigned int)v11;
}
