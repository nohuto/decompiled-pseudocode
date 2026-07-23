/*
 * XREFs of PspWriteTebImpersonationInfo @ 0x1404F2760
 * Callers:
 *     PsRestoreImpersonation @ 0x140412A70 (PsRestoreImpersonation.c)
 *     PsImpersonateClient @ 0x1404F2350 (PsImpersonateClient.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PspWriteTebImpersonationInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  _KPROCESS *v5; // r14
  bool v6; // cl
  BOOL v7; // eax
  signed __int32 v9[8]; // [rsp+0h] [rbp-98h] BYREF
  char v10; // [rsp+20h] [rbp-78h]
  bool v11; // [rsp+21h] [rbp-77h]
  BOOL v12; // [rsp+24h] [rbp-74h]
  _DWORD *v13; // [rsp+28h] [rbp-70h]
  _KPROCESS *v14; // [rsp+30h] [rbp-68h]
  __int64 v15; // [rsp+38h] [rbp-60h]
  _BYTE v16[48]; // [rsp+40h] [rbp-58h] BYREF

  v15 = a1;
  v4 = *(_DWORD **)(a1 + 240);
  v13 = v4;
  if ( v4 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v5 = *(_KPROCESS **)(a1 + 544);
    v14 = v5;
    if ( *(_KPROCESS **)(a2 + 184) == v5 )
    {
      v10 = 0;
    }
    else
    {
      KiStackAttachProcess(v5, 0, (__int64)v16);
      v10 = 1;
    }
    if ( a1 == a2 || ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1704)) )
    {
      do
      {
        v11 = (*(_DWORD *)(a1 + 1728) & 8) != 0;
        v6 = v11;
        v7 = v11;
        v12 = v7;
        v4[1511] = v7;
        v4[1530] = 0;
        if ( v5[1].ActiveProcessors.Bitmap[7] )
        {
          v4[3047] = v7;
          v4[3057] = 0;
        }
        _InterlockedOr(v9, 0);
      }
      while ( v6 != ((*(_DWORD *)(a1 + 1728) & 8) != 0) );
      if ( a1 != a2 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1704));
    }
    if ( v10 )
      KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
  }
  return 0LL;
}
