/*
 * XREFs of GreMarkUndeletableDC @ 0x1C00207F0
 * Callers:
 *     CreateCacheDC @ 0x1C0020830 (CreateCacheDC.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0028D68 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 */

void __fastcall GreMarkUndeletableDC(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v4 = 0;
  LOBYTE(a2) = 1;
  v5 = 0;
  v2 = HmgShareLock(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) |= 8u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v3);
  }
}
