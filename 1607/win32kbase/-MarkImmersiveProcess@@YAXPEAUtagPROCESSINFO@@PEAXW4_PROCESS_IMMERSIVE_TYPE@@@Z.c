/*
 * XREFs of ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C00121D4
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00124D8 (xxxInitProcessInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MarkImmersiveProcess(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v3 = 1;
  *(_DWORD *)(a1 + 768) ^= (*(_DWORD *)(a1 + 768) ^ (16 * a3)) & 0x30;
  if ( a3 == 1 )
  {
    if ( (int)RtlQueryPackageClaims(a2, 0LL, 0LL, 0LL, 0LL, 0LL, &v8, 0LL) >= 0 )
    {
      if ( !(unsigned __int8)ExQueryFastCacheDevLicense() || (unsigned __int64)BYTE2(v8) - 4 > 1 )
        v3 = 0;
      *(_DWORD *)(a1 + 768) ^= (*(_DWORD *)(a1 + 768) ^ (v3 << 9)) & 0x200;
    }
    *(_DWORD *)(a1 + 768) |= 4u;
  }
  else
  {
    *(_DWORD *)(a1 + 768) &= ~0x200u;
  }
  RtlInitUnicodeString(&DestinationString, L"WIN://DESIGN_MODE");
  result = (*(_DWORD *)(a1 + 768) ^ ((unsigned __int8)SeSecurityAttributePresent(a2, &DestinationString) << 13)) & 0x2000;
  *(_DWORD *)(a1 + 768) ^= result;
  return result;
}
