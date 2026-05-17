/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x18006A95C
 * Callers:
 *     RtlGetFileMUIPath @ 0x180069AA0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlReleaseRelativeName @ 0x18000E930 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180011740 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpSearchResourceSection_U @ 0x1800303A8 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003122C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlImageNtHeader @ 0x180031C20 (RtlImageNtHeader.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     ZwCreateFile @ 0x1800A6EC0 (ZwCreateFile.c)
 */

bool __fastcall RtlpFileIsWin32WithRCManifest(int a1)
{
  bool v1; // di
  char v2; // si
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // r14d
  int v6; // ebx
  __int64 v7; // rbx
  __int64 v9; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v10; // [rsp+68h] [rbp-98h] BYREF
  __int64 v11; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v13; // [rsp+80h] [rbp-80h] BYREF
  int v14; // [rsp+88h] [rbp-78h] BYREF
  __int64 v15; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v16; // [rsp+98h] [rbp-68h] BYREF
  __int128 v17; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v18; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-40h]
  int v20; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-28h]
  __int128 *v22; // [rsp+E0h] [rbp-20h]
  int v23; // [rsp+E8h] [rbp-18h]
  __int128 v24; // [rsp+F0h] [rbp-10h]
  _BYTE v25[16]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v26[3]; // [rsp+110h] [rbp+10h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v1 = 0;
  v13 = 0LL;
  v2 = 0;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, (int)&v17, 0LL, (__int64)&v18) )
  {
    v3 = *((_QWORD *)&v17 + 1);
    if ( (_WORD)v18 )
    {
      v4 = v19;
      v17 = v18;
    }
    else
    {
      v4 = 0LL;
      v19 = 0LL;
    }
    v20 = 48;
    v23 = 64;
    v21 = v4 & -(__int64)(v3 != 0);
    v22 = &v17;
    v24 = 0LL;
    v5 = ZwCreateFile(&v10, 2148532352LL, &v20, v25, 0LL, 0, 5, 1, 0, 0LL, 0);
    if ( v3 )
    {
      RtlReleaseRelativeName((__int64)&v18);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
    }
    if ( v5 >= 0 )
    {
      v2 = 1;
      if ( (int)NtCreateSection(&Handle, 983045LL, 0LL, 0LL, 2, 0x8000000, v10) >= 0 )
      {
        v11 = 0LL;
        v15 = 0LL;
        v9 = 0LL;
        v6 = ZwMapViewOfSection(Handle, -1LL, &v9, 0LL, 0LL, &v11, &v15, 1, 0, 8);
        NtClose(Handle);
        if ( v6 >= 0 )
        {
          if ( RtlImageNtHeader(v9) )
          {
            v26[0] = L"MUI";
            v26[1] = 1LL;
            v7 = v9 | 1;
            v26[2] = 0LL;
            if ( (int)LdrpSearchResourceSection_U(v9 | 1, (__int64)v26, 3u, 0x30u, &v16) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v7, v16, (unsigned __int64 *)&v13, &v14) >= 0 )
            {
              v1 = *v13 == -20054323;
            }
          }
        }
      }
    }
  }
  if ( v9 )
    NtUnmapViewOfSection(-1LL, v9);
  if ( v2 )
    NtClose(v10);
  return v1;
}
