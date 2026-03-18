/*
 * XREFs of SetAppCompatFlags @ 0x1C00594F0
 * Callers:
 *     <none>
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0057DE0 (IsCurrentDesktopComposed.c)
 *     SetAppImeCompatFlags @ 0x1C0057E08 (SetAppImeCompatFlags.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     __report_rangecheckfailure @ 0x1C01C15D8 (__report_rangecheckfailure.c)
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
  _WORD *v18; // rcx
  size_t v19; // r8
  __int64 ThreadTeb; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // r14
  __int64 v30; // rax
  ULONG Value; // [rsp+40h] [rbp-228h] BYREF
  _WORD *v32; // [rsp+48h] [rbp-220h]
  int v33; // [rsp+50h] [rbp-218h]
  int v34; // [rsp+54h] [rbp-214h]
  _WORD *v35; // [rsp+58h] [rbp-210h]
  unsigned __int16 *v36; // [rsp+60h] [rbp-208h]
  int v37; // [rsp+68h] [rbp-200h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-1F8h]
  unsigned __int64 v39; // [rsp+78h] [rbp-1F0h]
  UNICODE_STRING String; // [rsp+80h] [rbp-1E8h] BYREF
  struct _UNICODE_STRING v41; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-1B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-1B0h] BYREF
  WCHAR v44[96]; // [rsp+D0h] [rbp-198h] BYREF
  WCHAR SourceString[80]; // [rsp+190h] [rbp-D8h] BYREF

  Value = 0;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v4 = a1[74];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 568);
    *((_DWORD *)a1 + 142) = v5;
    a1[72] = *(_QWORD *)(v4 + 576);
    *(_DWORD *)(a1[55] + 20LL) = v5;
    *(_DWORD *)(a1[55] + 24LL) = *((_DWORD *)a1 + 144);
    return 0LL;
  }
  v7 = (unsigned __int16 *)a1[57];
  v8 = 1;
  if ( !v7 )
  {
    v9 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
    if ( v9 >= W32UserProbeAddress )
      v9 = W32UserProbeAddress;
    v10 = *(_DWORD *)v9;
    v33 = v10;
    v37 = v10;
    v11 = *(_QWORD *)(v9 + 8);
    v38 = v11;
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v11 + (unsigned __int16)v10 + 2LL;
    if ( v12 >= W32UserProbeAddress || (unsigned __int16)v10 > HIWORD(v33) || (v10 & 1) != 0 || v12 <= v11 )
      *W32UserProbeAddress = 0;
    v7 = (unsigned __int16 *)&v37;
  }
  v36 = v7;
  v13 = (_WORD *)(*((_QWORD *)v7 + 1) + 2 * ((unsigned __int64)*v7 >> 1));
  v35 = v13;
  v14 = v13;
  v32 = v13;
  while ( 1 )
  {
    v15 = (_WORD *)*((_QWORD *)v7 + 1);
    if ( v13 == v15 )
      break;
    if ( *v13 == 46 )
      goto LABEL_18;
    v35 = --v13;
  }
  v13 = v14;
  v35 = v14;
LABEL_18:
  v16 = v13;
  v32 = v13;
  while ( v16 != v15 )
  {
    if ( *v16 == 92 || *v16 == 58 )
    {
      v32 = ++v16;
      break;
    }
    v32 = --v16;
  }
  v17 = 2 * (v13 - v16);
  v34 = v17;
  if ( (unsigned int)v17 >= 0xA4 )
    LODWORD(v17) = 162;
  v34 = v17;
  memmove(v44, v16, (unsigned int)v17);
  v18 = (_WORD *)(a1[48] + 960LL);
  if ( !*v18 )
  {
    v19 = 30LL;
    if ( (unsigned int)v17 < 0x1E )
      v19 = (unsigned int)v17;
    memmove(v18, v16, v19);
    *(_WORD *)(a1[48] + 990LL) = 0;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 12) & 0x80u) == 0 )
  {
    v22 = *(_QWORD *)(ProcessPeb + 720);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v42 = ThreadTeb + 0x2000;
    if ( (ThreadTeb & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(ThreadTeb + 8244) > W32UserProbeAddress
      || ThreadTeb + 8244 < (unsigned __int64)(ThreadTeb + 8240) )
    {
      *W32UserProbeAddress = 0;
    }
    v21 = *(unsigned int *)(ThreadTeb + 8240);
    v39 = v21;
    if ( (v21 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v21 + 592 > W32UserProbeAddress || v21 + 592 < v21 )
      *W32UserProbeAddress = 0;
    v22 = *(_QWORD *)(v21 + 480);
  }
  a1[72] = v22;
  *(_DWORD *)(a1[55] + 24LL) = v22;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1[48] + 960LL));
  a1[72] = a1[72];
  *(_DWORD *)(a1[55] + 24LL) = *(_DWORD *)(a1[55] + 24LL);
  if ( (a1[72] & 0x2000000) == 0 && (unsigned int)IsCurrentDesktopComposed() )
    v8 = 0;
  if ( (*(_DWORD *)(a1[48] + 776LL) & 0x30) == 0x10 )
    *(_QWORD *)a1[55] |= 0x10000000uLL;
  if ( v8 )
  {
LABEL_52:
    *(_QWORD *)a1[55] |= 0x20000000uLL;
    goto LABEL_55;
  }
  if ( (a1[72] & 0x80000000000000LL) == 0 )
  {
    v26 = a1[48];
    if ( (*(_DWORD *)(v26 + 776) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v26) )
        *(_QWORD *)(a1[55] + 224LL) |= 0x80uLL;
      goto LABEL_55;
    }
    goto LABEL_52;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x80000000000000LL);
  *(_DWORD *)(CurrentProcessWin32Process + 776) &= ~0x2000u;
  v25 = PsGetCurrentProcessWin32Process(v24);
  *(_DWORD *)(v25 + 776) &= ~0x4000u;
  *(_QWORD *)(a1[55] + 224LL) |= 0x10uLL;
LABEL_55:
  v27 = 0x100000000000000LL;
  if ( (a1[72] & 0x100000000000000LL) != 0 )
    *(_QWORD *)(a1[55] + 224LL) |= 0x20uLL;
  v28 = *((_DWORD *)a1 + 144);
  if ( (v28 & 0x10000000) == 0 )
  {
    v27 = 1536LL;
    if ( *((_WORD *)a1 + 280) < 0x600u )
    {
      *((_DWORD *)a1 + 144) = v28 | 0x20000000;
      *(_DWORD *)(a1[55] + 24LL) |= 0x20000000u;
    }
  }
  v29 = (unsigned __int64)(unsigned int)v17 >> 1;
  if ( v29 >= 90 )
    _report_rangecheckfailure();
  v44[v29] = 0;
  v30 = PsGetCurrentProcessWin32Process(v27);
  if ( (unsigned int)FastGetProfileStringW(0LL, *(char *)(v30 + 12) < 0 ? 43 : 33, v44, 0LL, SourceString, 80, 0) )
  {
    RtlInitUnicodeString(&String, SourceString);
    RtlUnicodeStringToInteger(&String, 0, &Value);
  }
  *(_DWORD *)(a1[55] + 20LL) = Value;
  *((_DWORD *)a1 + 142) = Value;
  v44[v29] = 0;
  RtlInitUnicodeString(&v41, v44);
  return SetAppImeCompatFlags((__int64)a1, &v41);
}
