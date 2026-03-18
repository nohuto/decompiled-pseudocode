/*
 * XREFs of NtGdiGetColorSpaceforBitmap @ 0x1C02B2740
 * Callers:
 *     <none>
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0038D44 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetColorSpaceforBitmap(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  SURFACE *v5; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v5 = (SURFACE *)HmgShareLockCheck(a1, a2);
  if ( v5 && (unsigned int)SURFACE::bDIBSection(v5) )
    v2 = *(_QWORD *)(v3 + 200);
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v5);
  return v2;
}
