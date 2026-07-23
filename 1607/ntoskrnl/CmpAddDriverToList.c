/*
 * XREFs of CmpAddDriverToList @ 0x1407AFE90
 * Callers:
 *     CmpFindDrivers @ 0x1407B03C8 (CmpFindDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x1405606E0 (CmpValueToData.c)
 *     CmpFindTagIndex @ 0x1407AFCE0 (CmpFindTagIndex.c)
 *     CmpGetNodeName @ 0x1407B060C (CmpGetNodeName.c)
 */

char CmpAddDriverToList(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3, ...)
{
  wchar_t *Buffer; // rsi
  wchar_t *v5; // r14
  UNICODE_STRING *v6; // r15
  UNICODE_STRING *v7; // rdi
  __int64 v8; // rax
  const WCHAR *NodeName; // rax
  const WCHAR *v10; // r12
  UNICODE_STRING *v11; // rax
  unsigned __int16 v12; // cx
  int v13; // edx
  UNICODE_STRING *v14; // r13
  unsigned int ValueByName; // eax
  unsigned int v16; // r12d
  ULONG_PTR v17; // rax
  void *v18; // r12
  unsigned int v19; // r12d
  wchar_t *v20; // rax
  unsigned __int16 v21; // ax
  wchar_t *v22; // rcx
  UNICODE_STRING v23; // xmm0
  wchar_t *v24; // rcx
  UNICODE_STRING v25; // xmm0
  __int64 v26; // rax
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
  unsigned int v40; // eax
  char v41; // r13
  ULONG_PTR v43; // rax
  unsigned __int16 v44; // ax
  __int64 v45; // rcx
  wchar_t *v46; // rcx
  wchar_t *v47; // rcx
  wchar_t *v48; // rcx
  _DWORD v49[2]; // [rsp+38h] [rbp-59h] BYREF
  UNICODE_STRING v50; // [rsp+40h] [rbp-51h] BYREF
  __int64 v51; // [rsp+50h] [rbp-41h] BYREF
  __int64 v52; // [rsp+58h] [rbp-39h] BYREF
  __int64 v53; // [rsp+60h] [rbp-31h] BYREF
  __int64 v54; // [rsp+68h] [rbp-29h] BYREF
  __int64 v55; // [rsp+70h] [rbp-21h]
  _DWORD v56[2]; // [rsp+78h] [rbp-19h] BYREF
  UNICODE_STRING Destination; // [rsp+80h] [rbp-11h] BYREF
  void *Src; // [rsp+90h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp+7h] BYREF
  size_t Size; // [rsp+E8h] [rbp+57h] BYREF
  unsigned int v61; // [rsp+F8h] [rbp+67h]
  __int64 v62; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va; // [rsp+100h] [rbp+6Fh]
  __int64 v64; // [rsp+108h] [rbp+77h]
  __int64 v65; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v62 = va_arg(va1, _QWORD);
  v64 = va_arg(va1, _QWORD);
  v65 = va_arg(va1, _QWORD);
  v61 = a3;
  v56[1] = 0;
  v56[0] = -1;
  Buffer = 0LL;
  v54 = 0xFFFFFFFFLL;
  v5 = 0LL;
  v53 = 0xFFFFFFFFLL;
  v6 = 0LL;
  v52 = 0xFFFFFFFFLL;
  v7 = 0LL;
  v51 = 0xFFFFFFFFLL;
  v49[0] = -1;
  v49[1] = 0;
  LOWORD(v62) = 0;
  *(_QWORD *)&v50.Length = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  LOBYTE(v65) = 0;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, v56);
  v55 = v8;
  if ( !v8 )
    goto LABEL_58;
  NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v8, (__int64 *)va);
  v10 = NodeName;
  if ( !NodeName )
    goto LABEL_61;
  if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) < 0
    || (v11 = (UNICODE_STRING *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(
                                  120LL,
                                  0LL,
                                  540101955LL),
        (v7 = v11) == 0LL) )
  {
    v41 = 0;
    goto LABEL_32;
  }
  memset(v11, 0, 0x78uLL);
  v12 = v62;
  v13 = v55;
  v6 = v7;
  v7[2].Buffer = 0LL;
  v7[1].Buffer = 0LL;
  v14 = v7 + 6;
  v7[6].Buffer = (wchar_t *)v10;
  v7[6].Length = v12 - 2;
  v7[6].MaximumLength = v12;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v13, (int)&CmpImagePathString);
  v16 = ValueByName;
  if ( ValueByName == -1 )
  {
    v45 = (unsigned int)v14->Length + 46;
    v50.Length = 0;
    v50.MaximumLength = v45;
    v50.Buffer = (wchar_t *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(
                              v45,
                              0LL,
                              540233027LL);
    if ( !v50.Buffer )
    {
      v41 = 0;
      goto LABEL_36;
    }
    if ( RtlAppendUnicodeToString(&v50, L"System32\\Drivers\\") < 0
      || RtlAppendUnicodeStringToString(&v50, v7 + 6) < 0
      || RtlAppendUnicodeToString(&v50, L".sys") < 0 )
    {
      Buffer = v50.Buffer;
      v41 = 0;
      goto LABEL_34;
    }
    Buffer = v50.Buffer;
    goto LABEL_10;
  }
  v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
          BugCheckParameter3,
          ValueByName,
          v49);
  if ( !v17
    || (Src = CmpValueToData(BugCheckParameter3, v16, v17, (unsigned int *)&Size, (__int64)&v51),
        v18 = Src,
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v49),
        !v18) )
  {
LABEL_61:
    v41 = 0;
    goto LABEL_34;
  }
  v19 = Size;
  v20 = (wchar_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                     (unsigned int)Size,
                     0LL,
                     540233027LL);
  v50.Buffer = v20;
  Buffer = v20;
  if ( !v20 )
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v51);
    v41 = 0;
    goto LABEL_36;
  }
  memmove(v20, Src, v19);
  v50.Length = v19;
  v50.MaximumLength = v19;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v51);
