/*
 * XREFs of ?LockRect@CD3DLockableTexture@@QEAAJPEAU_D3DLOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18013D0E4
 * Callers:
 *     ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x180142990 (-Realize@CHwSolidColorTextureSource@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
                                                                                                 + 552LL)
                                                                                   + 112LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 552LL),
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
