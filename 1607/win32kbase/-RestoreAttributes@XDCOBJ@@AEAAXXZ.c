/*
 * XREFs of ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0028CB0
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002731C (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0028D68 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetDCOrg @ 0x1C0035760 (GreSetDCOrg.c)
 *     GreGetBounds @ 0x1C0039760 (GreGetBounds.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::RestoreAttributes(XDCOBJ *this)
{
  _OWORD *v1; // rax
  _OWORD *v2; // rdx
  __int64 v3; // r8

  if ( *((_DWORD *)this + 2) )
  {
    v1 = (_OWORD *)(*(_QWORD *)this + 960LL);
    if ( *(_OWORD **)(*(_QWORD *)this + 80LL) == v1 )
    {
      if ( !*((_DWORD *)this + 3) )
      {
        v2 = *(_OWORD **)(*(_QWORD *)this + 952LL);
        v3 = 3LL;
        do
        {
          *v2 = *v1;
          v2[1] = v1[1];
          v2[2] = v1[2];
          v2[3] = v1[3];
          v2[4] = v1[4];
          v2[5] = v1[5];
          v2[6] = v1[6];
          v2 += 8;
          *(v2 - 1) = v1[7];
          v1 += 8;
          --v3;
        }
        while ( v3 );
        *v2 = *v1;
        v2[1] = v1[1];
      }
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 952LL);
      *((_DWORD *)this + 2) = 0;
    }
  }
}
