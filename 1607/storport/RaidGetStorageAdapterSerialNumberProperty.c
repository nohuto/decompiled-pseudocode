/*
 * XREFs of RaidGetStorageAdapterSerialNumberProperty @ 0x1C0058960
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005736C (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000EE90 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000FF08 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     RtlUnicodeStringCopyString @ 0x1C002A5A8 (RtlUnicodeStringCopyString.c)
 */

int __fastcall RaidGetStorageAdapterSerialNumberProperty(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  int result; // eax
  unsigned __int64 v7; // rax
  void *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  _WORD *v11; // rcx
  _BYTE *v12; // rax
  struct _STRING SourceString; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v15[68]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v15, 0, 0x10CuLL);
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 17) )
    return -1073741637;
  v7 = *a3;
  if ( *a3 < 8 )
  {
    result = -1073741789;
LABEL_22:
    *a3 = 264LL;
    return result;
  }
  *a2 = 264;
  a2[1] = 264;
  if ( v7 < 0x108 )
  {
    *a3 = 8LL;
    return 0;
  }
  v8 = a2 + 2;
  *a3 = 0LL;
  v9 = 256LL;
  memset(v8, 0, 0x100uLL);
  v15[0] = 1;
  v15[1] = 268;
  result = RaCallMiniportAdapterControl(a1 + 296);
  if ( result >= 0 )
  {
    *(_DWORD *)&DestinationString.Length = 0x1000000;
    DestinationString.Buffer = (wchar_t *)v8;
    if ( LOBYTE(v15[2]) == 1 )
    {
      v10 = 128LL;
      v11 = (_WORD *)((char *)&v15[2] + 1);
      do
      {
        if ( !*v11 )
          break;
        ++v11;
        --v10;
      }
      while ( v10 );
      if ( v10 )
      {
        result = RtlUnicodeStringCopyString(&DestinationString, (NTSTRSAFE_PCWSTR)((char *)&v15[2] + 1));
        goto LABEL_21;
      }
    }
    else
    {
      v12 = (char *)&v15[2] + 1;
      do
      {
        if ( !*v12 )
          break;
        ++v12;
        --v9;
      }
      while ( v9 );
      if ( v9 )
      {
        SourceString.Length = 0;
        *(_QWORD *)&SourceString.MaximumLength = 0LL;
        *(_DWORD *)((char *)&SourceString.Buffer + 2) = 0;
        HIWORD(SourceString.Buffer) = 0;
        RtlInitAnsiString(&SourceString, (PCSZ)&v15[2] + 1);
        result = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
LABEL_21:
        if ( result >= 0 )
          goto LABEL_22;
        return result;
      }
    }
    return -1073741811;
  }
  return result;
}
