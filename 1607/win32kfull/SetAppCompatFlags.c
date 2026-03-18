/*
 * XREFs of SetAppCompatFlags @ 0x1C00DEF80
 * Callers:
 *     <none>
 * Callees:
 *     SetAppImeCompatFlags @ 0x1C00DF488 (SetAppImeCompatFlags.c)
 *     IsCurrentDesktopComposed @ 0x1C00DF580 (IsCurrentDesktopComposed.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     __report_rangecheckfailure @ 0x1C01BF698 (__report_rangecheckfailure.c)
 */

__int64 __fastcall SetAppCompatFlags(_QWORD *a1)
{
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessPeb; // r13
  __int64 v4; // rax
  int v5; // ecx
  unsigned __int16 *v7; // rdx
  int v8; // r15d
  unsigned __int64 v9; // rdx
  int v10; // ecx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  _WORD *v13; // rdi
  _WORD *v14; // rax
  _WORD *v15; // rcx
  _WORD *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdx
  _WORD *v19; // rcx
  size_t v20; // r8
  __int64 ThreadTeb; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // r14
  __int64 CurrentProcessWin32Process; // rax
  ULONG Value; // [rsp+40h] [rbp-228h] BYREF
  int v33; // [rsp+44h] [rbp-224h]
  int v34; // [rsp+48h] [rbp-220h]
  _WORD *v35; // [rsp+50h] [rbp-218h]
  _WORD *v36; // [rsp+58h] [rbp-210h]
  unsigned __int16 *v37; // [rsp+60h] [rbp-208h]
  int v38; // [rsp+68h] [rbp-200h] BYREF
  unsigned __int64 v39; // [rsp+70h] [rbp-1F8h]
  __int64 v40; // [rsp+78h] [rbp-1F0h]
  unsigned __int64 v41; // [rsp+80h] [rbp-1E8h]
  UNICODE_STRING String; // [rsp+98h] [rbp-1D0h] BYREF
  struct _UNICODE_STRING v43; // [rsp+A8h] [rbp-1C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-1B0h] BYREF
  WCHAR v45[96]; // [rsp+D0h] [rbp-198h] BYREF
  WCHAR SourceString[80]; // [rsp+190h] [rbp-D8h] BYREF

  Value = 0;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v4 = a1[73];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 560);
    *((_DWORD *)a1 + 140) = v5;
    a1[71] = *(_QWORD *)(v4 + 568);
    *(_DWORD *)(a1[54] + 20LL) = v5;
    *(_DWORD *)(a1[54] + 24LL) = *((_DWORD *)a1 + 142);
    return 0LL;
  }
  v7 = (unsigned __int16 *)a1[56];
  v8 = 1;
  if ( !v7 )
  {
    v9 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
    if ( v9 >= W32UserProbeAddress )
      v9 = W32UserProbeAddress;
    v10 = *(_DWORD *)v9;
    v33 = v10;
    v38 = v10;
    v11 = *(_QWORD *)(v9 + 8);
    v39 = v11;
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v11 + (unsigned __int16)v10 + 2LL;
    if ( v12 >= W32UserProbeAddress || (unsigned __int16)v10 > HIWORD(v33) || (v10 & 1) != 0 || v12 <= v11 )
      *W32UserProbeAddress = 0;
    v7 = (unsigned __int16 *)&v38;
  }
  v37 = v7;
  v13 = (_WORD *)(*((_QWORD *)v7 + 1) + 2 * ((unsigned __int64)*v7 >> 1));
  v36 = v13;
  v14 = v13;
  v35 = v13;
  while ( 1 )
  {
    v15 = (_WORD *)*((_QWORD *)v7 + 1);
    if ( v13 == v15 )
      break;
    if ( *v13 == 46 )
      goto LABEL_18;
    v36 = --v13;
  }
  v13 = v14;
  v36 = v14;
