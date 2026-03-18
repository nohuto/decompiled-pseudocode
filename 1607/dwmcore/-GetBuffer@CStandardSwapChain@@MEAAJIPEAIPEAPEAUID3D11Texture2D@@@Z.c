/*
 * XREFs of ?GetBuffer@CStandardSwapChain@@MEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x18017D7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStandardSwapChain::GetBuffer(
        CStandardSwapChain *this,
        __int64 a2,
        unsigned int *a3,
        struct ID3D11Texture2D **a4)
{
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v6 = a2;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, struct ID3D11Texture2D **))(**((_QWORD **)this + 36) + 72LL))(
         *((_QWORD *)this + 36),
         a2,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         a4);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x8Fu);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 36) + 72LL))(
           *((_QWORD *)this + 36),
           v6,
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           &v12);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x93u);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 72LL))(v12, a3);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x95u);
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v8;
}
