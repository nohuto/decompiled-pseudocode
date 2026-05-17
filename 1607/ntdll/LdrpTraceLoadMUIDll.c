/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800DC874
 * Callers:
 *     RtlpResUltimateFallbackInfo @ 0x18000E4CC (RtlpResUltimateFallbackInfo.c)
 *     LdrResFallbackLangList @ 0x18000FD94 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrFindResource_U @ 0x18002D6C0 (LdrFindResource_U.c)
 *     LdrpAccessResourceData @ 0x180030164 (LdrpAccessResourceData.c)
 *     LdrpResGetResourceDirectory @ 0x1800376C0 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A78 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800381DC (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResSearchResource @ 0x180039310 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x180039860 (LdrpResGetMappingSize.c)
 *     LdrResGetRCConfig @ 0x18003A820 (LdrResGetRCConfig.c)
 *     LdrFindResourceEx_U @ 0x180085730 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x180089970 (LdrResRelease.c)
 *     LdrpMUIEtwOutput @ 0x1800DC5CC (LdrpMUIEtwOutput.c)
 *     LdrpResFileSize @ 0x1800DD040 (LdrpResFileSize.c)
 *     LdrpResMapFile @ 0x1800DD12C (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD4C0 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800DDB90 (LdrpResValidateFilePath.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1)
{
  unsigned int v2; // edi
  _QWORD v4[6]; // [rsp+20h] [rbp-278h] BYREF
  _WORD v5[272]; // [rsp+50h] [rbp-248h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( (*a1 & 0xFFFEu) >= 0x212 )
    v2 = 265;
  else
    v2 = *a1 >> 1;
  memmove(v5, *((const void **)a1 + 1), 2LL * v2);
  v5[v2] = 0;
  BYTE4(v4[0]) = 0;
  LOWORD(v4[0]) = 2 * (v2 + 25);
  *(_OWORD *)&v4[3] = LoadMUIDllGuid;
  return NtTraceEvent();
}
