/*
 * XREFs of ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x14000886C
 * Callers:
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140009C18 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     _anonymous_namespace_::xxxRestoreMouseCursors @ 0x1402504BC (_anonymous_namespace_--xxxRestoreMouseCursors.c)
 * Callees:
 *     xxxClientLoadImage @ 0x140008ACC (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x140008DFC (xxxClientExpandStringW.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x14000912C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxUpdateSystemCursorFromRegistry(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v6; // edi
  __int64 UserSessionState; // rax
  int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  WCHAR *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rcx
  unsigned int v21; // ecx
  int v22; // eax
  PWSTR Buffer; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v29; // [rsp+58h] [rbp-A8h]
  WCHAR SourceString[264]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[528]; // [rsp+270h] [rbp+170h] BYREF

  v3 = a2;
  DestinationString = 0LL;
  v6 = 576;
  UserSessionState = W32GetUserSessionState();
  FastGetProfileStringFromIDW(
    a1,
    1LL,
    *(unsigned __int16 *)(UserSessionState + 552 * v3 + 21906),
    &pszFormat,
    SourceString,
    260,
    0);
  if ( SourceString[0] )
  {
    v9 = 4LL;
    v6 = 592;
    v10 = 4LL;
    v11 = v31;
    v12 = SourceString;
    do
    {
      v13 = *((_OWORD *)v12 + 1);
      *v11 = *(_OWORD *)v12;
      v14 = *((_OWORD *)v12 + 2);
      v11[1] = v13;
      v15 = *((_OWORD *)v12 + 3);
      v11[2] = v14;
      v16 = *((_OWORD *)v12 + 4);
      v11[3] = v15;
      v17 = *((_OWORD *)v12 + 5);
      v11[4] = v16;
      v18 = *((_OWORD *)v12 + 6);
      v11[5] = v17;
      v19 = *((_OWORD *)v12 + 7);
      v12 += 64;
      v11[6] = v18;
      v11 += 8;
      *(v11 - 1) = v19;
      --v10;
    }
    while ( v10 );
    *(_QWORD *)v11 = *(_QWORD *)v12;
    v29 = v31;
    v20 = -1LL;
    do
      ++v20;
    while ( SourceString[v20] );
    v21 = 2 * v20;
    v22 = 518;
    if ( v21 < 0x206 )
      v22 = v21;
    v28[0] = v22;
    v28[1] = 520;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (unsigned int)xxxClientExpandStringW((struct _LARGE_STRING *)v28) )
    {
      Buffer = DestinationString.Buffer;
      v6 = 80;
      v24 = v29;
      do
      {
        *(_OWORD *)Buffer = *v24;
        *((_OWORD *)Buffer + 1) = v24[1];
        *((_OWORD *)Buffer + 2) = v24[2];
        *((_OWORD *)Buffer + 3) = v24[3];
        *((_OWORD *)Buffer + 4) = v24[4];
        *((_OWORD *)Buffer + 5) = v24[5];
        *((_OWORD *)Buffer + 6) = v24[6];
        Buffer += 64;
        v25 = v24[7];
        v24 += 8;
        *((_OWORD *)Buffer - 1) = v25;
        --v9;
      }
      while ( v9 );
      *(_QWORD *)Buffer = *(_QWORD *)v24;
      DestinationString.Length = v28[0];
      if ( LOWORD(v28[0]) >= 0x206u )
        DestinationString.Length = 518;
      DestinationString.MaximumLength = 520;
    }
  }
  else
  {
    DestinationString.Buffer = (PWSTR)(unsigned __int16)(v3 + 100);
  }
  result = xxxClientLoadImage((unsigned int)&DestinationString, v8, 2, 0, 0, v6);
  if ( result )
    return zzzInternalSetSystemCursor(result, (unsigned int)v3, &DestinationString, a3);
  return result;
}
