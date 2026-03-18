/*
 * XREFs of _RegisterClassEx @ 0x1C009F9F0
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1C009F360 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C00705B8 (InternalRegisterClassEx.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int16 v6; // bp
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax

  v6 = a3;
  v7 = a2;
  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    LOBYTE(a2) = 7;
    v11 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), a2, a3);
    if ( v11 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v11 + 48);
  }
  v8 = InternalRegisterClassEx(a1, v6, a4);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v8[6] = v7[1];
  v8[5] = *v7;
  result = *((unsigned __int16 *)v8 + 5);
  *((_WORD *)v9 + 16) = 0;
  return result;
}
