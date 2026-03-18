/*
 * XREFs of IoDevObjCreateDeviceSecure @ 0x1C00D4F40
 * Callers:
 *     <none>
 * Callees:
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00D4DF4 (PpRegStateUpdateStackCreationSettings.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00D50C4 (PpRegStateReadCreateClassCreationSettings.c)
 *     IopDevObjApplyPostCreationSettings @ 0x1C00D578C (IopDevObjApplyPostCreationSettings.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00D590C (SeSddlSecurityDescriptorFromSDDL.c)
 */

__int64 __fastcall IoDevObjCreateDeviceSecure(
        struct _DRIVER_OBJECT *a1,
        __int64 a2,
        struct _UNICODE_STRING *a3,
        ULONG a4,
        ULONG a5,
        BOOLEAN a6,
        __int64 a7,
        __int64 a8,
        PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v9; // r13
  __int64 result; // rax
  ULONG v11; // r15d
  PVOID v12; // rsi
  ULONG v13; // r12d
  char v14; // di
  int updated; // ebx
  ULONG v16; // r9d
  ULONG DeviceCharacteristics; // r8d
  void *v20; // [rsp+48h] [rbp-38h] BYREF
  ULONG DeviceType[2]; // [rsp+50h] [rbp-30h] BYREF
  PVOID P; // [rsp+58h] [rbp-28h]
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
    result = PpRegStateReadCreateClassCreationSettings(a8, a1, DeviceType);
    if ( (int)result < 0 )
      return result;
    v11 = v23;
    v12 = P;
    v13 = DeviceType[1];
    v14 = DeviceType[0];
  }
  else
  {
    v14 = 0;
    v12 = 0LL;
    v11 = 0;
    *(_QWORD *)DeviceType = 0LL;
    v13 = 0;
    P = 0LL;
    v24 = 0;
    v23 = 0;
  }
  if ( (v14 & 2) != 0 )
    goto LABEL_9;
  updated = SeSddlSecurityDescriptorFromSDDL(a7, a2, &v20);
  if ( updated >= 0 )
  {
    v12 = v20;
    v14 = 2;
    DeviceType[0] = 2;
    P = v20;
    if ( !a8
      || (v25[1] = 0,
          v27 = 0,
          v28 = 0,
          v25[0] = 2,
          v26 = v20,
          updated = PpRegStateUpdateStackCreationSettings(a8, (__int64)v25),
          updated >= 0) )
    {
LABEL_9:
      v16 = a4;
      DeviceCharacteristics = a5;
      if ( (DeviceType[0] & 1) != 0 )
        v16 = v13;
      if ( (DeviceType[0] & 4) != 0 )
        DeviceCharacteristics = v11;
      if ( (DeviceType[0] & 8) != 0 )
        a6 = v24;
      updated = IoCreateDevice(a1, DeviceExtensionSize, a3, v16, DeviceCharacteristics, a6, &DeviceObject);
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
  if ( (v14 & 2) != 0 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)updated;
}
