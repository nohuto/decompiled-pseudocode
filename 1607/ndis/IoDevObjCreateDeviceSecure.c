/*
 * XREFs of IoDevObjCreateDeviceSecure @ 0x1C009CFE0
 * Callers:
 *     <none>
 * Callees:
 *     IopDevObjApplyPostCreationSettings @ 0x1C009D118 (IopDevObjApplyPostCreationSettings.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C009D29C (SeSddlSecurityDescriptorFromSDDL.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00E4328 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00E446C (PpRegStateUpdateStackCreationSettings.c)
 */

__int64 __fastcall IoDevObjCreateDeviceSecure(
        struct _DRIVER_OBJECT *a1,
        __int64 a2,
        _UNICODE_STRING *a3,
        ULONG a4,
        ULONG a5,
        BOOLEAN a6,
        __int64 a7,
        __int64 a8,
        PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v9; // r13
  char v10; // di
  void *v11; // rsi
  ULONG v12; // r12d
  ULONG v13; // r15d
  NTSTATUS updated; // ebx
  ULONG v15; // r9d
  ULONG DeviceCharacteristics; // edx
  __int64 result; // rax
  void *v20; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  void *v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  _QWORD v24[3]; // [rsp+68h] [rbp-18h] BYREF
  ULONG DeviceExtensionSize; // [rsp+C8h] [rbp+48h]

  DeviceExtensionSize = a2;
  v9 = DeviceObject;
  DeviceObject = 0LL;
  *(_QWORD *)&v9->Type = 0LL;
  if ( !a3 && (a5 & 0x80u) == 0 )
    return 3221225485LL;
  if ( a8 )
  {
    result = PpRegStateReadCreateClassCreationSettings(a8, a1, &v21);
    if ( (int)result < 0 )
      return result;
    v13 = v23;
    v11 = v22;
    v12 = HIDWORD(v21);
    v10 = v21;
  }
  else
  {
    v10 = 0;
    v21 = 0LL;
    v11 = 0LL;
    v22 = 0LL;
    v12 = 0;
    v23 = 0LL;
    v13 = 0;
  }
  if ( (v10 & 2) != 0 )
    goto LABEL_7;
  updated = SeSddlSecurityDescriptorFromSDDL(a7, a2, &v20);
  if ( updated >= 0 )
  {
    v11 = v20;
    v10 = 2;
    LODWORD(v21) = 2;
    v22 = v20;
    if ( !a8
      || (v24[0] = 2LL,
          v24[2] = 0LL,
          v24[1] = v20,
          updated = PpRegStateUpdateStackCreationSettings(a8, v24),
          updated >= 0) )
    {
LABEL_7:
      v15 = a4;
      DeviceCharacteristics = a5;
      if ( (v21 & 1) != 0 )
        v15 = v12;
      if ( (v21 & 4) != 0 )
        DeviceCharacteristics = v13;
      if ( (v21 & 8) != 0 )
        a6 = BYTE4(v23);
      updated = IoCreateDevice(a1, DeviceExtensionSize, a3, v15, DeviceCharacteristics, a6, &DeviceObject);
      if ( updated >= 0 )
      {
        updated = IopDevObjApplyPostCreationSettings(DeviceObject);
        if ( updated < 0 )
          IoDeleteDevice(DeviceObject);
        else
          *(_QWORD *)&v9->Type = DeviceObject;
      }
    }
  }
  if ( (v10 & 2) != 0 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)updated;
}
