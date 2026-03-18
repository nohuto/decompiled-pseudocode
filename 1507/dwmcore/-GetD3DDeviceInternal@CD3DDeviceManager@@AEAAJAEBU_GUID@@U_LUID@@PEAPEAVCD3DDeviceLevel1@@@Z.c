/*
 * XREFs of ?GetD3DDeviceInternal@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055CC0
 * Callers:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180090C28 (-GetD3DDeviceForRenderTarget@CD3DDeviceManager@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180090D78 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetD3DDeviceInternal(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        struct CD3DDeviceLevel1 **a4)
{
  unsigned int v4; // r10d
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rax
  int NewDevice; // eax

  v4 = 0;
  v6 = -2003304307;
  if ( *((_DWORD *)this + 34) )
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)this + 13) + 32LL * v4;
      if ( a3 == *(_QWORD *)(v7 + 8) )
      {
        v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)(v7 + 16);
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)(v7 + 16) )
          v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)(v7 + 24);
        if ( !v8 )
          break;
      }
      if ( ++v4 >= *((_DWORD *)this + 34) )
        goto LABEL_9;
    }
    if ( a4 )
    {
      v9 = *(volatile signed __int32 **)v7;
      _InterlockedIncrement(v9 + 100);
      *a4 = (struct CD3DDeviceLevel1 *)v9;
    }
    v6 = 0;
  }
LABEL_9:
  if ( v6 < 0 )
  {
    NewDevice = CD3DDeviceManager::CreateNewDevice(this, a2, a3, a4);
    v6 = NewDevice;
    if ( NewDevice < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, NewDevice, 0x73Eu);
  }
  return (unsigned int)v6;
}
