/*
 * XREFs of BuildMouseAccelerationCurve @ 0x1C00FD7F0
 * Callers:
 *     ResetMouseAccelerationCurves @ 0x1C00FD5CC (ResetMouseAccelerationCurves.c)
 * Callees:
 *     ?BuildTouchpadAccelerationCurve@@YAXPEAUtagMONITOR@@@Z @ 0x1C00FD954 (-BuildTouchpadAccelerationCurve@@YAXPEAUtagMONITOR@@@Z.c)
 */

void __fastcall BuildMouseAccelerationCurve(struct tagMONITOR *a1)
{
  __int64 v2; // rsi
  __int64 DisplayDC; // rax
  unsigned int v4; // ecx
  __int64 v5; // rbx
  int v6; // r9d
  __int64 *v7; // r8
  __int64 *v8; // rcx
  int v9; // r9d
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rax

  if ( gbNewMouseInit )
  {
    v2 = ((__int64)gMouseSensitivity << 16) / 10;
    DisplayDC = GreCreateDisplayDC(*((_QWORD *)a1 + 20), 0LL);
    v4 = *((unsigned __int16 *)a1 + 76);
    if ( v4 < 0x60 )
      v4 = 96;
    v5 = ((__int64)(int)v4 << 16) / 120;
    GreDeleteDC(DisplayDC);
    v6 = 0;
    v7 = (__int64 *)((char *)a1 + 176);
    v8 = (__int64 *)((char *)a1 + 176);
    do
    {
      ++v6;
      v8[5] = (v2 * ((v5 * *(__int64 *)((char *)v8 + (char *)&gDefyTxf - (char *)a1 - 176)) >> 16)) >> 16;
      *v8 = (229376 * *(__int64 *)((char *)v8 + (char *)&gDefxTxf - (char *)a1 - 176)) >> 16;
      ++v8;
    }
    while ( (unsigned __int64)v6 < 5 );
    v9 = 1;
    do
    {
      v10 = *v7;
      v11 = v7[1] - *v7;
      if ( v11 )
      {
        v12 = v7[5];
        v13 = ((v7[6] - v12) << 16) / v11;
        v7[10] = v13;
        v7[14] = v12 - ((v10 * v13) >> 16);
      }
      else
      {
        v7[14] = 0LL;
        v7[10] = 0LL;
      }
      ++v9;
      ++v7;
    }
    while ( (unsigned __int64)v9 < 5 );
    BuildTouchpadAccelerationCurve(a1);
  }
}
