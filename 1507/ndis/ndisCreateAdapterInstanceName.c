/*
 * XREFs of ndisCreateAdapterInstanceName @ 0x1C00AFA04
 * Callers:
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00C64F8 (ndisIfCreateInterfaceForiScsi.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qZl @ 0x1C004AEDC (WPP_SF_qZl_ea_1C004AEDC.c)
 */

__int64 __fastcall ndisCreateAdapterInstanceName(
        _UNICODE_STRING **a1,
        __int64 a2,
        _DEVICE_OBJECT *a3,
        _UNICODE_STRING **a4)
{
  _UNICODE_STRING **v4; // r15
  DEVICE_REGISTRY_PROPERTY v8; // r14d
  NTSTATUS DeviceProperty; // eax
  PVOID PoolWithTag; // rax
  void *v11; // r12
  NTSTATUS appended; // ebx
  _UNICODE_STRING *v13; // rax
  _UNICODE_STRING *v14; // r14
  unsigned __int16 v15; // dx
  char v16; // r15
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS v21; // eax
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // cx
  _UNICODE_STRING *v24; // rax
  _UNICODE_STRING *v25; // r15
  PULONG ResultLength; // [rsp+20h] [rbp-20h]
  ULONG BufferLength; // [rsp+30h] [rbp-10h] BYREF
  int PropertyBuffer[3]; // [rsp+34h] [rbp-Ch] BYREF

  v4 = a4;
  BufferLength = 0;
  if ( a2 )
    a3 = *(_DEVICE_OBJECT **)(a2 + 3888);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0xEu, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, (__int64)a3);
  *a1 = 0LL;
  v8 = DevicePropertyFriendlyName;
  DeviceProperty = IoGetDeviceProperty(a3, DevicePropertyFriendlyName, 0, 0LL, &BufferLength);
  if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
  {
    v8 = DevicePropertyDeviceDescription;
    v21 = IoGetDeviceProperty(a3, DevicePropertyDeviceDescription, 0, 0LL, &BufferLength);
    appended = v21;
    if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741789 )
    {
      if ( (unsigned __int8)byte_1C0085314 < 2u )
        goto LABEL_25;
      v22 = 15;
      goto LABEL_37;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, BufferLength, 0x2020444Eu);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, BufferLength);
    appended = IoGetDeviceProperty(a3, v8, BufferLength, v11, &BufferLength);
    if ( appended < 0 )
    {
      if ( (unsigned __int8)byte_1C0085314 >= 2u )
      {
        v23 = 17;
LABEL_42:
        WPP_SF_qq(v23, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, a2, a3);
      }
    }
    else
    {
      BufferLength += 16;
      v13 = (_UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, BufferLength, 0x6E61444Eu);
      v14 = v13;
      if ( !v13 )
      {
        appended = -1073741670;
        if ( (unsigned __int8)byte_1C0085314 < 2u )
          goto LABEL_24;
        v23 = 18;
        goto LABEL_42;
      }
      memset(v13, 0, BufferLength);
      v14->Length = 0;
      v14->Buffer = &v14[1].Length;
      v14->MaximumLength = BufferLength - 16;
      appended = RtlAppendUnicodeToString(v14, (PCWSTR)v11);
      if ( appended >= 0 )
      {
        if ( (unsigned __int8)byte_1C0085314 >= 4u )
          WPP_SF_Z(0x13u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, (__int64 *)v14);
        if ( !v4 )
          goto LABEL_20;
        v15 = 0;
        if ( (v14->Length & 0xFFFE) == 0 )
          goto LABEL_19;
        v16 = 0;
        do
        {
          if ( *((_WORD *)v11 + v15) == 47 )
          {
            v16 = 1;
            *((_WORD *)v11 + v15) = 45;
          }
          ++v15;
        }
        while ( v15 < (unsigned __int16)(v14->Length >> 1) );
        v17 = v16 == 0;
        v4 = a4;
        if ( v17 )
        {
LABEL_19:
          *v4 = 0LL;
          goto LABEL_20;
        }
        v24 = (_UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, BufferLength, 0x6E61444Eu);
        v25 = v24;
        if ( v24 )
        {
          memset(v24, 0, BufferLength);
          v25->Buffer = &v25[1].Length;
          v25->Length = 0;
          v25->MaximumLength = BufferLength - 16;
          RtlAppendUnicodeToString(v25, (PCWSTR)v11);
          *a4 = v25;
LABEL_20:
          *a1 = v14;
          if ( a2 )
          {
            if ( IoGetDeviceProperty(a3, DevicePropertyUINumber, 4u, PropertyBuffer, &BufferLength) >= 0 )
            {
              if ( (unsigned __int8)byte_1C0085314 >= 4u )
              {
                LODWORD(ResultLength) = PropertyBuffer[0];
                WPP_SF_qZl(v19, v18, a2, (__int64 *)v14, ResultLength);
              }
              *(_DWORD *)(a2 + 3776) = PropertyBuffer[0];
            }
            else if ( (unsigned __int8)byte_1C0085314 >= 4u )
            {
              WPP_SF_Z(0x16u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, (__int64 *)v14);
            }
          }
          goto LABEL_24;
        }
        ExFreePoolWithTag(v14, 0);
        appended = -1073741670;
        if ( (unsigned __int8)byte_1C0085314 >= 2u )
        {
          v23 = 20;
          goto LABEL_42;
        }
      }
    }
LABEL_24:
    ExFreePoolWithTag(v11, 0);
    goto LABEL_25;
  }
  appended = -1073741670;
  if ( (unsigned __int8)byte_1C0085314 >= 2u )
  {
    v22 = 16;
LABEL_37:
    WPP_SF_qq(v22, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, a2, a3);
  }
LABEL_25:
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0x17u, &WPP_8578613493474478f9fbc41c93fda03c_Traceguids, (__int64)a3, appended);
  return (unsigned int)appended;
}