LABEL_18:
  v16 = v13;
  v35 = v13;
  while ( v16 != v15 )
  {
    if ( *v16 == 92 || *v16 == 58 )
    {
      v35 = ++v16;
      break;
    }
    v35 = --v16;
  }
  v17 = 2 * (v13 - v16);
  v34 = v17;
  if ( (unsigned int)v17 >= 0xA4 )
    LODWORD(v17) = 162;
  v34 = v17;
  memmove(v45, v16, (unsigned int)v17);
  v19 = (_WORD *)(a1[47] + 936LL);
  if ( !*v19 )
  {
    v20 = 30LL;
    if ( (unsigned int)v17 < 0x1E )
      v20 = (unsigned int)v17;
    memmove(v19, v16, v20);
    *(_WORD *)(a1[47] + 966LL) = 0;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19, v18) + 12) & 0x80u) == 0 )
  {
    v23 = *(_QWORD *)(ProcessPeb + 720);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v40 = ThreadTeb + 0x2000;
    if ( (ThreadTeb & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(ThreadTeb + 8244) > W32UserProbeAddress
      || ThreadTeb + 8244 < (unsigned __int64)(ThreadTeb + 8240) )
    {
      *W32UserProbeAddress = 0;
    }
    v22 = *(unsigned int *)(ThreadTeb + 8240);
    v41 = v22;
    if ( (v22 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v22 + 1120 > W32UserProbeAddress || v22 + 1120 < v22 )
      *W32UserProbeAddress = 0;
    v23 = *(_QWORD *)(v22 + 480);
  }
  a1[71] = v23;
  *(_DWORD *)(a1[54] + 24LL) = v23;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1[47] + 936LL));
  a1[71] = a1[71];
  v26 = a1[54];
  *(_DWORD *)(v26 + 24) = *(_DWORD *)(v26 + 24);
  if ( (a1[71] & 0x2000000) == 0 && (unsigned int)IsCurrentDesktopComposed(v26, v24, v25) )
    v8 = 0;
  if ( (*(_DWORD *)(a1[47] + 768LL) & 0x30) == 0x10 )
    *(_QWORD *)a1[54] |= 0x10000000uLL;
  if ( v8 )
  {
LABEL_52:
    *(_QWORD *)a1[54] |= 0x20000000uLL;
    goto LABEL_55;
  }
  if ( (a1[71] & 0x80000000000000LL) == 0 )
  {
    v27 = a1[47];
    if ( (*(_DWORD *)(v27 + 768) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v27) )
        *(_QWORD *)(a1[54] + 224LL) |= 0x80uLL;
      goto LABEL_55;
    }
    goto LABEL_52;
  }
  *(_QWORD *)(a1[54] + 224LL) |= 0x10uLL;
LABEL_55:
  v28 = 0x100000000000000LL;
  if ( (a1[71] & 0x100000000000000LL) != 0 )
    *(_QWORD *)(a1[54] + 224LL) |= 0x20uLL;
  v29 = *((_DWORD *)a1 + 142);
  if ( (v29 & 0x10000000) == 0 )
  {
    v28 = 1536LL;
    if ( *((_WORD *)a1 + 276) < 0x600u )
    {
      *((_DWORD *)a1 + 142) = v29 | 0x20000000;
      *(_DWORD *)(a1[54] + 24LL) |= 0x20000000u;
    }
  }
  v30 = (unsigned __int64)(unsigned int)v17 >> 1;
  if ( v30 >= 90 )
    _report_rangecheckfailure();
  v45[v30] = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28, v24);
  if ( (unsigned int)FastGetProfileStringW(
                       0LL,
                       *(char *)(CurrentProcessWin32Process + 12) < 0 ? 43 : 33,
                       v45,
                       0LL,
                       SourceString,
                       80,
                       0) )
  {
    RtlInitUnicodeString(&String, SourceString);
    RtlUnicodeStringToInteger(&String, 0, &Value);
  }
  *(_DWORD *)(a1[54] + 20LL) = Value;
  *((_DWORD *)a1 + 140) = Value;
  v45[v30] = 0;
  RtlInitUnicodeString(&v43, v45);
  return SetAppImeCompatFlags(a1, &v43);
}
