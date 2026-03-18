/*
 * XREFs of NtGdiCLIPOBJ_cEnumStart @ 0x1C02AC630
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C0284144 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_cEnumStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // ebp
  int v7; // r14d
  int v8; // r15d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  unsigned int v11; // ebx
  XCLIPOBJ *v12; // rax
  UMPDOBJ *v14[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  v7 = a3;
  v8 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(v14, ThreadCurrentObj);
  v11 = -1;
  if ( v14[0] )
  {
    v12 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v12 )
    {
      if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) == 0 || *((_QWORD *)v12 + 7) )
      {
        v11 = XCLIPOBJ::cEnumStart(v12, v8, v7, v6, a5);
      }
      else if ( gfUMPDDebug )
      {
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiCLIPOBJ_cEnumStart:!peco->bValid()\n", 2676);
      }
    }
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v14);
  return v11;
}
