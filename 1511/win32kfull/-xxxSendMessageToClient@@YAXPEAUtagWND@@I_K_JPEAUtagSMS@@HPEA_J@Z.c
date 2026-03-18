/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0059200
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxReceiveMessage @ 0x1C005D110 (xxxReceiveMessage.c)
 *     xxxSendMessageCallback @ 0x1C0078D9C (xxxSendMessageCallback.c)
 * Callees:
 *     SfnDWORD @ 0x1C005CF50 (SfnDWORD.c)
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01E158C (PrepareSentPointerMessageForClient.c)
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
  __int64 v7; // rdi
  unsigned int v8; // r11d
  char v10; // r10
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int16 v13; // dx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rsi
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rcx
  _QWORD v22[4]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+20h] BYREF

  v25 = a4;
  v24 = a3;
  v23 = a2;
  v7 = a3;
  v8 = a2;
  if ( a2 - 577 > 3 && (a2 - 581 > 0x12 || a2 == 589) )
  {
    if ( a2 != 528 || (_WORD)a3 != 582 )
      goto LABEL_4;
  }
  else if ( a2 == 595 || (_WORD)a3 == 1 )
  {
    goto LABEL_4;
  }
  if ( !(unsigned int)PrepareSentPointerMessageForClient(&v23, &v24, &v25, 0LL) )
  {
    *a7 = 0LL;
    return;
  }
  LODWORD(a4) = v25;
  v7 = v24;
  v8 = v23;
LABEL_4:
  v10 = *((_BYTE *)a1 + 42);
  if ( gihmodUserApiHook >= 0
    || gihmodDManipHook >= 0
    || (v13 = *((_WORD *)a1 + 33) & 0x3FFF, (unsigned __int16)(v13 - 673) > 9u)
    || (v14 = *((_QWORD *)a1 + 18), v15 = v13, v14 != *(_QWORD *)(gpsi + 8LL * v13 - 4752))
    && v14 != *(_QWORD *)(gpsi + 8LL * v13 - 4936) )
  {
    if ( (v8 & 0x1FFFF) >= 0x400 )
    {
      v11 = SfnDWORD((_DWORD)a1, v8, v7, a4, *((_QWORD *)a1 + 18), *(_QWORD *)(gpsi + 744LL));
LABEL_7:
      *a7 = v11;
      return;
    }
    v12 = (unsigned __int8)MessageTable[(unsigned __int16)v8];
LABEL_10:
    v11 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64))gapfnScSendMessage[v12])(a1, v8, v7);
    goto LABEL_7;
  }
  v16 = 2LL * (v13 - 666);
  v17 = *((_QWORD *)&gSharedInfo + v16 + 6);
  if ( !v17
    || v8 <= *((_DWORD *)&gSharedInfo + 2 * v16 + 10)
    && ((unsigned __int8)(1 << (v8 & 7)) & *(_BYTE *)(((unsigned __int64)v8 >> 3) + v17)) != 0
    || (v10 & 1) != 0 )
  {
    if ( (v8 & 0x1FFFF) >= 0x400 )
    {
      v11 = SfnDWORD((_DWORD)a1, v8, v7, a4, (v10 & 8) != 0, *(_QWORD *)(gpsi + 8 * v15 - 4624));
      goto LABEL_7;
    }
    v12 = (unsigned __int8)MessageTable[(unsigned __int16)v8];
    goto LABEL_10;
  }
  v18 = a6;
  if ( a6 )
  {
    v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v22;
    ++*((_DWORD *)a1 + 2);
    v22[1] = a1;
  }
  v19 = xxxDefWindowProc(a1);
  v21 = a7;
  *a7 = v19;
  if ( v18 )
    ThreadUnlock1(v21, v20);
}
