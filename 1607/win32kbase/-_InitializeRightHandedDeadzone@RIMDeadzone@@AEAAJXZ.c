/*
 * XREFs of ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C00E0F1C
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C0005348 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C00E0BF8 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C000539C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMDeadzone::_InitializeRightHandedDeadzone(RIMDeadzone *this)
{
  _DWORD *v2; // rax
  __int64 result; // rax
  _DWORD *v4; // rcx

  *((_DWORD *)this + 4) = 2;
  *((_DWORD *)this + 8) = 1;
  v2 = Win32AllocPoolZInit(0x18uLL);
  *((_QWORD *)this + 3) = v2;
  if ( !v2 )
    return 3221225495LL;
  *v2 = 280;
  *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = 30;
  *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = 1;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = Win32AllocPoolZInit(8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 16LL));
  v4 = *(_DWORD **)(*((_QWORD *)this + 3) + 8LL);
  if ( !v4 )
  {
    RIMDeadzone::Release((DeadzonePalmTelemetry **)this);
    return 3221225495LL;
  }
  *v4 = 0;
  result = 0LL;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL) = 14400;
  *(_DWORD *)this = 2;
  return result;
}
