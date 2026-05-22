/*
 * XREFs of ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007BF60
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180072CE4 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x18007C714 (-IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007DDC0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceAttach(
        MobileButtonDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int DeviceId; // eax
  MobileButtonDeviceCollection *v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  void *v10; // rax
  __int64 v11; // rcx
  char *v12; // rdx
  int v13; // r10d
  unsigned int *v14; // r9
  __int64 v15; // rcx
  int v16; // edi
  int v17; // r9d
  __int64 v18; // rax
  _DWORD *v19; // r8
  __int64 v20; // rcx
  struct RIMDevice *v22; // [rsp+30h] [rbp-28h] BYREF
  __int128 v23; // [rsp+38h] [rbp-20h]
  bool v24; // [rsp+78h] [rbp+20h] BYREF

  v22 = 0LL;
  v24 = 0;
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  v8 = DeviceId;
  if ( DeviceId >= 0 )
  {
    v10 = operator new[](0x28uLL);
    *(_QWORD *)&v23 = v10;
    if ( v10 )
    {
      memset(v10, 0, 0x28uLL);
      v12 = (char *)this + 2760;
      DWORD2(v23) = 20;
      v13 = *((_DWORD *)this + 2226);
      v14 = 0LL;
      LOBYTE(v15) = 0;
      if ( a2 != v13 )
      {
        v18 = 0LL;
        v19 = (_DWORD *)((char *)this + 2760);
        do
        {
          if ( *v19 == a2 )
          {
            v20 = 3 * v18;
            goto LABEL_26;
          }
          if ( !(_BYTE)v15 && *v19 == v13 )
          {
            v14 = (unsigned int *)(unsigned int)v18;
            LOBYTE(v15) = 1;
          }
          v18 = (unsigned int)(v18 + 1);
          v19 += 6;
        }
        while ( (unsigned int)v18 < 0x100 );
        if ( !(_BYTE)v15 )
        {
          v16 = -2147467259;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_23;
          v17 = 163;
          goto LABEL_22;
        }
        v20 = 3LL * (unsigned int)v14;
        *(_DWORD *)&v12[24 * (unsigned int)v14] = a2;
LABEL_26:
        *(_OWORD *)&v12[8 * v20 + 8] = v23;
        DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v22, v14);
        v8 = DeviceId;
        if ( DeviceId >= 0 )
        {
          DeviceId = MobileButtonDeviceCollection::IsMobile0DButtonDevice(v7, v22, &v24);
          v8 = DeviceId;
          if ( DeviceId >= 0 )
          {
            *((_BYTE *)*a3 + 24) = v24;
            return v8;
          }
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v8;
          v9 = 130;
        }
        else
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v8;
          v9 = 129;
        }
        goto LABEL_4;
      }
      v16 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v17 = 133;
LABEL_22:
        Template_qqq(v15, &MinInput_Warning_CheckResult, 0, v17, v16);
      }
LABEL_23:
      v8 = v16;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 124, v16);
    }
    else
    {
      v8 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 117, 14);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 113;
LABEL_4:
    Template_qqq((__int64)v7, &MinInput_Warning_CheckResult, 0, v9, DeviceId);
  }
  return v8;
}
