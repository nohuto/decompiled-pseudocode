/*
 * XREFs of FirmwareActivate @ 0x1C0008950
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C00097FC (IoctlFirmwareProcess.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 */

__int64 __fastcall FirmwareActivate(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rdi
  __int64 v4; // r10
  _DWORD *SrbDataBuffer; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  char *v8; // rsi
  char v9; // cl
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(v4, &v15);
  v8 = (char *)SrbDataBuffer + (unsigned int)SrbDataBuffer[11];
  if ( SrbDataBuffer[12] < 0xCu )
  {
    SrbDataBuffer[5] = 3;
LABEL_10:
    result = 3238002694LL;
    *(_BYTE *)(v6 + 3) = 21;
    return result;
  }
  v9 = v8[8];
  if ( !v9 || (unsigned __int8)v9 > (unsigned __int8)((*(_BYTE *)(v7 + 260) >> 1) & 7) )
  {
    SrbDataBuffer[5] = 3;
    goto LABEL_10;
  }
  v10 = SrbDataBuffer[10] >> 31;
  *(_BYTE *)(SrbExtension + 4245) = *(_BYTE *)(SrbExtension + 4245) & 0xFC | 1;
  SrbAssignQueueId(a1, v6);
  v11 = (*(_DWORD *)(SrbExtension + 4136) ^ (unsigned __int8)v8[8]) & 7;
  *(_BYTE *)(SrbExtension + 4096) = 16;
  *(_DWORD *)(SrbExtension + 4136) ^= v11;
  v12 = *(_DWORD *)(SrbExtension + 4136);
  if ( (v10 & 1) != 0 )
    v13 = v12 & 0xFFFFFFE7 | 0x10;
  else
    v13 = v12 & 0xFFFFFFE7 | 8;
  *(_DWORD *)(SrbExtension + 4136) = v13;
  *(_QWORD *)(SrbExtension + 4216) = NVMeFirmwareActivateCompletion;
  return 0LL;
}
