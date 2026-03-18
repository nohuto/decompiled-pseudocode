/*
 * XREFs of NtGdiMonoBitmap @ 0x1C02B1060
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C004151C (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiMonoBitmap(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int IsMonochrome; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(a2) = 5;
  v2 = HmgShareLockCheck(a1, a2);
  IsMonochrome = 0;
  v6 = v2;
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 120);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v5);
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v6);
  return IsMonochrome;
}
