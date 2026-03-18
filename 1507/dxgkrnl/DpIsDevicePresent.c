/*
 * XREFs of DpIsDevicePresent @ 0x1C01662D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpIsDevicePresent(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // esi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax

  v3 = 0;
  if ( !a1
    || !a2
    || !a3
    || (a1 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(a1 + 16) != 1953656900
    || (unsigned int)(*(_DWORD *)(a1 + 20) - 2) > 1 )
  {
    v3 = -1073741811;
    v5 = (_QWORD *)WdLogNewEntry5_WdError(a1);
LABEL_15:
    v5[3] = DpIsDevicePresent;
    v5[4] = 0LL;
    v5[5] = -1073741811LL;
    goto LABEL_16;
  }
  if ( KeGetCurrentIrql() )
  {
    v3 = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL) >= 0x2003u )
    {
      v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
      v4[6] = 0LL;
      v4[3] = 275LL;
      v4[4] = 21LL;
      v4[5] = DpIsDevicePresent;
      v4[7] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v4);
    }
    v5 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    goto LABEL_15;
  }
  *a3 = 0;
  v6 = *(__int64 (__fastcall **)(_QWORD))(a1 + 632);
  if ( !v6 )
  {
    v3 = -1073741823;
    v5 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v5[4] = 0LL;
    v5[3] = DpIsDevicePresent;
    v5[5] = -1073741823LL;
LABEL_16:
    WdLogEvent5_WdError(v5);
    return v3;
  }
  *a3 = v6(*(_QWORD *)(a1 + 600));
  return v3;
}
