/*
 * XREFs of ReadDefaultAccelerationCurves @ 0x1C0135A88
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall ReadDefaultAccelerationCurves(__int64 a1)
{
  int ProfileValue; // ebx
  __int64 result; // rax
  __int128 v4; // xmm5
  __int128 v5; // xmm4
  __int64 v6; // xmm3_8
  __int128 v7; // xmm2
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  _OWORD v10[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v11; // [rsp+60h] [rbp+17h]
  _OWORD v12[2]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  ProfileValue = FastGetProfileValue(a1, 12LL, 614LL, 0LL, v10, 40, 0);
  result = FastGetProfileValue(a1, 12LL, 615LL, 0LL, v12, 40, 0);
  if ( ProfileValue == 40 && (_DWORD)result == 40 )
  {
    v4 = v10[0];
    v5 = v10[1];
    v6 = v11;
    v7 = v12[0];
    v8 = v12[1];
    v9 = v13;
  }
  else
  {
    if ( gbNewMouseInit )
      goto LABEL_5;
    v4 = xmmword_1C03200A0;
    v5 = xmmword_1C03200B0;
    v6 = qword_1C03200C0;
    v7 = xmmword_1C0320078;
    v8 = xmmword_1C0320088;
    v9 = qword_1C0320098;
  }
  qword_1C0323780 = v9;
  xmmword_1C0323770 = v8;
  gDefyTxfTP = v7;
  qword_1C0323758 = v6;
  xmmword_1C0323748 = v5;
  gDefxTxfTP = v4;
  qword_1C03237D0 = v9;
  xmmword_1C03237C0 = v8;
  gDefyTxf = v7;
  qword_1C03237A8 = v6;
  xmmword_1C0323798 = v5;
  gDefxTxf = v4;
LABEL_5:
  gbNewMouseInit = 1;
  return result;
}
