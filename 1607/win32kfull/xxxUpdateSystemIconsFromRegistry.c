/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C008EFCC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     zzzSetSystemImage @ 0x1C008F7D4 (zzzSetSystemImage.c)
 *     xxxClientLoadImage @ 0x1C0090238 (xxxClientLoadImage.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00912C8 (RtlInitUnicodeStringOrId.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

struct tagCURSOR *__fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // edi
  int v3; // edx
  int v4; // esi
  struct tagCURSOR *result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // ecx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-248h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-238h] BYREF

  for ( i = 0; i < 7; ++i )
  {
    FastGetProfileStringFromIDW(
      a1,
      5LL,
      *((unsigned __int16 *)&gasysico + 8 * i + 1),
      &qword_1C015B240,
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
      RtlInitUnicodeStringOrId(&DestinationString, (unsigned __int16)(i + 100));
      v4 = 576;
    }
    result = (struct tagCURSOR *)xxxClientLoadImage((unsigned int)&DestinationString, v3, 1, 0, 0, v4);
    if ( result )
      result = (struct tagCURSOR *)zzzSetSystemImage(result);
    if ( i == 5 )
    {
      result = (struct tagCURSOR *)*((_QWORD *)&gSharedInfo + 1);
      if ( *(_QWORD *)((char *)result
                     + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)(gpsi + 5624LL)) )
      {
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x32uLL) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8, v9) & 0xF) != 0 )
            goto LABEL_12;
        }
        else if ( !IsDPIDWMSysMet(v7)
               || (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 408)
                 ? (v34 = 0)
                 : (v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                (__int64)KeGetCurrentThread(),
                                                                v31,
                                                                v32,
                                                                v33)
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !v34) )
        {
LABEL_12:
          if ( IsDPIDWMSysMet(0x32uLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 408)
              ? (v41 = 0)
              : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v38,
                                                             v39,
                                                             v40)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v41) )
          {
            v14 = (_DWORD *)(gpsi + 2856LL);
          }
          else
          {
            v14 = (_DWORD *)(gpsi + 2080LL);
          }
LABEL_14:
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x31uLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) != 0 )
              goto LABEL_16;
          }
          else if ( !IsDPIDWMSysMet(v16)
                 || (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 408)
                   ? (v51 = 0)
                   : (v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                  (__int64)KeGetCurrentThread(),
                                                                  v19,
                                                                  v49,
                                                                  v50)
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v51) )
          {
LABEL_16:
            if ( IsDPIDWMSysMet(0x31uLL)
              && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0xF) == 1
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v52, v53) + 408)
                ? (v56 = 0)
                : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v19,
                                                               v54,
                                                               v55)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v56) )
            {
              v23 = (_DWORD *)(gpsi + 2852LL);
            }
            else
            {
              v23 = (_DWORD *)(gpsi + 2076LL);
            }
            goto LABEL_18;
          }
          v23 = (_DWORD *)(gpsi + 2464LL);
LABEL_18:
          result = (struct tagCURSOR *)xxxClientLoadImage((unsigned int)&DestinationString, v19, 1, *v23, *v14, v4);
          if ( result )
            result = (struct tagCURSOR *)zzzSetSystemImage(result);
          continue;
        }
        v14 = (_DWORD *)(gpsi + 2468LL);
        goto LABEL_14;
      }
    }
  }
  return result;
}
