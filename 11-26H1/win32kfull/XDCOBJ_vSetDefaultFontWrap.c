/*
 * XREFs of XDCOBJ_vSetDefaultFontWrap @ 0x14019AB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ_vSetDefaultFontWrap(Gre::Base *a1, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // r8
  struct Gre::Base::SESSION_GLOBALS *v6; // rdi
  __int64 StockObject; // rbx
  __int64 result; // rax

  v4 = Gre::Base::Globals(a1);
  v6 = v4;
  if ( a2 )
    StockObject = GreGetStockObject(13LL);
  else
    StockObject = *(_QWORD *)(*((_QWORD *)v4 + 386) + 112LL);
  LOBYTE(v5) = 10;
  result = HmgShareLock(v6, StockObject, v5, 0LL);
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL) = StockObject;
  *(_QWORD *)(*(_QWORD *)a1 + 152LL) = result;
  return result;
}
