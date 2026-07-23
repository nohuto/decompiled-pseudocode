/*
 * XREFs of CmpFindControlSet @ 0x140523A10
 * Callers:
 *     CmGetSystemDriverList @ 0x140753C54 (CmGetSystemDriverList.c)
 *     CmGetSystemControlValues @ 0x140754FCC (CmGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     sprintf_s @ 0x14014975C (sprintf_s.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpFindValueByName @ 0x1404A8CEC (CmpFindValueByName.c)
 *     CmpValueToData @ 0x140523DB4 (CmpValueToData.c)
 */

__int64 __fastcall CmpFindControlSet(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // edi
  unsigned int v6; // r13d
  __int64 v8; // rsi
  __int64 v9; // rsi
  unsigned int ValueByName; // esi
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rax
  _DWORD *v14; // r14
  __int64 v15; // rax
  NTSTATUS v16; // eax
  ULONG_PTR v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // esi
  __int64 v21; // rax
  _DWORD *v22; // rcx
  int *v23; // rdx
  _BYTE *v25; // rsi
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v30; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v31; // [rsp+4Ch] [rbp-B4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  ANSI_STRING SourceString; // [rsp+60h] [rbp-A0h] BYREF
  char DstBuf[128]; // [rsp+70h] [rbp-90h] BYREF
  char v35; // [rsp+F0h] [rbp-10h] BYREF

  v4 = -1;
  v27 = -1;
  v28 = -1;
  v30 = -1LL;
  v6 = a2;
  v26 = -1;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, &v26);
  if ( v8 )
  {
    RtlInitUnicodeString(&DestinationString, L"select");
    CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v8, &DestinationString, &v29);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v26);
    if ( v29 != -1 )
    {
      v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, v29, &v26);
      if ( v9 )
      {
        RtlInitUnicodeString(&DestinationString, L"AutoSelect");
        ValueByName = CmpFindValueByName(BugCheckParameter3, v9);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v26);
        if ( ValueByName == -1 )
        {
          *a4 = 1;
        }
        else
        {
          if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  ValueByName,
                  &v27) )
            return v4;
          v25 = (_BYTE *)CmpValueToData(BugCheckParameter3, (__int64)&v30 + 4);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v27);
          if ( !v25 )
            return v4;
          *a4 = *v25;
          (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter3 + 16))(BugCheckParameter3, (char *)&v30 + 4);
        }
        v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                BugCheckParameter3,
                v29,
                &v26);
        if ( v11 )
        {
          v12 = CmpFindValueByName(BugCheckParameter3, v11);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v26);
          if ( v12 != -1 )
          {
            v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    v12,
                    &v27);
            if ( v13 )
            {
              if ( *(_DWORD *)(v13 + 12) != 4 )
              {
                v23 = &v27;
                goto LABEL_25;
              }
              v14 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v28);
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v27);
              if ( v14 )
              {
                sprintf_s(DstBuf, 0x80uLL, "ControlSet%03d", *v14);
                v15 = -1LL;
                do
                  ++v15;
                while ( DstBuf[v15] );
                SourceString.MaximumLength = v15;
                SourceString.Length = v15;
                *(_DWORD *)&DestinationString.Length = 0x1000000;
                SourceString.Buffer = DstBuf;
                DestinationString.Buffer = (wchar_t *)&v35;
                v16 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
                v17 = BugCheckParameter3;
                if ( v16 < 0
                  || (v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                              BugCheckParameter3,
                              v6,
                              &v26),
                      v17 = BugCheckParameter3,
                      !v18)
                  || (CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v18, &DestinationString, &v31),
                      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v26),
                      v17 = BugCheckParameter3,
                      v31 == -1) )
                {
                  v23 = &v28;
                  goto LABEL_26;
                }
                v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                        BugCheckParameter3,
                        v29,
                        &v26);
                if ( !v19 )
                  goto LABEL_24;
                RtlInitUnicodeString(&DestinationString, L"Current");
                v20 = CmpFindValueByName(BugCheckParameter3, v19);
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v26);
                if ( v20 == -1 )
                  goto LABEL_23;
                v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                        BugCheckParameter3,
                        v20,
                        &v27);
                if ( v21 )
                {
                  if ( *(_DWORD *)(v21 + 12) != 4 )
                  {
LABEL_22:
                    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v27);
LABEL_23:
                    v4 = v31;
                    goto LABEL_24;
                  }
                  v22 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v30);
                  if ( v22 )
                  {
                    *v22 = *v14;
                    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v30);
                    goto LABEL_22;
                  }
                }
LABEL_24:
                v23 = &v28;
LABEL_25:
                v17 = BugCheckParameter3;
LABEL_26:
                (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(v17, v23);
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
