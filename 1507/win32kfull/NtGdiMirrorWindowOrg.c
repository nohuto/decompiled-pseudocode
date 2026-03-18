/*
 * XREFs of NtGdiMirrorWindowOrg @ 0x1C02A7DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C0106160 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiMirrorWindowOrg(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
  {
    DC::MirrorWindowOrg(v3[0]);
    DCOBJ::~DCOBJ((DCOBJ *)v3);
    return 1;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v3);
  }
  return v1;
}
