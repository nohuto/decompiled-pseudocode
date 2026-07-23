/*
 * XREFs of CmpFindControlSet @ 0x1405603BC
 * Callers:
 *     CmGetSystemDriverList @ 0x1407AF6CC (CmGetSystemDriverList.c)
 *     CmGetSystemControlValues @ 0x1407B0AC0 (CmGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401530AC (sprintf_s.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404F54C0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpValueToData @ 0x1405606E0 (CmpValueToData.c)
 */

__int64 __fastcall CmpFindControlSet(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, _BYTE *a4)
{
  unsigned int v4; // edi
  unsigned int v7; // r13d
  __int64 v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // rax
  int v12; // esi
  unsigned int ValueByName; // esi
  __int64 v14; // rax
  unsigned int v15; // esi
  __int64 v16; // rax
  _DWORD *v17; // r15
  __int64 v18; // rax
  NTSTATUS v19; // eax
  ULONG_PTR v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // esi
  __int64 v24; // rax
  _DWORD *v25; // rcx
  __int64 *v26; // rdx
  _BYTE *v28; // rsi
  _DWORD v29[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v31[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  ANSI_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  char DstBuf[128]; // [rsp+90h] [rbp-70h] BYREF
  char v38; // [rsp+110h] [rbp+10h] BYREF

  v4 = -1;
  v31[0] = -1;
  v31[1] = 0;
  v32 = 0xFFFFFFFFLL;
  v7 = a2;
  v35 = 0xFFFFFFFFLL;
  v29[0] = -1;
  v29[1] = 0;
  v34 = 0xFFFFFFFFLL;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, v29);
  if ( v9 )
  {
    RtlInitUnicodeString(&DestinationString, L"select");
    CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v9, (__m128i *)&DestinationString, &v30);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29);
    v10 = v30;
    if ( v30 != -1 )
    {
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v30,
              v29);
      v12 = v11;
      if ( v11 )
      {
        RtlInitUnicodeString(&DestinationString, L"AutoSelect");
        ValueByName = CmpFindValueByName(BugCheckParameter3, v12, (int)&DestinationString);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29);
        if ( ValueByName == -1 )
        {
          *a4 = 1;
        }
        else
        {
          if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  ValueByName,
                  v31) )
            return v4;
          v28 = (_BYTE *)CmpValueToData(BugCheckParameter3, (__int64)&v34);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v31);
          if ( !v28 )
            return v4;
          *a4 = *v28;
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v34);
        }
        v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                BugCheckParameter3,
                v10,
                v29);
        if ( v14 )
        {
          v15 = CmpFindValueByName(BugCheckParameter3, v14, a3);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29);
          if ( v15 != -1 )
          {
            v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    v15,
                    v31);
            if ( v16 )
            {
              if ( *(_DWORD *)(v16 + 12) != 4 )
              {
                v26 = (__int64 *)v31;
                goto LABEL_25;
              }
              v17 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v32);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v31);
              if ( v17 )
              {
                sprintf_s(DstBuf, 0x80uLL, "ControlSet%03d", *v17);
                v18 = -1LL;
                do
                  ++v18;
                while ( DstBuf[v18] );
                SourceString.MaximumLength = v18;
                SourceString.Length = v18;
                *(_DWORD *)&DestinationString.Length = 0x1000000;
                SourceString.Buffer = DstBuf;
                DestinationString.Buffer = (wchar_t *)&v38;
                v19 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
                v20 = BugCheckParameter3;
                if ( v19 < 0
                  || (v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                              BugCheckParameter3,
                              v7,
                              v29),
                      v20 = BugCheckParameter3,
                      !v21)
                  || (CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v21, (__m128i *)&DestinationString, &v30),
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29),
                      v20 = BugCheckParameter3,
                      v30 == -1) )
                {
                  v26 = &v32;
                  goto LABEL_26;
                }
                v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                        BugCheckParameter3,
                        v10,
                        v29);
                if ( !v22 )
                  goto LABEL_24;
                RtlInitUnicodeString(&DestinationString, L"Current");
                v23 = CmpFindValueByName(BugCheckParameter3, v22, (int)&DestinationString);
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29);
                if ( v23 == -1 )
                  goto LABEL_23;
                v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                        BugCheckParameter3,
                        v23,
                        v31);
                if ( v24 )
                {
                  if ( *(_DWORD *)(v24 + 12) != 4 )
                  {
LABEL_22:
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v31);
LABEL_23:
                    v4 = v30;
                    goto LABEL_24;
                  }
                  v25 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v35);
                  if ( v25 )
                  {
                    *v25 = *v17;
                    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v35);
                    goto LABEL_22;
                  }
                }
LABEL_24:
                v26 = &v32;
LABEL_25:
                v20 = BugCheckParameter3;
LABEL_26:
                (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(v20, v26);
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
