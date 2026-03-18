/*
 * XREFs of NVMeCopyFirmwareRevision @ 0x1C000A084
 * Callers:
 *     FormInquiryStandardData @ 0x1C00093DC (FormInquiryStandardData.c)
 *     NVMeGetRichDeviceDescription @ 0x1C000A784 (NVMeGetRichDeviceDescription.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeCopyFirmwareRevision(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  int v4; // ebx
  int v5; // r9d
  __int64 i; // r11
  __int64 result; // rax
  _BYTE *v8; // rcx

  v3 = 0;
  v4 = 0;
  v5 = 7;
  for ( i = 7LL; i >= 0; --i )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a1 + i + 64) - 33) <= 0x5Du && ++v4 == a3 )
      break;
    if ( !i )
      break;
    --v5;
  }
  result = v5;
  if ( (unsigned __int64)v5 < 8 )
  {
    v8 = (_BYTE *)(v5 + a1 + 64);
    do
    {
      if ( (unsigned __int8)(*v8 - 33) <= 0x5Du )
      {
        result = v3++;
        *(_BYTE *)(result + a2) = *v8;
        if ( v3 >= a3 )
          break;
      }
      ++v5;
      ++v8;
      result = v5;
    }
    while ( (unsigned __int64)v5 < 8 );
  }
  return result;
}
