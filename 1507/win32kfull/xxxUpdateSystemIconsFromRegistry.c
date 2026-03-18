/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C0135D14
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     RtlInitUnicodeStringOrId @ 0x1C004F27C (RtlInitUnicodeStringOrId.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     zzzSetSystemImage @ 0x1C0136720 (zzzSetSystemImage.c)
 *     xxxClientLoadImage @ 0x1C0136A30 (xxxClientLoadImage.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

struct tagCURSOR *__fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // edi
  int v3; // edx
  int v4; // esi
  struct tagCURSOR *result; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-248h] BYREF

  for ( i = 0; i < 7; ++i )
  {
    FastGetProfileStringFromIDW(
      a1,
      5LL,
      *((unsigned __int16 *)&gasysico + 8 * i + 1),
      &qword_1C015E270,
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
    result = (struct tagCURSOR *)xxxClientLoadImage((unsigned int)&DestinationString, v3, 1, 0, 0, v4);
    if ( result )
      result = (struct tagCURSOR *)zzzSetSystemImage(result);
    if ( i == 5 )
    {
      result = (struct tagCURSOR *)gSharedInfo[1];
      if ( *(_QWORD *)((char *)result
                     + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)(gpsi + 4232LL)) )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x32uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x4000) != 0 )
          {
            goto LABEL_13;
          }
        }
        else if ( !IsDPIDWMSysMet(v6)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v17 = 0)
                 : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v17) )
        {
LABEL_13:
          if ( IsDPIDWMSysMet(0x32uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v18 = 0)
              : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v18) )
          {
            v9 = (_DWORD *)(gpsi + 2856LL);
          }
          else
          {
            v9 = (_DWORD *)(gpsi + 2080LL);
          }
LABEL_15:
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x31uLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) != 0 )
            {
              goto LABEL_18;
            }
          }
          else if ( !IsDPIDWMSysMet(v10)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   ? (v21 = 0)
                   : (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 416)
                                                  + 8LL)
                                      + 260LL) & 1),
                     !v21) )
          {
LABEL_18:
            if ( IsDPIDWMSysMet(0x31uLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v22 = 0)
                : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v22) )
            {
              v14 = (_DWORD *)(gpsi + 2852LL);
            }
            else
            {
              v14 = (_DWORD *)(gpsi + 2076LL);
            }
            goto LABEL_20;
          }
          v14 = (_DWORD *)(gpsi + 2464LL);
LABEL_20:
          result = (struct tagCURSOR *)xxxClientLoadImage((unsigned int)&DestinationString, v12, 1, *v14, *v9, v4);
          if ( result )
            result = (struct tagCURSOR *)zzzSetSystemImage(result);
          continue;
        }
        v9 = (_DWORD *)(gpsi + 2468LL);
        goto LABEL_15;
      }
    }
  }
  return result;
}
