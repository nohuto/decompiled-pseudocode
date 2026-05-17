/*
 * XREFs of RtlpGetSetBootStatusData @ 0x180087ED0
 * Callers:
 *     RtlGetSetBootStatusData @ 0x180087D70 (RtlGetSetBootStatusData.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A64E0 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A6520 (NtWriteFile.c)
 */

__int64 __fastcall RtlpGetSetBootStatusData(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  unsigned __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v13; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v14[8]; // [rsp+60h] [rbp-79h] BYREF
  int v15; // [rsp+68h] [rbp-71h]
  int v16; // [rsp+70h] [rbp-69h]
  _DWORD v17[31]; // [rsp+74h] [rbp-65h]

  v16 = 0;
  v12 = 0LL;
  v9 = a3;
  v17[0] = 4;
  v17[1] = 4;
  v17[14] = 32;
  v17[28] = 32;
  v17[2] = 4;
  v17[4] = 1;
  v17[6] = 1;
  v17[8] = 1;
  v17[10] = 1;
  v17[12] = 1;
  v17[16] = 1;
  v17[18] = 1;
  v17[20] = 4;
  v17[22] = 4;
  v17[24] = 4;
  v17[30] = 1;
  v17[3] = 8;
  v17[5] = 9;
  v17[7] = 10;
  v17[9] = 11;
  v17[11] = 12;
  v17[13] = 16;
  v17[15] = 48;
  v17[17] = 49;
  v17[19] = 52;
  v17[21] = 56;
  v17[23] = 60;
  v17[25] = 64;
  v17[26] = 20;
  v17[27] = 88;
  v17[29] = 50;
  result = NtReadFile(a1, 0LL, 0LL, 0LL, v14, &v13, 4, &v12, 0LL);
  if ( (int)result >= 0 )
  {
    if ( (v9 & 0x80000000) != 0LL || v9 >= 0x10 )
    {
      return 3221225485LL;
    }
    else
    {
      v11 = (unsigned int)v17[2 * v9];
      v12 = (unsigned int)v17[2 * v9 - 1];
      if ( v12 + v11 > (unsigned __int64)v13 )
      {
        return 3221225561LL;
      }
      else if ( a5 < (unsigned int)v11 )
      {
        return 3221225507LL;
      }
      else
      {
        if ( a2 )
          LODWORD(result) = NtReadFile(a1, 0LL, 0LL, 0LL, v14, a4, v11, &v12, 0LL);
        else
          LODWORD(result) = NtWriteFile(a1, 0LL, 0LL, 0LL, v14, a4, v11, &v12, 0LL);
        if ( (int)result >= 0 )
        {
          if ( a6 )
            *a6 = v15;
        }
        return (unsigned int)result;
      }
    }
  }
  return result;
}
