/*
 * XREFs of GreGetHFONT @ 0x1401F9294
 * Callers:
 *     IsSysFontAndDefaultMode @ 0x1401F9248 (IsSysFontAndDefaultMode.c)
 *     xxxDrawState @ 0x1401F9348 (xxxDrawState.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetHFONT(HDC a1)
{
  __int64 v1; // rbx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  v1 = 0LL;
  if ( v3[0] )
    v1 = *(_QWORD *)(*(_QWORD *)(v3[0] + 976LL) + 296LL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
