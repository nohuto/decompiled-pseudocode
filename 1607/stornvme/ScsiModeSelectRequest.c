/*
 * XREFs of ScsiModeSelectRequest @ 0x1C000BAE8
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiModeSelectRequest(__int64 a1, __int64 a2)
{
  __int64 SrbDataBuffer; // rax
  _BYTE *v4; // r9
  __int64 v5; // r11
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  int v12; // eax
  char v13; // al
  unsigned int v14; // eax
  _BYTE *v15; // rdi
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 SrbExtension; // rbx
  __int64 v19; // r11
  bool v20; // cl
  int v21; // eax
  unsigned int *v22; // [rsp+50h] [rbp+18h] BYREF

  v22 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v22);
  LOBYTE(v6) = *v4;
  v7 = 8LL;
  v8 = SrbDataBuffer;
  if ( *v4 == 21 )
    v7 = 4LL;
  if ( (v4[1] & 0x10) == 0 )
    goto LABEL_7;
  if ( !SrbDataBuffer )
  {
    v9 = -1056964605;
LABEL_8:
    LOBYTE(v4) = 36;
    LOBYTE(v7) = 6;
    NVMeSetSenseData(v5, v7, v6, v4);
    return v9;
  }
  v10 = *v22;
  if ( *v22 < (unsigned int)v7 )
  {
LABEL_7:
    v9 = -1056964601;
    goto LABEL_8;
  }
  if ( (_BYTE)v6 == 21 )
  {
    v12 = *(unsigned __int8 *)(SrbDataBuffer + 3);
  }
  else
  {
    v13 = *(_BYTE *)(SrbDataBuffer + 6);
    LOBYTE(v22) = 0;
    BYTE1(v22) = v13;
    LOBYTE(v22) = *(_BYTE *)(v8 + 7);
    v12 = (unsigned __int16)v22;
  }
  v14 = v7 + v12;
  v15 = (_BYTE *)(v8 + v14);
  if ( v10 <= v14 )
    v16 = 0;
  else
    v16 = v10 - v14;
  if ( v16 >= 0xC && (*v15 & 0x3F) == 8 && v15[1] == 10 )
  {
    v17 = v5;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1080) + 525LL) & 1) != 0 )
    {
      SrbExtension = GetSrbExtension(v5);
      *(_BYTE *)(SrbExtension + 4245) = *(_BYTE *)(SrbExtension + 4245) & 0xFC | 1;
      SrbAssignQueueId(a1, v19);
      v20 = (v15[2] & 4) != 0;
      *(_BYTE *)(SrbExtension + 4096) = 9;
      v21 = (*(_DWORD *)(SrbExtension + 4140) ^ v20) & 1;
      *(_BYTE *)(SrbExtension + 4136) = 6;
      *(_DWORD *)(SrbExtension + 4140) ^= v21;
      return 0LL;
    }
  }
  else
  {
    v17 = v5;
  }
  LOBYTE(v4) = 36;
  LOBYTE(v7) = 6;
  NVMeSetSenseData(v17, v7, v6, v4);
  return 3238002694LL;
}
