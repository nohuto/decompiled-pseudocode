/*
 * XREFs of NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02AC190
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02AAC7C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_DeleteRbrush(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbp
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  UMPDOBJ *v16; // [rsp+40h] [rbp+18h] BYREF

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v16, ThreadCurrentObj);
  v8 = 0;
  if ( v16 )
  {
    if ( a1 )
    {
      v9 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
      v10 = v9;
      if ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 8);
        if ( v11 )
        {
          if ( v11 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v11 - 16));
            *(_QWORD *)(v10 + 8) = 0LL;
          }
        }
      }
    }
    if ( a2 )
    {
      v12 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a2);
      v13 = v12;
      if ( v12 )
      {
        v14 = *(_QWORD *)(v12 + 8);
        if ( v14 )
        {
          if ( v14 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v14 - 16));
            *(_QWORD *)(v13 + 8) = 0LL;
          }
        }
      }
    }
    v8 = 1;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v16);
  return v8;
}
