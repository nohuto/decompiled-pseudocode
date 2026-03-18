/*
 * XREFs of IoctlSetTemperatureThresholdProcess @ 0x1C0009ABC
 * Callers:
 *     IoctlToNVMe @ 0x1C0009BF0 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 */

__int64 __fastcall IoctlSetTemperatureThresholdProcess(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 SrbExtension; // rdi
  __int64 v4; // r9
  __int64 SrbDataBuffer; // rsi
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int16 v8; // ax
  __int16 v9; // bp
  __int16 v10; // bp
  int v11; // ecx
  bool v12; // dl
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  _DWORD *v17; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v17 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(v4, &v17);
  if ( *v17 < 0x2Cu )
  {
    *(_BYTE *)(v6 + 3) = 21;
    return (unsigned int)-1056964602;
  }
  if ( (*(_BYTE *)(SrbDataBuffer + 36) & 1) == 0
    || (v8 = *(_WORD *)(SrbDataBuffer + 38), v8 > 8u)
    || !v8 && !*(_BYTE *)(SrbDataBuffer + 42) && !*(_WORD *)(*(_QWORD *)(v7 + 1080) + 266LL)
    || (v9 = *(_WORD *)(SrbDataBuffer + 40), v9 < -273) )
  {
    *(_BYTE *)(v6 + 3) = 6;
    return (unsigned int)-1056964602;
  }
  v10 = v9 + 273;
  *(_BYTE *)(SrbExtension + 4245) = *(_BYTE *)(SrbExtension + 4245) & 0xFC | 1;
  SrbAssignQueueId(v7, v6);
  v11 = *(unsigned __int8 *)(SrbDataBuffer + 38);
  v12 = *(_BYTE *)(SrbDataBuffer + 42) == 0;
  *(_BYTE *)(SrbExtension + 4096) = 9;
  v13 = (*(_DWORD *)(SrbExtension + 4140) ^ (v11 << 16)) & 0xF0000;
  *(_BYTE *)(SrbExtension + 4136) = 4;
  *(_DWORD *)(SrbExtension + 4140) ^= v13;
  v14 = *(_DWORD *)(SrbExtension + 4140);
  if ( v12 )
    v15 = v14 & 0xFFCFFFFF | 0x100000;
  else
    v15 = v14 & 0xFFCFFFFF;
  *(_DWORD *)(SrbExtension + 4140) = v15;
  *(_WORD *)(SrbExtension + 4140) = v10;
  *(_BYTE *)(SrbExtension + 4245) &= ~4u;
  return v2;
}
