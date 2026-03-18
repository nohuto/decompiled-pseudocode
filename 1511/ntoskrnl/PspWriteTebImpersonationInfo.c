/*
 * XREFs of PspWriteTebImpersonationInfo @ 0x1404268E0
 * Callers:
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
 *     PsRestoreImpersonation @ 0x140477920 (PsRestoreImpersonation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall PspWriteTebImpersonationInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _KPROCESS *v5; // r14
  bool v6; // cl
  BOOL v7; // eax
  signed __int32 v9[8]; // [rsp+0h] [rbp-98h] BYREF
  char v10; // [rsp+20h] [rbp-78h]
  bool v11; // [rsp+21h] [rbp-77h]
  _DWORD *v12; // [rsp+28h] [rbp-70h]
  _KPROCESS *v13; // [rsp+30h] [rbp-68h]
  __int64 v14; // [rsp+38h] [rbp-60h]
  BOOL v15; // [rsp+40h] [rbp-58h]
  $D4FCF91253F76F57393CBFE908971F67 v16; // [rsp+48h] [rbp-50h] BYREF

  v14 = a1;
  v4 = *(_DWORD **)(a1 + 240);
  v12 = v4;
  if ( v4 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v5 = *(_KPROCESS **)(a1 + 544);
    v13 = v5;
    if ( *(_KPROCESS **)(a2 + 184) == v5 )
    {
      v10 = 0;
    }
    else
    {
      KiStackAttachProcess(v5, 0LL, (__int64)&v16);
      v10 = 1;
    }
    if ( a1 == a2 || ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1696)) )
    {
      do
      {
        v11 = (*(_DWORD *)(a1 + 1724) & 8) != 0;
        v6 = v11;
        v7 = v11;
        v15 = v7;
        v4[1511] = v7;
        v4[1530] = 0;
        if ( v5[1].ActiveProcessors.Bitmap[7] )
        {
          v4[3047] = v7;
          v4[3057] = 0;
        }
        _InterlockedOr(v9, 0);
      }
      while ( v6 != ((*(_DWORD *)(a1 + 1724) & 8) != 0) );
      if ( a1 != a2 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1696));
    }
    if ( v10 )
      KiUnstackDetachProcess(&v16, 0LL);
  }
  return 0LL;
}
