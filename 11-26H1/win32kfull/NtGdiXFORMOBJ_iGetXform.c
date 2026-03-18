/*
 * XREFs of NtGdiXFORMOBJ_iGetXform @ 0x1400D8260
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1400D9034 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     XFORMOBJ_iGetXform @ 0x1400D90A0 (XFORMOBJ_iGetXform.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_iGetXform(__int64 a1, void *a2)
{
  ULONG Xform; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  XFORMOBJ *v6; // rax
  UMPDOBJ *v8[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v9; // [rsp+50h] [rbp-68h]
  __int128 v10; // [rsp+90h] [rbp-28h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-18h]

  Xform = -1;
  v10 = 0LL;
  v11 = 0LL;
  CurrentThread = GreGetCurrentThread(0LL);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v8, CurrentThread);
  if ( v9 )
  {
    v6 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(v9, a1);
    if ( v6 )
    {
      Xform = XFORMOBJ_iGetXform(v6, (XFORML *)((unsigned __int64)&v10 & -(__int64)(a2 != 0LL)));
      if ( Xform != -1 )
      {
        if ( a2 )
          GreProbeAndWriteToUntrustedVa(a2, 0x18uLL, &v10, 0x18uLL, 1uLL);
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v8);
    return Xform;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v8);
    return 0xFFFFFFFFLL;
  }
}
