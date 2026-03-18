/*
 * XREFs of NtGdiModifyWorldTransform @ 0x140107FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x140108080 (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(HDC a1, struct _XFORML *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  bool v6; // al
  _QWORD v8[14]; // [rsp+20h] [rbp-98h] BYREF
  _XFORML v9; // [rsp+90h] [rbp-28h] BYREF

  v5 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v8, a1);
  if ( v8[0] )
  {
    memset(&v9, 0, sizeof(v9));
    if ( !a2 )
    {
      if ( a3 != 1 )
        goto LABEL_5;
      goto LABEL_4;
    }
    v6 = GrepProbeAndReadXFROMLFromUntrustedVa(&v9, a2);
    v5 = v6;
    if ( v6 )
LABEL_4:
      v5 = XDCOBJ::bModifyWorldTransform((XDCOBJ *)v8, &v9, a3);
  }
LABEL_5:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v8);
  return v5;
}
