/*
 * XREFs of NtGdiModifyWorldTransform @ 0x1C0039D30
 * Callers:
 *     <none>
 * Callees:
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C002D6D8 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(HDC a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  struct _XFORML v8; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( a2 )
    {
      v5 = ProbeAndConvertXFORM(a2, &v8);
    }
    else if ( a3 == 1 )
    {
      goto LABEL_5;
    }
    if ( v5 )
LABEL_5:
      v5 = XDCOBJ::bModifyWorldTransform((XDCOBJ *)v7, &v8, a3);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v5;
}
