/*
 * XREFs of NtGdiCLIPOBJ_ppoGetPath @ 0x1C02AB180
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C028621C (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 */

struct _PATHOBJ *__fastcall NtGdiCLIPOBJ_ppoGetPath(struct _CLIPOBJ *a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  struct _PATHOBJ *result; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  result = 0LL;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    result = UMPDOBJ::GetCLIPOBJPath(ThreadCurrentObj, a1);
    --*((_DWORD *)ThreadCurrentObj + 108);
  }
  return result;
}
