/*
 * XREFs of LdrpMapResourceFile @ 0x18003CD20
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180015320 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     RtlReleaseRelativeName @ 0x18003D350 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     ZwCreateFile @ 0x1800A5B60 (ZwCreateFile.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, __int128 *a2, char a3, HANDLE *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v9; // r15
  __int64 v10; // rax
  int v11; // ebx
  int v13; // edi
  __int128 v14; // xmm0
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ecx
  _QWORD *v19; // rcx
  HANDLE v20; // [rsp+60h] [rbp-69h] BYREF
  __int64 v21; // [rsp+68h] [rbp-61h] BYREF
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
  HANDLE Handle; // [rsp+120h] [rbp+57h] BYREF

  Handle = 0LL;
  v20 = 0LL;
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
          v11 = -1073741701;
          goto LABEL_6;
        }
        v13 = *(_WORD *)(v10 + 72) < 6u ? 8 : 2;
        if ( a3 )
        {
          v14 = *a2;
          v15 = 0LL;
          v26 = 0LL;
          v27 = 48;
          v24 = v14;
        }
        else
        {
          v11 = RtlDosPathNameToRelativeNtPathName_U_WithStatus(*((_QWORD *)a2 + 1), (__int64)&v24, 0LL, (__int64)&v25);
          if ( v11 < 0 )
            goto LABEL_6;
          v15 = *((_QWORD *)&v24 + 1);
          if ( (_WORD)v25 )
          {
            v16 = v26;
            v24 = v25;
          }
          else
          {
            v16 = 0LL;
            v26 = 0LL;
          }
          v27 = 48;
          v28 = v16;
          if ( v15 )
            goto LABEL_19;
        }
        v28 = 0LL;
LABEL_19:
        v30 = 64;
        v29 = &v24;
        v31 = 0LL;
        v11 = ZwCreateFile(&Handle, 2148532352LL, &v27, v32, 0LL, 0, 5, 1, 0, 0LL, 0);
        if ( v15 )
        {
          RtlReleaseRelativeName(&v25);
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
        }
        if ( v11 >= 0 )
        {
          v11 = NtCreateSection(&v20, 983045LL, 0LL);
          if ( v11 >= 0 )
          {
            v23 = 0LL;
            v11 = ZwMapViewOfSection(v20, -1LL, &v21, 0LL, 0LL, &v23, &v22, 1, 0, v13);
            if ( v20 )
            {
              NtClose(v20);
              v20 = 0LL;
            }
            if ( v11 >= 0 )
            {
              v17 = RtlImageNtHeader(v21);
              v18 = v11;
              if ( !v17 )
                v18 = -1073741701;
              v11 = v18;
              if ( v18 >= 0 )
              {
                v19 = a6;
                *v9 = v21;
                if ( v19 )
                  *v19 = v22;
                if ( a4 )
                {
                  *a4 = Handle;
                }
                else if ( Handle )
                {
                  NtClose(Handle);
                }
                return (unsigned int)v11;
              }
            }
          }
        }
LABEL_6:
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0LL;
        }
        if ( v21 )
          NtUnmapViewOfSection(-1LL, v21);
        return (unsigned int)v11;
      }
    }
  }
  return 3221225485LL;
}
