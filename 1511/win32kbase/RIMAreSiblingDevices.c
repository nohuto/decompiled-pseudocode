/*
 * XREFs of RIMAreSiblingDevices @ 0x1C00C1ED0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMAreSiblingDevices(void *a1, void *a2, BOOL *a3, char a4)
{
  unsigned int v7; // esi
  int v8; // r15d
  int v9; // eax
  int v10; // r12d
  BOOL v11; // r14d
  PVOID v12; // rdi
  const void *v13; // rcx
  const void *v14; // rdx
  unsigned int v15; // eax
  int v16; // r9d
  __int64 v18; // [rsp+30h] [rbp-48h]
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  PVOID v20; // [rsp+40h] [rbp-38h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x76u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v7 = 0;
  v8 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  LODWORD(v18) = v8;
  v9 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &v20);
  v10 = v9;
  HIDWORD(v18) = v9;
  if ( v8 < 0 || v9 < 0 )
  {
    v7 = v9;
    if ( v8 < 0 )
      v7 = v8;
    v12 = Object;
  }
  else
  {
    v11 = 0;
    v12 = Object;
    v13 = (const void *)*((_QWORD *)Object + 48);
    if ( v13 )
    {
      v14 = (const void *)*((_QWORD *)v20 + 48);
      if ( v14 )
      {
        v15 = *((_DWORD *)Object + 98);
        if ( v15 )
        {
          v16 = *((_DWORD *)v20 + 98);
          if ( v16 )
          {
            if ( v15 == v16 )
              v11 = RtlCompareMemory(v13, v14, v15) == v15;
          }
        }
      }
    }
    if ( a4 )
    {
      if ( a3 >= W32UserProbeAddress )
        a3 = (BOOL *)W32UserProbeAddress;
      *a3 = v11;
    }
    else
    {
      *a3 = v11;
    }
  }
  if ( v8 >= 0 )
    ObfDereferenceObject(v12);
  if ( v10 >= 0 )
    ObfDereferenceObject(v20);
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x77u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v7,
    v18);
  return v7;
}
