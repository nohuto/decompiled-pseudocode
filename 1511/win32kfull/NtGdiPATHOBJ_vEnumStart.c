/*
 * XREFs of NtGdiPATHOBJ_vEnumStart @ 0x1C02AE900
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02A90CC (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiPATHOBJ_vEnumStart(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  unsigned int v4; // ebx
  struct UMPDOBJ *v5; // rdi
  unsigned __int64 v6; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = 0;
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    v6 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v6 )
    {
      if ( (*((_DWORD *)v5 + 103) & 0x100) == 0 || *(_QWORD *)(v6 + 8) )
      {
        PATHOBJ_vEnumStart((PATHOBJ *)v6);
      }
      else if ( gfUMPDDebug )
      {
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStart:Invalid EPATHOBJ.\n", 3926);
      }
    }
    --*((_DWORD *)v5 + 108);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
