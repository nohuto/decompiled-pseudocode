/*
 * XREFs of NtGdiCLIPOBJ_ppoGetPath @ 0x1400D8200
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1400D865C (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

struct _PATHOBJ *__fastcall NtGdiCLIPOBJ_ppoGetPath(struct _CLIPOBJ *a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct _PATHOBJ *CLIPOBJPath; // rbx
  UMPDOBJ *v5[4]; // [rsp+20h] [rbp-68h] BYREF
  UMPDOBJ *v6; // [rsp+40h] [rbp-48h]

  CurrentThread = GreGetCurrentThread((__int64)a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v5, CurrentThread);
  CLIPOBJPath = 0LL;
  if ( v6 )
    CLIPOBJPath = UMPDOBJ::GetCLIPOBJPath(v6, a1);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v5);
  return CLIPOBJPath;
}
