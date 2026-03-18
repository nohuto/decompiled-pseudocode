/*
 * XREFs of DwmSyncGetCompositionAttribute @ 0x14014BF4C
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1401E07E0 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x14014C610 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall DwmSyncGetCompositionAttribute(PVOID Object, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r15
  int v8; // ebx
  int v9; // edx
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int16 v15; // [rsp+40h] [rbp-49h] BYREF
  __int16 v16; // [rsp+42h] [rbp-47h]
  __int16 v17; // [rsp+44h] [rbp-45h]
  int v18; // [rsp+68h] [rbp-21h]
  int v19; // [rsp+6Ch] [rbp-1Dh]
  __int64 v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  __int128 Src; // [rsp+80h] [rbp-9h] BYREF
  __int64 v24; // [rsp+90h] [rbp+7h]

  v4 = a3;
  v8 = -1073741823;
  if ( Object )
  {
    v8 = DwmSyncLPCAllowed();
    if ( v8 >= 0 )
    {
      memset_0(&v15, 0, 0x58uLL);
      v16 = 88;
      v9 = word_140361958[8 * v4];
      v15 = word_140361958[8 * v4] + 24;
      if ( (unsigned __int64)v15 + 40 < 0x58 )
        v16 = v15 + 40;
      v10 = *(_OWORD *)a4;
      v11 = a4[2];
      v17 = 0x8000;
      v22 = v9;
      v18 = 1073741867;
      v19 = 1;
      v20 = a2;
      v21 = v4;
      Src = v10;
      v24 = v11;
      v14 = 88LL;
      v12 = LpcSendWaitReceivePort(Object, 0x20000LL, &v15, &v15, &v14, 0LL);
      v8 = v12;
      if ( v12 >= 0 )
      {
        if ( v12 == 192 || v12 == 258 || (unsigned __int8)v17 != 2 )
          v8 = -1073741823;
        else
          memmove(a4, &Src, *(_QWORD *)&word_140361958[8 * v4]);
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
