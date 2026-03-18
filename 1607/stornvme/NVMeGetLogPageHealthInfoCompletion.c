/*
 * XREFs of NVMeGetLogPageHealthInfoCompletion @ 0x1C000A6E0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C0007514 (NVMeFreeDmaBuffer.c)
 *     TemperatureFromKelvinToCelsius @ 0x1C000C7BC (TemperatureFromKelvinToCelsius.c)
 */

__int64 __fastcall NVMeGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rbx
  __int64 v4; // r8
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // r9
  char v11; // al
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v2 + 3) == 1 )
  {
    GetSrbDataBuffer(v4, &v14);
    v8 = *(unsigned __int8 *)(v6 + 2);
    v7 = *(_QWORD *)(SrbExtension + 4224);
    LOWORD(v8) = *(_WORD *)(v6 + 1);
    if ( v7 == 13 )
    {
      v9 = TemperatureFromKelvinToCelsius(v8);
      *(_BYTE *)(v10 + 9) = v9;
    }
    else if ( v7 == 47 )
    {
      v11 = TemperatureFromKelvinToCelsius(v8);
      *(_BYTE *)(v12 + 10) = v11;
    }
  }
  NVMeFreeDmaBuffer(v5, *(unsigned int *)(SrbExtension + 4232), *(_QWORD *)(SrbExtension + 4200));
  result = 0LL;
  *(_BYTE *)(SrbExtension + 4245) |= 8u;
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_DWORD *)(SrbExtension + 4232) = 0;
  *(_QWORD *)(SrbExtension + 4224) = 0LL;
  return result;
}
