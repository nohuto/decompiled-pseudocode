/*
 * XREFs of ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0125804
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 */

__int64 __fastcall xxxKeyboardCorrectionCallout(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm1
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v8; // rax
  struct tagWND **v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  _BOOL8 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD v20[3]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v21[2]; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v22; // [rsp+78h] [rbp+1Fh]
  __int128 v23; // [rsp+88h] [rbp+2Fh]
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int64 v25; // [rsp+C8h] [rbp+6Fh] BYREF

  LODWORD(v25) = a2;
  LOBYTE(a2) = 1;
  v4 = a1[1];
  v5 = 0;
  *(_OWORD *)v21 = *a1;
  v23 = a1[2];
  v22 = v4;
  v6 = HMValidateHandleNoSecure(v21[0], a2, a3, a4);
  if ( !v6 )
    return 87LL;
  if ( (unsigned int)(*(_DWORD *)(v6 + 304) - 1) <= 1 && (*(_BYTE *)(v6 + 290) & 0x40) == 0 )
    return v5;
  v8 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( !v8 )
    return v5;
  v9 = (struct tagWND **)(v8 + 240);
  v10 = *(_QWORD *)(v8 + 240);
  if ( !v10 )
    return v5;
  if ( *(char *)(v10 + 44) >= 0 && *(char *)(v10 + 43) >= 0 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( gptiCurrent == v11 )
      return 0LL;
    v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 376) + 824LL);
    if ( !gbEnforceUIPI
      || (unsigned int)v13 > (unsigned int)v12
      || (_DWORD)v13 == (_DWORD)v12
      && ((v14 = HIDWORD(v13), v15 = HIDWORD(v12), (_DWORD)v14 == (_DWORD)v15) || (_DWORD)v14 == -1 || (_DWORD)v15 == -1) )
    {
      v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v20;
      v20[1] = v10;
      ++*(_DWORD *)(v10 + 8);
      v16 = xxxSendTransformableMessageTimeout(
              *v9,
              812LL,
              (__int64)&v25,
              (__int64)v21,
              2,
              guiKeyboardCorrectionCalloutTimeout,
              (__int64 *)&BugCheckParameter3,
              1,
              0) == 0;
      ThreadUnlock1(v18, v17);
      if ( v16 )
      {
        v19 = HMAssignmentUnlock(v9);
        if ( v19 && *(char *)(v19 + 44) >= 0 && *(char *)(v19 + 43) >= 0 )
          PostMessage(v19, 813LL, 0LL, 0LL);
        return 1460;
      }
      else if ( BugCheckParameter3 == 255 )
      {
        return 1296;
      }
      return v5;
    }
  }
  return 5LL;
}
