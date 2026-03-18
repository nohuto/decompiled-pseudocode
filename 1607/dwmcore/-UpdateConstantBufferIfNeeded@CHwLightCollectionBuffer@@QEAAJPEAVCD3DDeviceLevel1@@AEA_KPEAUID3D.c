/*
 * XREFs of ?UpdateConstantBufferIfNeeded@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@AEA_KPEAUID3D11Buffer@@@Z @ 0x1801780D0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x1800565C0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwLightCollectionBuffer::UpdateConstantBufferIfNeeded(
        CHwLightCollectionBuffer *this,
        struct CD3DDeviceLevel1 *a2,
        unsigned __int64 *a3,
        struct ID3D11Buffer *a4)
{
  unsigned int v4; // ebx
  _OWORD *v5; // rdi
  unsigned __int8 *v9; // r10
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  _OWORD *v14; // rcx
  __int128 v15; // xmm0
  _OWORD *v16; // rdi
  _OWORD *v18; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0;
  v5 = (_OWORD *)((char *)this + 32);
  v9 = (unsigned __int8 *)this + 32;
  v10 = 314159LL;
  v11 = 34LL;
  do
  {
    v12 = *v9;
    v9 += 8;
    v10 = *(v9 - 1)
        + 37
        * (*(v9 - 2)
         + 37
         * (*(v9 - 3) + 37
                      * (*(v9 - 4) + 37 * (*(v9 - 5) + 37 * (*(v9 - 6) + 37 * (*(v9 - 7) + 37 * (v12 + 37 * v10)))))));
    --v11;
  }
  while ( v11 );
  if ( v10 != *a3 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Buffer *, _QWORD, __int64, _DWORD, _OWORD **))(**((_QWORD **)a2 + 72) + 112LL))(
            *((_QWORD *)a2 + 72),
            a4,
            0LL,
            4LL,
            0,
            &v18);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xACu);
    }
    else
    {
      v14 = v18;
      *v18 = *v5;
      v14[1] = v5[1];
      v14[2] = v5[2];
      v14[3] = v5[3];
      v14[4] = v5[4];
      v14[5] = v5[5];
      v14[6] = v5[6];
      v14 += 8;
      v15 = v5[7];
      v16 = v5 + 8;
      *(v14 - 1) = v15;
      *v14 = *v16;
      v14[1] = v16[1];
      v14[2] = v16[2];
      v14[3] = v16[3];
      (*(void (__fastcall **)(_QWORD, struct ID3D11Buffer *, _QWORD))(**((_QWORD **)a2 + 72) + 120LL))(
        *((_QWORD *)a2 + 72),
        a4,
        0LL);
      *a3 = v10;
    }
  }
  return v4;
}