LABEL_10:
  v21 = v14->Length + 104;
  Destination.Length = 0;
  Destination.MaximumLength = v21;
  Destination.Buffer = (wchar_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                                    v21,
                                    0LL,
                                    540298563LL);
  v5 = Destination.Buffer;
  if ( Destination.Buffer )
  {
    if ( RtlAppendUnicodeStringToString(&Destination, &CmpServicesKeyName) >= 0
      && RtlAppendUnicodeStringToString(&Destination, v7 + 6) >= 0 )
    {
      v22 = v7[1].Buffer;
      if ( v22 )
        (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v22, v7[1].Length);
      v23 = v50;
      v24 = v7[2].Buffer;
      Buffer = 0LL;
      *(_QWORD *)&v50.Length = 0LL;
      v7[1] = v23;
      if ( v24 )
        (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v24, v7[2].Length);
      v25 = Destination;
      v26 = v64;
      v5 = 0LL;
      *(_QWORD *)&Destination.Length = 0LL;
      v7[2] = v25;
      v27 = *(_QWORD *)v26;
      if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
        __fastfail(3u);
      v28 = v55;
      *(_QWORD *)&v7->Length = v27;
      v7->Buffer = (wchar_t *)v26;
      v6 = 0LL;
      *(_QWORD *)(v27 + 8) = v7;
      *(_QWORD *)v26 = v7;
      v29 = CmpFindValueByName(BugCheckParameter3, v28, (int)&CmpErrorControlString);
      v30 = v29;
      if ( v29 == -1 )
      {
        *(_DWORD *)(&v7[7].MaximumLength + 1) = 1;
      }
      else
      {
        v31 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                BugCheckParameter3,
                v29,
                v49);
        if ( !v31 )
          goto LABEL_58;
        v32 = CmpValueToData(BugCheckParameter3, v30, v31, (unsigned int *)&Size, (__int64)&v52);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v49);
        if ( !v32 )
          goto LABEL_58;
        *(_DWORD *)(&v7[7].MaximumLength + 1) = *v32;
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v52);
      }
      v33 = CmpFindValueByName(BugCheckParameter3, v28, (int)&CmpGroupString);
      v34 = v33;
      if ( v33 == -1 )
      {
        v36 = (_DWORD)v7 + 80;
        v7[5].Length = 0;
        v7[5].MaximumLength = 0;
        v7[5].Buffer = 0LL;
        goto LABEL_27;
      }
      v35 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v33,
              v49);
      if ( v35 )
      {
        v7[5].Buffer = (wchar_t *)CmpValueToData(BugCheckParameter3, v34, v35, (unsigned int *)&Size, (__int64)&v53);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v49);
        if ( v7[5].Buffer )
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v53);
          v36 = (_DWORD)v7 + 80;
          v37 = Size - 2;
          v7[5].Length = Size - 2;
          if ( v37 <= (unsigned __int16)Size )
          {
            v7[5].MaximumLength = v37;
LABEL_27:
            v38 = CmpFindValueByName(BugCheckParameter3, v28, (int)&CmpDriverDependencyString);
            v39 = v38;
            if ( v38 == -1 )
            {
              *(_DWORD *)&v7[4].Length = 0;
              v7[4].Buffer = 0LL;
LABEL_29:
              v40 = CmpFindValueByName(BugCheckParameter3, v55, (int)&CmpTagString);
              if ( v40 == -1 )
                *(_DWORD *)&v7[7].Length = -1;
              else
                *(_DWORD *)&v7[7].Length = CmpFindTagIndex(BugCheckParameter3, v40, v61, v36);
              v41 = 1;
              v10 = 0LL;
LABEL_32:
              if ( v10 )
                (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v10, (unsigned __int16)v62);
              goto LABEL_34;
            }
            v43 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    v38,
                    v49);
            if ( v43 )
            {
              v7[4].Buffer = (wchar_t *)CmpValueToData(
                                          BugCheckParameter3,
                                          v39,
                                          v43,
                                          (unsigned int *)&Size,
                                          (__int64)&v54);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v49);
              if ( v7[4].Buffer )
              {
                (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v54);
                v44 = Size - 2;
                v7[4].Length = Size - 2;
                if ( v44 <= (unsigned __int16)Size )
                {
                  v7[4].MaximumLength = v44;
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
LABEL_58:
      v41 = 0;
      goto LABEL_34;
    }
    v5 = Destination.Buffer;
  }
  v41 = v65;
LABEL_34:
  if ( Buffer )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(Buffer, v50.Length);
LABEL_36:
  if ( v5 )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v5, Destination.Length);
  if ( v6 )
  {
    v46 = v6[1].Buffer;
    if ( v46 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v46, v6[1].Length);
    v47 = v6[2].Buffer;
    if ( v47 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v47, v6[2].Length);
    v48 = v7[6].Buffer;
    if ( v48 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v48, v7[6].Length);
    (*(void (__fastcall **)(UNICODE_STRING *, __int64))(BugCheckParameter3 + 32))(v7, 120LL);
  }
  if ( v55 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v56);
  return v41;
}
