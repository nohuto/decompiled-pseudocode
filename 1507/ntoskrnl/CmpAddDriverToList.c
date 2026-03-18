/*
 * XREFs of CmpAddDriverToList @ 0x1407BAEFC
 * Callers:
 *     CmpFindDrivers @ 0x1407BB424 (CmpFindDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CmpFindValueByName @ 0x140429D14 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x14059110C (CmpValueToData.c)
 *     CmpFindTagIndex @ 0x1407BAD70 (CmpFindTagIndex.c)
 *     CmpGetNodeName @ 0x1407BB644 (CmpGetNodeName.c)
 */

char CmpAddDriverToList(__int64 BugCheckParameter3, __int64 a2, unsigned int a3, ...)
{
  wchar_t *Buffer; // rsi
  __int64 v4; // r14
  UNICODE_STRING *v5; // r15
  UNICODE_STRING *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // r12
  const WCHAR *NodeName; // rax
  const WCHAR *v11; // r13
  UNICODE_STRING *v12; // rax
  unsigned __int16 v13; // cx
  UNICODE_STRING *v14; // r13
  unsigned int ValueByName; // eax
  unsigned int v16; // r12d
  ULONG_PTR v17; // rax
  __int64 v18; // r12
  unsigned int v19; // r12d
  wchar_t *v20; // rax
  unsigned __int16 v21; // ax
  wchar_t *v22; // rcx
  UNICODE_STRING v23; // xmm0
  wchar_t *v24; // rcx
  wchar_t *v25; // rax
  UNICODE_STRING v26; // xmm0
  __int64 v27; // rcx
  int v28; // r13d
  unsigned int v29; // eax
  unsigned int v30; // r12d
  ULONG_PTR v31; // rax
  _DWORD *v32; // r12
  unsigned int v33; // eax
  unsigned int v34; // r12d
  ULONG_PTR v35; // rax
  int v36; // r12d
  unsigned __int16 v37; // ax
  unsigned int v38; // eax
  unsigned int v39; // r13d
  __int64 v40; // r13
  unsigned int v41; // eax
  ULONG_PTR v43; // rax
  unsigned __int16 v44; // ax
  __int64 v45; // rcx
  wchar_t *v46; // rcx
  wchar_t *v47; // rcx
  wchar_t *v48; // rcx
  size_t Size; // [rsp+38h] [rbp-49h] BYREF
  __int64 v50; // [rsp+40h] [rbp-41h]
  __int64 v51; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING v52; // [rsp+50h] [rbp-31h] BYREF
  int v53; // [rsp+60h] [rbp-21h] BYREF
  __int64 v54; // [rsp+64h] [rbp-1Dh] BYREF
  _DWORD v55[5]; // [rsp+6Ch] [rbp-15h] BYREF
  const WCHAR *v56; // [rsp+80h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+7h] BYREF
  int v58; // [rsp+D8h] [rbp+57h] BYREF
  unsigned int v59; // [rsp+E8h] [rbp+67h]
  __int64 v60; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+6Fh]
  wchar_t *v62; // [rsp+F8h] [rbp+77h]
  __int64 v63; // [rsp+100h] [rbp+7Fh]
  va_list va1; // [rsp+108h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v60 = va_arg(va1, _QWORD);
  v62 = va_arg(va1, wchar_t *);
  v63 = va_arg(va1, _QWORD);
  v59 = a3;
  v53 = -1;
  Buffer = 0LL;
  v55[0] = -1;
  v4 = 0LL;
  v54 = -1LL;
  v5 = 0LL;
  LODWORD(v51) = -1;
  v6 = 0LL;
  v58 = -1;
  LOWORD(v60) = 0;
  *(_QWORD *)&v52.Length = 0LL;
  *(_QWORD *)&v55[1] = 0LL;
  LOBYTE(v63) = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, &v53);
  v50 = v8;
  v9 = v8;
  if ( v8 )
  {
    NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v8, (__int64 *)va);
    v56 = NodeName;
    v11 = NodeName;
    if ( NodeName )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) < 0
        || (v12 = (UNICODE_STRING *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(
                                      120LL,
                                      0LL,
                                      540101955LL),
            (v6 = v12) == 0LL) )
      {
        v40 = v9;
        goto LABEL_32;
      }
      memset(v12, 0, 0x78uLL);
      v13 = v60;
      v5 = v6;
      v6[2].Buffer = 0LL;
      v6[1].Buffer = 0LL;
      v6[6].Buffer = (wchar_t *)v11;
      v56 = 0LL;
      v14 = v6 + 6;
      v6[6].Length = v13 - 2;
      v6[6].MaximumLength = v13;
      ValueByName = CmpFindValueByName(BugCheckParameter3, v9, (int)&CmpImagePathString);
      v16 = ValueByName;
      if ( ValueByName == -1 )
      {
        v45 = (unsigned int)v14->Length + 46;
        v52.Length = 0;
        v52.MaximumLength = v45;
        v52.Buffer = (wchar_t *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(
                                  v45,
                                  0LL,
                                  540233027LL);
        if ( v52.Buffer )
        {
          if ( RtlAppendUnicodeToString(&v52, L"System32\\Drivers\\") < 0
            || RtlAppendUnicodeStringToString(&v52, v6 + 6) < 0
            || RtlAppendUnicodeToString(&v52, L".sys") < 0 )
          {
            Buffer = v52.Buffer;
            goto LABEL_56;
          }
          Buffer = v52.Buffer;
LABEL_10:
          v21 = v14->Length + 104;
          LOWORD(v55[1]) = 0;
          HIWORD(v55[1]) = v21;
          *(_QWORD *)&v55[3] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                                 v21,
                                 0LL,
                                 540298563LL);
          v4 = *(_QWORD *)&v55[3];
          if ( *(_QWORD *)&v55[3] )
          {
            if ( RtlAppendUnicodeStringToString((PUNICODE_STRING)&v55[1], &CmpServicesKeyName) < 0
              || RtlAppendUnicodeStringToString((PUNICODE_STRING)&v55[1], v6 + 6) < 0 )
            {
              v4 = *(_QWORD *)&v55[3];
            }
            else
            {
              v22 = v6[1].Buffer;
              if ( v22 )
                (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v22, v6[1].Length);
              v23 = v52;
              v24 = v6[2].Buffer;
              Buffer = 0LL;
              *(_QWORD *)&v52.Length = 0LL;
              v6[1] = v23;
              if ( v24 )
                (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v24, v6[2].Length);
              v25 = v62;
              v4 = 0LL;
              v26 = *(UNICODE_STRING *)&v55[1];
              *(_QWORD *)&v55[1] = 0LL;
              v6[2] = v26;
              v27 = *(_QWORD *)v25;
              *(_QWORD *)&v6->Length = *(_QWORD *)v25;
              v6->Buffer = v25;
              if ( *(wchar_t **)(v27 + 8) != v25 )
                __fastfail(3u);
              v28 = v50;
              *(_QWORD *)(v27 + 8) = v6;
              *(_QWORD *)v25 = v6;
              v5 = 0LL;
              v29 = CmpFindValueByName(BugCheckParameter3, v28, (int)&CmpErrorControlString);
              v30 = v29;
              if ( v29 == -1 )
              {
                *(_DWORD *)(&v6[7].MaximumLength + 1) = 1;
              }
              else
              {
                v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
                        BugCheckParameter3,
                        v29,
                        &v58);
                if ( !v31 )
                  goto LABEL_56;
                v32 = CmpValueToData(BugCheckParameter3, v30, v31, (unsigned int *)&Size, (__int64)&v54 + 4);
                (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v58);
                if ( !v32 )
                  goto LABEL_56;
                *(_DWORD *)(&v6[7].MaximumLength + 1) = *v32;
                (*(void (__fastcall **)(__int64, char *))(BugCheckParameter3 + 16))(
                  BugCheckParameter3,
                  (char *)&v54 + 4);
              }
              v33 = CmpFindValueByName(BugCheckParameter3, v28, (int)&CmpGroupString);
              v34 = v33;
              if ( v33 == -1 )
              {
                v36 = (_DWORD)v6 + 80;
                v6[5].Length = 0;
                v6[5].MaximumLength = 0;
                v6[5].Buffer = 0LL;
                goto LABEL_27;
              }
              v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
                      BugCheckParameter3,
                      v33,
                      &v58);
              if ( v35 )
              {
                v6[5].Buffer = (wchar_t *)CmpValueToData(
                                            BugCheckParameter3,
                                            v34,
                                            v35,
                                            (unsigned int *)&Size,
                                            (__int64)&v54);
                (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v58);
                if ( v6[5].Buffer )
                {
                  (*(void (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v54);
                  v36 = (_DWORD)v6 + 80;
                  v37 = Size - 2;
                  v6[5].Length = Size - 2;
                  if ( v37 <= (unsigned __int16)Size )
                  {
                    v6[5].MaximumLength = v37;
LABEL_27:
                    v38 = CmpFindValueByName(BugCheckParameter3, v28, (int)&CmpDriverDependencyString);
                    v39 = v38;
                    if ( v38 == -1 )
                    {
                      *(_DWORD *)&v6[4].Length = 0;
                      v6[4].Buffer = 0LL;
LABEL_29:
                      v40 = v50;
                      v41 = CmpFindValueByName(BugCheckParameter3, v50, (int)&CmpTagString);
                      if ( v41 == -1 )
                        *(_DWORD *)&v6[7].Length = -1;
                      else
                        *(_DWORD *)&v6[7].Length = CmpFindTagIndex(BugCheckParameter3, v41, v59, v36);
                      LOBYTE(v63) = 1;
LABEL_32:
                      if ( v56 )
                        (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(
                          v56,
                          (unsigned __int16)v60);
                      goto LABEL_34;
                    }
                    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
                            BugCheckParameter3,
                            v38,
                            &v58);
                    if ( v43 )
                    {
                      v6[4].Buffer = (wchar_t *)CmpValueToData(
                                                  BugCheckParameter3,
                                                  v39,
                                                  v43,
                                                  (unsigned int *)&Size,
                                                  (__int64)v55);
                      (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v58);
                      if ( v6[4].Buffer )
                      {
                        (*(void (__fastcall **)(__int64, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v55);
                        v44 = Size - 2;
                        v6[4].Length = Size - 2;
                        if ( v44 <= (unsigned __int16)Size )
                        {
                          v6[4].MaximumLength = v44;
                          goto LABEL_29;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_56:
          v40 = v50;
          goto LABEL_34;
        }
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
                BugCheckParameter3,
                ValueByName,
                &v58);
        if ( !v17 )
          goto LABEL_56;
        *(_QWORD *)&DestinationString.Length = CmpValueToData(
                                                 BugCheckParameter3,
                                                 v16,
                                                 v17,
                                                 (unsigned int *)&Size,
                                                 (__int64)&v51);
        v18 = *(_QWORD *)&DestinationString.Length;
        (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v58);
        if ( !v18 )
          goto LABEL_56;
        v19 = Size;
        v20 = (wchar_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                           (unsigned int)Size,
                           0LL,
                           540233027LL);
        v52.Buffer = v20;
        Buffer = v20;
        if ( v20 )
        {
          memmove(v20, *(const void **)&DestinationString.Length, v19);
          v52.Length = v19;
          v52.MaximumLength = v19;
          (*(void (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v51);
          goto LABEL_10;
        }
        (*(void (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v51);
      }
      v40 = v50;
      goto LABEL_36;
    }
    v40 = v9;
  }
  else
  {
    v40 = 0LL;
  }
LABEL_34:
  if ( Buffer )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(Buffer, v52.Length);
LABEL_36:
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v4, LOWORD(v55[1]));
  if ( v5 )
  {
    v46 = v5[1].Buffer;
    if ( v46 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v46, v5[1].Length);
    v47 = v5[2].Buffer;
    if ( v47 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v47, v5[2].Length);
    v48 = v6[6].Buffer;
    if ( v48 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v48, v6[6].Length);
    (*(void (__fastcall **)(UNICODE_STRING *, __int64))(BugCheckParameter3 + 32))(v6, 120LL);
  }
  if ( v40 )
    (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v53);
  return v63;
}
