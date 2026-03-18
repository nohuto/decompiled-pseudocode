/*
 * XREFs of xxxSendMessageEx @ 0x1401B82D0
 * Callers:
 *     xxxSendMessageFF @ 0x1402CE2E0 (xxxSendMessageFF.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendMessageEx(
        struct tagTHREADINFO **a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *Address)
{
  unsigned int v7; // r15d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12[3]; // [rsp+58h] [rbp-60h] BYREF
  __int128 v13; // [rsp+70h] [rbp-48h]
  __int64 v14; // [rsp+80h] [rbp-38h]

  v7 = a2;
  if ( !Address )
    return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 0, 1);
  v12[0] = 0LL;
  *(_QWORD *)&v13 = 0LL;
  if ( !KeGetCurrentThread() )
    return 0LL;
  ProbeForWrite(Address, 0x18uLL, 4u);
  v13 = *(_OWORD *)Address;
  v14 = Address[2];
  v9 = xxxSendTransformableMessageTimeout(a1, v7, a3, a4, v13, DWORD1(v13), v12, 0, 1);
  v10 = v12[0];
  v14 = v12[0];
  *((_QWORD *)&v13 + 1) = v9;
  *(_OWORD *)Address = v13;
  Address[2] = v14;
  return v10;
}
