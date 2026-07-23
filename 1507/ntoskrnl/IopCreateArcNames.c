/*
 * XREFs of IopCreateArcNames @ 0x1407B5FE8
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x14015DBB0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x1407B6124 (IopCreateArcNamesDisk.c)
 */

__int64 __fastcall IopCreateArcNames(__int64 a1)
{
  __int64 v2; // rbx
  SIZE_T v3; // rbx
  PVOID PoolWithTagPriority; // rax
  __int64 result; // rax
  _STRING DestinationString; // [rsp+20h] [rbp-A8h] BYREF
  char pszDest[128]; // [rsp+30h] [rbp-98h] BYREF

  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", *(const char **)(a1 + 192));
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcHalDeviceName, &DestinationString, 1u);
  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcBootDeviceName, &DestinationString, 1u);
  v2 = -1LL;
  do
    ++v2;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 184) + v2) );
  v3 = v2 + 1;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            PagedPool,
                            v3,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, v3, 0x20206F49u);
  IoLoaderArcBootDeviceName = (__int64)PoolWithTagPriority;
  if ( PoolWithTagPriority )
    memmove(PoolWithTagPriority, *(const void **)(a1 + 184), v3);
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(a1 + 192));
  result = IopCreateArcNamesDisk();
  if ( (int)result >= 0 )
    return IopCreateArcNamesCd(a1);
  return result;
}
