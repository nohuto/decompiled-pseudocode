/*
 * XREFs of NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02B1200
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02AADDC (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     STROBJ_bGetAdvanceWidths @ 0x1C02B99B0 (STROBJ_bGetAdvanceWidths.c)
 */

__int64 __fastcall NtGdiSTROBJ_bGetAdvanceWidths(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG v5; // esi
  ULONG v6; // r15d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // r14
  STROBJ *v10; // rbx
  char *v11; // rax
  char *v12; // r14
  unsigned int AdvanceWidths; // ebx
  size_t v14; // r8
  UMPDOBJ *v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3;
  v6 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(v16, ThreadCurrentObj);
  if ( v16[0]
    && (v10 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, a1)) != 0LL
    && v5 <= 0x271000
    && (v11 = UMPDOBJ::_AllocUserMem(ThreadCurrentObj, 16 * v5, 0), (v12 = v11) != 0LL) )
  {
    AdvanceWidths = STROBJ_bGetAdvanceWidths(v10, v6, v5, (POINTQF *)v11);
    if ( AdvanceWidths )
    {
      v14 = 16LL * v5;
      if ( v14 + a4 > W32UserProbeAddress || v14 + a4 <= a4 || (a4 & 7) != 0 )
        *W32UserProbeAddress = 0;
      memmove((void *)a4, v12, v14);
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v16);
    return AdvanceWidths;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v16);
    return 0LL;
  }
}
