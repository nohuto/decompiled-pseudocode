/*
 * XREFs of bSetFntCacheReg @ 0x1C00D4550
 * Callers:
 *     InitFNTCache @ 0x1C00D4190 (InitFNTCache.c)
 *     bServicingStackModifiedFonts @ 0x1C00D47E0 (bServicingStackModifiedFonts.c)
 *     CloseFNTCache @ 0x1C00D703C (CloseFNTCache.c)
 *     EngFntCacheFault @ 0x1C027D880 (EngFntCacheFault.c)
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00D45D4 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
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
