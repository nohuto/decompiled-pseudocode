/*
 * XREFs of NVMeGetFeaturesCacheCompletion @ 0x1C000A390
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     GetSrbScsiData @ 0x1C0009628 (GetSrbScsiData.c)
 */

__int64 __fastcall NVMeGetFeaturesCacheCompletion(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 SrbExtension; // rbx
  __int64 SrbDataBuffer; // rsi
  __int64 result; // rax
  int v8; // r9d
  __int64 v9; // rcx
  unsigned int v10; // edx
  _DWORD *v11; // r8
  _DWORD *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(a2, &v12);
  result = GetSrbScsiData(a2, 0LL, 0LL, 0LL, 0LL);
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( a3 )
    {
      if ( *(_BYTE *)result == 26 )
      {
        v9 = SrbDataBuffer + 4;
        v10 = v8 + 4;
      }
      else
      {
        v9 = SrbDataBuffer + 8;
        v10 = 8;
      }
      v11 = v12;
      *(_BYTE *)(v9 + 2) ^= (*(_BYTE *)(v9 + 2) ^ (4 * *a3)) & 4;
      result = v10 + 20;
      if ( (unsigned int)*v11 < (unsigned __int64)v10 + 20 )
        result = v10 + 12;
      *v11 = result;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
  }
  *(_BYTE *)(SrbExtension + 4245) |= 8u;
  return result;
}
