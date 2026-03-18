/*
 * XREFs of _SetWatermarkStrings @ 0x1C010FD90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0094D8C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall SetWatermarkStrings(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rsi
  int *v5; // rdx
  int v6; // r8d
  WCHAR *v7; // rcx
  char *v8; // r10
  struct _UNICODE_STRING *v9; // rbx
  unsigned __int64 Length; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19; // ecx
  unsigned __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+68h] [rbp+10h]

  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 0LL;
  v2 = 0;
  v3 = 1;
  while ( 1 )
  {
    v21 = v2;
    if ( (unsigned __int64)v2 >= 1 )
      break;
    v4 = 2LL * v2;
    v5 = (int *)(a1 + 16LL * v2);
    if ( (unsigned __int64)v5 >= W32UserProbeAddress )
      v5 = (int *)W32UserProbeAddress;
    v6 = *v5;
    v23 = *v5;
    *(_DWORD *)&SourceString.Length = *v5;
    v7 = (WCHAR *)*((_QWORD *)v5 + 1);
    SourceString.Buffer = v7;
    if ( ((unsigned __int8)v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (char *)v7 + (unsigned __int16)v6 + 2;
    if ( (unsigned __int64)v8 >= W32UserProbeAddress || (unsigned __int16)v6 > HIWORD(v23) || v8 <= (char *)v7 )
      *W32UserProbeAddress = 0;
    *(&(&gWatermarkStringArray)[2 * v2] + 1) = (struct _UNICODE_STRING near *)((char *)&gWatermarkStrings
                                                                             + 256 * (__int64)v2);
    v9 = (struct _UNICODE_STRING *)&(&gWatermarkStringArray)[2 * v2];
    v9->Length = 0;
    v9->MaximumLength = 256;
    RtlCopyUnicodeString(v9, &SourceString);
    Length = WORD1((&gWatermarkStringArray)[v4]) - 2LL;
    if ( v9->Length < Length )
      Length = v9->Length;
    *(&(*(&(&gWatermarkStringArray)[v4] + 1))->Length + (Length >> 1)) = 0;
    v2 = v21 + 1;
  }
  if ( !(unsigned int)IsDPIAbsoluteSysMet(0x43uLL) )
  {
    if ( IsDPIDWMSysMet(v11)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
    {
      goto LABEL_31;
    }
LABEL_17:
    if ( IsDPIDWMSysMet(0x43uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v19 = 0)
        : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v19) )
    {
      v14 = (_DWORD *)(gpsi + 2924LL);
    }
    else
    {
      v14 = (_DWORD *)(gpsi + 2148LL);
    }
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0 )
  {
    goto LABEL_17;
  }
LABEL_31:
  v14 = (_DWORD *)(gpsi + 2536LL);
LABEL_19:
  if ( *v14 )
  {
    v20 = 126LL;
    if ( (unsigned __int16)gWatermarkStringArray <= 0x7Eu )
      v20 = (unsigned __int16)gWatermarkStringArray;
    gSafeModeStrLen = v20 >> 1;
    if ( (int)RtlStringCchCopyNW((char *)gwszSafeModeStr, 64LL, (char *)qword_1C0321C98, gSafeModeStrLen) < 0 )
      return 0;
  }
  return v3;
}
