/*
 * XREFs of _SetWatermarkStrings @ 0x1C0153AC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C013AC8C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
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
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  unsigned __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+68h] [rbp+10h]

  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 0LL;
  v3 = 0;
  v4 = 1;
  while ( 1 )
  {
    v21 = v3;
    if ( (unsigned __int64)v3 >= 1 )
      break;
    v5 = 2LL * v3;
    v6 = (int *)(a1 + 16LL * v3);
    if ( (unsigned __int64)v6 >= W32UserProbeAddress )
      v6 = (int *)W32UserProbeAddress;
    v7 = *v6;
    v23 = *v6;
    *(_DWORD *)&SourceString.Length = *v6;
    v8 = (WCHAR *)*((_QWORD *)v6 + 1);
    SourceString.Buffer = v8;
    if ( ((unsigned __int8)v8 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (char *)v8 + (unsigned __int16)v7 + 2;
    if ( (unsigned __int64)v9 >= W32UserProbeAddress
      || (unsigned __int16)v7 > HIWORD(v23)
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
    v3 = v21 + 1;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x43uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0 )
    {
      goto LABEL_29;
    }
  }
  else if ( !IsDPIDWMSysMet(v12)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v16 = 0)
           : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v16) )
  {
LABEL_29:
    if ( IsDPIDWMSysMet(0x43uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v19 = 0)
        : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v19) )
    {
      v17 = (_DWORD *)(gpsi + 2924LL);
    }
    else
    {
      v17 = (_DWORD *)(gpsi + 2148LL);
    }
    goto LABEL_37;
  }
  v17 = (_DWORD *)(gpsi + 2536LL);
LABEL_37:
  if ( *v17 )
  {
    v20 = 126LL;
    if ( (unsigned __int16)gWatermarkStringArray <= 0x7Eu )
      v20 = (unsigned __int16)gWatermarkStringArray;
    gSafeModeStrLen = v20 >> 1;
    if ( (int)RtlStringCchCopyNW((char *)gwszSafeModeStr, 64LL, (char *)qword_1C0323528, gSafeModeStrLen) < 0 )
      return 0;
  }
  return v4;
}
