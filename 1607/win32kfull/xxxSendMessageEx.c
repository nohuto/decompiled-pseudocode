/*
 * XREFs of xxxSendMessageEx @ 0x1C0087E10
 * Callers:
 *     xxxSendMessageFF @ 0x1C01589D0 (xxxSendMessageFF.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 */

ULONG_PTR __fastcall xxxSendMessageEx(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  _BYTE *v6; // rcx
  __int64 v7; // rax
  ULONG_PTR v8; // rcx
  ULONG_PTR BugCheckParameter3[8]; // [rsp+58h] [rbp-40h] BYREF

  if ( !a5 )
    return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 0, 1);
  memset(&BugCheckParameter3[3], 0, 24);
  if ( !KeGetCurrentThread() )
    return 0LL;
  v6 = (_BYTE *)a5;
  if ( (a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a5 >= W32UserProbeAddress )
    v6 = (_BYTE *)W32UserProbeAddress;
  *v6 = *v6;
  v6[23] = v6[23];
  *(_OWORD *)&BugCheckParameter3[3] = *(_OWORD *)a5;
  BugCheckParameter3[5] = *(_QWORD *)(a5 + 16);
  v7 = xxxSendTransformableMessageTimeout(
         a1,
         (unsigned int)a2,
         a3,
         a4,
         BugCheckParameter3[3],
         SHIDWORD(BugCheckParameter3[3]),
         (__int64 *)BugCheckParameter3,
         0,
         1);
  v8 = BugCheckParameter3[0];
  BugCheckParameter3[5] = BugCheckParameter3[0];
  BugCheckParameter3[4] = v7;
  *(_OWORD *)a5 = *(_OWORD *)&BugCheckParameter3[3];
  *(_QWORD *)(a5 + 16) = BugCheckParameter3[5];
  return v8;
}
