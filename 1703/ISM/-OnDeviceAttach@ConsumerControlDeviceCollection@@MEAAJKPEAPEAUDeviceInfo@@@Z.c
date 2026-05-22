/*
 * XREFs of ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007CD00
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180072CE4 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18007DDC0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnDeviceAttach(
        ConsumerControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int DeviceId; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r9d
  void *v9; // rax
  __int64 v10; // rcx
  char *v11; // rdx
  int v12; // r10d
  unsigned int *v13; // r9
  __int64 v14; // rcx
  int v15; // edi
  int v16; // r9d
  __int64 v17; // rax
  _DWORD *v18; // r8
  __int64 v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-18h]
  struct RIMDevice *v22; // [rsp+68h] [rbp+20h] BYREF

  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  v7 = DeviceId;
  if ( DeviceId >= 0 )
  {
    v9 = operator new[](0x28uLL);
    *(_QWORD *)&v21 = v9;
    if ( v9 )
    {
      memset(v9, 0, 0x28uLL);
      v11 = (char *)this + 2760;
      DWORD2(v21) = 20;
      v12 = *((_DWORD *)this + 2226);
      v13 = 0LL;
      LOBYTE(v14) = 0;
      if ( a2 == v12 )
      {
        v15 = -2147024809;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v16 = 133;
LABEL_20:
          Template_qqq(v14, &MinInput_Warning_CheckResult, 0, v16, v15);
        }
LABEL_21:
        v7 = v15;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 117, v15);
      }
      else
      {
        v17 = 0LL;
        v18 = (_DWORD *)((char *)this + 2760);
        do
        {
          if ( *v18 == a2 )
          {
            v19 = 3 * v17;
            goto LABEL_24;
          }
          if ( !(_BYTE)v14 && *v18 == v12 )
          {
            v13 = (unsigned int *)(unsigned int)v17;
            LOBYTE(v14) = 1;
          }
          v17 = (unsigned int)(v17 + 1);
          v18 += 6;
        }
        while ( (unsigned int)v17 < 0x100 );
        if ( !(_BYTE)v14 )
        {
          v15 = -2147467259;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_21;
          v16 = 163;
          goto LABEL_20;
        }
        v19 = 3LL * (unsigned int)v13;
        *(_DWORD *)&v11[24 * (unsigned int)v13] = a2;
LABEL_24:
        *(_OWORD *)&v11[8 * v19 + 8] = v21;
        DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v22, v13);
        v7 = DeviceId;
        if ( DeviceId < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v8 = 122;
          goto LABEL_27;
        }
      }
    }
    else
    {
      v7 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 110, 14);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 106;
LABEL_27:
    Template_qqq(v6, &MinInput_Warning_CheckResult, 0, v8, DeviceId);
  }
  return v7;
}
