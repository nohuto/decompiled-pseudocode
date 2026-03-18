/*
 * XREFs of ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800350D0
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z @ 0x18003667C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z.c)
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x1800B34D8 (-Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceM.c)
 *     ?AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z @ 0x18011E5C0 (-AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x180172D4C (-PinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z.c)
 *     ?UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x180172F3C (-UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::GetExistingDevice(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        struct CD3DDeviceLevel1 **a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rax
  char *v15; // [rsp+50h] [rbp+8h] BYREF
  struct _LUID v16; // [rsp+60h] [rbp+18h]

  v16 = a3;
  *a4 = 0LL;
  v15 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)((char *)this + 260);
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)((char *)this + 260) )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)((char *)this + 268);
  v8 = -2003304307;
  if ( v7 )
  {
    v9 = *((_DWORD *)this + 64);
    v10 = 0LL;
    if ( v9 )
    {
      v11 = *((_QWORD *)this + 18);
      while ( 1 )
      {
        if ( v16 == *(_QWORD *)(v11 + 40 * v10 + 8) )
        {
          v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)(v11 + 40 * v10 + 16);
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)(v11 + 40 * v10 + 16) )
            v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)(v11 + 40 * v10 + 24);
          if ( !v12 )
            break;
        }
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= v9 )
          goto LABEL_13;
      }
      v13 = *(volatile signed __int32 **)(v11 + 40 * v10);
      _InterlockedIncrement(v13 + 104);
      *a4 = (struct CD3DDeviceLevel1 *)v13;
      v8 = 0;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, -2003304307, 0x6ACu);
  }
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v8;
}
