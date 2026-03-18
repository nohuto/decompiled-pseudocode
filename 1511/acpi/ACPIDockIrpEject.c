/*
 * XREFs of ACPIDockIrpEject @ 0x1C00784D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIInternalClearFlags @ 0x1C0004320 (ACPIInternalClearFlags.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIDockIrpEject(ULONG_PTR a1, IRP *a2)
{
  _DWORD *DeviceExtension; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rbp
  int v6; // ebx
  int v7; // eax
  volatile signed __int32 *v8; // r14
  _QWORD *v9; // rcx
  int v10; // ecx
  char v12; // [rsp+80h] [rbp+18h] BYREF
  char v13; // [rsp+88h] [rbp+20h] BYREF

  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension(a1);
  ACPIInternalClearFlags(DeviceExtension, 0x400000000LL);
  v5 = *(_QWORD **)(v4 + 176);
  if ( v5 )
  {
    if ( DeviceExtension[46] != 4
      || (KdDisableDebugger(), DeviceExtension[48] == 1)
      || (v7 = ACPIGet(v5, 1262699615, 277086210, 0LL, 4, 0LL, 0LL, (__int64)&v12, 0LL),
          DeviceExtension[48] = 1,
          v6 = v7,
          v7 >= 0) )
    {
      v8 = (volatile signed __int32 *)AMLIGetNamedChild(v5[88], 810173791);
      if ( v8 )
      {
        v6 = ACPIGet(v5, 810173791, 277872640, 1LL, 4, 0LL, 0LL, 0LL, 0LL);
        AMLIDereferenceHandleEx(v8);
      }
      else
      {
        v6 = -1073741772;
      }
      if ( DeviceExtension[46] == 4 )
        KdEnableDebugger();
      ACPIInternalClearFlags(DeviceExtension, 0x400000000LL);
      if ( v6 >= 0 )
      {
        v6 = ACPIGet(v9, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v13, 0LL);
        if ( v6 >= 0 )
        {
          v10 = v6;
          if ( (*(_BYTE *)DeviceExtension & 2) == 0 )
            v10 = -1073741823;
          v6 = v10;
        }
      }
    }
    else
    {
      KdEnableDebugger();
    }
  }
  else
  {
    v6 = -1073741823;
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v6;
}
