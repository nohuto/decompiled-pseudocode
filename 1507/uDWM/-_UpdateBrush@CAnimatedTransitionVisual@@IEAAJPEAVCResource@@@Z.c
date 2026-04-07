/*
 * XREFs of ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z @ 0x180003FAC
 * Callers:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000414C (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x18008969C (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateBrush(CAnimatedTransitionVisual *this, struct CResource *a2)
{
  CResource *v4; // rcx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v10[4]; // [rsp+34h] [rbp-35h] BYREF
  double v11; // [rsp+38h] [rbp-31h]
  __int128 v12; // [rsp+40h] [rbp-29h]
  __int128 v13; // [rsp+50h] [rbp-19h]
  int v14; // [rsp+74h] [rbp+Bh]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  int v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+8Ch] [rbp+23h]
  int v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+94h] [rbp+2Bh]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+A0h] [rbp+37h]

  v9 = 250;
  memset_0(v10, 0, 0x70uLL);
  v4 = (CResource *)*((_QWORD *)this + 72);
  v14 = 0;
  v15 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v11 = DOUBLE_1_0;
  v16 = 1;
  v17 = 1;
  v18 = 1;
  v5 = *((_DWORD *)a2 + 6);
  v12 = _xmm;
  v13 = _xmm;
  v22 = v5;
  v6 = CResource::Send(v4, &v9, 0x74u);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x34Au);
  return v7;
}
