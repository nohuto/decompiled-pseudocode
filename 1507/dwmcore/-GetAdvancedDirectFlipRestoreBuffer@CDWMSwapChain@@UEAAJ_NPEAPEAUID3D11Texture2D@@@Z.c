/*
 * XREFs of ?GetAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x18013BD20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBuffer@CDWMSwapChain@@MEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x18008F0B0 (-GetBuffer@CDWMSwapChain@@MEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDWMSwapChain::GetAdvancedDirectFlipRestoreBuffer(
        CDWMSwapChain *this,
        char a2,
        struct ID3D11Texture2D **a3)
{
  unsigned int v5; // ebp
  int Buffer; // eax
  unsigned int v7; // ebx
  int v8; // r9d
  unsigned int v9; // edx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  struct ID3D11Texture2D *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( !*((_QWORD *)this + 47) )
  {
    v7 = -2003292412;
    v11 = 890;
    v8 = -2003292412;
    goto LABEL_16;
  }
  if ( a2 )
  {
    v5 = *((_DWORD *)this + 98);
    if ( v5 == *((_DWORD *)this + 42) - 1 && !*((_BYTE *)this + 396) )
    {
      Buffer = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 37) + 232LL))(
                 *((_QWORD *)this + 37),
                 0LL,
                 v5);
      v7 = Buffer;
      if ( Buffer < 0 )
      {
        v11 = 875;
LABEL_7:
        v8 = Buffer;
LABEL_16:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v11);
        return v7;
      }
      *((_BYTE *)this + 396) = 1;
    }
  }
  if ( *((_BYTE *)this + 396) )
    v9 = 0;
  else
    v9 = *((_DWORD *)this + 98);
  Buffer = CDWMSwapChain::GetBuffer(this, v9, &v12, &v13);
  v7 = Buffer;
  if ( Buffer < 0 )
  {
    v11 = 886;
    goto LABEL_7;
  }
  *a3 = v13;
  return v7;
}
