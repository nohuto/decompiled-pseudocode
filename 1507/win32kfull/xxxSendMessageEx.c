/*
 * XREFs of xxxSendMessageEx @ 0x1C0069230
 * Callers:
 *     xxxSendMessageFF @ 0x1C015B780 (xxxSendMessageFF.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendMessageEx(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  _BYTE *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD v10[3]; // [rsp+58h] [rbp-50h] BYREF
  __int128 v11; // [rsp+70h] [rbp-38h]
  __int64 v12; // [rsp+80h] [rbp-28h]

  if ( !a5 )
    return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 0, 1);
  v11 = 0uLL;
  v12 = 0LL;
  if ( !KeGetCurrentThread() )
    return 0LL;
  v6 = (_BYTE *)a5;
  if ( (a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a5 >= W32UserProbeAddress )
    v6 = (_BYTE *)W32UserProbeAddress;
  *v6 = *v6;
  v6[23] = v6[23];
  v11 = *(_OWORD *)a5;
  v12 = *(_QWORD *)(a5 + 16);
  v7 = xxxSendTransformableMessageTimeout(a1, a2, a3, a4, v11, DWORD1(v11), (__int64)v10, 0, 1);
  v8 = v10[0];
  v12 = v10[0];
  *((_QWORD *)&v11 + 1) = v7;
  *(_OWORD *)a5 = v11;
  *(_QWORD *)(a5 + 16) = v12;
  return v8;
}
