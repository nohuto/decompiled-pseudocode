/*
 * XREFs of DwmAsyncSetCompositionAttribute @ 0x1401E6144
 * Callers:
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E60D4 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall DwmAsyncSetCompositionAttribute(PVOID Object, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  int v9; // edx
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  unsigned __int16 v13; // [rsp+20h] [rbp-49h] BYREF
  __int16 v14; // [rsp+22h] [rbp-47h]
  __int16 v15; // [rsp+24h] [rbp-45h]
  __int64 v16; // [rsp+48h] [rbp-21h]
  __int64 v17; // [rsp+50h] [rbp-19h]
  int v18; // [rsp+58h] [rbp-11h]
  int v19; // [rsp+5Ch] [rbp-Dh]
  __int128 v20; // [rsp+60h] [rbp-9h]
  __int64 v21; // [rsp+70h] [rbp+7h]

  v5 = (int)a3;
  v8 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object, a2, a3);
  if ( Object )
  {
    memset_0(&v13, 0, 0x58uLL);
    v14 = 88;
    v9 = word_140361958[8 * v5];
    v13 = word_140361958[8 * v5] + 24;
    if ( (unsigned __int64)v13 + 40 < 0x58 )
      v14 = v13 + 40;
    v10 = *a4;
    v19 = v9;
    v11 = *((_QWORD *)a4 + 2);
    v20 = v10;
    v15 = 0x8000;
    v16 = 1073741867LL;
    v17 = a2;
    v18 = v5;
    v21 = v11;
    v8 = LpcRequestPort(Object, &v13);
    ObfDereferenceObject(Object);
  }
  return v8;
}
