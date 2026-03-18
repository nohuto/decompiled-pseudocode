/*
 * XREFs of NtGdiPATHOBJ_bEnum @ 0x1400D74C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D7794 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtGdiPATHOBJ_bEnum(__int64 a1, void *a2)
{
  unsigned int v4; // ebx
  POINTFIX *v5; // rdi
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v7; // rsi
  __int64 v8; // rax
  POINTFIX *v9; // rax
  PATHDATA ppd; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-78h] BYREF
  UMPDOBJ *v13; // [rsp+60h] [rbp-58h]

  ppd = 0LL;
  v4 = 0;
  v5 = 0LL;
  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12, CurrentThread);
  v7 = v13;
  if ( !v13 )
    goto LABEL_12;
  v8 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v13, a1);
  if ( !v8 )
    goto LABEL_9;
  if ( (*((_DWORD *)v7 + 107) & 0x100) == 0 || *(_QWORD *)(v8 + 8) )
    v4 = PATHOBJ_bEnum((PATHOBJ *)v8, &ppd);
  if ( ppd.count > 0x4E2000 )
  {
LABEL_12:
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12);
    return 0LL;
  }
  v9 = (POINTFIX *)UMPDOBJ::_AllocUserMem(v7, 8 * ppd.count, 0);
  v5 = v9;
  if ( v9 )
  {
    memmove(v9, ppd.pptfx, 8LL * ppd.count);
    ppd.pptfx = v5;
  }
  else
  {
    v4 = 0;
  }
LABEL_9:
  if ( !v5 )
    ppd = 0LL;
  GreProbeAndWriteToUntrustedVa(a2, 0x10uLL, &ppd, 0x10uLL, 1uLL);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12);
  return v4;
}
