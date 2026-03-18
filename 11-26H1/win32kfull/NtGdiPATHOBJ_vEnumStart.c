/*
 * XREFs of NtGdiPATHOBJ_vEnumStart @ 0x1400D7020
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D7794 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1400D7ECC (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 *     ?UnReTarget@ReEnableTRNH@@QEAAXXZ @ 0x1400D7EFC (-UnReTarget@ReEnableTRNH@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiPATHOBJ_vEnumStart(__int64 a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v3; // rbx
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+20h] [rbp-68h] BYREF
  UMPDOBJ *v7; // [rsp+40h] [rbp-48h]
  _BYTE v8[32]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v9; // [rsp+68h] [rbp-20h]

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v6, CurrentThread);
  v3 = v7;
  if ( v7 )
  {
    v4 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v7, a1);
    if ( v4 && ((*((_DWORD *)v3 + 107) & 0x100) == 0 || *(_QWORD *)(v4 + 8)) )
      PATHOBJ_vEnumStart((PATHOBJ *)v4);
    PopThreadGuardedObject(v6);
    if ( v7 )
    {
      UMPDOBJ::vDecrementEngCallRecursionCount(v7);
      ReEnableTRNH::UnReTarget((ReEnableTRNH *)v8);
    }
    if ( v9 )
      *(_BYTE *)(v9 + 80) = 0;
    return 0LL;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v6);
    return 3221225485LL;
  }
}
