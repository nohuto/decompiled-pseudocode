/*
 * XREFs of PnprIdentifyUnits @ 0x1406447BC
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpQueryInterface @ 0x14050E494 (PnpQueryInterface.c)
 */

__int64 __fastcall PnprIdentifyUnits(PDEVICE_OBJECT DeviceObject, PDEVICE_OBJECT a2, _QWORD *a3, __int64 a4)
{
  int Interface; // ebx
  SIZE_T v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // ecx
  SIZE_T v13; // rcx
  int v14; // eax
  int v15; // eax
  SIZE_T v16; // rcx
  int v17; // eax
  int v18; // eax
  _QWORD v20[7]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v21[7]; // [rsp+70h] [rbp+Fh] BYREF

  memset(v20, 0, sizeof(v20));
  memset(v21, 0, sizeof(v21));
  Interface = PnpQueryInterface(a2, (ULONG_PTR)&GUID_PARTITION_UNIT_INTERFACE_STANDARD, 1u, 0x38u, 0LL, (USHORT *)v20);
  if ( Interface < 0 )
  {
    v9 = PnprContext;
    v10 = 3LL;
    v11 = *(_DWORD *)(PnprContext + 10744);
    if ( !v11 )
      v11 = 1304;
    *(_DWORD *)(PnprContext + 10744) = v11;
    v12 = *(_DWORD *)(v9 + 10748);
    if ( !v12 )
      v12 = 3;
    *(_DWORD *)(v9 + 10748) = v12;
    goto LABEL_28;
  }
  Interface = PnpQueryInterface(
                DeviceObject,
                (ULONG_PTR)&GUID_PARTITION_UNIT_INTERFACE_STANDARD,
                1u,
                0x38u,
                0LL,
                (USHORT *)v21);
  if ( Interface >= 0 )
  {
    if ( v21[4] && v20[4] && v20[6] )
    {
      Interface = ((__int64 (__fastcall *)(_QWORD, _QWORD *))v21[4])(v21[1], a3);
      if ( Interface < 0 )
      {
        v9 = 1336LL;
        goto LABEL_9;
      }
      Interface = ((__int64 (__fastcall *)(_QWORD, __int64))v20[4])(v20[1], a4);
      if ( Interface < 0 )
      {
        v9 = 1344LL;
        goto LABEL_9;
      }
      if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))v20[6])(v20[1], *a3) )
      {
        Interface = 0;
        goto LABEL_28;
      }
      v16 = PnprContext;
      v17 = *(_DWORD *)(PnprContext + 10744);
      if ( !v17 )
        v17 = 1357;
      v9 = 4LL;
      *(_DWORD *)(PnprContext + 10744) = v17;
      v18 = *(_DWORD *)(v16 + 10748);
      if ( !v18 )
        v18 = 4;
      *(_DWORD *)(v16 + 10748) = v18;
    }
    Interface = -1073741811;
    goto LABEL_28;
  }
  v9 = 1316LL;
LABEL_9:
  v13 = PnprContext;
  v10 = 3LL;
  v14 = *(_DWORD *)(PnprContext + 10744);
  if ( !v14 )
    v14 = v9;
  *(_DWORD *)(PnprContext + 10744) = v14;
  v15 = *(_DWORD *)(v13 + 10748);
  if ( !v15 )
    v15 = 3;
  *(_DWORD *)(v13 + 10748) = v15;
LABEL_28:
  if ( v20[1] )
    ((void (__fastcall *)(_QWORD, SIZE_T, __int64))v20[3])(v20[1], v9, v10);
  if ( v21[1] )
    ((void (__fastcall *)(_QWORD, SIZE_T, __int64))v21[3])(v21[1], v9, v10);
  return (unsigned int)Interface;
}
