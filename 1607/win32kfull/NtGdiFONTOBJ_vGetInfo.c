/*
 * XREFs of NtGdiFONTOBJ_vGetInfo @ 0x1C02B08D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     FONTOBJ_vGetInfo @ 0x1C0284020 (FONTOBJ_vGetInfo.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C02841D4 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02ABF28 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_vGetInfo(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rsi
  FONTOBJ *v10; // r14
  FONTINFO *v11; // rax
  FONTINFO *v12; // rsi
  __int64 v13; // rdx
  UMPDOBJ *v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = (unsigned int)a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v14, ThreadCurrentObj);
  if ( v14 )
  {
    v10 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v10 && (_DWORD)v5 && a3 && (unsigned int)v5 <= 0x2710000 )
    {
      v11 = (FONTINFO *)PALLOCMEM2((unsigned int)v5, 1886221639LL, 0);
      v12 = v11;
      if ( v11 )
      {
        memset(v11, 0, v5);
        FONTOBJ_vGetInfo(v10, v5, v11);
        bSafeCopyBits(a3, v12, v5);
        Win32FreePool(v12, v13);
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v14);
    return 0LL;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v14);
    return 3221225485LL;
  }
}
