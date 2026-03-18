/*
 * XREFs of NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02AC300
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z @ 0x1C0257D00 (-BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02AAC7C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

PVOID __fastcall NtGdiBRUSHOBJ_pvAllocRbrush(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  PVOID v8; // rbx
  struct _BRUSHOBJ *v9; // rax
  UMPDOBJ *v11; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v11, ThreadCurrentObj);
  v8 = 0LL;
  if ( v11 )
  {
    v9 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v9 )
      v8 = BRUSHOBJ_pvAllocRbrushUMPD(v9, v5);
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v11);
  return v8;
}
