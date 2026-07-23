/*
 * XREFs of PsspWalkHandleTable @ 0x18000576C
 * Callers:
 *     PsspCaptureHandleInformation @ 0x180004AC8 (PsspCaptureHandleInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180098350 (_wcsicmp.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwQueryObject @ 0x1800A6620 (ZwQueryObject.c)
 *     ZwDuplicateObject @ 0x1800A6BA0 (ZwDuplicateObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

HANDLE __fastcall PsspWalkHandleTable(
        HANDLE SourceProcessHandle,
        unsigned int *a2,
        unsigned int a3,
        char a4,
        __int64 (__fastcall *a5)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int),
        __int64 a6)
{
  HANDLE result; // rax
  unsigned int v7; // ebx
  unsigned int v11; // r15d
  void *v12; // rdx
  unsigned int v13; // edi
  char v14; // si
  __int64 v15; // r9
  const wchar_t **v16; // rsi
  __int64 v17; // rbx
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int); // [rsp+68h] [rbp-98h]
  HANDLE v22; // [rsp+70h] [rbp-90h]
  _BYTE ObjectInformation[8]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t *String1; // [rsp+88h] [rbp-78h]
  _BYTE v25[64]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v26[64]; // [rsp+170h] [rbp+70h] BYREF
  _WORD v27[264]; // [rsp+1B0h] [rbp+B0h] BYREF

  result = SourceProcessHandle;
  v22 = SourceProcessHandle;
  v7 = 0;
  v21 = a5;
  v20 = a6;
  v11 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v12 = (void *)*a2;
      v13 = 0;
      TargetHandle = 0LL;
      v14 = 0;
      v18 = 0;
      if ( ZwDuplicateObject(result, v12, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u) < 0 )
        goto LABEL_20;
      v13 = 4;
      if ( ZwQueryObject(TargetHandle, ObjectTypeInformation, ObjectInformation, 0xA8u, 0LL) >= 0 )
        break;
      NtClose(TargetHandle);
LABEL_21:
      result = v22;
      ++v11;
      ++a2;
      if ( v11 >= a3 )
        return result;
    }
    if ( (a4 & 8) != 0 )
    {
      memset(v27, 0, sizeof(v27));
      if ( wcsicmp(String1, L"File") )
      {
        if ( ZwQueryObject(TargetHandle, ObjectNameInformation, v27, 0x210u, 0LL) < 0 )
          v27[8] = 0;
      }
    }
    if ( (a4 & 0x10) != 0 && ZwQueryObject(TargetHandle, ObjectBasicInformation, v25, 0x38u, 0LL) >= 0 )
      v13 = 20;
    v18 = 0;
    if ( (a4 & 0x20) != 0 )
    {
      v16 = (const wchar_t **)&off_180108C30;
      while ( wcsicmp(String1, *v16) )
      {
        ++v7;
        v16 += 3;
        if ( v7 >= 6 )
          goto LABEL_15;
      }
      v17 = 3LL * v7;
      if ( ((int (__fastcall *)(HANDLE, _BYTE *, __int64, int *))*(&off_180108C30 + v17 + 1))(
             TargetHandle,
             v26,
             64LL,
             &v18) < 0
        || !v18 )
      {
LABEL_15:
        v14 = 0;
        goto LABEL_19;
      }
      v14 = (char)(&off_180108C30)[v17 + 1];
      v13 |= 0x20u;
    }
LABEL_19:
    NtClose(TargetHandle);
LABEL_20:
    LOBYTE(v15) = v14;
    result = (HANDLE)v21(
                       v20,
                       v13,
                       *a2,
                       v15,
                       (unsigned __int64)ObjectInformation & -(__int64)((v13 & 4) != 0),
                       (unsigned __int64)v27 & -(__int64)((v13 & 4) != 0),
                       (unsigned __int64)v25 & -(__int64)((v13 & 0x10) != 0),
                       (unsigned __int64)v26 & -(__int64)((v13 & 0x20) != 0),
                       v18 & (unsigned int)-((v13 & 0x20) != 0));
    v7 = 0;
    if ( !(_BYTE)result )
      return result;
    goto LABEL_21;
  }
  return result;
}
