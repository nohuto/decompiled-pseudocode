/*
 * XREFs of ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C016C018
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C016BEC4 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1C016CC44 (DpiCallDrvSetBacklightOptimizationLevel.c)
 *     DpiCallDrvSetBrightness @ 0x1C016CCBC (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessEscape(struct _DEVICE_OBJECT *a1, struct _D3DKMT_BRIGHTNESS_INFO *a2, __int64 a3)
{
  _WORD *DeviceExtension; // rsi
  D3DKMT_BRIGHTNESS_INFO_TYPE Type; // ecx
  unsigned int v7; // ebx
  bool v8; // al
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v19; // [rsp+30h] [rbp-39h] BYREF
  int v20; // [rsp+38h] [rbp-31h]
  const wchar_t *v21; // [rsp+40h] [rbp-29h]
  int *v22; // [rsp+48h] [rbp-21h]
  int v23; // [rsp+50h] [rbp-19h]
  int *v24; // [rsp+58h] [rbp-11h]
  int v25; // [rsp+60h] [rbp-9h]
  __int64 v26; // [rsp+68h] [rbp-1h]
  int v27; // [rsp+70h] [rbp+7h]
  __int64 v28; // [rsp+78h] [rbp+Fh]
  _BYTE v29[32]; // [rsp+80h] [rbp+17h] BYREF
  int v30; // [rsp+D0h] [rbp+67h] BYREF
  char v31; // [rsp+E0h] [rbp+77h] BYREF

  DeviceExtension = a1->DeviceExtension;
  if ( DeviceExtension[1565] != 2 )
    return 3221225659LL;
  Type = a2->Type;
  v7 = 0;
  if ( a2->Type == D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
  {
    v8 = *((_BYTE *)DeviceExtension + 2913) == 0;
    *((_BYTE *)DeviceExtension + 2913) = v8;
    LOBYTE(a2->ChildUid) = v8;
    return 0LL;
  }
  if ( Type != D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE && !*((_BYTE *)DeviceExtension + 2912) )
    return 3221226538LL;
  v9 = Type - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
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
              v15 = v14 - 1;
              if ( v15 )
              {
                v16 = v15 - 1;
                if ( v16 )
                {
                  if ( v16 == 1 )
                  {
                    *((_BYTE *)DeviceExtension + 2912) = 0;
                    if ( (*((int (__fastcall **)(_QWORD, char *))DeviceExtension + 398))(
                           *((_QWORD *)DeviceExtension + 392),
                           &v31) >= 0
                      && (v31 & 1) != 0 )
                    {
                      v30 |= 1u;
                      (*((void (__fastcall **)(_QWORD, int *))DeviceExtension + 399))(
                        *((_QWORD *)DeviceExtension + 392),
                        &v30);
                    }
                    LOBYTE(v17) = *((_BYTE *)DeviceExtension + 2920);
                    DpiCallDrvSetBrightness(a1, DeviceExtension + 1564, v17);
                    DpiBrightnessAISetBacklightOptLevel(a1);
                  }
                  else
                  {
                    return (unsigned int)-1073741811;
                  }
                }
                else
                {
                  v30 = 0;
                  v19 = 0LL;
                  v21 = L"EnableManualBrightnessMode";
                  v20 = 32;
                  v22 = &v30;
                  v23 = 4;
                  v25 = 4;
                  v24 = &v30;
                  v26 = 0LL;
                  v27 = 0;
                  v28 = 0LL;
                  memset(v29, 0, sizeof(v29));
                  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v19, 0LL, 0LL);
                  *((_BYTE *)DeviceExtension + 2912) = v30 != 0;
                  DpiCallDrvSetBacklightOptimizationLevel(a1, DeviceExtension + 1564);
                }
                return v7;
              }
              return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, ULONG *))DeviceExtension + 401))(
                                     *((_QWORD *)DeviceExtension + 392),
                                     &a2->ChildUid);
            }
            else
            {
              if ( (int)a2->ChildUid > 3 )
                return 3221225485LL;
              return (unsigned int)DpiCallDrvSetBacklightOptimizationLevel(a1, DeviceExtension + 1564);
            }
          }
          else
          {
            return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, ULONG *))DeviceExtension + 399))(
                                   *((_QWORD *)DeviceExtension + 392),
                                   &a2->ChildUid);
          }
        }
        else
        {
          return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, ULONG *))DeviceExtension + 398))(
                                 *((_QWORD *)DeviceExtension + 392),
                                 &a2->ChildUid);
        }
      }
      else
      {
        LOBYTE(a3) = a2->ChildUid;
        return (unsigned int)DpiCallDrvSetBrightness(a1, DeviceExtension + 1564, a3);
      }
    }
    else
    {
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, ULONG *))DeviceExtension + 397))(
                             *((_QWORD *)DeviceExtension + 392),
                             &a2->ChildUid);
    }
  }
  else
  {
    return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, ULONG *, char *))DeviceExtension + 395))(
                           *((_QWORD *)DeviceExtension + 392),
                           256LL,
                           &a2->ChildUid,
                           (char *)&a2->ChildUid + 1);
  }
}
