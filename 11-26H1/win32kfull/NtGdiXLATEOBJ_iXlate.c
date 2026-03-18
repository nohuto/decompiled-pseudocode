/*
 * XREFs of NtGdiXLATEOBJ_iXlate @ 0x1400D85E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x140185094 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiXLATEOBJ_iXlate(__int64 a1, ULONG a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  ULONG v5; // ebx
  XLATEOBJ *v7; // rax
  UMPDOBJ *v8[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+40h] [rbp-48h]

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v8, CurrentThread);
  v5 = 0;
  if ( v9 )
  {
    v7 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v9, a1);
    if ( v7 )
      v5 = XLATEOBJ_iXlate(v7, a2);
  }
  else
  {
    v5 = -1;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v8);
  return v5;
}
