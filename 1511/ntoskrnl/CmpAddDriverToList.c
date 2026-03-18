/*
 * XREFs of CmpAddDriverToList @ 0x1407547E0
 * Callers:
 *     CmpFindDrivers @ 0x140754D08 (CmpFindDrivers.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpFindValueByName @ 0x1404A8CEC (CmpFindValueByName.c)
 *     CmpValueToData @ 0x140523DB4 (CmpValueToData.c)
 *     CmpFindTagIndex @ 0x140754654 (CmpFindTagIndex.c)
 *     CmpGetNodeName @ 0x140754F28 (CmpGetNodeName.c)
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
  __int64 v28; // r13
  unsigned int v29; // eax
  unsigned int v30; // r12d
  ULONG_PTR v31; // rax
  _DWORD *v32; // r12
  unsigned int v33; // eax
  unsigned int v34; // r12d
  ULONG_PTR v35; // rax
  unsigned __int16 v36; // ax
  unsigned int v37; // eax
  unsigned int v38; // r13d
  __int64 v39; // r13
  unsigned int v40; // eax
  ULONG_PTR v42; // rax
  unsigned __int16 v43; // ax
  __int64 v44; // rcx
  wchar_t *v45; // rcx
  wchar_t *v46; // rcx
  wchar_t *v47; // rcx
  size_t Size; // [rsp+38h] [rbp-49h] BYREF
  __int64 v49; // [rsp+40h] [rbp-41h]
  __int64 v50; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING v51; // [rsp+50h] [rbp-31h] BYREF
  int v52; // [rsp+60h] [rbp-21h] BYREF
  __int64 v53; // [rsp+64h] [rbp-1Dh] BYREF
  _DWORD v54[5]; // [rsp+6Ch] [rbp-15h] BYREF
  const WCHAR *v55; // [rsp+80h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+7h] BYREF
  int v57; // [rsp+D8h] [rbp+57h] BYREF
  unsigned int v58; // [rsp+E8h] [rbp+67h]
  __int64 v59; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+6Fh]
  wchar_t *v61; // [rsp+F8h] [rbp+77h]
  __int64 v62; // [rsp+100h] [rbp+7Fh]
  va_list va1; // [rsp+108h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v59 = va_arg(va1, _QWORD);
  v61 = va_arg(va1, wchar_t *);
  v62 = va_arg(va1, _QWORD);
  v58 = a3;
  v52 = -1;
  Buffer = 0LL;
  v54[0] = -1;
  v4 = 0LL;
  v53 = -1LL;
  v5 = 0LL;
  LODWORD(v50) = -1;
  v6 = 0LL;
  v57 = -1;
  LOWORD(v59) = 0;
  *(_QWORD *)&v51.Length = 0LL;
  *(_QWORD *)&v54[1] = 0LL;
  LOBYTE(v62) = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, &v52);
  v49 = v8;
  v9 = v8;
  if ( v8 )
  {
    NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v8, (__int64 *)va);
    v55 = NodeName;
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
        v39 = v9;
        goto LABEL_32;
      }
      memset(v12, 0, 0x78uLL);
      v13 = v59;
      v5 = v6;
      v6[2].Buffer = 0LL;
      v6[1].Buffer = 0LL;
      v6[6].Buffer = (wchar_t *)v11;
      v55 = 0LL;
      v14 = v6 + 6;
      v6[6].Length = v13 - 2;
      v6[6].MaximumLength = v13;
      ValueByName = CmpFindValueByName(BugCheckParameter3, v9);
      v16 = ValueByName;
      if ( ValueByName == -1 )
      {
        v44 = (unsigned int)v14->Length + 46;
        v51.Length = 0;
        v51.MaximumLength = v44;
        v51.Buffer = (wchar_t *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(
                                  v44,
                                  0LL,
                                  540233027LL);
        if ( v51.Buffer )
        {
          if ( RtlAppendUnicodeToString(&v51, L"System32\\Drivers\\") < 0
            || RtlAppendUnicodeStringToString(&v51, v6 + 6) < 0
            || RtlAppendUnicodeToString(&v51, L".sys") < 0 )
          {
            Buffer = v51.Buffer;
            goto LABEL_56;
          }
          Buffer = v51.Buffer;
LABEL_10:
          v21 = v14->Length + 104;
          LOWORD(v54[1]) = 0;
          HIWORD(v54[1]) = v21;
          *(_QWORD *)&v54[3] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                                 v21,
                                 0LL,
                                 540298563LL);
          v4 = *(_QWORD *)&v54[3];
          if ( *(_QWORD *)&v54[3] )
          {
            if ( RtlAppendUnicodeStringToString((PUNICODE_STRING)&v54[1], &CmpServicesKeyName) < 0
              || RtlAppendUnicodeStringToString((PUNICODE_STRING)&v54[1], v6 + 6) < 0 )
            {
              v4 = *(_QWORD *)&v54[3];
            }
            else
            {
              v22 = v6[1].Buffer;
              if ( v22 )
                (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v22, v6[1].Length);
              v23 = v51;
              v24 = v6[2].Buffer;
              Buffer = 0LL;
              *(_QWORD *)&v51.Length = 0LL;
              v6[1] = v23;
              if ( v24 )
                (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v24, v6[2].Length);
              v25 = v61;
              v4 = 0LL;
              v26 = *(UNICODE_STRING *)&v54[1];
              *(_QWORD *)&v54[1] = 0LL;
              v6[2] = v26;
              v27 = *(_QWORD *)v25;
              *(_QWORD *)&v6->Length = *(_QWORD *)v25;
              v6->Buffer = v25;
              if ( *(wchar_t **)(v27 + 8) != v25 )
                __fastfail(3u);
              v28 = v49;
              *(_QWORD *)(v27 + 8) = v6;
              *(_QWORD *)v25 = v6;
              v5 = 0LL;
              v29 = CmpFindValueByName(BugCheckParameter3, v28);
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
                        &v57);
                if ( !v31 )
                  goto LABEL_56;
                v32 = CmpValueToData(BugCheckParameter3, v30, v31, (unsigned int *)&Size, (__int64)&v53 + 4);
                (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v57);
                if ( !v32 )
                  goto LABEL_56;
                *(_DWORD *)(&v6[7].MaximumLength + 1) = *v32;
                (*(void (__fastcall **)(__int64, char *))(BugCheckParameter3 + 16))(
                  BugCheckParameter3,
                  (char *)&v53 + 4);
              }
              v33 = CmpFindValueByName(BugCheckParameter3, v28);
              v34 = v33;
              if ( v33 == -1 )
              {
                v6[5].Length = 0;
                v6[5].MaximumLength = 0;
                v6[5].Buffer = 0LL;
                goto LABEL_27;
              }
              v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
                      BugCheckParameter3,
                      v33,
                      &v57);
              if ( v35 )
              {
                v6[5].Buffer = (wchar_t *)CmpValueToData(
                                            BugCheckParameter3,
                                            v34,
                                            v35,
                                            (unsigned int *)&Size,
                                            (__int64)&v53);
                (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v57);
                if ( v6[5].Buffer )
                {
                  (*(void (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v53);
                  v36 = Size - 2;
                  v6[5].Length = Size - 2;
                  if ( v36 <= (unsigned __int16)Size )
                  {
                    v6[5].MaximumLength = v36;
LABEL_27:
                    v37 = CmpFindValueByName(BugCheckParameter3, v28);
                    v38 = v37;
                    if ( v37 == -1 )
                    {
                      *(_DWORD *)&v6[4].Length = 0;
                      v6[4].Buffer = 0LL;
LABEL_29:
                      v39 = v49;
                      v40 = CmpFindValueByName(BugCheckParameter3, v49);
                      if ( v40 == -1 )
                        *(_DWORD *)&v6[7].Length = -1;
                      else
                        *(_DWORD *)&v6[7].Length = CmpFindTagIndex(BugCheckParameter3, v40, v58);
                      LOBYTE(v62) = 1;
LABEL_32:
                      if ( v55 )
                        (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(
                          v55,
                          (unsigned __int16)v59);
                      goto LABEL_34;
                    }
                    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
                            BugCheckParameter3,
                            v37,
                            &v57);
                    if ( v42 )
                    {
                      v6[4].Buffer = (wchar_t *)CmpValueToData(
                                                  BugCheckParameter3,
                                                  v38,
                                                  v42,
                                                  (unsigned int *)&Size,
                                                  (__int64)v54);
                      (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v57);
                      if ( v6[4].Buffer )
                      {
                        (*(void (__fastcall **)(__int64, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v54);
                        v43 = Size - 2;
                        v6[4].Length = Size - 2;
                        if ( v43 <= (unsigned __int16)Size )
                        {
                          v6[4].MaximumLength = v43;
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
          v39 = v49;
          goto LABEL_34;
        }
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
                BugCheckParameter3,
                ValueByName,
                &v57);
        if ( !v17 )
          goto LABEL_56;
        *(_QWORD *)&DestinationString.Length = CmpValueToData(
                                                 BugCheckParameter3,
                                                 v16,
                                                 v17,
                                                 (unsigned int *)&Size,
                                                 (__int64)&v50);
        v18 = *(_QWORD *)&DestinationString.Length;
        (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v57);
        if ( !v18 )
          goto LABEL_56;
        v19 = Size;
        v20 = (wchar_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                           (unsigned int)Size,
                           0LL,
                           540233027LL);
        v51.Buffer = v20;
        Buffer = v20;
        if ( v20 )
        {
          memmove(v20, *(const void **)&DestinationString.Length, v19);
          v51.Length = v19;
          v51.MaximumLength = v19;
          (*(void (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v50);
          goto LABEL_10;
        }
        (*(void (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v50);
      }
      v39 = v49;
      goto LABEL_36;
    }
    v39 = v9;
  }
  else
  {
    v39 = 0LL;
  }
LABEL_34:
  if ( Buffer )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(Buffer, v51.Length);
LABEL_36:
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v4, LOWORD(v54[1]));
  if ( v5 )
  {
    v45 = v5[1].Buffer;
    if ( v45 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v45, v5[1].Length);
    v46 = v5[2].Buffer;
    if ( v46 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v46, v5[2].Length);
    v47 = v6[6].Buffer;
    if ( v47 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v47, v6[6].Length);
    (*(void (__fastcall **)(UNICODE_STRING *, __int64))(BugCheckParameter3 + 32))(v6, 120LL);
  }
  if ( v39 )
    (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v52);
  return v62;
}
