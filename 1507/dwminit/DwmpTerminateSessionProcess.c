/*
 * XREFs of DwmpTerminateSessionProcess @ 0x1800030E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800010DC @ 0x1800010DC (sub_1800010DC.c)
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 *     sub_18000149C @ 0x18000149C (sub_18000149C.c)
 *     sub_180001DB8 @ 0x180001DB8 (sub_180001DB8.c)
 *     sub_1800024AC @ 0x1800024AC (sub_1800024AC.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 *     sub_180004358 @ 0x180004358 (sub_180004358.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmpTerminateSessionProcess(int a1)
{
  int v1; // eax
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  bool v7; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-25h] BYREF
  DWORD ExitCode; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-19h] BYREF
  GUID *v11; // [rsp+68h] [rbp+7h]
  __int64 v12; // [rsp+70h] [rbp+Fh]
  unsigned int *v13; // [rsp+78h] [rbp+17h]
  __int64 v14; // [rsp+80h] [rbp+1Fh]
  int *v15; // [rsp+88h] [rbp+27h]
  __int64 v16; // [rsp+90h] [rbp+2Fh]
  bool *v17; // [rsp+98h] [rbp+37h]
  __int64 v18; // [rsp+A0h] [rbp+3Fh]
  int v19; // [rsp+C8h] [rbp+67h] BYREF

  v19 = a1;
  v8 = 0;
  ExitCode = 0;
  AcquireSRWLockExclusive(&SRWLock);
  if ( hTargetProcessHandle )
  {
    v1 = sub_180004358();
    v8 = v1;
    if ( v1 < 0 )
    {
      if ( &unk_180008E00 )
        sub_180003B24(4, (unsigned int)&unk_180008E00, 1, v1, 1556);
      else
        sub_180003A80((unsigned int)v1, 1556LL);
    }
    sub_1800024AC(&ExitCode, 0LL);
  }
  v2 = sub_180001DB8();
  v8 = v2;
  if ( v2 < 0 )
  {
    if ( &unk_180008E00 )
      sub_180003B24(4, (unsigned int)&unk_180008E00, 1, v2, 1561);
    else
      sub_180003A80((unsigned int)v2, 1561LL);
  }
  ReleaseSRWLockExclusive(&SRWLock);
  v7 = GetModuleHandleW(L"WinInit.exe") != 0LL;
  if ( (unsigned int)dword_18000C020 > 5
    && (qword_18000C030 & 0x400000000000LL) != 0
    && (qword_18000C038 & 0x400000000000LL) == qword_18000C038 )
  {
    v12 = 16LL;
    v11 = &ActivityId;
    v13 = &v8;
    v15 = &v19;
    v17 = &v7;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 1LL;
    sub_1800010DC((__int64)&dword_18000C020, (unsigned __int8 *)dword_18000971A, v3, v4, 6u, &v10);
  }
  sub_18000149C(9, v8, 0, v4);
  if ( qword_18000C070 )
  {
    sub_180001310((_DWORD *)qword_18000C070);
    v5 = qword_18000C070;
    if ( qword_18000C070 )
    {
      *(_QWORD *)(qword_18000C070 + 8) = 0LL;
      *(_QWORD *)(v5 + 16) = 0LL;
    }
  }
  byte_18000C078 = 0;
  return v8;
}
