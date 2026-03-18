/*
 * XREFs of ?CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture@@@Z @ 0x18017361C
 * Callers:
 *     ?CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18017C570 (-CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007E9EC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x18009F438 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18017D9EC (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateLockableTexture(
        CD3DDeviceLevel1 *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct CD3DLockableTexture **a3)
{
  CD3DResourceManager *v3; // r14
  int v7; // ebx
  int v8; // eax
  struct ID3D11Texture2D *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = (CD3DDeviceLevel1 *)((char *)this + 880);
  *a3 = 0LL;
  do
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct DWM_TEXTURE2D_DESC *, _QWORD, struct ID3D11Texture2D **))(**((_QWORD **)this + 71) + 40LL))(
           *((_QWORD *)this + 71),
           a2,
           0LL,
           &v10);
  while ( CD3DResourceManager::FreeSomeVideoMemory(v3, v7) );
  if ( IsOOM(v7) && IsCompBuild() )
    NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
  if ( v7 < 0 )
  {
    if ( IsOOM(v7) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v7, 0x920u);
  }
  else
  {
    ((void (__fastcall *)(struct ID3D11Texture2D *, const GUID *, _QWORD, _QWORD))v10->lpVtbl->SetPrivateData)(
      v10,
      &WKPDID_D3DDebugObjectName,
      *((unsigned int *)a2 + 14),
      *((_QWORD *)a2 + 6));
    v8 = CD3DLockableTexture::Create(v3, v10, a3);
    v7 = v8;
    if ( v8 < 0 )
    {
      if ( IsOOM(v8) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v7, 0x92Du);
    }
  }
  if ( v10 )
  {
    ((void (__fastcall *)(struct ID3D11Texture2D *))v10->lpVtbl->Release)(v10);
    v10 = 0LL;
  }
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v7, 0);
}
