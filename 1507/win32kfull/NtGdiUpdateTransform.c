/*
 * XREFs of NtGdiUpdateTransform @ 0x1C0008AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiUpdateTransform(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    DC::vUpdateWtoDXform(v3[0]);
  else
    v1 = 0;
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
