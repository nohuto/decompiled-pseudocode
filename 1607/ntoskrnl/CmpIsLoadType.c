/*
 * XREFs of CmpIsLoadType @ 0x1407B04F8
 * Callers:
 *     CmpFindDrivers @ 0x1407B03C8 (CmpFindDrivers.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     CmpFindValueByName @ 0x1404018E8 (CmpFindValueByName.c)
 *     CmpFindSubKeyByName @ 0x1405603A4 (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x1405606E0 (CmpValueToData.c)
 *     CmpGetNodeName @ 0x1407B060C (CmpGetNodeName.c)
 */

char __fastcall CmpIsLoadType(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int ValueByName; // ebx
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // r12d
  ULONG_PTR v11; // rax
  _DWORD *v12; // r14
  char v13; // bl
  const WCHAR *NodeName; // rax
  const WCHAR *v15; // r14
  unsigned int SubKeyByName; // eax
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // ebx
  ULONG_PTR v20; // rax
  _BYTE *v21; // rbx
  bool v22; // zf
  __m128i *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v27; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v28[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v29[2]; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v32; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+58h] BYREF

  HIWORD(v32) = HIWORD(a3);
  v29[1] = 0;
  v31 = 0xFFFFFFFFLL;
  ValueByName = -1;
  v29[0] = -1;
  v8 = 0LL;
  v33 = 0xFFFFFFFFLL;
  v27 = 0xFFFFFFFFLL;
  a6 = 0xFFFFFFFFLL;
  v28[0] = -1;
  v28[1] = 0;
  LOWORD(v32) = 0;
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, v29);
  v10 = v9;
  if ( !v9 )
    return v9;
  if ( a5 )
  {
    NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v9, &v32);
    v15 = NodeName;
    if ( NodeName )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) >= 0 )
      {
        SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, a5, (__m128i *)&DestinationString);
        if ( SubKeyByName != -1 )
        {
          v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  SubKeyByName,
                  &v33);
          v8 = v17;
          if ( v17 )
          {
            ValueByName = CmpFindValueByName(BugCheckParameter3, v17, (int)&CmpStartString);
            (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v33);
            v8 = 0LL;
          }
        }
      }
      (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v15, (unsigned __int16)v32);
      if ( ValueByName != -1 )
        goto LABEL_4;
    }
    v18 = CmpFindValueByName(BugCheckParameter3, v10, (int)L"\b\n");
    v19 = v18;
    if ( v18 == -1 )
      goto LABEL_8;
    v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            v18,
            &a6);
    if ( !v20 )
      goto LABEL_8;
    v21 = CmpValueToData(BugCheckParameter3, v19, v20, &v32, (__int64)&v27);
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &a6);
    if ( !v21 )
      goto LABEL_8;
    v22 = (*v21 & 0xB) == 0;
    v23 = (__m128i *)&CmpDriverWildcardString;
    if ( v22 )
      v23 = (__m128i *)&CmpServiceWildcardString;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v27);
    v24 = CmpFindSubKeyByName(BugCheckParameter3, a5, v23);
    if ( v24 != -1 )
    {
      v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v24,
              &v33);
      v8 = v25;
      if ( v25 )
      {
        ValueByName = CmpFindValueByName(BugCheckParameter3, v25, (int)&CmpStartString);
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v33);
        v8 = 0LL;
        if ( ValueByName != -1 )
          goto LABEL_4;
      }
    }
  }
  ValueByName = CmpFindValueByName(BugCheckParameter3, v10, (int)&CmpStartString);
  if ( ValueByName != -1 )
  {
LABEL_4:
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            ValueByName,
            v28);
    if ( v11 )
    {
      v12 = CmpValueToData(BugCheckParameter3, ValueByName, v11, &v32, (__int64)&v31);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28);
      if ( v12 )
      {
        v13 = 1;
        if ( *v12 == 1 )
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v31);
          goto LABEL_9;
        }
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v31);
      }
    }
  }
LABEL_8:
  v13 = 0;
LABEL_9:
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v33);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29);
  LOBYTE(v9) = v13;
  return v9;
}
