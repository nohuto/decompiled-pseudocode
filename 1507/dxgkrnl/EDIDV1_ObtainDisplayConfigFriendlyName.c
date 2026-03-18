/*
 * XREFs of EDIDV1_ObtainDisplayConfigFriendlyName @ 0x1C0008A84
 * Callers:
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00981D8 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C00086F8 (EDIDV1_IsEDIDBaseBlock.c)
 *     ?EDID_V1_ComputeMonDescStringLength@@YA_KPEBU_EDID_V1_MONITOR_DESCRIPTOR_BLOCK@@@Z @ 0x1C0008B84 (-EDID_V1_ComputeMonDescStringLength@@YA_KPEBU_EDID_V1_MONITOR_DESCRIPTOR_BLOCK@@@Z.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall EDIDV1_ObtainDisplayConfigFriendlyName(_QWORD *a1, char *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int16 i; // si
  const struct _EDID_V1_MONITOR_DESCRIPTOR_BLOCK *v7; // rcx
  size_t v8; // rdi
  const void *v9; // r9

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      v5 = 0LL;
      memset(a2, 0, 0x29uLL);
      for ( i = 0; i < 4u; ++i )
      {
        v7 = (const struct _EDID_V1_MONITOR_DESCRIPTOR_BLOCK *)((char *)a1 + 18 * i + 54);
        if ( !*(_WORD *)v7 && !*((_BYTE *)v7 + 2) && *((_BYTE *)v7 + 3) == 0xFC )
        {
          v8 = EDID_V1_ComputeMonDescStringLength(v7);
          if ( v5 + v8 > 0x28 )
            v8 = 40 - v5;
          if ( v9 && v8 )
          {
            if ( v8 > 0xD )
              v8 = 13LL;
            memmove(&a2[v5], v9, v8);
          }
          v5 += v8;
          if ( v5 > 0x28 )
            break;
        }
      }
      result = 3221226021LL;
      if ( v5 )
        return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
