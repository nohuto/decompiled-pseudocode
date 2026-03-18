/*
 * XREFs of NtGdiXFORMOBJ_iGetXform @ 0x1C02B19A0
 * Callers:
 *     <none>
 * Callees:
 *     XFORMOBJ_iGetXform @ 0x1C001A780 (XFORMOBJ_iGetXform.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C02AAE70 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_iGetXform(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  ULONG Xform; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  XFORMOBJ *v10; // rax
  UMPDOBJ *v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]

  v4 = a2;
  Xform = -1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v11, ThreadCurrentObj);
  if ( v11 )
  {
    v10 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v10 )
    {
      Xform = XFORMOBJ_iGetXform(v10, (XFORML *)((unsigned __int64)&v12 & -(__int64)(v4 != 0)));
      if ( Xform != -1 )
      {
        if ( v4 )
        {
          if ( v4 >= W32UserProbeAddress )
            v4 = W32UserProbeAddress;
          *(_OWORD *)v4 = v12;
          *(_QWORD *)(v4 + 16) = v13;
        }
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v11);
    return Xform;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v11);
    return 0xFFFFFFFFLL;
  }
}
