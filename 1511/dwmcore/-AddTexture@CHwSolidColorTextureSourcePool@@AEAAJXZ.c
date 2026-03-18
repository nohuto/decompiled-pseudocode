/*
 * XREFs of ?AddTexture@CHwSolidColorTextureSourcePool@@AEAAJXZ @ 0x180150010
 * Callers:
 *     ?RetrieveTexture@CHwSolidColorTextureSourcePool@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAVCHwSolidColorTextureSource@@@Z @ 0x18015010C (-RetrieveTexture@CHwSolidColorTextureSourcePool@@QEAAJAEBU_D3DCOLORVALUE@@PEAPEAVCHwSolidColorTe.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180151094 (-Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CHwSolidColorTextureSourcePool::AddTexture(struct CD3DDeviceLevel1 **this)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ebx
  struct CHwSolidColorTextureSource *v7; // rcx
  int v9; // eax
  struct CHwSolidColorTextureSource *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = CHwSolidColorTextureSource::Create(this[4], &v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x82u);
      goto LABEL_15;
    }
    v3 = 0;
    if ( v5 > *((_DWORD *)this + 5) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8, 1, &v10);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
      v3 = v6;
      if ( v6 < 0 )
        goto LABEL_14;
    }
    else
    {
      *((_QWORD *)*this + *((unsigned int *)this + 6)) = v10;
      *((_DWORD *)this + 6) = v5;
    }
    v7 = 0LL;
    v10 = 0LL;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x7Cu);
LABEL_15:
  v7 = v10;
LABEL_8:
  if ( v7 )
    CMILRefCountBase::Release(v7);
  return v3;
}
