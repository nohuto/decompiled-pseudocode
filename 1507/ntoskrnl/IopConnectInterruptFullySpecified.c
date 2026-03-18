/*
 * XREFs of IopConnectInterruptFullySpecified @ 0x1405BC298
 * Callers:
 *     IoConnectInterruptEx @ 0x14057C8D8 (IoConnectInterruptEx.c)
 *     IoConnectInterrupt @ 0x1405BC228 (IoConnectInterrupt.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x140013C28 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1401718C0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
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
        __int128 *a10)
{
  USHORT v14; // di
  char v15; // di
  __int128 v16; // xmm0
  __int64 result; // rax
  __int64 v19; // [rsp+40h] [rbp-89h]
  int v20; // [rsp+50h] [rbp-79h] BYREF
  int v21; // [rsp+54h] [rbp-75h] BYREF
  __int64 v22; // [rsp+58h] [rbp-71h] BYREF
  _DWORD v23[4]; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int8 v24; // [rsp+70h] [rbp-59h]
  int v25; // [rsp+74h] [rbp-55h]
  int v26; // [rsp+78h] [rbp-51h]
  __int128 v27; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v28[16]; // [rsp+90h] [rbp-39h] BYREF
  int v29; // [rsp+A0h] [rbp-29h]
  char v30; // [rsp+A4h] [rbp-25h]

  if ( !a2 )
    return 3221225485LL;
  v14 = *((_WORD *)a10 + 4);
  if ( v14 >= KeQueryActiveGroupCount()
    || !*(_QWORD *)a10
    || (qword_1403D15E8[v14] & *(_QWORD *)a10) != *(_QWORD *)a10
    || *((_WORD *)a10 + 5) | (unsigned __int16)(*((_WORD *)a10 + 6) | *((_WORD *)a10 + 7)) )
  {
    return 3221225485LL;
  }
  v15 = a7;
  if ( a7 )
  {
    if ( a7 >= a6 )
      goto LABEL_8;
    return 3221225485LL;
  }
  v15 = a6;
LABEL_8:
  v16 = *a10;
  v23[2] = 0;
  v24 = a6;
  v26 = a8;
  v23[0] = 1;
  v23[3] = a5;
  v27 = v16;
  result = HalGetVectorInput(a5, &v27, &v20, &v21, v28);
  if ( (int)result >= 0 )
  {
    if ( off_140321940() || (unsigned int)(v21 - 3) > 1 )
    {
      v29 = v20;
      v25 = v21;
      if ( (v30 & 1) != 0 )
        a9 = 1;
      *a1 = 0LL;
      result = IopConnectInterrupt(&v22, a2, 0LL, a3, 0, a4, v15, a9, v19, (__int64)v23);
      if ( (int)result >= 0 )
        *a1 = v22 + 104;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
