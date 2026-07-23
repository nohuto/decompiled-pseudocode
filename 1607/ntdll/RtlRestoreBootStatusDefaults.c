/*
 * XREFs of RtlRestoreBootStatusDefaults @ 0x1800E5370
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800E5210 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18002CD30 (RtlGetNtProductType.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtWriteFile @ 0x1800A6520 (NtWriteFile.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __cdecl RtlRestoreBootStatusDefaults(HANDLE FileHandle)
{
  _BYTE *v2; // rax
  char v3; // dl
  __int64 v4; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-59h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-51h] BYREF
  _DWORD Buffer[32]; // [rsp+70h] [rbp-39h] BYREF

  memset(Buffer, 0, 0x78uLL);
  Buffer[0] = 120;
  RtlGetNtProductType((PNT_PRODUCT_TYPE)&Buffer[1]);
  ByteOffset.QuadPart = 0LL;
  v2 = Buffer;
  v3 = 0;
  *(_WORD *)((char *)&Buffer[2] + 1) = 286;
  BYTE1(Buffer[12]) = 1;
  v4 = 120LL;
  do
  {
    v3 -= *v2++;
    --v4;
  }
  while ( v4 );
  BYTE2(Buffer[12]) = v3;
  return NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x78u, &ByteOffset, 0LL);
}
