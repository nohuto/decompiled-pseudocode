/*
 * XREFs of NtGdiEngDeleteClip @ 0x1C02AB6C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 */

__int64 __fastcall NtGdiEngDeleteClip(__int64 a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  unsigned int v4; // edi
  struct UMPDOBJ *v5; // rbx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v4 = 0;
  v5 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    if ( a1 && a1 == *((_QWORD *)ThreadCurrentObj + 17) )
    {
      EngDeleteClip(*((CLIPOBJ **)ThreadCurrentObj + 16));
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 17) = 0LL;
    }
    --*((_DWORD *)v5 + 108);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
