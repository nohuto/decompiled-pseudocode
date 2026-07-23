/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x1406896F0
 * Callers:
 *     RtlIdnToAscii @ 0x140689398 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x1406893B8 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1400C2600 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     FindEmailAt @ 0x140214D48 (FindEmailAt.c)
 *     RtlpValidateAsciiStd3AndLength @ 0x140689AC4 (RtlpValidateAsciiStd3AndLength.c)
 *     punycode_encode @ 0x14068A300 (punycode_encode.c)
 *     RtlNormalizeString @ 0x14068C010 (RtlNormalizeString.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(int a1, const WCHAR *a2, __int64 a3, void *a4, int *a5, char a6)
{
  __int16 v6; // r11
  void *v7; // r15
  LONG v8; // ebx
  char v10; // r13
  int v11; // r14d
  char v12; // al
  bool v13; // cl
  char v14; // r13
  char v15; // di
  __int64 result; // rax
  const WCHAR *v17; // rdx
  LONG v18; // eax
  LONG v19; // edi
  LONG v20; // ecx
  WCHAR *v21; // r9
  LONG EmailAt; // eax
  NTSTATUS v23; // eax
  unsigned int v24; // ecx
  bool v25; // zf
  NTSTATUS v26; // eax
  bool v27; // zf
  bool v28; // cc
  WCHAR v29; // dx
  WCHAR v30; // ax
  unsigned __int64 v31; // rax
  char v32; // [rsp+30h] [rbp-D0h]
  char v33; // [rsp+31h] [rbp-CFh]
  char v34; // [rsp+32h] [rbp-CEh]
  LONG DestinationStringLength; // [rsp+34h] [rbp-CCh] BYREF
  size_t pcchLength; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR DestinationString[512]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v38[520]; // [rsp+440h] [rbp+340h] BYREF

  v6 = 0;
  v7 = a4;
  v8 = a3;
  v10 = a1;
  if ( a2 )
  {
    if ( (int)a3 >= -1 )
    {
      if ( a5 )
      {
        v11 = *a5;
        if ( *a5 >= 0 && (v11 <= 0 || a4) && (a1 & 0xFFFFFFF8) == 0 )
        {
          v12 = a1 & 1;
          v13 = (a1 & 4) != 0;
          v34 = v12;
          v14 = (v10 & 2) != 0;
          v32 = v13;
          v33 = 0;
          v15 = 0;
          if ( (_DWORD)a3 != -1 )
          {
LABEL_11:
            if ( v8 > 0 && a2[v8 - 1] == v6 )
            {
              v15 = 1;
              --v8;
              v33 = 1;
            }
            LOBYTE(a3) = v13;
            LOBYTE(a4) = v14;
            if ( (unsigned __int8)RtlpValidateAsciiStd3AndLength(a2, (unsigned int)v8, a3, a4) )
            {
              if ( !v8 )
                return 3221227286LL;
              if ( v15 )
                ++v8;
              if ( !v7 || !v11 )
                goto LABEL_24;
              if ( v8 <= v11 )
              {
                v17 = a2;
LABEL_23:
                memmove(v7, v17, 2LL * v8);
LABEL_24:
                *a5 = v8;
                return 0LL;
              }
              goto LABEL_74;
            }
            v18 = 0;
            v19 = 0;
            v20 = 511;
            v21 = DestinationString;
            if ( !v32 )
              goto LABEL_32;
            EmailAt = FindEmailAt((__int64)a2, v8);
            LODWORD(pcchLength) = EmailAt;
            if ( !EmailAt )
            {
LABEL_28:
              result = 3221227286LL;
LABEL_75:
              *a5 = 0;
              return result;
            }
            DestinationStringLength = 511;
            v23 = RtlNormalizeString(1u, a2, EmailAt, DestinationString, &DestinationStringLength);
            v19 = DestinationStringLength;
            v24 = v23;
            v25 = v23 == 0;
            if ( v23 >= 0 )
            {
              if ( DestinationStringLength )
              {
                v18 = pcchLength;
                v21 = &DestinationString[DestinationStringLength];
                v20 = 511 - DestinationStringLength;
LABEL_32:
                if ( v18 >= v8 )
                {
LABEL_49:
                  if ( v19 > 0 )
                  {
                    v29 = DestinationString[v19 - 1];
                    if ( v29 == 46 )
                    {
                      v30 = a2[v8 - 1];
                      if ( v30 != 0xFF0E && v30 != 12290 && v30 != 46 && v30 != 0xFF61 )
                        goto LABEL_28;
                    }
                    if ( !v29 )
                      goto LABEL_28;
                  }
                  DestinationStringLength = 515;
                  result = punycode_encode(DestinationString, v32, v14);
                  v8 = DestinationStringLength;
                  if ( !DestinationStringLength )
                    goto LABEL_75;
                  if ( !a6 )
                  {
                    if ( v33 )
                    {
                      if ( (unsigned __int64)v19 > 0x1FF )
                        goto LABEL_28;
                      v31 = v19++;
                      if ( v31 >= 511 )
                        _report_rangecheckfailure();
                      DestinationString[v31] = 0;
                    }
                    if ( v7 && v11 )
                    {
                      if ( v19 > v11 )
                      {
LABEL_74:
                        result = 3221225507LL;
                        goto LABEL_75;
                      }
                      memmove(v7, DestinationString, 2LL * v19);
                    }
                    *a5 = v19;
                    return 0LL;
                  }
                  if ( v33 )
                  {
                    if ( (unsigned __int64)DestinationStringLength >= 0x203 )
                      goto LABEL_28;
                    v8 = DestinationStringLength + 1;
                    if ( (unsigned __int64)(2LL * DestinationStringLength) >= 0x406 )
                      _report_rangecheckfailure();
                    v38[DestinationStringLength] = 0;
                  }
                  if ( !v7 || !v11 )
                    goto LABEL_24;
                  if ( v8 <= v11 )
                  {
                    v17 = v38;
                    goto LABEL_23;
                  }
                  goto LABEL_74;
                }
                DestinationStringLength = v20;
                v26 = RtlNormalizeString(v34 != 0 ? 13 : 269, &a2[v18], v8 - v18, v21, &DestinationStringLength);
                v24 = v26;
                v27 = v26 == 0;
                if ( v26 >= 0 )
                {
                  if ( DestinationStringLength )
                  {
                    v19 += DestinationStringLength;
                    goto LABEL_49;
                  }
                  v27 = v26 == 0;
                }
                if ( v27 || v26 == -1073741789 || v26 == -1073740009 )
                  goto LABEL_42;
                v28 = DestinationStringLength <= 0;
                goto LABEL_41;
              }
              v25 = v23 == 0;
            }
            if ( v25 || v23 == -1073741789 || v23 == -1073740009 )
              goto LABEL_42;
            v28 = DestinationStringLength <= 0;
LABEL_41:
            if ( v28 )
            {
LABEL_43:
              result = v24;
              goto LABEL_75;
            }
LABEL_42:
            v24 = -1073740010;
            goto LABEL_43;
          }
          if ( RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength) >= 0 )
          {
            v13 = v32;
            v8 = pcchLength + 1;
            goto LABEL_11;
          }
        }
      }
    }
  }
  return 3221225485LL;
}
