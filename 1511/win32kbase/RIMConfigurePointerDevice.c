/*
 * XREFs of RIMConfigurePointerDevice @ 0x1C007BDB4
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000F32C (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00D1390 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C0005B94 (RIMDeliverConfigRequest.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000F23C (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMFindConfigDeviceForInput @ 0x1C007BE20 (RIMFindConfigDeviceForInput.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00CE82C (ApiSetGetPowerTransitionsState.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D28AC (RIMSendPTPLatencyMgtDeviceRequest.c)
 */

__int64 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  PVOID v7; // rbx
  int v8; // esi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // [rsp+28h] [rbp-31h]
  PVOID Object; // [rsp+30h] [rbp-29h] BYREF
  PDEVICE_OBJECT v14; // [rsp+38h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v16[28]; // [rsp+48h] [rbp-11h] BYREF
  int v17; // [rsp+64h] [rbp+Bh]
  int v18; // [rsp+68h] [rbp+Fh]

  Object = 0LL;
  if ( (unsigned int)RIMFindConfigDeviceForInput(a1, a3, a2, &Object)
    && (v7 = Object,
        v8 = 2,
        (int)RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)((char *)Object + 200), v5, 2u, &Handle, &Object, &v14) >= 0) )
  {
    if ( *(_WORD *)(a3 + 40) == 4 )
    {
      *((_DWORD *)v7 + 44) |= 0x200u;
    }
    else
    {
      *((_DWORD *)v7 + 44) |= 0x400u;
      v8 = 3;
    }
    if ( (int)RIMDeliverConfigRequest(*((_QWORD *)v7 + 50), v14, (struct _FILE_OBJECT *)Object, v8) >= 0 && v8 == 3 )
    {
      v9 = 0;
      ApiSetGetPowerTransitionsState(v16);
      if ( v17 || v18 )
        v9 = 1;
      v11 = RIMSendPTPLatencyMgtDeviceRequest(v10, a2, a3, v9);
      if ( v11 < 0 )
      {
        LODWORD(v12) = v11;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x37u,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
          v12);
      }
    }
    ObfDereferenceObject(Object);
    ZwClose(Handle);
    result = *(_QWORD *)(a2 + 416);
    *(_DWORD *)(result + 252) &= ~0x4000u;
  }
  else
  {
    result = *(_QWORD *)(a2 + 416);
    *(_DWORD *)(result + 252) |= 0x4000u;
  }
  return result;
}
