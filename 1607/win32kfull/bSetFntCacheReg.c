/*
 * XREFs of bSetFntCacheReg @ 0x1C00BBEE0
 * Callers:
 *     InitFNTCache @ 0x1C00BBB20 (InitFNTCache.c)
 *     bServicingStackModifiedFonts @ 0x1C00BC858 (bServicingStackModifiedFonts.c)
 *     CloseFNTCache @ 0x1C00EB248 (CloseFNTCache.c)
 *     EngFntCacheFault @ 0x1C027BAC0 (EngFntCacheFault.c)
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00BBF64 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 */

_BOOL8 __fastcall bSetFntCacheReg(PCWSTR SourceString, int a2)
{
  BOOL v3; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a2;
  v3 = 0;
  if ( (int)GetGreRegKey(
              &KeyHandle,
              0x40000000u,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v3 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u) >= 0;
    ZwClose(KeyHandle);
  }
  return v3;
}
