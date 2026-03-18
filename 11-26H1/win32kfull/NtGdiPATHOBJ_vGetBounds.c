/*
 * XREFs of NtGdiPATHOBJ_vGetBounds @ 0x1400D6990
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D7794 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiPATHOBJ_vGetBounds(__int64 a1, void *a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  PATHOBJ *v5; // rax
  _BYTE v7[32]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v8; // [rsp+50h] [rbp-68h]
  struct _RECTFX prectfx; // [rsp+90h] [rbp-28h] BYREF

  prectfx = 0LL;
  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7, CurrentThread);
  if ( v8 )
  {
    v5 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v8, a1);
    if ( v5 )
    {
      PATHOBJ_vGetBounds(v5, &prectfx);
      GreProbeAndWriteToUntrustedVa(a2, 0x10uLL, &prectfx, 0x10uLL, 1uLL);
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7);
    return 0LL;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7);
    return 3221225485LL;
  }
}
