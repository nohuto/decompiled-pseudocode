/*
 * XREFs of DwmAsyncMagnSetWindowFilterList @ 0x1401EBE80
 * Callers:
 *     MagSetLensContextInformation @ 0x1401EB08C (MagSetLensContextInformation.c)
 *     MagpComposeDesktop @ 0x140203264 (MagpComposeDesktop.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowFilterList(PVOID Object, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r10
  _QWORD *v14; // r8
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v17; // [rsp+24h] [rbp-DCh]
  int v18; // [rsp+48h] [rbp-B8h]
  __int64 v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+58h] [rbp-A8h]
  int v21; // [rsp+5Ch] [rbp-A4h]
  _BYTE v22[200]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+128h] [rbp+28h]

  v8 = -1073741823;
  if ( Object )
  {
    memset_0(&v16, 0, 0x110uLL);
    v9 = *a4;
    v17 = 0x8000;
    v10 = a4[1];
    v16 = 17826024;
    v18 = 1073741933;
    v19 = a2;
    v11 = v10 + v9;
    v23 = a3;
    v20 = v9;
    v21 = v10;
    if ( (unsigned int)(v10 + v9) >= 0x19 )
    {
      v11 = 25;
    }
    else if ( !v11 )
    {
LABEL_6:
      EtwUpdateEvent(0LL);
      v8 = LpcRequestPort(Object, &v16);
      ObfDereferenceObject(Object);
      return v8;
    }
    v12 = *((_QWORD *)a4 + 1) - (_QWORD)v22;
    v13 = v11;
    v14 = v22;
    do
    {
      *v14 = *(_QWORD *)((char *)v14 + v12);
      ++v14;
      --v13;
    }
    while ( v13 );
    goto LABEL_6;
  }
  return v8;
}
