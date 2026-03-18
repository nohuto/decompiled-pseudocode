/*
 * XREFs of ?IsExtendTopology@@YAHXZ @ 0x1C01C97BC
 * Callers:
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C9F78 (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_.c)
 * Callees:
 *     <none>
 */

__int64 IsExtendTopology(void)
{
  unsigned int v0; // edi
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  if ( !(unsigned int)DrvGetDisplayConfigBufferSizes(18LL, &v8, &v9) && v8 > 1 )
  {
    v1 = Win32AllocPool(72LL * v8, 1665430357LL);
    v2 = Win32AllocPool((unsigned __int64)v9 << 6, 1665430357LL);
    v5 = v2;
    if ( v1 )
    {
      if ( v2 )
      {
        if ( !(unsigned int)DrvQueryDisplayConfig(18LL, &v8, v1, &v9, v2, 0LL) )
        {
          v4 = v8;
          v3 = 0LL;
          if ( v8 )
          {
            while ( 1 )
            {
              v6 = (unsigned __int64)*(unsigned __int16 *)(v1 + 72 * v3 + 14) << 6;
              if ( *(_DWORD *)(v6 + v5 + 28) || *(_DWORD *)(v6 + v5 + 32) )
                break;
              v3 = (unsigned int)(v3 + 1);
              if ( (unsigned int)v3 >= v8 )
                goto LABEL_12;
            }
            v0 = 1;
          }
        }
      }
LABEL_12:
      Win32FreePool(v1, v3, v4);
    }
    if ( v5 )
      Win32FreePool(v5, v3, v4);
  }
  return v0;
}
