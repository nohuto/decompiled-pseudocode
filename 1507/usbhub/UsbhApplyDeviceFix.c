/*
 * XREFs of UsbhApplyDeviceFix @ 0x1C0052280
 * Callers:
 *     UsbhCheck4GlobalErrata @ 0x1C0005720 (UsbhCheck4GlobalErrata.c)
 *     UsbhCheckDeviceErrata @ 0x1C0005778 (UsbhCheckDeviceErrata.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

_DWORD *__fastcall UsbhApplyDeviceFix(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *result; // rax
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi

  v4 = a3;
  FdoExt(a1, a2, a3, a4);
  result = PdoExt(a2, v6, v7, v8);
  v10 = v4 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 2;
            if ( v15 )
            {
              v16 = v15 - 3;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 == 1 )
                    result[356] |= 0x20000u;
                }
                else
                {
                  result[356] |= 0x10000u;
                }
              }
              else
              {
                result[356] &= ~0x2000u;
              }
            }
            else
            {
              result[356] |= 0x8000u;
            }
          }
          else
          {
            result[356] |= 0x4000u;
          }
        }
        else
        {
          result[356] |= 0x2000u;
        }
      }
      else
      {
        result[356] |= 0x1000u;
      }
    }
    else
    {
      result[356] |= 0x200u;
    }
  }
  else
  {
    result[356] &= ~0x200u;
  }
  return result;
}
