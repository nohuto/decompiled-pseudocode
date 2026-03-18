/*
 * XREFs of ?GetBuffer@CAnalogSwapChain@@MEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x1801284F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogSwapChain::GetBuffer(
        CAnalogSwapChain *this,
        unsigned int a2,
        unsigned int *a3,
        struct ID3D11Texture2D **a4)
{
  __int64 v4; // rdi
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 36);
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct ID3D11Texture2D **))(*(_QWORD *)v4 + 24LL))(
         v4,
         a2,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 36) + 24LL))(
            *((_QWORD *)this + 36),
            a2,
            &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
            &v13);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 72LL))(v13, a3);
      v9 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x9Au);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x98u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x94u);
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v9;
}
