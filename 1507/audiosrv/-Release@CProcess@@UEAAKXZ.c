/*
 * XREFs of ?Release@CProcess@@UEAAKXZ @ 0x180010DE0
 * Callers:
 *     ?Release@CProcess@@WBA@EAAKXZ @ 0x180045330 (-Release@CProcess@@WBA@EAAKXZ.c)
 *     ?Release@CProcess@@WBI@EAAKXZ @ 0x180045340 (-Release@CProcess@@WBI@EAAKXZ.c)
 * Callees:
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x180011F20 (--_ECProcess@@MEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CProcess::Release(CProcess *this)
{
  unsigned __int32 v2; // ebx
  void *(__fastcall *v4)(CProcess *__hidden, unsigned int); // rdi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)this + 32LL))(this);
    v4 = *(void *(__fastcall **)(CProcess *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v4 == CProcess::`vector deleting destructor' )
      CProcess::`vector deleting destructor'(this, 1u);
    else
      v4(this, 1u);
  }
  return v2;
}
