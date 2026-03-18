/*
 * XREFs of ACPIDockIrpQueryID @ 0x1C0078870
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIInitUnicodeString @ 0x1C00683F4 (ACPIInitUnicodeString.c)
 *     ACPIInitMultiString @ 0x1C007B0AC (ACPIInitMultiString.c)
 */

__int64 __fastcall ACPIDockIrpQueryID(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Length; // r9d
  unsigned int v6; // r9d
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  int v9; // ebx
  _QWORD *v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 *v15; // [rsp+78h] [rbp+18h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !Length )
  {
    v12 = (const char *)DeviceExtension[69];
    goto LABEL_19;
  }
  v6 = Length - 1;
  if ( !v6 )
  {
    v9 = ACPIInitMultiString(&DestinationString, "ACPI\\DockDevice", DeviceExtension[70], "ACPI\\DockDevice", 0LL);
    if ( v9 < 0 )
      goto LABEL_7;
    DestinationString.Buffer[((unsigned __int64)DestinationString.MaximumLength >> 1) - 1] = 0;
    v13 = -1LL;
    do
      ++v13;
    while ( DestinationString.Buffer[v13] );
    DestinationString.Buffer[(unsigned int)v13] = 38;
LABEL_20:
    if ( v9 >= 0 )
    {
      a2->IoStatus.Information = (unsigned __int64)DestinationString.Buffer;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_6:
    v9 = -1073741637;
    goto LABEL_7;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v12 = (const char *)DeviceExtension[70];
LABEL_19:
    v9 = ACPIInitUnicodeString(&DestinationString, v12);
    goto LABEL_20;
  }
  if ( v8 != 1 )
    goto LABEL_6;
  v11 = (_QWORD *)DeviceExtension[22];
  if ( !v11 )
  {
    v9 = -1073741823;
    goto LABEL_8;
  }
  v9 = ACPIGet(v11, 1145656671, 532502, 0LL, 0, 0LL, 0LL, (__int64)&v15, 0LL);
  if ( v9 >= 0 )
  {
    DestinationString.Buffer = v15;
    goto LABEL_20;
  }
LABEL_7:
  a2->IoStatus.Information = 0LL;
LABEL_8:
  a2->IoStatus.Status = v9;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v9;
}
