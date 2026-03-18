/*
 * XREFs of ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C0004ECC
 * Callers:
 *     W32CalloutDispatch @ 0x1C00045B0 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionObject::Open(struct _WIN32_OPENMETHOD_PARAMETERS *a1)
{
  __int64 v1; // rdi
  int ProcessSessionId; // eax

  v1 = *((_QWORD *)a1 + 2);
  if ( (***(unsigned __int8 (__fastcall ****)(_QWORD))(v1 + 8))(*(_QWORD *)(v1 + 8))
    && (!(unsigned __int16)*((_DWORD *)a1 + 6)
     || (unsigned __int8)PsIsSystemProcess(*((_QWORD *)a1 + 1))
     || (ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)a1 + 1)), ProcessSessionId != -1)
     && ProcessSessionId == *(_DWORD *)v1) )
  {
    return (*(__int64 (__fastcall **)(_QWORD, struct _WIN32_OPENMETHOD_PARAMETERS *))(**(_QWORD **)(v1 + 8) + 24LL))(
             *(_QWORD *)(v1 + 8),
             a1);
  }
  else
  {
    return 3221225506LL;
  }
}
