/*
 * XREFs of CmpFindControlSet @ 0x140590E08
 * Callers:
 *     CmGetSystemDriverList @ 0x1407BA76C (CmGetSystemDriverList.c)
 *     CmGetSystemControlValues @ 0x1407BBAF0 (CmGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401777DC (sprintf_s.c)
 *     CmpFindValueByName @ 0x140429D14 (CmpFindValueByName.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     CmpValueToData @ 0x14059110C (CmpValueToData.c)
 */

__int64 __fastcall CmpFindControlSet(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, _BYTE *a4)
{
  unsigned int v4; // edi
  unsigned int v7; // r13d
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // esi
  unsigned int ValueByName; // esi
  __int64 v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rax
  _DWORD *v16; // r14
  __int64 v17; // rax
  NTSTATUS v18; // eax
  ULONG_PTR v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned int v22; // esi
  __int64 v23; // rax
  _DWORD *v24; // rcx
  int *v25; // rdx
  _BYTE *v27; // rsi
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v32; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  ANSI_STRING SourceString; // [rsp+60h] [rbp-A0h] BYREF
  char DstBuf[128]; // [rsp+70h] [rbp-90h] BYREF
  char v37; // [rsp+F0h] [rbp-10h] BYREF

  v4 = -1;
  v29 = -1;
  v30 = -1;
  v32 = -1LL;
  v7 = a2;
  v28 = -1;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, &v28);
  if ( v9 )
  {
    RtlInitUnicodeString(&DestinationString, L"select");
    CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v9, &DestinationString.Length, &v31);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v28);
    if ( v31 != -1 )
    {
      v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v31,
              &v28);
      v11 = v10;
      if ( v10 )
      {
        RtlInitUnicodeString(&DestinationString, L"AutoSelect");
        ValueByName = CmpFindValueByName(BugCheckParameter3, v11, (int)&DestinationString);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v28);
        if ( ValueByName == -1 )
        {
          *a4 = 1;
        }
        else
        {
          if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  ValueByName,
                  &v29) )
            return v4;
          v27 = (_BYTE *)CmpValueToData(BugCheckParameter3, (__int64)&v32 + 4);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v29);
          if ( !v27 )
            return v4;
          *a4 = *v27;
          (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter3 + 16))(BugCheckParameter3, (char *)&v32 + 4);
        }
        v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                BugCheckParameter3,
                v31,
                &v28);
        if ( v13 )
        {
          v14 = CmpFindValueByName(BugCheckParameter3, v13, a3);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v28);
          if ( v14 != -1 )
          {
            v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    v14,
                    &v29);
            if ( v15 )
            {
              if ( *(_DWORD *)(v15 + 12) != 4 )
              {
                v25 = &v29;
                goto LABEL_25;
              }
              v16 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v30);
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v29);
              if ( v16 )
              {
                sprintf_s(DstBuf, 0x80uLL, "ControlSet%03d", *v16);
                v17 = -1LL;
                do
                  ++v17;
                while ( DstBuf[v17] );
                SourceString.MaximumLength = v17;
                SourceString.Length = v17;
                *(_DWORD *)&DestinationString.Length = 0x1000000;
                SourceString.Buffer = DstBuf;
                DestinationString.Buffer = (wchar_t *)&v37;
                v18 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
                v19 = BugCheckParameter3;
                if ( v18 < 0
                  || (v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                              BugCheckParameter3,
                              v7,
                              &v28),
                      v19 = BugCheckParameter3,
                      !v20)
                  || (CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v20, &DestinationString.Length, &v33),
                      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v28),
                      v19 = BugCheckParameter3,
                      v33 == -1) )
                {
                  v25 = &v30;
                  goto LABEL_26;
                }
                v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                        BugCheckParameter3,
                        v31,
                        &v28);
                if ( !v21 )
                  goto LABEL_24;
                RtlInitUnicodeString(&DestinationString, L"Current");
                v22 = CmpFindValueByName(BugCheckParameter3, v21, (int)&DestinationString);
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v28);
                if ( v22 == -1 )
                  goto LABEL_23;
                v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                        BugCheckParameter3,
                        v22,
                        &v29);
                if ( v23 )
                {
                  if ( *(_DWORD *)(v23 + 12) != 4 )
                  {
LABEL_22:
                    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v29);
LABEL_23:
                    v4 = v33;
                    goto LABEL_24;
                  }
                  v24 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v32);
                  if ( v24 )
                  {
                    *v24 = *v16;
                    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v32);
                    goto LABEL_22;
                  }
                }
LABEL_24:
                v25 = &v30;
LABEL_25:
                v19 = BugCheckParameter3;
LABEL_26:
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(v19, v25);
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
