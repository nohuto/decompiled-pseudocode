/*
 * XREFs of ApplyPathModalityToCdsRegistryStore @ 0x1C0064B48
 * Callers:
 *     ApplyPathsModality @ 0x1C0065594 (ApplyPathsModality.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0064CA0 (DrvUpdateDisplayDriverParameters.c)
 */

__int64 __fastcall ApplyPathModalityToCdsRegistryStore(__int64 a1)
{
  struct _devicemodeW *v2; // rsi
  wchar_t *v3; // rbx
  unsigned int v4; // r14d
  struct _devicemodeW *v5; // rbp
  unsigned __int8 v6; // al
  wchar_t *v7; // rcx
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rax

  v2 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1936876615LL, 1);
  if ( v2 )
  {
    v3 = gpGraphicsDeviceList;
    v4 = 1;
    while ( v3 )
    {
      if ( (*((_DWORD *)v3 + 40) & 0x800000) != 0 )
      {
        v8 = 0;
        v5 = v2;
        if ( !*(_WORD *)(a1 + 20) )
          goto LABEL_18;
        while ( 1 )
        {
          v9 = 216LL * v8;
          if ( *(_QWORD *)(v9 + a1 + 224) )
          {
            if ( *((_DWORD *)v3 + 66) == *(_DWORD *)(v9 + a1 + 56)
              && *((_DWORD *)v3 + 67) == *(_DWORD *)(v9 + a1 + 60)
              && *((_DWORD *)v3 + 68) == *(_DWORD *)(v9 + a1 + 64) )
            {
              break;
            }
          }
          if ( ++v8 >= *(unsigned __int16 *)(a1 + 20) )
            goto LABEL_18;
        }
        v5 = *(struct _devicemodeW **)(216LL * v8 + a1 + 224);
        if ( v5 == v2 )
LABEL_18:
          v6 = 1;
        else
          v6 = 0;
        v7 = gpGraphicsDeviceList;
        if ( !gpGraphicsDeviceList )
          goto LABEL_23;
        do
        {
          if ( v7 == v3 )
            break;
          v7 = (wchar_t *)*((_QWORD *)v7 + 16);
        }
        while ( v7 );
        if ( !v7 || (int)DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)v7, v5, v6, 0) < 0 )
        {
LABEL_23:
          v12 = (_QWORD *)WdLogNewEntry5_WdError();
          v12[3] = v3;
          v12[6] = v5 == v2;
          v12[4] = a1;
          v12[5] = v5;
          WdLogEvent5_WdError(v12);
          v4 = 0;
        }
      }
      v3 = (wchar_t *)*((_QWORD *)v3 + 16);
    }
    Win32FreePool();
    return v4;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v11 + 24) = 220LL;
    *(_QWORD *)(v11 + 32) = a1;
    WdLogEvent5_WdLowResource(v11);
    return 0LL;
  }
}
