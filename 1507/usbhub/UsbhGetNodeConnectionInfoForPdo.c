/*
 * XREFs of UsbhGetNodeConnectionInfoForPdo @ 0x1C0047598
 * Callers:
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049004 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001FB10 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001FC80 (UsbhRefPdoDeviceHandle.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhGetDeviceInformationEx @ 0x1C0047450 (UsbhGetDeviceInformationEx.c)
 */

__int64 __fastcall UsbhGetNodeConnectionInfoForPdo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6,
        char a7)
{
  int v11; // ebp
  _DWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int *v17; // r14
  __int64 v18; // rdi
  _DWORD *DeviceInformation; // rax
  _DWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  int v25; // ecx
  int v26; // r10d
  unsigned int v27; // r9d
  int v28; // r8d
  unsigned int v29; // r10d
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v33; // [rsp+30h] [rbp-38h]
  _DWORD *v34; // [rsp+38h] [rbp-30h]
  int v35; // [rsp+80h] [rbp+18h] BYREF

  v35 = -1073741811;
  v11 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Au,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
  v12 = a5;
  Log(a1, 32, 1735290417, *(unsigned __int16 *)(a3 + 4), (__int64)a5);
  v34 = PdoExt(a4, v13, v14, v15);
  v16 = UsbhRefPdoDeviceHandle(a1, a4, a2, 1212444263LL);
  v17 = (int *)a6;
  v33 = v16;
  v18 = v16;
  memset(v12, 0, *a6);
  if ( v18 )
  {
    DeviceInformation = UsbhGetDeviceInformationEx(a1, &v35, v18);
    v11 = v35;
    v20 = DeviceInformation;
    Log(a1, 32, 1735281713, (__int64)DeviceInformation, v35);
    UsbhDerefPdoDeviceHandle(a1, v33, a2, 1212444263LL);
    if ( v11 >= 0 )
    {
      *v12 = *(unsigned __int16 *)(a3 + 4);
      *(_OWORD *)(v12 + 1) = *(_OWORD *)(v20 + 3);
      *((_WORD *)v12 + 10) = *((_WORD *)v20 + 14);
      *((_BYTE *)v12 + 22) = *((_BYTE *)v20 + 32);
      if ( a7 )
        v24 = *((_BYTE *)v20 + 40);
      else
        v24 = v20[10] == 0;
      *((_BYTE *)v12 + 23) = v24;
      if ( PdoExt(a4, v21, v22, v23)[280] == 101 )
        *((_BYTE *)v12 + 24) = (v34[353] & 4) != 0;
      v25 = 1;
      v26 = *v17;
      v27 = 0;
      *(_WORD *)((char *)v12 + 25) = *((_WORD *)v20 + 17);
      v28 = v20[12];
      *(_DWORD *)((char *)v12 + 27) = v28;
      if ( (unsigned int)(*(_DWORD *)(a3 + 428) - 4) <= 3 )
        v25 = *(_DWORD *)(a3 + 428);
      v29 = v26 - 35;
      *(_DWORD *)((char *)v12 + 31) = v25;
      if ( v28 )
      {
        do
        {
          if ( v29 < 0xB )
            break;
          v30 = v27;
          v29 -= 11;
          v31 = 11LL * v27++;
          *(_DWORD *)((char *)v12 + v31 + 35) = v20[3 * v30 + 13];
          *(_WORD *)((char *)v12 + v31 + 39) = v20[3 * v30 + 14];
          *((_BYTE *)v12 + v31 + 41) = BYTE2(v20[3 * v30 + 14]);
          *(_DWORD *)((char *)v12 + v31 + 42) = v20[3 * v30 + 15];
        }
        while ( v27 < *(_DWORD *)((char *)v12 + 27) );
      }
      if ( v27 != *(_DWORD *)((char *)v12 + 27) )
        Log(a1, 32, 1735290451, v29, *(unsigned int *)((char *)v12 + 27));
      *v17 -= v29;
    }
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
  }
  else
  {
    Log(a1, 32, 1735290468, *(int *)(a3 + 428), (__int64)v12);
    *v12 = *(unsigned __int16 *)(a3 + 4);
    *(_DWORD *)((char *)v12 + 31) = *(_DWORD *)(a3 + 428);
    *v17 = 35;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Bu,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids,
      v11);
  return (unsigned int)v11;
}
