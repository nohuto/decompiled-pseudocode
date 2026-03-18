/*
 * XREFs of ?CheckPresentDurationSupport@CDWMSwapChain@@UEAAJIPEAI@Z @ 0x18013BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDWMSwapChain::CheckPresentDurationSupport(CDWMSwapChain *this, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // r8d
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 37);
  v4 = 0;
  v7 = 0;
  if ( !v3 )
  {
LABEL_7:
    *a3 = v4;
    return v7;
  }
  v11 = 0;
  v12 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)v3 + 192LL))(
         v3,
         a2,
         &v11,
         &v12);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v9 = v12;
    if ( (int)abs32(a2 - v11) < (int)abs32(a2 - v12) )
      v9 = v11;
    v4 = v9;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x482u);
  return v7;
}
