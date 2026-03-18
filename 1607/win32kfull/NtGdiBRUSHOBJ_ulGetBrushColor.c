/*
 * XREFs of NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C02AC410
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     BRUSHOBJ_ulGetBrushColor @ 0x1C0258070 (BRUSHOBJ_ulGetBrushColor.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C02AAC7C (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_ulGetBrushColor(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  ULONG BrushColor; // ebx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  UMPDOBJ *v11; // [rsp+70h] [rbp+18h] BYREF

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v11, ThreadCurrentObj);
  if ( v11 )
  {
    BrushColor = 0;
    v9 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v9 )
    {
      v10 = a1;
      if ( a1 >= W32UserProbeAddress )
        v10 = W32UserProbeAddress;
      if ( (*(_QWORD *)(v10 + 16) & 8) != 0 && (*(_DWORD *)(v9 + 128) & 0x10) != 0 )
        *(_DWORD *)(v9 + 16) |= 8u;
      BrushColor = BRUSHOBJ_ulGetBrushColor((BRUSHOBJ *)v9);
      *(_DWORD *)(a1 + 16) &= ~8u;
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v11);
    return BrushColor;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v11);
    return 0LL;
  }
}
