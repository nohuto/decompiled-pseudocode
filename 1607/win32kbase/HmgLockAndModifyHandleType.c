/*
 * XREFs of HmgLockAndModifyHandleType @ 0x1C005C2A0
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C005C1E0 (GreMakeBitmapNonStock.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z @ 0x1C002A130 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     HmgModifyHandleType @ 0x1C005C300 (HmgModifyHandleType.c)
 */

__int64 __fastcall HmgLockAndModifyHandleType(struct OBJECT *a1, __int64 a2)
{
  unsigned int v3; // ebx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]

  v3 = 1;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)v5, a1, 1);
  if ( HANDLELOCK::bValid((HANDLELOCK *)v5) )
  {
    HmgModifyHandleType(a2);
    HANDLELOCK::vUnlock((HANDLELOCK *)v5);
  }
  else
  {
    v3 = 0;
  }
  if ( v6 )
    HANDLELOCK::vUnlock((HANDLELOCK *)v5);
  return v3;
}
