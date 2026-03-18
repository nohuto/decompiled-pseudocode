/*
 * XREFs of RIMConfigurePointerDevice @ 0x1C007F890
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0010ED8 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C0005780 (RIMDeliverConfigRequest.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000B2CC (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMFindConfigDeviceForInput @ 0x1C007FA30 (RIMFindConfigDeviceForInput.c)
 *     WPP_RECORDER_SF_s @ 0x1C00CDD90 (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  int v6; // edi
  int v7; // edx
  int v8; // ebx
  const char *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  PVOID v12; // rbx
  int v13; // ecx
  __int64 result; // rax
  __int64 v15; // [rsp+28h] [rbp-40h]
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  PDEVICE_OBJECT v18; // [rsp+88h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = a2;
  v6 = 3;
  if ( (*(_DWORD *)(a2 + 184) & 0x40) == 0 )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      3,
      60,
      (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids);
  }
  v8 = RIMFindConfigDeviceForInput(a1, a3, v4, &Object);
  v9 = "found config device";
  if ( !v8 )
    v9 = "NO config device found";
  WPP_RECORDER_SF_s(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    4,
    61,
    (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
    (__int64)v9);
  if ( v8 )
  {
    v12 = Object;
    v13 = RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)Object + 13, v10, v11, &Handle, &Object, &v18);
    if ( v13 < 0 )
    {
      *(_DWORD *)(*(_QWORD *)(v4 + 480) + 252LL) |= 0x4000u;
      LODWORD(v15) = v13;
      return WPP_RECORDER_SF_D(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               3u,
               4u,
               0x3Eu,
               (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
               v15);
    }
    else
    {
      if ( *(_WORD *)(a3 + 40) == 4 )
      {
        *((_DWORD *)v12 + 46) |= 0x200u;
        v6 = 2;
      }
      else
      {
        *((_DWORD *)v12 + 46) |= 0x400u;
      }
      RIMDeliverConfigRequest(*((_QWORD *)v12 + 58), v18, (struct _FILE_OBJECT *)Object, v6);
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      result = *(_QWORD *)(v4 + 480);
      *(_DWORD *)(result + 252) &= ~0x4000u;
    }
  }
  else
  {
    result = *(_QWORD *)(v4 + 480);
    *(_DWORD *)(result + 252) |= 0x4000u;
  }
  return result;
}
