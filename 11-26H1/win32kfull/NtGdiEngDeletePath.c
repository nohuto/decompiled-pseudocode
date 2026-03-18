/*
 * XREFs of NtGdiEngDeletePath @ 0x1400D6A70
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     EngDeletePath @ 0x1400D7FA0 (EngDeletePath.c)
 */

__int64 __fastcall NtGdiEngDeletePath(__int64 a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v3; // rdi
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+40h] [rbp-48h]

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v6, CurrentThread);
  v3 = v7;
  v4 = 0;
  if ( v7 )
  {
    if ( a1 && a1 == *(_QWORD *)(v7 + 248) )
    {
      EngDeletePath(*(PATHOBJ **)(v7 + 240));
      *(_QWORD *)(v3 + 240) = 0LL;
      *(_QWORD *)(v3 + 248) = 0LL;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v6);
  return v4;
}
