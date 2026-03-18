/*
 * XREFs of NtGdiSTROBJ_vEnumStart @ 0x140231890
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1400D9914 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiSTROBJ_vEnumStart(__int64 a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  UMPDOBJ *v6[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+40h] [rbp-48h]

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v6, CurrentThread);
  v3 = 0;
  if ( v7 )
  {
    v4 = UMPDOBJ::GetDDIOBJ<_STROBJ>(v7, a1);
    if ( v4 )
      *(_QWORD *)(v4 + 48) = 0LL;
  }
  else
  {
    v3 = -1073741811;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v6);
  return v3;
}
