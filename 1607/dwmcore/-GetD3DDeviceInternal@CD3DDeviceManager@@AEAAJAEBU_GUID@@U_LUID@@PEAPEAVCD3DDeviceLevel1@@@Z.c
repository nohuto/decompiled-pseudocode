/*
 * XREFs of ?GetD3DDeviceInternal@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800356C0
 * Callers:
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034E44 (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800142A8 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetD3DDeviceInternal(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        struct CD3DDeviceLevel1 **a4)
{
  __int64 v4; // r11
  int v6; // ebx
  __int64 v7; // r10
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rax
  int NewDevice; // eax

  v4 = 0LL;
  v6 = -2003304307;
  if ( *((_DWORD *)this + 64) )
  {
    v7 = *((_QWORD *)this + 18);
    while ( 1 )
    {
      if ( a3 == *(_QWORD *)(v7 + 40 * v4 + 8) )
      {
        v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)(v7 + 40 * v4 + 16);
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)(v7 + 40 * v4 + 16) )
          v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)(v7 + 40 * v4 + 24);
        if ( !v8 )
          break;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 64) )
        goto LABEL_12;
    }
    if ( a4 )
    {
      v9 = *(volatile signed __int32 **)(v7 + 40 * v4);
      _InterlockedIncrement(v9 + 104);
      *a4 = (struct CD3DDeviceLevel1 *)v9;
    }
    v6 = 0;
  }
LABEL_12:
  if ( v6 < 0 )
  {
    NewDevice = CD3DDeviceManager::CreateNewDevice((CDXGIEnumeration **)this, a2, a3, a4);
    v6 = NewDevice;
    if ( NewDevice < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, NewDevice, 0x6D4u);
  }
  return (unsigned int)v6;
}
