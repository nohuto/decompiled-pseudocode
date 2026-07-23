/*
 * XREFs of PopFxAcpiDispatchNotification @ 0x14020E114
 * Callers:
 *     PoFxPlatformRequestHandler @ 0x1401484CC (PoFxPlatformRequestHandler.c)
 * Callees:
 *     PopFxAcpiForwardNotification @ 0x14020E21C (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiPrepareDevice @ 0x14020E434 (PopFxAcpiPrepareDevice.c)
 *     PopFxAcpiRegisterDevice @ 0x14020E570 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14020E664 (PopFxAcpiUnregisterDevice.c)
 *     PopFxAcpiValidateParameters @ 0x14020E720 (PopFxAcpiValidateParameters.c)
 *     PopPluginAcpiNotificationStrict @ 0x14020E984 (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiDispatchNotification(__int64 a1)
{
  char v1; // di
  int v3; // r9d
  int v4; // ecx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+10h] BYREF
  __int64 v9; // [rsp+48h] [rbp+18h] BYREF

  v1 = 0;
  LOBYTE(v9) = 0;
  LOBYTE(v8) = 0;
  if ( (unsigned __int8)PopFxAcpiValidateParameters() )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 1:
        v4 = PopFxAcpiPrepareDevice(**(_QWORD **)(a1 + 16), *(_QWORD *)(a1 + 16), &v8, &v9);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(a1 + 40) = v8;
          *(_BYTE *)(a1 + 48) = v9;
        }
        break;
      case 2:
        PopPluginAcpiNotificationStrict(*(_QWORD *)(a1 + 40), 2uLL, *(_QWORD *)(a1 + 16));
        v4 = 0;
        break;
      case 3:
        v4 = PopFxAcpiRegisterDevice(**(_QWORD **)(a1 + 16), *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 16), &v8, &v9);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(a1 + 48) = v8;
          *(_QWORD *)(a1 + 56) = v9;
        }
        break;
      default:
        v5 = *(_QWORD *)(a1 + 8);
        if ( *(_DWORD *)a1 != 4 )
        {
          v6 = PopFxAcpiForwardNotification(v5, *(_DWORD *)a1, *(_QWORD *)(a1 + 16), v3, (__int64)&v8);
          v1 = v8;
          v4 = v6;
          goto LABEL_15;
        }
        v4 = PopFxAcpiUnregisterDevice(v5, *(_QWORD *)(a1 + 16));
        break;
    }
    v1 = 1;
    goto LABEL_15;
  }
  v4 = -1073741823;
LABEL_15:
  *(_BYTE *)(a1 + 32) = v1;
  return (unsigned int)v4;
}
