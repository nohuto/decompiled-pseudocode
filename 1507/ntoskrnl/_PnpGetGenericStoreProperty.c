/*
 * XREFs of _PnpGetGenericStoreProperty @ 0x14043E4F4
 * Callers:
 *     _PnpGetObjectPropertyWorker @ 0x14043A628 (_PnpGetObjectPropertyWorker.c)
 *     PiDqPnPGetObjectProperty @ 0x14043B1A0 (PiDqPnPGetObjectProperty.c)
 *     PiDevCfgCopyObjectProperties @ 0x140685538 (PiDevCfgCopyObjectProperties.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14001988C (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x14043DFB0 (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 */

__int64 __fastcall PnpGetGenericStoreProperty(
        __int64 *a1,
        char *a2,
        const wchar_t *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  NTSTATUS v9; // ebx
  __int64 *v10; // rsi
  int v11; // eax
  NTSTATUS ValueIndirect; // eax
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-E8h]
  unsigned __int16 v15; // [rsp+98h] [rbp-78h]
  HANDLE Handle; // [rsp+A0h] [rbp-70h] BYREF
  char *v17; // [rsp+A8h] [rbp-68h]
  _DWORD *v18; // [rsp+B0h] [rbp-60h]
  __int64 *v19; // [rsp+B8h] [rbp-58h]
  __int64 v20; // [rsp+C0h] [rbp-50h]
  size_t pcchLength; // [rsp+C8h] [rbp-48h] BYREF
  wchar_t pszDest[48]; // [rsp+D0h] [rbp-40h] BYREF

  v19 = a1;
  *a5 = 0;
  *a8 = 0;
  v17 = a2;
  v18 = a5;
  v20 = a6;
  Handle = 0LL;
  if ( a3 )
  {
    v9 = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength);
    if ( v9 < 0 )
      return (unsigned int)v9;
  }
  v9 = RtlStringCchPrintfExW(
         pszDest,
         0x30uLL,
         0LL,
         0LL,
         0x800u,
         L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX");
  if ( v9 >= 0 )
  {
    v10 = v19;
    v11 = PnpOpenPropertiesKey(v19, v17, pszDest, 1u, 0, (__int64)pszFormat, &Handle);
    v9 = v11;
    if ( v11 == -1073741772 )
    {
LABEL_4:
      v9 = -1073741275;
      goto LABEL_5;
    }
    if ( v11 >= 0 )
    {
      ValueIndirect = PnpCtxRegQueryValueIndirect((__int64)v10, (__int64)Handle, (__int64)a3);
      if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
      {
        if ( !ValueIndirect || ValueIndirect == -1073741789 )
        {
          *v18 = v15;
          if ( v15 != 1 )
          {
            *a8 = a7;
            if ( ValueIndirect || !a7 )
              v9 = -1073741789;
          }
        }
        else
        {
          v9 = ValueIndirect;
        }
        goto LABEL_5;
      }
      goto LABEL_4;
    }
  }
LABEL_5:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
