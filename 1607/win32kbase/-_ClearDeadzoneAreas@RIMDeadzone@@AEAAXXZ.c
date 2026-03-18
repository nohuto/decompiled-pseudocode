/*
 * XREFs of ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C00052CC
 * Callers:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C000539C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C00E0BF8 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone *this)
{
  bool v2; // zf
  __int64 i; // rdi
  __int64 v4; // rcx

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 10) = 0;
  v2 = *((_DWORD *)this + 4) == 2;
  *(_QWORD *)((char *)this + 44) = 0LL;
  if ( v2 && *((_QWORD *)this + 3) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 24 * i + 8);
      if ( v4 )
        Win32FreePool(v4);
    }
    Win32FreePool(*((_QWORD *)this + 3));
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
