/*
 * XREFs of IopConnectInterruptFullySpecified @ 0x14054625C
 * Callers:
 *     IoConnectInterruptEx @ 0x140502D88 (IoConnectInterruptEx.c)
 *     IoConnectInterrupt @ 0x1405461EC (IoConnectInterrupt.c)
 * Callees:
 *     KeVerifyGroupAffinity @ 0x1401230CC (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140143840 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 */

__int64 __fastcall IopConnectInterruptFullySpecified(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        int a8,
        char a9,
        __int64 a10)
{
  int v14; // edx
  __int128 *v15; // r10
  char v16; // bl
  __int128 v17; // xmm0
  __int64 result; // rax
  __int64 v20; // [rsp+40h] [rbp-89h]
  int v21; // [rsp+50h] [rbp-79h] BYREF
  int v22; // [rsp+54h] [rbp-75h] BYREF
  __int64 v23; // [rsp+58h] [rbp-71h] BYREF
  int v24; // [rsp+60h] [rbp-69h] BYREF
  int v25; // [rsp+68h] [rbp-61h]
  unsigned int v26; // [rsp+6Ch] [rbp-5Dh]
  unsigned __int8 v27; // [rsp+70h] [rbp-59h]
  int v28; // [rsp+74h] [rbp-55h]
  int v29; // [rsp+78h] [rbp-51h]
  __int128 v30; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v31[16]; // [rsp+90h] [rbp-39h] BYREF
  int v32; // [rsp+A0h] [rbp-29h]
  char v33; // [rsp+A4h] [rbp-25h]

  if ( !a2 || !KeVerifyGroupAffinity(a10, 0) )
    return 3221225485LL;
  v16 = a7;
  if ( a7 )
  {
    if ( a7 >= a6 )
      goto LABEL_5;
    return 3221225485LL;
  }
  v16 = a6;
LABEL_5:
  v17 = *v15;
  v25 &= v14;
  v27 = a6;
  v29 = a8;
  v24 = 1;
  v26 = a5;
  v30 = v17;
  result = HalGetVectorInput(a5, &v30, &v21, &v22, v31);
  if ( (int)result >= 0 )
  {
    if ( off_1402D27F0() || (unsigned int)(v22 - 3) > 1 )
    {
      v32 = v21;
      v28 = v22;
      if ( (v33 & 1) != 0 )
        a9 = 1;
      *a1 = 0LL;
      result = IopConnectInterrupt(&v23, a2, 0LL, a3, 0, a4, v16, a9, v20, (__int64)&v24);
      if ( (int)result >= 0 )
        *a1 = v23 + 112;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
