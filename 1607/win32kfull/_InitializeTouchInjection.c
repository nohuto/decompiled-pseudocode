/*
 * XREFs of _InitializeTouchInjection @ 0x1C01D48E4
 * Callers:
 *     NtUserInitializeTouchInjection @ 0x1C0216610 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     FreeQDCActivePathsData @ 0x1C01C7D14 (FreeQDCActivePathsData.c)
 *     GetQDCActivePathsData @ 0x1C01C7F00 (GetQDCActivePathsData.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01D3980 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01D4958 (_InitializeTouchInjectionWithQDCData.c)
 */

__int64 __fastcall InitializeTouchInjection(unsigned int a1, unsigned int a2, __int64 a3)
{
  _QWORD *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  CheckCurrentInjectionConfiguration();
  v6 = v11;
  if ( (int)GetQDCActivePathsData(v11) < 0 )
    v6 = 0LL;
  v7 = InitializeTouchInjectionWithQDCData(a1, a2, a3, v6);
  FreeQDCActivePathsData(v6, v8, v9);
  return v7;
}
