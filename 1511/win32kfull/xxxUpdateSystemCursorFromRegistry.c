/*
 * XREFs of xxxUpdateSystemCursorFromRegistry @ 0x1C01232FC
 * Callers:
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C01240B4 (xxxUpdateSystemCursorsFromRegistry.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DBCBC (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     RtlInitUnicodeStringOrId @ 0x1C00CC1E8 (RtlInitUnicodeStringOrId.c)
 *     xxxClientExpandStringW @ 0x1C00FEC40 (xxxClientExpandStringW.c)
 *     xxxClientLoadImage @ 0x1C012031C (xxxClientLoadImage.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C012356C (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0123934 (zzzSetSystemImage.c)
 *     UpdateSystemCursorPath @ 0x1C0124050 (UpdateSystemCursorPath.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxUpdateSystemCursorFromRegistry(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  WCHAR *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  PWSTR Buffer; // rcx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  unsigned __int8 *Image; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v26; // [rsp+58h] [rbp-A8h]
  WCHAR SourceString[264]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[528]; // [rsp+270h] [rbp+170h] BYREF

  v3 = 2LL * (int)a2;
  FastGetProfileStringFromIDW(a1, 1LL, gasyscur[8 * a2 + 1], &word_1C0153C60, SourceString, 260, 0);
  v4 = 576;
  if ( SourceString[0] )
  {
    v5 = 4LL;
    v4 = 592;
    v6 = 4LL;
    v7 = v28;
    v8 = SourceString;
    do
    {
      v9 = *((_OWORD *)v8 + 1);
      *v7 = *(_OWORD *)v8;
      v10 = *((_OWORD *)v8 + 2);
      v7[1] = v9;
      v11 = *((_OWORD *)v8 + 3);
      v7[2] = v10;
      v12 = *((_OWORD *)v8 + 4);
      v7[3] = v11;
      v13 = *((_OWORD *)v8 + 5);
      v7[4] = v12;
      v14 = *((_OWORD *)v8 + 6);
      v7[5] = v13;
      v15 = *((_OWORD *)v8 + 7);
      v8 += 64;
      v7[6] = v14;
      v7 += 8;
      *(v7 - 1) = v15;
      --v6;
    }
    while ( v6 );
    *(_QWORD *)v7 = *(_QWORD *)v8;
    v26 = v28;
    v16 = -1LL;
    do
      ++v16;
    while ( SourceString[v16] );
    v17 = 2 * v16;
    if ( v17 >= 0x206 )
      v17 = 518;
    v25[0] = v17;
    v25[1] = 520;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (unsigned int)xxxClientExpandStringW((struct _LARGE_STRING *)v25) )
    {
      Buffer = DestinationString.Buffer;
      v4 = 80;
      v20 = v26;
      do
      {
        *(_OWORD *)Buffer = *v20;
        *((_OWORD *)Buffer + 1) = v20[1];
        *((_OWORD *)Buffer + 2) = v20[2];
        *((_OWORD *)Buffer + 3) = v20[3];
        *((_OWORD *)Buffer + 4) = v20[4];
        *((_OWORD *)Buffer + 5) = v20[5];
        *((_OWORD *)Buffer + 6) = v20[6];
        Buffer += 64;
        v21 = v20[7];
        v20 += 8;
        *((_OWORD *)Buffer - 1) = v21;
        --v5;
      }
      while ( v5 );
      *(_QWORD *)Buffer = *(_QWORD *)v20;
      DestinationString.Length = v25[0];
      if ( LOWORD(v25[0]) >= 0x206u )
        DestinationString.Length = 518;
      DestinationString.MaximumLength = 520;
    }
  }
  else
  {
    RtlInitUnicodeStringOrId(&DestinationString, (WCHAR *)(unsigned __int16)(a2 + 100));
  }
  Image = xxxClientLoadImage((char **)&DestinationString, v18, 2u, 0, 0, v4);
  if ( Image )
  {
    UpdateSystemCursorPath(a2, &DestinationString);
    zzzSetSystemImage(Image, *(_QWORD *)&gasyscur[4 * v3 + 4]);
  }
  return xxxSetMonitorIcoCurIndex(&DestinationString, v4 & 0xFFFFFFBF, a2, 1LL);
}
