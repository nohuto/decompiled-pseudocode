/*
 * XREFs of ?LockRect@CD3DLockableTexture@@QEAAJPEAU_D3DLOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18017DAD8
 * Callers:
 *     ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18017C668 (-FillTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DLockableTexture::LockRect(
        CD3DLockableTexture *this,
        struct _D3DLOCKED_RECT *a2,
        const struct tagRECT *a3,
        enum D3D11_MAP a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  void *v10; // [rsp+40h] [rbp-18h] BYREF
  INT v11; // [rsp+48h] [rbp-10h]

  v5 = *((_QWORD *)this + 16);
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 128LL) + 576LL);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v6 + 112LL))(
         v6,
         v5,
         0LL,
         4LL,
         0,
         &v10);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xAEu);
  }
  else
  {
    a2->pBits = v10;
    a2->Pitch = v11;
  }
  return v8;
}
