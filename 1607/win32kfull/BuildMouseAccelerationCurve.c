/*
 * XREFs of BuildMouseAccelerationCurve @ 0x1C0091600
 * Callers:
 *     ResetMouseAccelerationCurves @ 0x1C00915D0 (ResetMouseAccelerationCurves.c)
 * Callees:
 *     ?BuildTouchpadAccelerationCurve@@YAXPEAUtagMONITOR@@@Z @ 0x1C0091770 (-BuildTouchpadAccelerationCurve@@YAXPEAUtagMONITOR@@@Z.c)
 */

void __fastcall BuildMouseAccelerationCurve(struct tagMONITOR *a1)
{
  __int64 v2; // rsi
  __int64 DisplayDC; // rax
  unsigned int v4; // ecx
  __int64 v5; // rdi
  int v6; // r8d
  __int64 *v7; // rcx
  int v8; // r9d
  _QWORD *v9; // r8
  __int64 v10; // r10
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax

  if ( gbNewMouseInit )
  {
    v2 = ((__int64)gMouseSensitivity << 16) / 10;
    DisplayDC = GreCreateDisplayDC(*((_QWORD *)a1 + 20), 0LL);
    v4 = *((unsigned __int16 *)a1 + 77);
    if ( v4 < 0x60 )
      v4 = 96;
    v5 = ((__int64)(int)v4 << 16) / 120;
    GreDeleteDC(DisplayDC);
    v6 = 0;
    v7 = (__int64 *)((char *)a1 + 176);
    do
    {
      ++v6;
      v7[5] = (v2 * ((v5 * *(__int64 *)((char *)v7 + (char *)&gDefyTxf - (char *)a1 - 176)) >> 16)) >> 16;
      *v7 = (229376 * *(__int64 *)((char *)v7 + (char *)&gDefxTxf - (char *)a1 - 176)) >> 16;
      ++v7;
    }
    while ( (unsigned __int64)v6 < 5 );
    v8 = 1;
    v9 = (_QWORD *)((char *)a1 + 184);
    v10 = 1LL;
    do
    {
      v11 = *(v9 - 1);
      if ( *v9 == v11 )
      {
        v9[13] = 0LL;
        v9[9] = 0LL;
      }
      else
      {
        v12 = *((_QWORD *)a1 + v10 + 26);
        v13 = ((v9[5] - v12) << 16) / (*v9 - v11);
        v9[9] = v13;
        v9[13] = v12 - ((v11 * v13) >> 16);
      }
      ++v8;
      ++v10;
      ++v9;
    }
    while ( (unsigned __int64)v8 < 5 );
    BuildTouchpadAccelerationCurve(a1);
  }
}
