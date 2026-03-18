/*
 * XREFs of NtGdiEngCreateClip @ 0x140249590
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ @ 0x1402495E0 (-CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ.c)
 */

struct _CLIPOBJ *__fastcall NtGdiEngCreateClip(__int64 a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  struct _CLIPOBJ *CLIPOBJ; // rbx
  UMPDOBJ *v4[4]; // [rsp+20h] [rbp-68h] BYREF
  UMPDOBJ *v5; // [rsp+40h] [rbp-48h]

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v4, CurrentThread);
  CLIPOBJ = 0LL;
  if ( v5 )
    CLIPOBJ = UMPDOBJ::CreateCLIPOBJ(v5);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v4);
  return CLIPOBJ;
}
