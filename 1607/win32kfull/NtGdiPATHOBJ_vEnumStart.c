/*
 * XREFs of NtGdiPATHOBJ_vEnumStart @ 0x1C02B0ED0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AAD24 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiPATHOBJ_vEnumStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  UMPDOBJ *v10; // [rsp+38h] [rbp+10h] BYREF

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v10, ThreadCurrentObj);
  v7 = 0;
  if ( v10 )
  {
    v8 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v8 )
    {
      if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) == 0 || *(_QWORD *)(v8 + 8) )
      {
        PATHOBJ_vEnumStart((PATHOBJ *)v8);
      }
      else if ( gfUMPDDebug )
      {
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStart:Invalid EPATHOBJ.\n", 4028);
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v10);
  return v7;
}
