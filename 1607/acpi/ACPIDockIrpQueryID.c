/*
 * XREFs of ACPIDockIrpQueryID @ 0x1C00987C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     WPP_RECORDER_SF_qsdLqss @ 0x1C0004724 (WPP_RECORDER_SF_qsdLqss.c)
 *     ACPIDebugGetIrpText @ 0x1C0004B44 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C0027040 (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIInitUnicodeString @ 0x1C0087E38 (ACPIInitUnicodeString.c)
 *     ACPIInitMultiString @ 0x1C009C20C (ACPIInitMultiString.c)
 */

__int64 __fastcall ACPIDockIrpQueryID(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 CurrentStackLocation; // rcx
  const char *v5; // r14
  _QWORD *v6; // rbx
  char v7; // di
  unsigned __int8 v8; // dl
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char *v13; // rax
  __int64 v14; // rdx
  const char *v15; // r8
  char v16; // r10
  const char *v17; // r11
  int v18; // esi
  __int64 v19; // rcx
  char *IrpText; // rax
  const char *v21; // r8
  __int64 *v23; // rcx
  __int64 v24; // rax
  const char *v25; // r14
  const char *v26; // rcx
  const char *v27; // rdx
  __int64 v28; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 v30; // [rsp+B8h] [rbp+48h]
  char v31; // [rsp+C0h] [rbp+50h]
  wchar_t *v32; // [rsp+C8h] [rbp+58h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v5 = (const char *)qword_1C0090C20;
  v6 = (_QWORD *)DeviceExtension;
  v7 = 0;
  v8 = *(_BYTE *)(CurrentStackLocation + 1);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v9 = *(_DWORD *)(CurrentStackLocation + 8);
  v30 = v8;
  v31 = v9;
  if ( !v9 )
  {
    v27 = (const char *)v6[70];
    goto LABEL_26;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v18 = ACPIInitMultiString(&DestinationString, "ACPI\\DockDevice", v6[71], "ACPI\\DockDevice", 0LL);
    if ( v18 < 0 )
      goto LABEL_8;
    DestinationString.Buffer[(DestinationString.MaximumLength >> 1) - 1] = 0;
    v28 = -1LL;
    do
      ++v28;
    while ( DestinationString.Buffer[v28] );
    DestinationString.Buffer[(unsigned int)v28] = 38;
    goto LABEL_27;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_7:
    v18 = -1073741637;
    goto LABEL_8;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v27 = (const char *)v6[71];
LABEL_26:
    v18 = ACPIInitUnicodeString(&DestinationString, v27);
LABEL_27:
    if ( v18 >= 0 )
    {
      a2->IoStatus.Information = (unsigned __int64)DestinationString.Buffer;
      goto LABEL_9;
    }
LABEL_8:
    a2->IoStatus.Information = 0LL;
LABEL_9:
    a2->IoStatus.Status = v18;
    IofCompleteRequest(a2, 0);
    if ( v6 )
    {
      v7 = (char)v6;
      if ( (v6[1] & 0x200000000000LL) != 0 )
        v5 = (const char *)v6[70];
    }
    IrpText = ACPIDebugGetIrpText(v19, v30);
    WPP_RECORDER_SF_qsdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      (__int64)v21,
      0x16u,
      (__int64)&WPP_aed3312dd8533895486314f7b4c12c79_Traceguids,
      (char)a2,
      IrpText,
      v31,
      v18,
      v7,
      v5,
      v21);
    return (unsigned int)v18;
  }
  if ( v12 != 1 )
  {
    v13 = ACPIDebugGetIrpText(CurrentStackLocation, v8);
    WPP_RECORDER_SF_qsdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      (__int64)v15,
      0x15u,
      (__int64)&WPP_aed3312dd8533895486314f7b4c12c79_Traceguids,
      (char)a2,
      v13,
      v31,
      v16,
      v17,
      v15);
    goto LABEL_7;
  }
  v23 = (__int64 *)v6[23];
  if ( v23 )
  {
    v18 = ACPIGet(v23, 1145656671, 532502, 0LL, 0, 0LL, 0LL, (__int64)&v32, 0LL);
    if ( v18 < 0 )
      goto LABEL_8;
    DestinationString.Buffer = v32;
    goto LABEL_27;
  }
  v24 = v6[1];
  v25 = (const char *)qword_1C0090C20;
  v26 = (const char *)qword_1C0090C20;
  if ( (v24 & 0x200000000000LL) != 0 )
  {
    v25 = (const char *)v6[70];
    if ( (v24 & 0x400000000000LL) != 0 )
      v26 = (const char *)v6[71];
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    0x12u,
    0x14u,
    (__int64)&WPP_aed3312dd8533895486314f7b4c12c79_Traceguids,
    (char)a2,
    (char)v6,
    v25,
    v26);
  a2->IoStatus.Status = -1073741823;
  IofCompleteRequest(a2, 0);
  return 3221225473LL;
}
