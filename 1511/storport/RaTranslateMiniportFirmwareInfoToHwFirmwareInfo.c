/*
 * XREFs of RaTranslateMiniportFirmwareInfoToHwFirmwareInfo @ 0x1C0030CDC
 * Callers:
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0023F08 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0032244 (RaUnitHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaTranslateMiniportFirmwareInfoToHwFirmwareInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // r11
  __int64 v8; // r10
  char v9; // cl
  int v10; // ebx
  __int64 v11; // r11
  __int64 v12; // r10
  unsigned __int8 v13; // al

  v2 = *(unsigned int *)(a2 + 44);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)v4 = 56;
  *(_DWORD *)(v4 + 4) = 56;
  if ( *(_DWORD *)(v2 + a2) == 2 && *(_DWORD *)(v2 + a2 + 4) == 24 )
  {
    v6 = 0;
    *(_BYTE *)(v4 + 8) ^= (*(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v2 + a2 + 8)) & 1;
    *(_BYTE *)(v4 + 9) = *(_BYTE *)(v2 + a2 + 9);
    *(_BYTE *)(v4 + 10) = *(_BYTE *)(v2 + a2 + 10);
    *(_BYTE *)(v4 + 11) = *(_BYTE *)(v2 + a2 + 11);
    *(_BYTE *)(v4 + 12) = *(_BYTE *)(v2 + a2 + 12);
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(v2 + a2 + 16);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(v2 + a2 + 20);
    if ( *(_BYTE *)(v2 + a2 + 9) )
    {
      v7 = v2 + a2 + 25;
      v8 = v4 + 28;
      do
      {
        if ( *(unsigned int *)(v5 + 8) < (unsigned __int64)(32LL * v6 + 56) )
        {
          v3 = -2147483643;
        }
        else
        {
          v9 = *(_BYTE *)(v8 + 5);
          *(_DWORD *)(v8 - 4) = 32;
          *(_DWORD *)v8 = 32;
          *(_BYTE *)(v8 + 4) = *(_BYTE *)(v7 - 1);
          *(_BYTE *)(v8 + 5) ^= (*(_BYTE *)v7 ^ v9) & 1;
          *(_OWORD *)(v8 + 12) = *(_OWORD *)(v7 + 7);
        }
        ++v6;
        v7 += 24LL;
        v8 += 32LL;
      }
      while ( v6 < *(unsigned __int8 *)(v2 + a2 + 9) );
    }
  }
  else
  {
    v10 = 0;
    *(_BYTE *)(v4 + 8) ^= (*(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v2 + a2 + 8)) & 1;
    *(_BYTE *)(v4 + 9) = *(_BYTE *)(v2 + a2 + 9);
    *(_BYTE *)(v4 + 10) = *(_BYTE *)(v2 + a2 + 10);
    *(_BYTE *)(v4 + 11) = *(_BYTE *)(v2 + a2 + 11);
    *(_BYTE *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 16) = 4096;
    *(_DWORD *)(v4 + 20) = 0x10000;
    if ( *(_BYTE *)(v2 + a2 + 9) )
    {
      v11 = v2 + a2 + 17;
      v12 = v4 + 28;
      do
      {
        if ( *(unsigned int *)(v5 + 8) < (unsigned __int64)(32LL * v10 + 56) )
        {
          v3 = -2147483643;
        }
        else
        {
          *(_DWORD *)(v12 - 4) = 32;
          *(_DWORD *)v12 = 32;
          *(_BYTE *)(v12 + 4) = *(_BYTE *)(v11 - 1);
          *(_BYTE *)(v12 + 5) ^= (*(_BYTE *)(v12 + 5) ^ *(_BYTE *)v11) & 1;
          *(_QWORD *)(v12 + 12) = *(_QWORD *)(v11 + 7);
        }
        ++v10;
        v11 += 16LL;
        v12 += 32LL;
      }
      while ( v10 < *(unsigned __int8 *)(v2 + a2 + 9) );
    }
  }
  v13 = *(_BYTE *)(v2 + a2 + 9);
  if ( v13 )
    *(_DWORD *)(v4 + 4) = 32 * (v13 - 1) + 56;
  else
    *(_DWORD *)(v4 + 4) = 56;
  return v3;
}
