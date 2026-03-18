/*
 * XREFs of ScsiReadCapacityRequest @ 0x1C0001D38
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0001000 (NVMeHwBuildIo.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     NVMeSetSenseData @ 0x1C000E5FC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiReadCapacityRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // r9
  _BYTE *SrbDataBuffer; // r10
  __int64 v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // esi
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // r8
  char v17; // cl
  _DWORD *v18; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+38h]

  v4 = 0;
  v18 = 0LL;
  SrbDataBuffer = (_BYTE *)GetSrbDataBuffer(a2, &v18);
  if ( *(_BYTE *)(v8 + 2) == 40 )
    v9 = *(unsigned __int8 *)(*(unsigned int *)(v8 + 52) + v8 + 10);
  else
    v9 = *(unsigned __int8 *)(v8 + 7);
  v10 = *(_QWORD *)(a1 + 8 * v9 + 1184);
  v11 = (unsigned int)v9;
  v12 = *(_DWORD *)(v10 + 52);
  v13 = *(_QWORD *)(v10 + 56) - 1LL;
  v19 = v13;
  v14 = *(_QWORD *)(a1 + 8LL * (unsigned __int8)v9 + 1184);
  if ( *(_BYTE *)(v14 + 74) || *(_WORD *)(v14 + 48) )
  {
    v13 = 0LL;
    v19 = 0LL;
  }
  v15 = v18;
  if ( *v18 < 8u || (v14 = 12LL, (_DWORD)v6 == 16) && *v18 < 0xCu || !SrbDataBuffer )
  {
    LOBYTE(v6) = 36;
    LOBYTE(v14) = 6;
    NVMeSetSenseData(v8, v14, v18, v6);
    return 3238002692LL;
  }
  if ( (_DWORD)v6 != 16 || *a3 != 0x9E )
  {
    SrbDataBuffer[6] = BYTE1(v12);
    SrbDataBuffer[5] = BYTE2(v12);
    SrbDataBuffer[4] = HIBYTE(v12);
    SrbDataBuffer[7] = v12;
    if ( v13 < 0xFFFFFFFF )
    {
      SrbDataBuffer[3] = v13;
      SrbDataBuffer[2] = BYTE1(v19);
      SrbDataBuffer[1] = BYTE2(v19);
      *SrbDataBuffer = BYTE3(v19);
    }
    else
    {
      *(_DWORD *)SrbDataBuffer = -1;
    }
    *v15 = 8;
    goto LABEL_23;
  }
  if ( (a3[1] & 0x1F) == 0x10 )
  {
    SrbDataBuffer[6] = BYTE1(v19);
    SrbDataBuffer[5] = BYTE2(v19);
    SrbDataBuffer[4] = BYTE3(v19);
    SrbDataBuffer[3] = BYTE4(v19);
    SrbDataBuffer[2] = BYTE5(v19);
    SrbDataBuffer[1] = BYTE6(v19);
    *SrbDataBuffer = HIBYTE(v19);
    SrbDataBuffer[7] = v13;
    SrbDataBuffer[10] = BYTE1(v12);
    SrbDataBuffer[9] = BYTE2(v12);
    SrbDataBuffer[8] = HIBYTE(v12);
    SrbDataBuffer[11] = v12;
    if ( *v15 >= 0x10u )
    {
      SrbDataBuffer[14] &= 0xC0u;
      SrbDataBuffer[12] &= 0xF0u;
      SrbDataBuffer[13] &= 0xF0u;
      v17 = SrbDataBuffer[14];
      SrbDataBuffer[15] = 0;
      SrbDataBuffer[14] = v17 & 0x3F | (*(_BYTE *)(*(_QWORD *)(a1 + 8 * v11 + 1184) + 73LL) << 7);
      LODWORD(v14) = *v15 < 0x20u ? 16 : 32;
    }
    *v15 = v14;
LABEL_23:
    *(_BYTE *)(v8 + 3) = 1;
    return v4;
  }
  LOBYTE(v6) = 32;
  LOBYTE(v14) = 6;
  NVMeSetSenseData(v8, v14, v18, v6);
  return (unsigned int)-1056964601;
}
