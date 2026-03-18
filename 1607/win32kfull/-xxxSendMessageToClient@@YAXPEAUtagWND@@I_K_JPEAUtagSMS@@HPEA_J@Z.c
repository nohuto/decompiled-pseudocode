/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00851A0
 * Callers:
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x1C00AA6E0 (xxxSendMessageCallback.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C007CE70 (xxxDefWindowProc.c)
 *     SfnDWORD @ 0x1C0084FB0 (SfnDWORD.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01D78E4 (PrepareSentPointerMessageForClient.c)
 */

void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned int v9; // r11d
  char v11; // r9
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  int v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r10
  int v19; // ebp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rcx
  _QWORD v23[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+20h] BYREF

  v26 = a4;
  v25 = a3;
  v24 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a2 - 577 > 3 && (a2 - 581 > 0x12 || a2 == 589) )
  {
    if ( a2 != 528 || (_WORD)a3 != 582 )
      goto LABEL_4;
  }
  else if ( a2 == 595 || (_WORD)a3 == 1 )
  {
    goto LABEL_4;
  }
  if ( !(unsigned int)PrepareSentPointerMessageForClient(&v24, &v25, &v26, 0LL) )
  {
    *a7 = 0LL;
    return;
  }
  v7 = v26;
  v8 = v25;
  v9 = v24;
LABEL_4:
  v11 = *((_BYTE *)a1 + 42);
  if ( gihmodUserApiHook >= 0
    || gihmodDManipHook >= 0
    || (v13 = *((_WORD *)a1 + 33) & 0x3FFF, (unsigned __int16)(v13 - 673) > 9u)
    || (v14 = v13, v15 = v13 - 666, v16 = *((_QWORD *)a1 + 18), v16 != *(_QWORD *)(gpsi + 8 * v15 + 576))
    && v16 != *(_QWORD *)(gpsi + 8 * v15 + 392) )
  {
    if ( (v9 & 0x1FFFF) < 0x400 )
      v12 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, bool, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
              a1,
              v9,
              v8,
              v7,
              *((_QWORD *)a1 + 18),
              *(_QWORD *)(gpsi + 744LL),
              (v11 & 8) != 0,
              a5);
    else
      v12 = SfnDWORD((__int64 *)a1, v9, v8, v7, *((_QWORD *)a1 + 18), *(_QWORD *)(gpsi + 744LL));
LABEL_7:
    *a7 = v12;
    return;
  }
  v17 = 2 * v15;
  v18 = *((_QWORD *)&gSharedInfo + v17 + 6);
  if ( !v18
    || v9 <= *((_DWORD *)&gSharedInfo + 2 * v17 + 10)
    && ((unsigned __int8)(1 << (v9 & 7)) & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v18)) != 0
    || (v11 & 1) != 0 )
  {
    if ( (v9 & 0x1FFFF) < 0x400 )
      v12 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, bool, _QWORD, bool, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v9]])(
              a1,
              v9,
              v8,
              v7,
              (v11 & 8) != 0,
              *(_QWORD *)(gpsi + 8LL * (v14 - 673) + 760),
              (v11 & 8) != 0,
              a5);
    else
      v12 = SfnDWORD((__int64 *)a1, v9, v8, v7, (v11 & 8) != 0, *(_QWORD *)(gpsi + 8LL * (v14 - 673) + 760));
    goto LABEL_7;
  }
  v19 = a6;
  if ( a6 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    ++*((_DWORD *)a1 + 2);
    v23[1] = a1;
  }
  v20 = xxxDefWindowProc(a1, v9, v8, v7);
  v22 = a7;
  *a7 = v20;
  if ( v19 )
    ThreadUnlock1(v22, v21);
}
