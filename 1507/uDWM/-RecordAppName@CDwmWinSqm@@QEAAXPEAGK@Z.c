/*
 * XREFs of ?RecordAppName@CDwmWinSqm@@QEAAXPEAGK@Z @ 0x18007AD98
 * Callers:
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007AF7C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

void __fastcall CDwmWinSqm::RecordAppName(CDwmWinSqm *this, unsigned __int16 *a2, unsigned int a3)
{
  const wchar_t *v5; // rax
  const wchar_t *v6; // rax
  __int64 v7; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v8; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-D0h]
  const wchar_t *v10; // [rsp+40h] [rbp-C8h]
  __int64 v11; // [rsp+48h] [rbp-C0h]
  const wchar_t *v12; // [rsp+50h] [rbp-B8h]
  __int16 v13; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v14[126]; // [rsp+5Ah] [rbp-AEh] BYREF
  __int16 v15; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v16[126]; // [rsp+DAh] [rbp-2Eh] BYREF

  v13 = 0;
  memset_0(v14, 0, sizeof(v14));
  v15 = 0;
  memset_0(v16, 0, sizeof(v16));
  memset_0(&v8, 0, 0x28uLL);
  if ( !a2 || !*a2 )
    a2 = L"(null)";
  v5 = (const wchar_t *)&v13;
  v8 = a2;
  if ( !v13 )
    v5 = L"(null)";
  LODWORD(v7) = 2;
  v10 = v5;
  v6 = (const wchar_t *)&v15;
  if ( !v15 )
    v6 = L"(null)";
  LODWORD(v9) = 2;
  LODWORD(v11) = 2;
  v12 = v6;
  WinSqmAddToStream(0LL, a3, 3LL, &v7);
}
