/*
 * XREFs of ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C000462C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0049418 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C0004690 (-RequestModernAppClose@@YAHXZ.c)
 */

__int64 __fastcall HandleIAMHotKey(const struct tagHOTKEY *const a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 416LL);
  if ( v1 != grpdeskRitInput || *(_QWORD *)a1 != *(_QWORD *)(v1 + 280) )
    return 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 312LL);
  result = 0LL;
  if ( v2 && *((_QWORD *)a1 + 2) == v2 && *((_DWORD *)a1 + 8) == 61536 )
    return RequestModernAppClose();
  return result;
}
