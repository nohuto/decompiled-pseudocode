/*
 * XREFs of IoDevObjCreateDeviceSecure @ 0x1C009D770
 * Callers:
 *     <none>
 * Callees:
 *     IopDevObjApplyPostCreationSettings @ 0x1C009D8B0 (IopDevObjApplyPostCreationSettings.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C009DA30 (SeSddlSecurityDescriptorFromSDDL.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00E3EE8 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00E402C (PpRegStateUpdateStackCreationSettings.c)
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
  ULONG v12; // r15d
  ULONG v13; // r12d
  NTSTATUS updated; // ebx
  ULONG v15; // r9d
  ULONG DeviceCharacteristics; // r8d
  __int64 result; // rax
  void *v20; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  void *v22; // [rsp+58h] [rbp-28h]
  ULONG v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+64h] [rbp-1Ch]
  _DWORD v25[2]; // [rsp+68h] [rbp-18h] BYREF
  void *v26; // [rsp+70h] [rbp-10h]
  int v27; // [rsp+78h] [rbp-8h]
  int v28; // [rsp+7Ch] [rbp-4h]
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
    v12 = v23;
    v11 = v22;
    v13 = HIDWORD(v21);
    v10 = v21;
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
    v12 = 0;
    v21 = 0LL;
    v13 = 0;
    v22 = 0LL;
    v24 = 0;
    v23 = 0;
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
      || (v25[1] = 0,
          v27 = 0,
          v28 = 0,
          v25[0] = 2,
          v26 = v20,
          updated = PpRegStateUpdateStackCreationSettings(a8, v25),
          updated >= 0) )
    {
LABEL_7:
      v15 = a4;
      DeviceCharacteristics = a5;
      if ( (v21 & 1) != 0 )
        v15 = v13;
      if ( (v21 & 4) != 0 )
        DeviceCharacteristics = v12;
      if ( (v21 & 8) != 0 )
        a6 = v24;
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
