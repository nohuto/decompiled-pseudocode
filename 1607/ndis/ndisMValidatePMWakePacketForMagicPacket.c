/*
 * XREFs of ndisMValidatePMWakePacketForMagicPacket @ 0x1C0049738
 * Callers:
 *     ndisMEvaluateMagicPacketWake @ 0x1C0049160 (ndisMEvaluateMagicPacketWake.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C0049568 (ndisMUpdateNameOnPMWakePacket.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

char __fastcall ndisMValidatePMWakePacketForMagicPacket(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  char v9; // r10
  unsigned __int64 v10; // r11
  int v11; // ecx
  __int64 v12; // r9
  unsigned int i; // r8d
  int v14; // eax
  int v15; // ecx

  v2 = *(unsigned int *)(a2 + 148);
  if ( v2 < 0x66 )
    return 0;
  v5 = *(unsigned int *)(a2 + 152);
  v6 = v2 - 102;
  v7 = v5 + a2;
  v8 = *(_QWORD *)(a1 + 4096);
  v9 = 0;
  v10 = v7 - v5 - a2;
  do
  {
    v11 = *(_DWORD *)v7 + 1;
    if ( *(_DWORD *)v7 == -1 )
      v11 = *(unsigned __int16 *)(v7 + 4) - 0xFFFF;
    if ( !v11 )
    {
      v12 = v7 + 6;
      for ( i = 0; i < 0x10; ++i )
      {
        v14 = *(_DWORD *)(v8 + 1126);
        v15 = *(_DWORD *)v12 - v14;
        if ( *(_DWORD *)v12 == v14 )
          v15 = *(unsigned __int16 *)(v12 + 4) - *(unsigned __int16 *)(v8 + 1130);
        if ( v15 )
        {
          v9 = 0;
          goto LABEL_15;
        }
        v12 += 6LL;
        v9 = 1;
      }
      if ( i == 16 )
        return v9;
    }
LABEL_15:
    ++v7;
    ++v10;
  }
  while ( v10 <= v6 );
  return v9;
}
