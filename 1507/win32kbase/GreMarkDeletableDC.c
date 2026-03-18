/*
 * XREFs of GreMarkDeletableDC @ 0x1C0070790
 * Callers:
 *     <none>
 * Callees:
 *     HmgShareLock @ 0x1C0004350 (HmgShareLock.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003BBD8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall GreMarkDeletableDC(int a1)
{
  __int64 v1; // rax
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  int v4; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v4 = 0;
  v1 = HmgShareLock(a1, 1);
  v2 = v1;
  if ( v1 )
  {
    *(_DWORD *)(v1 + 36) &= ~8u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v2);
  }
}
