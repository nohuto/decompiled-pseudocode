/*
 * XREFs of NtGdiPATHOBJ_bEnum @ 0x1C02AE5D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01468CC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02A90CC (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiPATHOBJ_bEnum(__int64 a1, PATHDATA *a2)
{
  unsigned int v4; // esi
  POINTFIX *v5; // r14
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v8; // rdi
  __int64 result; // rax
  unsigned __int64 v10; // rax
  char *v11; // rax
  PATHDATA ppd; // [rsp+20h] [rbp-38h] BYREF

  ppd.flags = 0;
  ppd.count = 0;
  ppd.pptfx = 0LL;
  v4 = 0;
  v5 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
    ++*((_DWORD *)ThreadCurrentObj + 108);
  result = 0LL;
  if ( v8 )
  {
    v10 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v8, a1);
    if ( v10 )
    {
      if ( (*((_DWORD *)v8 + 103) & 0x100) == 0 || *(_QWORD *)(v10 + 8) )
      {
        v4 = PATHOBJ_bEnum((PATHOBJ *)v10, &ppd);
      }
      else if ( gfUMPDDebug )
      {
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnum:ppath == NULL.\n", 3867);
      }
      if ( ppd.count > 0x4E2000 )
      {
        --*((_DWORD *)v8 + 108);
        return 0LL;
      }
      v11 = UMPDOBJ::_AllocUserMem(v8, 8 * ppd.count, 0);
      v5 = (POINTFIX *)v11;
      if ( v11 )
      {
        memmove(v11, ppd.pptfx, 8LL * ppd.count);
        ppd.pptfx = v5;
      }
      else
      {
        v4 = 0;
      }
    }
    if ( !v5 )
    {
      ppd.flags = 0;
      ppd.count = 0;
      ppd.pptfx = 0LL;
    }
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (PATHDATA *)W32UserProbeAddress;
    *a2 = ppd;
    --*((_DWORD *)v8 + 108);
    return v4;
  }
  return result;
}
