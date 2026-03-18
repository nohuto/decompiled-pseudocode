/*
 * XREFs of NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02AA2D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02A9024 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_DeleteRbrush(__int64 a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = (__int64)ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    v7 = 1;
    ++*((_DWORD *)ThreadCurrentObj + 108);
    if ( a1 )
    {
      v8 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
      v9 = v8;
      if ( v8 )
      {
        v10 = *(_QWORD *)(v8 + 8);
        if ( v10 )
        {
          if ( v10 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v10 - 16));
            *(_QWORD *)(v9 + 8) = 0LL;
          }
        }
      }
    }
    if ( a2 )
    {
      v11 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v6, a2);
      v12 = v11;
      if ( v11 )
      {
        v13 = *(_QWORD *)(v11 + 8);
        if ( v13 )
        {
          if ( v13 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v13 - 16));
            *(_QWORD *)(v12 + 8) = 0LL;
          }
        }
      }
    }
    --*(_DWORD *)(v6 + 432);
  }
  else
  {
    return 0;
  }
  return v7;
}
