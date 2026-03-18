/*
 * XREFs of NtGdiModifyWorldTransform @ 0x1C00E4CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C0019AD0 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(HDC a1, struct _XFORML *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _QWORD v7[6]; // [rsp+20h] [rbp-58h] BYREF
  struct _XFORML v8; // [rsp+50h] [rbp-28h] BYREF

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
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v5;
}
