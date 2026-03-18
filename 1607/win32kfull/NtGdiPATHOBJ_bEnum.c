/*
 * XREFs of NtGdiPATHOBJ_bEnum @ 0x1C02B0BB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AAD24 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiPATHOBJ_bEnum(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PATHDATA *v4; // rsi
  unsigned int v6; // ebx
  POINTFIX *v7; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // r14
  unsigned __int64 v11; // rax
  char *v12; // rax
  PATHDATA ppd; // [rsp+20h] [rbp-38h] BYREF
  UMPDOBJ *v14; // [rsp+70h] [rbp+18h] BYREF
  char *v15; // [rsp+78h] [rbp+20h]

  v4 = (PATHDATA *)a2;
  ppd.flags = 0;
  *(_QWORD *)&ppd.count = 0LL;
  HIDWORD(ppd.pptfx) = 0;
  v6 = 0;
  v7 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v14, ThreadCurrentObj);
  if ( !v14 )
  {
LABEL_2:
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v14);
    return 0LL;
  }
  v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v11 )
  {
    if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) == 0 || *(_QWORD *)(v11 + 8) )
    {
      v6 = PATHOBJ_bEnum((PATHOBJ *)v11, &ppd);
    }
    else if ( gfUMPDDebug )
    {
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnum:ppath == NULL.\n", 3969);
    }
    if ( ppd.count > 0x4E2000 )
      goto LABEL_2;
    v12 = UMPDOBJ::_AllocUserMem(ThreadCurrentObj, 8 * ppd.count, 0);
    v7 = (POINTFIX *)v12;
    v15 = v12;
    if ( v12 )
    {
      memmove(v12, ppd.pptfx, 8LL * ppd.count);
      ppd.pptfx = v7;
    }
    else
    {
      v6 = 0;
    }
  }
  if ( !v7 )
  {
    *(_QWORD *)&ppd.flags = 0LL;
    ppd.pptfx = 0LL;
  }
  if ( (unsigned __int64)v4 >= W32UserProbeAddress )
    v4 = (PATHDATA *)W32UserProbeAddress;
  *v4 = ppd;
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v14);
  return v6;
}
