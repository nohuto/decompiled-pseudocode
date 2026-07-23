/*
 * XREFs of PsspWalkHandleTable @ 0x180082740
 * Callers:
 *     PsspCaptureHandleInformation @ 0x180082508 (PsspCaptureHandleInformation.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     PsspDumpObject_Event @ 0x180082CC0 (PsspDumpObject_Event.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwQueryObject @ 0x180093A00 (ZwQueryObject.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     memset @ 0x180098540 (memset.c)
 */

void __fastcall PsspWalkHandleTable(
        void *a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        _RTL_DYNAMIC_HASH_TABLE *a5,
        __int64 a6)
{
  unsigned int v7; // ebx
  char v8; // di
  void *v9; // rdx
  unsigned int v10; // r12d
  __int64 v11; // r9
  unsigned int v12; // ebx
  const wchar_t **v13; // rdi
  char v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v17; // [rsp+60h] [rbp-A0h]
  unsigned int v18; // [rsp+64h] [rbp-9Ch]
  int v19; // [rsp+68h] [rbp-98h]
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+70h] [rbp-90h]
  void *v21; // [rsp+78h] [rbp-88h]
  __int64 v22; // [rsp+80h] [rbp-80h]
  _BYTE ObjectInformation[8]; // [rsp+90h] [rbp-70h] BYREF
  wchar_t *String1; // [rsp+98h] [rbp-68h]
  _BYTE v25[64]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v26[64]; // [rsp+180h] [rbp+80h] BYREF
  _WORD v27[264]; // [rsp+1C0h] [rbp+C0h] BYREF

  v19 = a4;
  HashTable = a5;
  v7 = 0;
  v8 = a4;
  v22 = a6;
  v18 = a3;
  v21 = a1;
  v17 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v9 = (void *)*a2;
      v10 = 0;
      TargetHandle = 0LL;
      v14 = 0;
      v15 = 0;
      if ( ZwDuplicateObject(a1, v9, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u) < 0 )
        goto LABEL_20;
      v10 = 4;
      if ( ZwQueryObject(TargetHandle, ObjectTypeInformation, ObjectInformation, 0xA8u, 0LL) >= 0 )
        break;
      NtClose(TargetHandle);
LABEL_22:
      a1 = v21;
      ++v7;
      ++a2;
      v17 = v7;
      if ( v7 >= v18 )
        return;
    }
    if ( (v8 & 8) != 0 )
    {
      memset(v27, 0, sizeof(v27));
      if ( wcsicmp(String1, L"File") )
      {
        if ( ZwQueryObject(TargetHandle, ObjectNameInformation, v27, 0x210u, 0LL) < 0 )
          v27[8] = 0;
      }
    }
    if ( (v8 & 0x10) != 0 && ZwQueryObject(TargetHandle, ObjectBasicInformation, v25, 0x38u, 0LL) >= 0 )
      v10 = 20;
    v15 = 0;
    if ( (v8 & 0x20) != 0 )
    {
      v12 = 0;
      v13 = (const wchar_t **)&off_18010AFE0;
      while ( wcsicmp(String1, *v13) )
      {
        ++v12;
        v13 += 3;
        if ( v12 >= 6 )
          goto LABEL_19;
      }
      if ( ((int (__fastcall *)(HANDLE, _BYTE *, __int64, int *))*(&funcs_1800828F5 + 3 * v12))(
             TargetHandle,
             v26,
             64LL,
             &v15) >= 0 )
      {
        if ( v15 )
        {
          v10 |= 0x20u;
          v14 = (char)(&off_18010AFE0)[3 * v12 + 1];
        }
      }
    }
LABEL_19:
    NtClose(TargetHandle);
LABEL_20:
    LOBYTE(v11) = v14;
    if ( !((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, int))HashTable)(
            v22,
            v10,
            *a2,
            v11,
            (unsigned __int64)ObjectInformation & -(__int64)((v10 & 4) != 0),
            (unsigned __int64)v27 & -(__int64)((v10 & 4) != 0),
            (unsigned __int64)v25 & -(__int64)((v10 & 0x10) != 0),
            (unsigned __int64)v26 & -(__int64)((v10 & 0x20) != 0),
            (v10 & 0x20) != 0 ? v15 : 0) )
      return;
    v7 = v17;
    v8 = v19;
    goto LABEL_22;
  }
}
