/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C008A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C0153DF8 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C015406C (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, int a3, __int64 a4)
{
  int AdapterDeviceDesc; // ebp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int8 v16; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v17[39]; // [rsp+21h] [rbp-27h] BYREF

  AdapterDeviceDesc = DxgkpGetAdapterDeviceDesc(a1, a2, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
  if ( AdapterDeviceDesc >= 0 && a3 )
  {
    v17[0] = 0;
    v16 = 0;
    v8 = DxgkpAdapterCheckStereoMode(a1, a2, &v16, v17);
    v13 = v8;
    if ( v8 < 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      *(_QWORD *)(v14 + 24) = v13;
      WdLogEvent5_WdWarning(v14);
    }
    else
    {
      *(_DWORD *)(a4 + 1968) ^= (*(_DWORD *)(a4 + 1968) ^ (32 * (v16 != 0))) & 0x20;
      *(_DWORD *)(a4 + 1968) ^= ((unsigned __int8)*(_DWORD *)(a4 + 1968) ^ (unsigned __int8)(16 * (v17[0] != 0))) & 0x10;
    }
  }
  return (unsigned int)AdapterDeviceDesc;
}
