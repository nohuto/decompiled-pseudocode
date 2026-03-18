/*
 * XREFs of NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02AA420
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z @ 0x1C025ABC0 (-BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A9024 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

PVOID __fastcall NtGdiBRUSHOBJ_pvAllocRbrush(__int64 a1, unsigned int a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  PVOID v6; // rbx
  struct UMPDOBJ *v7; // rdi
  struct _BRUSHOBJ *v8; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = 0LL;
  v7 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    v8 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v8 )
      v6 = BRUSHOBJ_pvAllocRbrushUMPD(v8, a2);
    --*((_DWORD *)v7 + 108);
  }
  return v6;
}
