/*
 * XREFs of ?OnSetSlicer@CMagnifier@@QEAAJPEBUMAGN_SLICER_PARAM@@@Z @ 0x18007ADFC
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007B0D8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CMagnifier::OnSetSlicer(CMagnifier *this, const struct MAGN_SLICER_PARAM *a2)
{
  __int128 v2; // xmm0
  CResource *v3; // rcx
  __int64 v4; // xmm1_8
  int v5; // eax
  unsigned int v6; // ebx
  _DWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-20h]

  v2 = *(_OWORD *)a2;
  v3 = (CResource *)*((_QWORD *)this + 4);
  v4 = *((_QWORD *)a2 + 2);
  v8[1] = 0;
  v8[0] = 118;
  v9 = v2;
  v10 = v4;
  v5 = CResource::Send(v3, v8, 0x20u);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x272u);
  return v6;
}
