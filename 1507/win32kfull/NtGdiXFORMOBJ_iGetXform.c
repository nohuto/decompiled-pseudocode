/*
 * XREFs of NtGdiXFORMOBJ_iGetXform @ 0x1C02AFDE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     XFORMOBJ_iGetXform @ 0x1C00AA560 (XFORMOBJ_iGetXform.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C02A9A20 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_iGetXform(__int64 a1, unsigned __int64 a2)
{
  ULONG Xform; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  XFORMOBJ *v9; // rax
  __int128 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]

  Xform = -1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v9 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v9 )
  {
    Xform = XFORMOBJ_iGetXform(v9, (XFORML *)((unsigned __int64)&v10 & -(__int64)(a2 != 0)));
    if ( Xform != -1 )
    {
      if ( a2 )
      {
        if ( a2 >= W32UserProbeAddress )
          a2 = W32UserProbeAddress;
        *(_OWORD *)a2 = v10;
        *(_QWORD *)(a2 + 16) = v11;
      }
    }
  }
  if ( v7 )
    --*((_DWORD *)v7 + 108);
  return Xform;
}
