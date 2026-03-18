/*
 * XREFs of xxxDragObject @ 0x1C023446C
 * Callers:
 *     NtUserDragObject @ 0x1C0211A70 (NtUserDragObject.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C005E728 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     zzzSetCursor @ 0x1C0078168 (zzzSetCursor.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00BB9A4 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     zzzShowCursor @ 0x1C0132E80 (zzzShowCursor.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02342CC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r12
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rdx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  struct tagCURSOR *DropObject; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  _BOOL8 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned int v47; // edi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *v50; // rdx
  int v51; // [rsp+58h] [rbp-B0h]
  struct tagWND *v52; // [rsp+60h] [rbp-A8h]
  __int64 v53; // [rsp+70h] [rbp-98h] BYREF
  __int64 v54; // [rsp+78h] [rbp-90h]
  _QWORD v55[6]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v56[3]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v57[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v58[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v59[3]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v60[48]; // [rsp+118h] [rbp+10h] BYREF

  memset(v55, 0, sizeof(v55));
  memset(v60, 0, sizeof(v60));
  v8 = 0;
  v51 = 1;
  v9 = 0LL;
  v52 = 0LL;
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v12 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v59, (__int64)Win32FreePool, v11);
    v13 = 0LL;
    if ( a2 )
      v13 = *(_QWORD *)a2;
    *(_QWORD *)v12 = v13;
    *(_DWORD *)(v12 + 16) = a3;
    *(_QWORD *)(v12 + 24) = a4;
    if ( a5 )
      v14 = zzzSetCursor(a5);
    else
      v14 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 328LL);
    v56[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v56;
    v56[1] = v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    if ( a2 )
    {
      v15 = *(_BYTE *)(a2 + 55);
      v16 = a2;
      while ( (v15 & 0xC0) == 0x40 )
      {
        v16 = *(_QWORD *)(v16 + 88);
        v15 = *(_BYTE *)(v16 + 55);
      }
      v57[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v57;
      v57[1] = v16;
      ++*(_DWORD *)(v16 + 8);
      xxxInternalUpdateWindow((struct tagWND *)v16, 1u);
      ThreadUnlock1(v18, v17);
    }
    if ( gpqForeground )
    {
      v19 = *(__int64 **)(gpqForeground + 80LL);
      if ( v19 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
        {
          v20 = gptiCurrent != v19[2] ? 0x10 : 0;
          if ( v19[2] == gptiCurrent )
            v19 = (__int64 *)a2;
          xxxWindowEvent(0x80000004, v19, 0, 3, v20 | 0x21);
        }
      }
    }
    xxxWindowEvent(0xEu, (__int64 *)a2, 0, 0, 0);
    xxxSetCapture((__int64 *)a2);
    zzzShowCursor(1);
    v23 = 1;
    v53 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v53;
    v54 = 0LL;
    while ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) == a2 )
    {
      while ( !(unsigned int)xxxInternalGetMessage((__int64)v55, 0LL, 0x200u, 0x20Eu, 1u, 0)
           && !(unsigned int)xxxInternalGetMessage((__int64)v55, 0LL, 0x23u, 0x23u, 1u, 0)
           && !(unsigned int)xxxInternalGetMessage((__int64)v55, 0LL, 0x100u, 0x109u, 1u, 0) )
      {
        if ( !(unsigned int)xxxSleepThread2(7u, 0, 1, 0, 0LL) )
        {
          ThreadUnlock1(v25, v24);
          ThreadUnlock1(v27, v26);
          goto LABEL_67;
        }
      }
      while ( (unsigned int)xxxInternalGetMessage((__int64)v60, 0LL, 0x100u, 0x109u, 1u, 0) )
        ;
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) != a2 || LODWORD(v55[1]) == 256 && v55[2] == 27LL )
      {
        v9 = *(_QWORD *)&gasyscur[84];
        if ( v9 )
          zzzSetCursor(*(_QWORD *)&gasyscur[84]);
        break;
      }
      v31 = *(_OWORD *)(v12 + 16);
      *(_OWORD *)(v12 + 48) = *(_OWORD *)v12;
      v32 = *(_OWORD *)(v12 + 32);
      *(_OWORD *)(v12 + 64) = v31;
      *(_OWORD *)(v12 + 80) = v32;
      *(_QWORD *)(v12 + 32) = *(_QWORD *)((char *)&v55[4] + 4);
      DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v12);
      v9 = (__int64)DropObject;
      if ( DropObject )
      {
        if ( DropObject == (struct tagCURSOR *)1 )
          v9 = a5;
      }
      else
      {
        v9 = *(_QWORD *)&gasyscur[84];
        *(_QWORD *)(v12 + 8) = 0LL;
      }
      if ( v9 )
        zzzSetCursor(v9);
      if ( a2 )
      {
        v37 = v9 != *(_QWORD *)&gasyscur[84];
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((struct tagWND *)a2, 557LL, v37, v12, 0, 0, 0LL, 1, 1);
      }
      LOBYTE(v34) = 1;
      if ( v52 == (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v12 + 8), v34, v35, v36) )
      {
        if ( v52 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v52, 559LL, 0LL, v12, 0, 0, 0LL, 1, 1);
        }
      }
      else
      {
        if ( v52 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v52, 558LL, 0LL, v12 + 48, 0, 0, 0LL, 1, 1);
        }
        LOBYTE(v21) = 1;
        v40 = HMValidateHandleNoSecure(*(_QWORD *)(v12 + 8), v21, v38, v39);
        v52 = (struct tagWND *)v40;
        ThreadUnlock1(v42, v41);
        v53 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v53;
        v54 = v40;
        if ( v40 )
        {
          ++*(_DWORD *)(v40 + 8);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((struct tagWND *)v40, 558LL, 1LL, v12, 0, 0, 0LL, 1, 1);
        }
      }
      if ( LODWORD(v55[1]) == 162 || LODWORD(v55[1]) == 514 )
      {
        v23 = 0;
        v51 = 0;
      }
      else
      {
        v23 = v51;
      }
      if ( !v23 )
        break;
    }
    ThreadUnlock1(v22, v21);
    if ( v23 )
      v9 = *(_QWORD *)&gasyscur[84];
    xxxReleaseCapture();
    zzzShowCursor(0);
    zzzSetCursor(v14);
    ThreadUnlock1(v44, v43);
    if ( v9 == *(_QWORD *)&gasyscur[84] || (v45 = ValidateHwnd(*(_QWORD *)(v12 + 8))) == 0 )
    {
      v47 = 0;
    }
    else
    {
      v46 = 0LL;
      v58[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v58;
      v58[1] = v45;
      ++*(_DWORD *)(v45 + 8);
      *(_DWORD *)(*(_QWORD *)(v45 + 16) + 440LL) |= 0x20u;
      if ( a2 )
        v46 = *(_QWORD *)a2;
      _InterlockedIncrement(&glSendMessage);
      v47 = xxxSendTransformableMessageTimeout((struct tagWND *)v45, 554LL, v46, v12, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v49, v48);
    }
    if ( gpqForeground )
    {
      v50 = *(__int64 **)(gpqForeground + 80LL);
      if ( v50 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 384LL) )
          xxxWindowEvent(0x80000005, v50, 0, 4, 33);
      }
    }
    xxxWindowEvent(0xFu, (__int64 *)a2, 0, 0, 0);
    v8 = v47;
LABEL_67:
    PopAndFreeAlwaysW32ThreadLock((__int64)v59, v28, v29, v30);
    return v8;
  }
  return result;
}
