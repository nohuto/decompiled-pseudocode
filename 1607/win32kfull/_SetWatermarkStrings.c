/*
 * XREFs of _SetWatermarkStrings @ 0x1C0130860
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00E514C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall SetWatermarkStrings(__int64 a1)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rsi
  int *v6; // rdx
  int v7; // ecx
  WCHAR *v8; // r8
  char *v9; // r10
  struct _UNICODE_STRING *v10; // rbx
  unsigned __int64 Length; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  _DWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx
  unsigned __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-28h] BYREF
  int v42; // [rsp+68h] [rbp+10h]

  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 0LL;
  v3 = 0;
  v4 = 1;
  while ( 1 )
  {
    v40 = v3;
    if ( (unsigned __int64)v3 >= 1 )
      break;
    v5 = 2LL * v3;
    v6 = (int *)(a1 + 16LL * v3);
    if ( (unsigned __int64)v6 >= W32UserProbeAddress )
      v6 = (int *)W32UserProbeAddress;
    v7 = *v6;
    v42 = *v6;
    *(_DWORD *)&SourceString.Length = *v6;
    v8 = (WCHAR *)*((_QWORD *)v6 + 1);
    SourceString.Buffer = v8;
    if ( ((unsigned __int8)v8 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (char *)v8 + (unsigned __int16)v7 + 2;
    if ( (unsigned __int64)v9 >= W32UserProbeAddress
      || (unsigned __int16)v7 > HIWORD(v42)
      || (v7 & 1) != 0
      || v9 <= (char *)v8 )
    {
      *W32UserProbeAddress = 0;
    }
    *(&(&gWatermarkStringArray)[2 * v3] + 1) = (struct _UNICODE_STRING near *)((char *)&gWatermarkStrings
                                                                             + 256 * (__int64)v3);
    v10 = (struct _UNICODE_STRING *)&(&gWatermarkStringArray)[2 * v3];
    v10->Length = 0;
    v10->MaximumLength = 256;
    RtlCopyUnicodeString(v10, &SourceString);
    Length = WORD1((&gWatermarkStringArray)[v5]) - 2LL;
    if ( v10->Length < Length )
      Length = v10->Length;
    *(&(*(&(&gWatermarkStringArray)[v5] + 1))->Length + (Length >> 1)) = 0;
    v3 = v40 + 1;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x43uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) != 0 )
      goto LABEL_27;
  }
  else if ( !IsDPIDWMSysMet(v13)
         || (W32GetCurrentThreadDpiAwarenessContext(v17, v16, v18, v19) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 408)
           ? (v26 = 0)
           : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v23,
                                                          v24,
                                                          v25)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v26) )
  {
LABEL_27:
    if ( IsDPIDWMSysMet(0x43uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 408)
        ? (v38 = 0)
        : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v35,
                                                       v36,
                                                       v37)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v38) )
    {
      v27 = (_DWORD *)(gpsi + 2924LL);
    }
    else
    {
      v27 = (_DWORD *)(gpsi + 2148LL);
    }
    goto LABEL_35;
  }
  v27 = (_DWORD *)(gpsi + 2536LL);
LABEL_35:
  if ( *v27 )
  {
    v39 = 126LL;
    if ( (unsigned __int16)gWatermarkStringArray <= 0x7Eu )
      v39 = (unsigned __int16)gWatermarkStringArray;
    gSafeModeStrLen = v39 >> 1;
    if ( (int)RtlStringCchCopyNW((char *)gwszSafeModeStr, 64LL, (char *)qword_1C0326DB0, gSafeModeStrLen) < 0 )
      return 0;
  }
  return v4;
}
