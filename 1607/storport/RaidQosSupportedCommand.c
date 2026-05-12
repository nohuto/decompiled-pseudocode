/*
 * XREFs of RaidQosSupportedCommand @ 0x1C002C8D0
 * Callers:
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 *     StorpTelemetryCollectPerfData @ 0x1C0007290 (StorpTelemetryCollectPerfData.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidQosSupportedCommand(__int64 a1)
{
  unsigned __int8 v1; // al
  int v3; // ecx
  char *v4; // r9
  char v5; // bl
  unsigned int v6; // edi
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // r11
  __int64 v10; // r8
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rcx
  char v14; // cl

  v1 = *(_BYTE *)(a1 + 2);
  if ( v1 == 40 )
    v3 = *(_DWORD *)(a1 + 20);
  else
    v3 = v1;
  if ( v3 )
    return 0;
  if ( v1 != 40 )
  {
    v4 = (char *)(a1 + 72);
    goto LABEL_25;
  }
  v4 = 0LL;
  v5 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
  {
    v6 = *(_DWORD *)(a1 + 56);
    v7 = 0LL;
    if ( v6 )
    {
      while ( 1 )
      {
        v8 = *(unsigned int *)(a1 + 4 * v7 + 120);
        if ( (unsigned int)v8 >= 0x80 )
        {
          v9 = *(unsigned int *)(a1 + 16);
          if ( (unsigned int)v8 < (unsigned int)v9 )
            break;
        }
LABEL_22:
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v6 )
          goto LABEL_25;
      }
      v10 = (unsigned int)v8;
      v11 = *(_DWORD *)(v8 + a1) - 64;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 && v10 + 40 <= v9 )
          {
            if ( *(_DWORD *)(v10 + a1 + 12) )
              v4 = (char *)(v10 + a1 + 32);
            goto LABEL_25;
          }
          goto LABEL_21;
        }
        v13 = v10 + 56;
      }
      else
      {
        v13 = v10 + 40;
      }
      if ( v13 <= v9 )
      {
        v5 = 1;
        if ( !*(_BYTE *)(v10 + a1 + 10) )
          goto LABEL_25;
        v4 = (char *)(v10 + a1 + 24);
      }
LABEL_21:
      if ( v5 )
        goto LABEL_25;
      goto LABEL_22;
    }
  }
LABEL_25:
  if ( v4 && ((v14 = *v4, ((*v4 - 8) & 0x5D) == 0) || v14 == 37 || v14 == -98 || (unsigned __int8)(v14 - 94) <= 1u) )
    return 1;
  else
    return 0;
}
