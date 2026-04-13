/*
 * XREFs of sub_180020420 @ 0x180020420
 * Callers:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_18001FEC4 @ 0x18001FEC4 (sub_18001FEC4.c)
 *     sub_180020504 @ 0x180020504 (sub_180020504.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18002032C @ 0x18002032C (sub_18002032C.c)
 */

__int64 __fastcall sub_180020420(__int64 a1, int a2, HANDLE *a3)
{
  HRESULT v5; // eax
  int v6; // edi
  void *v7; // rsi
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  v5 = CoGetCallContext(&stru_180031AC0, &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -2147417833 )
    {
      *a3 = GetCurrentProcess();
      v6 = 0;
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(void *, __int64, HANDLE *))(*(_QWORD *)v9 + 24LL))(v9, 4096LL, a3);
  }
  if ( v6 >= 0 && a2 == 1 )
  {
    sub_18002032C();
    if ( GetProcessId(*a3) == dword_18003A0E8 )
    {
      CloseHandle(*a3);
      *a3 = 0LL;
      v6 = -2147467259;
    }
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v6;
}
