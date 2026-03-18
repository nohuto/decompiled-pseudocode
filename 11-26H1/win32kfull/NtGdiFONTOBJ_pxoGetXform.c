/*
 * XREFs of NtGdiFONTOBJ_pxoGetXform @ 0x1400D8E30
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1400D9100 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 */

struct _XFORMOBJ *__fastcall NtGdiFONTOBJ_pxoGetXform(struct _FONTOBJ *a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct _XFORMOBJ *FONTOBJXform; // rbx
  UMPDOBJ *v5[4]; // [rsp+20h] [rbp-68h] BYREF
  UMPDOBJ *v6; // [rsp+40h] [rbp-48h]

  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v5, CurrentThread);
  FONTOBJXform = 0LL;
  if ( v6 )
    FONTOBJXform = UMPDOBJ::GetFONTOBJXform(v6, a1);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v5);
  return FONTOBJXform;
}
