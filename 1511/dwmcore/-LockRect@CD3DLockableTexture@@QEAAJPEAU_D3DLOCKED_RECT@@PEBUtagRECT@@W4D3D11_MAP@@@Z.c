/*
 * XREFs of ?LockRect@CD3DLockableTexture@@QEAAJPEAU_D3DLOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18014D084
 * Callers:
 *     ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x180151260 (-Realize@CHwSolidColorTextureSource@@UEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DLockableTexture::LockRect(
        CD3DLockableTexture *this,
        struct _D3DLOCKED_RECT *a2,
        const struct tagRECT *a3,
        enum D3D11_MAP a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  void *v8; // [rsp+30h] [rbp-18h] BYREF
  INT v9; // [rsp+38h] [rbp-10h]

  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, void **))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL)
                                                                                                 + 560LL)
                                                                                   + 112LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 560LL),
         *((_QWORD *)this + 16),
         0LL,
         4LL,
         0,
         &v8);
  v6 = v5;
  if ( v5 >= 0 )
  {
    a2->pBits = v8;
    a2->Pitch = v9;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xAEu);
  }
  return v6;
}
