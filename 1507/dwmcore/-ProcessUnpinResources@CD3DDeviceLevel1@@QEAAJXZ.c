/*
 * XREFs of ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18008B180
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z @ 0x180055E64 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z.c)
 *     ??1CD3DDeviceLevel1@@UEAA@XZ @ 0x18008B1E4 (--1CD3DDeviceLevel1@@UEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ProcessUnpinResources(CD3DDeviceLevel1 *this)
{
  __int64 v1; // rbp
  unsigned int v2; // esi
  char *v5; // r15
  int v6; // eax
  __int64 v7; // r12

  v1 = *((unsigned int *)this + 262);
  v2 = 0;
  if ( (_DWORD)v1 )
  {
    v5 = (char *)this + 1024;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 65) + 56LL))(
           *((_QWORD *)this + 65),
           *((_QWORD *)this + 128),
           (unsigned int)v1);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x10DAu);
    v7 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + *(_QWORD *)v5) + 16LL))(*(_QWORD *)(v7 + *(_QWORD *)v5));
      v7 += 8LL;
      --v1;
    }
    while ( v1 );
    *((_DWORD *)v5 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5, 8u);
  }
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v2, 0);
}
