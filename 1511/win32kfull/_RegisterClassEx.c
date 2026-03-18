/*
 * XREFs of _RegisterClassEx @ 0x1C011C700
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1C004FC10 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     InternalRegisterClassEx @ 0x1C011C78C (InternalRegisterClassEx.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax

  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    v11 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), 7);
    if ( v11 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v11 + 48);
  }
  v8 = InternalRegisterClassEx(a1, a3, a4);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  *(_QWORD *)(v8 + 48) = a2[1];
  *(_QWORD *)(v8 + 40) = *a2;
  result = *(unsigned __int16 *)(v8 + 10);
  *(_WORD *)(v9 + 32) = 0;
  return result;
}
