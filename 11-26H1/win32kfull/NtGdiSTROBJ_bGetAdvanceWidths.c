/*
 * XREFs of NtGdiSTROBJ_bGetAdvanceWidths @ 0x140236B30
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1400D9914 (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     STROBJ_bGetAdvanceWidths @ 0x140236C40 (STROBJ_bGetAdvanceWidths.c)
 */

__int64 __fastcall NtGdiSTROBJ_bGetAdvanceWidths(__int64 a1, ULONG a2, ULONG a3, void *a4)
{
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v9; // rbx
  STROBJ *v10; // r14
  POINTQF *v11; // rax
  POINTQF *v12; // rsi
  unsigned int AdvanceWidths; // ebx
  UMPDOBJ *v15[4]; // [rsp+30h] [rbp-78h] BYREF
  UMPDOBJ *v16; // [rsp+50h] [rbp-58h]

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v15, CurrentThread);
  v9 = v16;
  if ( v16
    && (v10 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)v16, a1)) != 0LL
    && a3 <= 0x271000
    && (v11 = (POINTQF *)UMPDOBJ::_AllocUserMem(v9, 16 * a3, 0), (v12 = v11) != 0LL) )
  {
    AdvanceWidths = STROBJ_bGetAdvanceWidths(v10, a2, a3, v11);
    if ( AdvanceWidths )
      GreProbeAndWriteToUntrustedVa(a4, 16LL * a3, v12, 16LL * a3, 8uLL);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v15);
    return AdvanceWidths;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v15);
    return 0LL;
  }
}
