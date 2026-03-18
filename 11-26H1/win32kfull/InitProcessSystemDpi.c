/*
 * XREFs of InitProcessSystemDpi @ 0x1402A6F70
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiServerInfoForDpi @ 0x1403025B0 (GetDpiServerInfoForDpi.c)
 */

__int64 __fastcall InitProcessSystemDpi(__int64 a1)
{
  __int64 ThreadTeb; // rax
  __int64 v3; // r15
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned int *Address; // [rsp+A8h] [rbp+20h]
  _QWORD *Addressa; // [rsp+A8h] [rbp+20h]

  if ( (*(_DWORD *)(a1 + 12) & 0x80u) == 0 )
  {
    v4 = 1;
    ProbeForRead(*(volatile void **)(*(_QWORD *)a1 + 736LL), 1uLL, 1u);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 720LL);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb(KeGetCurrentThread());
    Address = (unsigned int *)(ThreadTeb + 0x2000);
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    Addressa = (_QWORD *)Address[12];
    ProbeForRead(Addressa, 0x488uLL, 4u);
    v3 = Addressa[60];
    v4 = 1;
  }
  v5 = v3 & 0x40000000000000LL;
  v6 = v3 & 0x20000000000000LL;
  FastGetProfileDwordEx(0LL, 4LL, L"EnablePerProcessSystemDPI", 0LL);
  if ( v5 )
  {
    v4 = 0;
  }
  else if ( !v6 )
  {
    v4 = 0;
  }
  if ( v4 )
  {
    v9 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v8, v7) + 96) + 40LL) + 64LL);
    *(_WORD *)(a1 + 272) = v9;
    return GetDpiServerInfoForDpi(v9);
  }
  else
  {
    result = *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904) + 6998LL);
    *(_WORD *)(a1 + 272) = result;
  }
  return result;
}
