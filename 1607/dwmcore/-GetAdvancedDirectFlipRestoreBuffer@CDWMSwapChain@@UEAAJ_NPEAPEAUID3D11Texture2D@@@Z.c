/*
 * XREFs of ?GetAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x18017CA50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBuffer@CDWMSwapChain@@MEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x18007AA60 (-GetBuffer@CDWMSwapChain@@MEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetAdvancedDirectFlipRestoreBuffer(
        CDWMSwapChain *this,
        char a2,
        struct ID3D11Texture2D **a3)
{
  int Buffer; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  struct ID3D11Texture2D *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( !*((_QWORD *)this + 45) )
  {
    v6 = -2003292412;
    v10 = 889;
    v8 = -2003292412;
    goto LABEL_16;
  }
  if ( a2 && *((_DWORD *)this + 94) == *((_DWORD *)this + 42) - 1 && !*((_BYTE *)this + 412) )
  {
    Buffer = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 37) + 232LL))(*((_QWORD *)this + 37), 0LL);
    v6 = Buffer;
    if ( Buffer < 0 )
    {
      v10 = 874;
LABEL_10:
      v8 = Buffer;
LABEL_16:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v10);
      return v6;
    }
    *((_BYTE *)this + 412) = 1;
  }
  if ( *((_BYTE *)this + 412) )
    v7 = 0LL;
  else
    v7 = *((unsigned int *)this + 94);
  Buffer = CDWMSwapChain::GetBuffer(this, v7, &v11, &v12);
  v6 = Buffer;
  if ( Buffer < 0 )
  {
    v10 = 885;
    goto LABEL_10;
  }
  *a3 = v12;
  return v6;
}
