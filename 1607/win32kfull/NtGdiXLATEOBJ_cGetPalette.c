/*
 * XREFs of NtGdiXLATEOBJ_cGetPalette @ 0x1C02B1A90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02AAF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02ABF28 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     XLATEOBJ_cGetPalette @ 0x1C02B9CB0 (XLATEOBJ_cGetPalette.c)
 */

__int64 __fastcall NtGdiXLATEOBJ_cGetPalette(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  ULONG v6; // esi
  ULONG v7; // r12d
  ULONG Palette; // ebx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  XLATEOBJ *v11; // r14
  ULONG *v12; // rax
  ULONG *v13; // rdi
  __int64 v14; // rdx
  UMPDOBJ *v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = a3;
  v7 = a2;
  Palette = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(v16, ThreadCurrentObj);
  if ( v16[0] )
  {
    v11 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v11 )
    {
      if ( a4 )
      {
        if ( v6 <= 0x9C4000 )
        {
          v12 = (ULONG *)PALLOCMEM2(4 * v6, 1886221639LL, 0);
          v13 = v12;
          if ( v12 )
          {
            Palette = XLATEOBJ_cGetPalette(v11, v7, v6, v12);
            if ( Palette )
              Palette &= -((unsigned int)bSafeCopyBits(a4, v13, 4 * v6) != 0);
            Win32FreePool(v13, v14);
          }
        }
      }
    }
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v16);
  return Palette;
}
