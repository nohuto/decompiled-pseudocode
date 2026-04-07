/*
 * XREFs of ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@@Z @ 0x180079EA8
 * Callers:
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18007A038 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAUMIL_CHANNEL__@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CMagnifier *__fastcall CMagnifier::CMagnifier(
        CMagnifier *this,
        HWND a2,
        int a3,
        struct MIL_CHANNEL__ *a4,
        struct CVisual *a5)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CMagnifier::`vftable';
  *((_QWORD *)this + 2) = a4;
  *((_QWORD *)this + 8) = a2;
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 72) = a3 != 0;
  *(_OWORD *)((char *)this + 76) = gMilColorTransfIdentity;
  *(_OWORD *)((char *)this + 92) = xmmword_1800BB620;
  *(_OWORD *)((char *)this + 108) = xmmword_1800BB630;
  *(_OWORD *)((char *)this + 124) = xmmword_1800BB640;
  *(_OWORD *)((char *)this + 140) = xmmword_1800BB650;
  *(_OWORD *)((char *)this + 156) = xmmword_1800BB660;
  *((_DWORD *)this + 43) = dword_1800BB670;
  *((_QWORD *)this + 3) = a5;
  if ( a5 )
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
  return this;
}
