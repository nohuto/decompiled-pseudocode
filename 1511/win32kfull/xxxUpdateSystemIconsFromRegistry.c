/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C00CC8DC
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00CC1E8 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadImage @ 0x1C012031C (xxxClientLoadImage.c)
 *     zzzSetSystemImage @ 0x1C0123934 (zzzSetSystemImage.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // edi
  int v3; // edx
  int v4; // esi
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-248h] BYREF

  for ( i = 0; i < 7; ++i )
  {
    FastGetProfileStringFromIDW(
      a1,
      5LL,
      *((unsigned __int16 *)&gasysico + 8 * i + 1),
      &word_1C0153C60,
      SourceString,
      260,
      0);
    if ( SourceString[0] )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v4 = 592;
    }
    else
    {
      RtlInitUnicodeStringOrId(&DestinationString, (WCHAR *)(unsigned __int16)(i + 100));
      v4 = 576;
    }
    result = xxxClientLoadImage((unsigned int)&DestinationString, v3, 1, 0, 0, v4);
    if ( result )
      result = zzzSetSystemImage(result, *((_QWORD *)&gasysico + 2 * i + 1));
    if ( i == 5 )
    {
      result = gSharedInfo[1];
      v6 = *(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)(gpsi + 4232LL) + result);
      if ( v6 )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x32uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0 )
          {
            goto LABEL_13;
          }
        }
        else if ( !IsDPIDWMSysMet(v7)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v18 = 0)
                 : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v18) )
        {
LABEL_13:
          if ( IsDPIDWMSysMet(0x32uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v19 = 0)
              : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v19) )
          {
            v10 = (_DWORD *)(gpsi + 2856LL);
          }
          else
          {
            v10 = (_DWORD *)(gpsi + 2080LL);
          }
LABEL_15:
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x31uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0 )
            {
              goto LABEL_18;
            }
          }
          else if ( !IsDPIDWMSysMet(v11)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v22 = 0)
                   : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v22) )
          {
LABEL_18:
            if ( IsDPIDWMSysMet(0x31uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v23 = 0)
                : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v23) )
            {
              v15 = (_DWORD *)(gpsi + 2852LL);
            }
            else
            {
              v15 = (_DWORD *)(gpsi + 2076LL);
            }
            goto LABEL_20;
          }
          v15 = (_DWORD *)(gpsi + 2464LL);
LABEL_20:
          result = xxxClientLoadImage((unsigned int)&DestinationString, v13, 1, *v15, *v10, v4);
          if ( result )
            result = zzzSetSystemImage(result, v6);
          continue;
        }
        v10 = (_DWORD *)(gpsi + 2468LL);
        goto LABEL_15;
      }
    }
  }
  return result;
}
