/*
 * XREFs of ?BuildTouchpadAccelerationCurve@@YAXPEAUtagMONITOR@@@Z @ 0x1C0091770
 * Callers:
 *     BuildMouseAccelerationCurve @ 0x1C0091600 (BuildMouseAccelerationCurve.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0225EF0 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall BuildTouchpadAccelerationCurve(struct tagMONITOR *a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdi
  __int64 DisplayDC; // r9
  int v5; // ecx
  __int64 v6; // rsi
  int v7; // edx
  __int64 *v8; // rcx
  int v9; // r9d
  _QWORD *v10; // r8
  __int64 v11; // r10
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax

  if ( gbNewMouseInit )
  {
    v2 = qword_1C03281F0;
    if ( !(_DWORD)qword_1C03281F0 )
    {
      v2 = 10;
      LODWORD(qword_1C03281F0) = 10;
    }
    v3 = (__int64)((unsigned __int64)v2 << 16) / 10;
    DisplayDC = GreCreateDisplayDC(*((_QWORD *)a1 + 20), 0LL);
    if ( __CFSHR__(HIDWORD(qword_1C03281F0), 7) )
      v5 = *((unsigned __int16 *)a1 + 76);
    else
      v5 = *((unsigned __int16 *)a1 + 77);
    if ( v5 < 96 )
    {
      if ( __CFSHR__(HIDWORD(qword_1C03281F0), 7) )
        v5 = *((unsigned __int16 *)a1 + 77);
      if ( v5 < 96 )
        v5 = 96;
    }
    v6 = ((__int64)v5 << 16) / 120;
    GreDeleteDC(DisplayDC);
    v7 = 0;
    v8 = (__int64 *)((char *)a1 + 320);
    do
    {
      ++v7;
      v8[5] = (v3 * ((v6 * *(__int64 *)((char *)v8 + (char *)&gDefyTxfTP - (char *)a1 - 320)) >> 16)) >> 16;
      *v8 = (229376 * *(__int64 *)((char *)v8 + (char *)&gDefxTxfTP - (char *)a1 - 320)) >> 16;
      ++v8;
    }
    while ( (unsigned __int64)v7 < 5 );
    v9 = 1;
    v10 = (_QWORD *)((char *)a1 + 328);
    v11 = 1LL;
    do
    {
      v12 = *(v10 - 1);
      if ( *v10 == v12 )
      {
        v10[13] = 0LL;
        v10[9] = 0LL;
      }
      else
      {
        v13 = *((_QWORD *)a1 + v11 + 44);
        v14 = ((v10[5] - v13) << 16) / (*v10 - v12);
        v10[9] = v14;
        v10[13] = v13 - ((v12 * v14) >> 16);
      }
      ++v9;
      ++v11;
      ++v10;
    }
    while ( (unsigned __int64)v9 < 5 );
  }
}
