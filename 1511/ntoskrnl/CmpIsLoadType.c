/*
 * XREFs of CmpIsLoadType @ 0x140754E2C
 * Callers:
 *     CmpFindDrivers @ 0x140754D08 (CmpFindDrivers.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     CmpFindValueByName @ 0x1404A8CEC (CmpFindValueByName.c)
 *     CmpFindSubKeyByName @ 0x1405239F8 (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x140523DB4 (CmpValueToData.c)
 *     CmpGetNodeName @ 0x140754F28 (CmpGetNodeName.c)
 */

char __fastcall CmpIsLoadType(__int64 BugCheckParameter3, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int ValueByName; // ebx
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // r15
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
  __int64 *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v27; // [rsp+30h] [rbp-20h] BYREF
  int v28; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v30; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+50h] BYREF
  int v32; // [rsp+A8h] [rbp+58h] BYREF
  int v33; // [rsp+ACh] [rbp+5Ch]

  v33 = HIDWORD(a4);
  HIWORD(v31) = HIWORD(a3);
  LODWORD(v30) = -1;
  v28 = -1;
  ValueByName = -1;
  v32 = -1;
  v7 = 0LL;
  v27 = -1LL;
  a6 = -1;
  LOWORD(v31) = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, a2, &v28);
  v10 = v9;
  if ( !v9 )
    return v9;
  if ( a5 )
  {
    NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v9, &v31);
    v15 = NodeName;
    if ( NodeName )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) >= 0 )
      {
        SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, a5, &DestinationString);
        if ( SubKeyByName != -1 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  SubKeyByName,
                  &v32);
          v7 = v17;
          if ( v17 )
          {
            ValueByName = CmpFindValueByName(BugCheckParameter3, v17);
            (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v32);
            v7 = 0LL;
          }
        }
      }
      (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v15, (unsigned __int16)v31);
      if ( ValueByName != -1 )
        goto LABEL_4;
    }
    v18 = CmpFindValueByName(BugCheckParameter3, v10);
    v19 = v18;
    if ( v18 == -1 )
      goto LABEL_8;
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, v18, &a6);
    if ( !v20 )
      goto LABEL_8;
    v21 = CmpValueToData(BugCheckParameter3, v19, v20, &v31, (__int64)&v27);
    (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &a6);
    if ( !v21 )
      goto LABEL_8;
    v22 = (*v21 & 0xB) == 0;
    v23 = &CmpDriverWildcardString;
    if ( v22 )
      v23 = &CmpServiceWildcardString;
    (*(void (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v27);
    v24 = CmpFindSubKeyByName(BugCheckParameter3, a5, (const UNICODE_STRING *)v23);
    if ( v24 != -1 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(BugCheckParameter3 + 8))(BugCheckParameter3, v24, &v32);
      v7 = v25;
      if ( v25 )
      {
        ValueByName = CmpFindValueByName(BugCheckParameter3, v25);
        (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v32);
        v7 = 0LL;
        if ( ValueByName != -1 )
          goto LABEL_4;
      }
    }
  }
  ValueByName = CmpFindValueByName(BugCheckParameter3, v10);
  if ( ValueByName != -1 )
  {
LABEL_4:
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            ValueByName,
            (char *)&v27 + 4);
    if ( v11 )
    {
      v12 = CmpValueToData(BugCheckParameter3, ValueByName, v11, &v31, (__int64)&v30);
      (*(void (__fastcall **)(__int64, char *))(BugCheckParameter3 + 16))(BugCheckParameter3, (char *)&v27 + 4);
      if ( v12 )
      {
        v13 = 1;
        if ( *v12 == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v30);
          goto LABEL_9;
        }
        (*(void (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v30);
      }
    }
  }
LABEL_8:
  v13 = 0;
LABEL_9:
  if ( v7 )
    (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v32);
  (*(void (__fastcall **)(__int64, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v28);
  LOBYTE(v9) = v13;
  return v9;
}
