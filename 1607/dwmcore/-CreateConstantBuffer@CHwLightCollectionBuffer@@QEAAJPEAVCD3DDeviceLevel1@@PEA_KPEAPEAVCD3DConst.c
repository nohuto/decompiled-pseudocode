/*
 * XREFs of ?CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConstantBuffer@@@Z @ 0x180177FCC
 * Callers:
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007CC34 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x180178F74 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CHwLightCollectionBuffer::CreateConstantBuffer(
        CHwLightCollectionBuffer *this,
        struct CD3DDeviceLevel1 *a2,
        unsigned __int64 *a3,
        struct CD3DConstantBuffer **a4)
{
  unsigned __int8 *v4; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct CD3DConstantBuffer *v14; // rax
  CMILPoolResource *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  v4 = (unsigned __int8 *)this + 32;
  v7 = CD3DConstantBuffer::Create(a2, 0xC0u, (enum D3D11_USAGE)a3, (char *)this + 32, &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x93u);
    if ( v16 )
      CMILPoolResource::Release(v16);
  }
  else
  {
    v9 = 314159LL;
    v10 = 34LL;
    do
    {
      v11 = v4[2];
      v12 = 37 * v9;
      v13 = *v4;
      v4 += 8;
      v9 = *(v4 - 1)
         + 37
         * (*(v4 - 2)
          + 37 * (*(v4 - 3) + 37 * (*(v4 - 4) + 37 * (*(v4 - 5) + 37 * (v11 + 37 * (*(v4 - 7) + 37 * (v13 + v12)))))));
      --v10;
    }
    while ( v10 );
    v14 = v16;
    *a3 = v9;
    *a4 = v14;
  }
  return v8;
}
