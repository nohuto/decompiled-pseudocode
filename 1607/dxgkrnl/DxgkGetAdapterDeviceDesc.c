/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C0079460
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C0079520 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D149C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, __int64 a3)
{
  int AdapterDeviceDesc; // ebp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int8 v14[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v16; // [rsp+68h] [rbp+20h] BYREF

  AdapterDeviceDesc = DxgkpGetAdapterDeviceDesc(a1, a2, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a3);
  if ( AdapterDeviceDesc >= 0 && *(_DWORD *)(a3 + 1968) == 1 )
  {
    v14[0] = 0;
    v16 = 0;
    v7 = DxgkpAdapterCheckStereoMode(a1, a2, &v16, v14);
    v12 = v7;
    if ( v7 < 0 )
    {
      v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      *(_QWORD *)(v13 + 24) = v12;
      WdLogEvent5_WdWarning(v13);
    }
    else
    {
      *(_DWORD *)(a3 + 1972) ^= (*(_DWORD *)(a3 + 1972) ^ (32 * (v16 != 0))) & 0x20;
      *(_DWORD *)(a3 + 1972) ^= ((unsigned __int8)*(_DWORD *)(a3 + 1972) ^ (unsigned __int8)(16 * (v14[0] != 0))) & 0x10;
    }
  }
  return (unsigned int)AdapterDeviceDesc;
}
