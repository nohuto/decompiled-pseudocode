/*
 * XREFs of ?BuildTouchpadAccelerationCurve@@YAXPEAUtagMONITOR@@@Z @ 0x1C00F7954
 * Callers:
 *     BuildMouseAccelerationCurve @ 0x1C00F77F0 (BuildMouseAccelerationCurve.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0225E2C (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall BuildTouchpadAccelerationCurve(struct tagMONITOR *a1)
{
  unsigned int v2; // eax
  __int64 v3; // rsi
  __int64 DisplayDC; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdi
  int v7; // r9d
  __int64 *v8; // r8
  __int64 *v9; // rcx
  int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rax

  if ( gbNewMouseInit )
  {
    v2 = qword_1C0323098;
    if ( !(_DWORD)qword_1C0323098 )
    {
      v2 = 10;
      LODWORD(qword_1C0323098) = 10;
    }
    v3 = (__int64)((unsigned __int64)v2 << 16) / 10;
    DisplayDC = GreCreateDisplayDC(*((_QWORD *)a1 + 20), 0LL);
    v5 = *((unsigned __int16 *)a1 + 76);
    if ( v5 < 0x60 )
      v5 = 96;
    v6 = ((__int64)(int)v5 << 16) / 120;
    GreDeleteDC(DisplayDC);
    v7 = 0;
    v8 = (__int64 *)((char *)a1 + 320);
    v9 = (__int64 *)((char *)a1 + 320);
    do
    {
      ++v7;
      v9[5] = (v3 * ((v6 * *(__int64 *)((char *)v9 + (char *)&gDefyTxfTP - (char *)a1 - 320)) >> 16)) >> 16;
      *v9 = (229376 * *(__int64 *)((char *)v9 + (char *)&gDefxTxfTP - (char *)a1 - 320)) >> 16;
      ++v9;
    }
    while ( (unsigned __int64)v7 < 5 );
    v10 = 1;
    do
    {
      v11 = *v8;
      v12 = v8[1] - *v8;
      if ( v12 )
      {
        v13 = v8[5];
        v14 = ((v8[6] - v13) << 16) / v12;
        v8[10] = v14;
        v8[14] = v13 - ((v11 * v14) >> 16);
      }
      else
      {
        v8[14] = 0LL;
        v8[10] = 0LL;
      }
      ++v10;
      ++v8;
    }
    while ( (unsigned __int64)v10 < 5 );
  }
}
