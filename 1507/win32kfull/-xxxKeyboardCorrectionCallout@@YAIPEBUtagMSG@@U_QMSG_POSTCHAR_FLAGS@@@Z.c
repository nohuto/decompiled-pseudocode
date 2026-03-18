/*
 * XREFs of ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C00F7FE8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 */

__int64 __fastcall xxxKeyboardCorrectionCallout(_OWORD *a1, int a2)
{
  __int128 v2; // xmm1
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v6; // rax
  struct tagWND **v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _BOOL8 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD v18[3]; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v19[4]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+C0h] [rbp+67h] BYREF
  int v21; // [rsp+C8h] [rbp+6Fh] BYREF

  v21 = a2;
  v2 = a1[1];
  v3 = 0;
  v19[0] = *a1;
  v19[2] = a1[2];
  v19[1] = v2;
  v4 = HMValidateHandleNoSecure(*(unsigned __int64 *)&v19[0], 1);
  if ( !v4 )
    return 87LL;
  if ( (unsigned int)(*(_DWORD *)(v4 + 304) - 1) <= 1 && (*(_BYTE *)(v4 + 290) & 0x40) == 0 )
    return v3;
  v6 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( !v6 )
    return v3;
  v7 = (struct tagWND **)(v6 + 288);
  v8 = *(_QWORD *)(v6 + 288);
  if ( !v8 )
    return v3;
  if ( *(char *)(v8 + 44) >= 0 && *(char *)(v8 + 43) >= 0 )
  {
    v9 = *(_QWORD *)(v8 + 16);
    if ( gptiCurrent == v9 )
      return 0LL;
    v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 832LL);
    v11 = *(_QWORD *)(*(_QWORD *)(v9 + 384) + 832LL);
    if ( !gbEnforceUIPI
      || (unsigned int)v11 > (unsigned int)v10
      || (_DWORD)v11 == (_DWORD)v10
      && ((v12 = HIDWORD(v11), v13 = HIDWORD(v10), (_DWORD)v12 == (_DWORD)v13) || (_DWORD)v12 == -1 || (_DWORD)v13 == -1) )
    {
      v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v18;
      v18[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      v14 = xxxSendTransformableMessageTimeout(
              *v7,
              0x32Cu,
              (unsigned __int64)&v21,
              (struct _LARGE_STRING *)v19,
              2,
              guiKeyboardCorrectionCalloutTimeout,
              &v20,
              1,
              0) == 0;
      ThreadUnlock1(v16, v15);
      if ( v14 )
      {
        v17 = HMAssignmentUnlock(v7);
        if ( v17 && *(char *)(v17 + 44) >= 0 && *(char *)(v17 + 43) >= 0 )
          PostMessage(v17, 0x32Du, 0LL, 0LL);
        return 1460;
      }
      else if ( v20 == 255 )
      {
        return 1296;
      }
      return v3;
    }
  }
  return 5LL;
}
