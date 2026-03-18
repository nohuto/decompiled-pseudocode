/*
 * XREFs of ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02AB414
 * Callers:
 *     NtGdiSTROBJ_bEnum @ 0x1C02B11E0 (NtGdiSTROBJ_bEnum.c)
 *     NtGdiSTROBJ_bEnumPositionsOnly @ 0x1C02B11F0 (NtGdiSTROBJ_bEnumPositionsOnly.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     STROBJ_bEnum @ 0x1C01288F0 (STROBJ_bEnum.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0284BE0 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02AADDC (--$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     STROBJ_bEnumPositionsOnly @ 0x1C02B9990 (STROBJ_bEnumPositionsOnly.c)
 */

__int64 __fastcall NtGdiSTROBJ_bEnumInternal(struct _STROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3, __int64 a4)
{
  int v4; // ebx
  struct _GLYPHPOS **v5; // r14
  unsigned int *v6; // r15
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  STROBJ *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rbx
  char *v14; // rax
  char *v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rcx
  ULONG pc; // [rsp+20h] [rbp-28h] BYREF
  UMPDOBJ *v20; // [rsp+28h] [rbp-20h] BYREF
  PGLYPHPOS ppgpos; // [rsp+30h] [rbp-18h] BYREF
  char *v22; // [rsp+38h] [rbp-10h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v20, ThreadCurrentObj);
  if ( v20
    && (v10 = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)ThreadCurrentObj, (__int64)a1)) != 0LL
    && (!v4 ? (v11 = STROBJ_bEnum(v10, &pc, &ppgpos)) : (v11 = STROBJ_bEnumPositionsOnly(v10, &pc, &ppgpos)),
        (v12 = v11, v11 != -1)
     && (v13 = pc, pc <= 0x1A0AAA)
     && (v14 = UMPDOBJ::_AllocUserMem(ThreadCurrentObj, 24 * pc, 0), v15 = v14, (v22 = v14) != 0LL)) )
  {
    memmove(v14, ppgpos, 24 * v13);
    if ( (unsigned __int64)v5 >= W32UserProbeAddress )
      v5 = (struct _GLYPHPOS **)W32UserProbeAddress;
    *v5 = (struct _GLYPHPOS *)v22;
    if ( (unsigned __int64)v6 >= W32UserProbeAddress )
      v6 = (unsigned int *)W32UserProbeAddress;
    *v6 = v13;
    if ( (_DWORD)v13 )
    {
      v16 = v15 + 8;
      v17 = (unsigned int)v13;
      do
      {
        *v16 = 0LL;
        v16 += 3;
        --v17;
      }
      while ( v17 );
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v20);
    return v12;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v20);
    return 0xFFFFFFFFLL;
  }
}
