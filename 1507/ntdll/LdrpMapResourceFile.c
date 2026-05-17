/*
 * XREFs of LdrpMapResourceFile @ 0x180054440
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180025B00 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800546C0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     ZwCreateFile @ 0x180093E50 (ZwCreateFile.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, __int128 *a2, char a3, HANDLE *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v9; // r15
  __int64 v10; // rax
  int v11; // edi
  int v12; // ebx
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  _QWORD *v17; // rcx
  __int128 v19; // xmm0
  HANDLE Handle; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-61h] BYREF
  __int64 v22; // [rsp+70h] [rbp-59h] BYREF
  __int64 v23; // [rsp+78h] [rbp-51h] BYREF
  __int128 v24; // [rsp+80h] [rbp-49h] BYREF
  __int128 v25; // [rsp+90h] [rbp-39h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-29h]
  int v27; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-11h]
  __int128 *v29; // [rsp+C0h] [rbp-9h]
  int v30; // [rsp+C8h] [rbp-1h]
  __int128 v31; // [rsp+D0h] [rbp+7h]
  _BYTE v32[16]; // [rsp+E0h] [rbp+17h] BYREF
  HANDLE v33; // [rsp+120h] [rbp+57h] BYREF

  v33 = 0LL;
  Handle = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 )
        {
          v12 = -1073741701;
          goto LABEL_25;
        }
        v11 = *(_WORD *)(v10 + 72) < 6u ? 8 : 2;
        if ( a3 )
        {
          v19 = *a2;
          v13 = 0LL;
          v26 = 0LL;
          v27 = 48;
          v24 = v19;
        }
        else
        {
          v12 = RtlDosPathNameToRelativeNtPathName_U_WithStatus(*((_QWORD *)a2 + 1), (__int64)&v24, 0LL, (__int64)&v25);
          if ( v12 < 0 )
            goto LABEL_25;
          v13 = *((_QWORD *)&v24 + 1);
          if ( (_WORD)v25 )
          {
            v14 = v26;
            v24 = v25;
          }
          else
          {
            v14 = 0LL;
            v26 = 0LL;
          }
          v27 = 48;
          v28 = v14;
          if ( v13 )
          {
LABEL_10:
            v30 = 64;
            v29 = &v24;
            v31 = 0LL;
            v12 = ZwCreateFile(&v33, 2148532352LL, &v27, v32, 0LL, 0, 5, 1, 0, 0LL, 0);
            if ( v13 )
            {
              RtlReleaseRelativeName(&v25);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
            }
            if ( v12 >= 0 )
            {
              v12 = NtCreateSection(&Handle, 983045LL, 0LL, 0LL, v11, 0x8000000, v33);
              if ( v12 >= 0 )
              {
                v23 = 0LL;
                v12 = ZwMapViewOfSection(Handle, -1LL, &v21, 0LL, 0LL, &v23, &v22, 1, 0, v11);
                if ( Handle )
                {
                  NtClose(Handle);
                  Handle = 0LL;
                }
                if ( v12 >= 0 )
                {
                  v15 = RtlImageNtHeader(v21);
                  v16 = v12;
                  if ( !v15 )
                    v16 = -1073741701;
                  v12 = v16;
                  if ( v16 >= 0 )
                  {
                    v17 = a6;
                    *v9 = v21;
                    if ( v17 )
                      *v17 = v22;
                    if ( a4 )
                    {
                      *a4 = v33;
                    }
                    else if ( v33 )
                    {
                      NtClose(v33);
                    }
                    return (unsigned int)v12;
                  }
                }
              }
            }
LABEL_25:
            if ( v33 )
            {
              NtClose(v33);
              v33 = 0LL;
            }
            if ( v21 )
              NtUnmapViewOfSection(-1LL);
            return (unsigned int)v12;
          }
        }
        v28 = 0LL;
        goto LABEL_10;
      }
    }
  }
  return 3221225485LL;
}
