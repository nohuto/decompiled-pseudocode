/*
 * XREFs of NtGdiXLATEOBJ_hGetColorTransform @ 0x14032FE00
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     XLATEOBJ_hGetColorTransform @ 0x140255D50 (XLATEOBJ_hGetColorTransform.c)
 */

HANDLE __fastcall NtGdiXLATEOBJ_hGetColorTransform(__int64 a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  HANDLE ColorTransform; // rbx
  XLATEOBJ *v4; // rax
  UMPDOBJ *v6[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+40h] [rbp-48h]

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v6, CurrentThread);
  ColorTransform = 0LL;
  if ( v7 )
  {
    v4 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v7, a1);
    if ( v4 )
      ColorTransform = XLATEOBJ_hGetColorTransform(v4);
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v6);
  return ColorTransform;
}
