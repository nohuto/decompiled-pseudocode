/*
 * XREFs of xxxDragObject @ 0x1C023C89C
 * Callers:
 *     NtUserDragObject @ 0x1C0218F30 (NtUserDragObject.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     zzzSetCursor @ 0x1C0062174 (zzzSetCursor.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00DF658 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSetCapture @ 0x1C00F8EC0 (xxxSetCapture.c)
 *     xxxReleaseCapture @ 0x1C00FB250 (xxxReleaseCapture.c)
 *     zzzShowCursor @ 0x1C0100BA0 (zzzShowCursor.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C023C6FC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 */

__int64 __fastcall xxxDragObject(struct tagWND *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r12
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rdx
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  struct tagCURSOR *DropObject; // rax
  unsigned __int64 v30; // r8
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // r8
  unsigned int v38; // edi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rdx
  int v42; // [rsp+58h] [rbp-B0h]
  struct tagWND *v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h]
  _OWORD v46[3]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v47[3]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v48[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v49[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v50[3]; // [rsp+100h] [rbp-8h] BYREF
  _OWORD v51[3]; // [rsp+118h] [rbp+10h] BYREF

  memset(v46, 0, sizeof(v46));
  memset(v51, 0, sizeof(v51));
  v8 = 0;
  v42 = 1;
  v9 = 0LL;
  v43 = 0LL;
  result = Win32AllocPoolWithQuotaZInit(96LL, 1935962965LL);
  v11 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v50, (__int64)Win32FreePool);
    v12 = 0LL;
    if ( a2 )
      v12 = *(_QWORD *)a2;
    *(_QWORD *)v11 = v12;
    *(_DWORD *)(v11 + 16) = a3;
    *(_QWORD *)(v11 + 24) = a4;
    if ( a5 )
      v13 = zzzSetCursor(a5);
    else
      v13 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 320LL);
    v47[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v47;
    v47[1] = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    if ( a2 )
    {
      v14 = *(_BYTE *)(a2 + 55);
      v15 = a2;
      while ( (v14 & 0xC0) == 0x40 )
      {
        v15 = *(_QWORD *)(v15 + 88);
        v14 = *(_BYTE *)(v15 + 55);
      }
      v48[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v48;
      v48[1] = v15;
      ++*(_DWORD *)(v15 + 8);
      xxxInternalUpdateWindow((struct tagWND *)v15, 1u);
      ThreadUnlock1(v17, v16);
    }
    if ( gpqForeground )
    {
      v18 = *(__int64 **)(gpqForeground + 72LL);
      if ( v18 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 392LL) )
        {
          v19 = gptiCurrent != v18[2] ? 0x10 : 0;
          if ( v18[2] == gptiCurrent )
            v18 = (__int64 *)a2;
          xxxWindowEvent(0x80000004, v18, 0, 3, v19 | 0x21);
        }
      }
    }
    xxxWindowEvent(0xEu, (__int64 *)a2, 0, 0, 0);
    xxxSetCapture((__int64 *)a2);
    zzzShowCursor(1);
    v22 = 1;
    v44 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v44;
    v45 = 0LL;
    while ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL) == a2 )
    {
      while ( !(unsigned int)xxxInternalGetMessage(v46, 0LL, 0x200u, 0x20Eu, 1u, 0)
           && !(unsigned int)xxxInternalGetMessage(v46, 0LL, 0x23u, 0x23u, 1u, 0)
           && !(unsigned int)xxxInternalGetMessage(v46, 0LL, 0x100u, 0x109u, 1u, 0) )
      {
        if ( !(unsigned int)xxxSleepThread2(7u, 0, 1, 0, 0LL) )
        {
          ThreadUnlock1(v24, v23);
          ThreadUnlock1(v26, v25);
          goto LABEL_67;
        }
      }
      while ( (unsigned int)xxxInternalGetMessage(v51, 0LL, 0x100u, 0x109u, 1u, 0) )
        ;
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL) != a2
        || DWORD2(v46[0]) == 256 && *(_QWORD *)&v46[1] == 27LL )
      {
        v9 = *(_QWORD *)&gasyscur[84];
        if ( v9 )
          zzzSetCursor(*(_QWORD *)&gasyscur[84]);
        break;
      }
      v27 = *(_OWORD *)(v11 + 16);
      *(_OWORD *)(v11 + 48) = *(_OWORD *)v11;
      v28 = *(_OWORD *)(v11 + 32);
      *(_OWORD *)(v11 + 64) = v27;
      *(_OWORD *)(v11 + 80) = v28;
      *(_QWORD *)(v11 + 32) = *(_QWORD *)((char *)&v46[2] + 4);
      DropObject = xxxQueryDropObject(a1, (struct tagDROPSTRUCT *)v11);
      v9 = (__int64)DropObject;
      if ( DropObject )
      {
        if ( DropObject == (struct tagCURSOR *)1 )
          v9 = a5;
      }
      else
      {
        v9 = *(_QWORD *)&gasyscur[84];
        *(_QWORD *)(v11 + 8) = 0LL;
      }
      if ( v9 )
        zzzSetCursor(v9);
      if ( a2 )
      {
        v30 = v9 != *(_QWORD *)&gasyscur[84];
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (struct tagWND *)a2,
          0x22Du,
          v30,
          (struct _LARGE_STRING *)v11,
          0,
          0,
          0LL,
          1,
          1);
      }
      if ( v43 == (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), 1) )
      {
        if ( v43 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v43, 0x22Fu, 0LL, (struct _LARGE_STRING *)v11, 0, 0, 0LL, 1, 1);
        }
      }
      else
      {
        if ( v43 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v43, 0x22Eu, 0LL, (struct _LARGE_STRING *)(v11 + 48), 0, 0, 0LL, 1, 1);
        }
        v31 = HMValidateHandleNoSecure(*(_QWORD *)(v11 + 8), 1);
        v43 = (struct tagWND *)v31;
        ThreadUnlock1(v33, v32);
        v44 = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = &v44;
        v45 = v31;
        if ( v31 )
        {
          ++*(_DWORD *)(v31 + 8);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            (struct tagWND *)v31,
            0x22Eu,
            1uLL,
            (struct _LARGE_STRING *)v11,
            0,
            0,
            0LL,
            1,
            1);
        }
      }
      if ( DWORD2(v46[0]) == 162 || DWORD2(v46[0]) == 514 )
      {
        v22 = 0;
        v42 = 0;
      }
      else
      {
        v22 = v42;
      }
      if ( !v22 )
        break;
    }
    ThreadUnlock1(v21, v20);
    if ( v22 )
      v9 = *(_QWORD *)&gasyscur[84];
    xxxReleaseCapture();
    zzzShowCursor(0);
    zzzSetCursor(v13);
    ThreadUnlock1(v35, v34);
    if ( v9 == *(_QWORD *)&gasyscur[84] || (v36 = ValidateHwnd(*(_QWORD *)(v11 + 8))) == 0 )
    {
      v38 = 0;
    }
    else
    {
      v37 = 0LL;
      v49[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v49;
      v49[1] = v36;
      ++*(_DWORD *)(v36 + 8);
      *(_DWORD *)(*(_QWORD *)(v36 + 16) + 448LL) |= 0x20u;
      if ( a2 )
        v37 = *(_QWORD *)a2;
      _InterlockedIncrement(&glSendMessage);
      v38 = xxxSendTransformableMessageTimeout(
              (struct tagWND *)v36,
              0x22Au,
              v37,
              (struct _LARGE_STRING *)v11,
              0,
              0,
              0LL,
              1,
              1);
      ThreadUnlock1(v40, v39);
    }
    if ( gpqForeground )
    {
      v41 = *(__int64 **)(gpqForeground + 72LL);
      if ( v41 )
      {
        if ( gpqForeground == *(_QWORD *)(gptiCurrent + 392LL) )
          xxxWindowEvent(0x80000005, v41, 0, 4, 33);
      }
    }
    xxxWindowEvent(0xFu, (__int64 *)a2, 0, 0, 0);
    v8 = v38;
LABEL_67:
    PopAndFreeAlwaysW32ThreadLock((__int64)v50);
    return v8;
  }
  return result;
}
