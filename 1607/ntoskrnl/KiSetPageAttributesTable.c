/*
 * XREFs of KiSetPageAttributesTable @ 0x1403D2A1C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140114744 (KeRestoreProcessorSpecificFeatures.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeFlushCurrentTbImmediately @ 0x1401D5ECC (KeFlushCurrentTbImmediately.c)
 */

unsigned __int64 KiSetPageAttributesTable()
{
  int v0; // ebx
  bool v1; // di
  unsigned int v2; // ecx
  unsigned __int64 result; // rax
  char v4; // dl
  int v5; // ebx
  unsigned __int64 v6; // [rsp+20h] [rbp-28h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+40h] [rbp-8h]

  v6 = 0x7010600070106LL;
  v0 = 0;
  _disable();
  v1 = (v8 & 0x200) != 0;
  v2 = 0;
  v7 = __readmsr(0x277u);
  result = 0LL;
  while ( 1 )
  {
    v4 = *((_BYTE *)&v7 + result);
    if ( v4 == 6 && *((_BYTE *)&v6 + result) != 6 )
      break;
    if ( v4 != *((_BYTE *)&v6 + result) )
      v0 |= 1u;
    ++v2;
    ++result;
    if ( v2 >= 8 )
      goto LABEL_6;
  }
  v0 = 3;
LABEL_6:
  if ( v0 )
  {
    v5 = v0 & 2;
    if ( v5 )
      __wbinvd();
    KeFlushCurrentTbImmediately();
    __writemsr(0x277u, v6);
    if ( v5 )
      __wbinvd();
    result = KeFlushCurrentTbImmediately();
  }
  if ( v1 )
    _enable();
  return result;
}
