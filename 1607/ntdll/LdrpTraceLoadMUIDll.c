/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800DC934
 * Callers:
 *     RtlpResUltimateFallbackInfo @ 0x18000E4BC (RtlpResUltimateFallbackInfo.c)
 *     LdrResFallbackLangList @ 0x18000FD84 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrFindResource_U @ 0x18002D6B0 (LdrFindResource_U.c)
 *     LdrpAccessResourceData @ 0x180030154 (LdrpAccessResourceData.c)
 *     LdrpResGetResourceDirectory @ 0x1800376B0 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A68 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800381CC (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResSearchResource @ 0x180039300 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x180039850 (LdrpResGetMappingSize.c)
 *     LdrResGetRCConfig @ 0x18003A810 (LdrResGetRCConfig.c)
 *     LdrFindResourceEx_U @ 0x180085720 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x180089960 (LdrResRelease.c)
 *     LdrpMUIEtwOutput @ 0x1800DC68C (LdrpMUIEtwOutput.c)
 *     LdrpResFileSize @ 0x1800DD100 (LdrpResFileSize.c)
 *     LdrpResMapFile @ 0x1800DD1EC (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD580 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800DDC50 (LdrpResValidateFilePath.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  unsigned int v4; // edi
  _QWORD Fields[6]; // [rsp+20h] [rbp-278h] BYREF
  _WORD v7[272]; // [rsp+50h] [rbp-248h] BYREF

  v2 = a2;
  memset(Fields, 0, sizeof(Fields));
  if ( (*a1 & 0xFFFEu) >= 0x212 )
    v4 = 265;
  else
    v4 = *a1 >> 1;
  memmove(v7, *((const void **)a1 + 1), 2LL * v4);
  v7[v4] = 0;
  BYTE4(Fields[0]) = 0;
  LOWORD(Fields[0]) = 2 * (v4 + 25);
  *(GUID *)&Fields[3] = LoadMUIDllGuid;
  return NtTraceEvent((HANDLE)v2, 0x100u, 0x30u, Fields);
}
