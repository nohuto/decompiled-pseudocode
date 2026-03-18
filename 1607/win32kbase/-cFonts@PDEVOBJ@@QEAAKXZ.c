/*
 * XREFs of ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C0031FB0
 * Callers:
 *     GreGetDeviceCaps @ 0x1C0034D30 (GreGetDeviceCaps.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C007C8FC (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::cFonts(PDEVOBJ *this)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD, char *); // rax
  unsigned __int32 v5; // edx
  char v6; // [rsp+40h] [rbp+8h] BYREF

  result = *(unsigned int *)(*(_QWORD *)this + 2128LL);
  if ( (_DWORD)result == -1 )
  {
    v3 = *(_QWORD *)this;
    v4 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(v3 + 2920);
    if ( v4 )
      v5 = v4(*(_QWORD *)(v3 + 1824), 0LL, 0LL, &v6);
    else
      v5 = 0;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)this + 2128LL), v5, -1);
    if ( (_DWORD)result == -1 )
      return v5;
  }
  return result;
}
