/*
 * XREFs of ScsiSecurityProtocolInRequest @ 0x1C000C014
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSecurityProtocolInRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SrbExtension; // rax
  unsigned int *v7; // rdx
  _BYTE *v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 result; // rax
  unsigned int v12; // edi
  unsigned int v13; // ecx
  unsigned int *v14; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v15; // [rsp+70h] [rbp+30h]
  unsigned int v16; // [rsp+88h] [rbp+48h]

  SrbExtension = GetSrbExtension(a2);
  v9 = *(_QWORD *)(a1 + 1080);
  v10 = SrbExtension;
  v14 = 0LL;
  if ( (*(_BYTE *)(v9 + 256) & 1) == 0 )
    goto LABEL_2;
  HIBYTE(v16) = v8[6];
  BYTE2(v16) = v8[7];
  BYTE1(v16) = v8[8];
  LOBYTE(v16) = v8[9];
  v12 = v16;
  if ( (char)v8[4] < 0 )
    v12 = v16 << 9;
  HIBYTE(v15) = v8[2];
  LOBYTE(v15) = v8[3];
  GetSrbDataBuffer(a2, &v14);
  v7 = v14;
  if ( *v14 >= v12 )
  {
    *(_BYTE *)(v10 + 4245) |= 1u;
    *(_BYTE *)(v10 + 4245) ^= (*(_BYTE *)(v10 + 4245) ^ (2 * (v12 != 0))) & 2;
    SrbAssignQueueId(a1, a2);
    *(_BYTE *)(v10 + 4139) = *(_BYTE *)(a3 + 1);
    v13 = *(_DWORD *)(v10 + 4136) & 0xFF0000FF | (v15 << 8);
    *(_BYTE *)(v10 + 4096) = -126;
    *(_DWORD *)(v10 + 4136) = v13;
    result = 0LL;
    *(_DWORD *)(v10 + 4140) = v12;
  }
  else
  {
LABEL_2:
    LOBYTE(v9) = 36;
    LOBYTE(v7) = 6;
    NVMeSetSenseData(a2, v7, v8, v9);
    return 3238002694LL;
  }
  return result;
}
