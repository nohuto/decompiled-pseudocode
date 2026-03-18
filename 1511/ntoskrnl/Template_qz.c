/*
 * XREFs of Template_qz @ 0x1401C1868
 * Callers:
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PipProcessStartPhase2 @ 0x1404F1A4C (PipProcessStartPhase2.c)
 *     PipProcessStartPhase1 @ 0x1404F29BC (PipProcessStartPhase1.c)
 *     PiCMQueryRemove @ 0x140613880 (PiCMQueryRemove.c)
 *     PipProcessRestartPhase1 @ 0x140618D28 (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x140618DE8 (PipProcessRestartPhase2.c)
 * Callees:
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qz(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, const wchar_t *a5)
{
  __int64 v6; // rax
  int v7; // edx
  const wchar_t *v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = a4;
  UserData.Ptr = (ULONGLONG)&v14;
  *(_QWORD *)&UserData.Size = 4LL;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10;
  }
  v12 = v7;
  v8 = L"NULL";
  v13 = 0;
  if ( a5 )
    v8 = a5;
  v11 = v8;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 2u, &UserData);
}
