/*
 * XREFs of NtGdiXFORMOBJ_bApplyXform @ 0x1C02B17F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C02AAE70 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02ABF28 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C02ABF70 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     XFORMOBJ_bApplyXform @ 0x1C02B9AD0 (XFORMOBJ_bApplyXform.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_bApplyXform(__int64 a1, __int64 a2, __int64 a3, char *a4, char *a5)
{
  unsigned int v5; // edi
  ULONG v7; // esi
  int v9; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  char *p_pvIn; // rbp
  char *pvOut; // rbx
  char *v15; // rax
  __int64 v16; // rdx
  ULONG iMode; // [rsp+30h] [rbp-98h]
  UMPDOBJ *v18; // [rsp+38h] [rbp-90h] BYREF
  XFORMOBJ *pxo; // [rsp+40h] [rbp-88h]
  char pvIn; // [rsp+48h] [rbp-80h] BYREF
  char v21; // [rsp+68h] [rbp-60h] BYREF

  v5 = 0;
  iMode = a2;
  v7 = a3;
  v9 = 0;
  if ( (unsigned int)a3 > 0x4E2000 )
    return 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v18, ThreadCurrentObj);
  if ( v18 )
  {
    pxo = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a1);
    if ( !pxo || !a4 || !a5 || !v7 )
    {
LABEL_21:
      v5 = v9;
      goto LABEL_22;
    }
    if ( v7 > 4 )
    {
      p_pvIn = (char *)PALLOCMEM2(8 * v7, 1886221639LL, 0);
      v15 = (char *)PALLOCMEM2(8 * v7, 1886221639LL, 0);
      pvOut = v15;
      if ( !p_pvIn || !v15 )
      {
LABEL_16:
        if ( v7 > 4 )
        {
          if ( p_pvIn )
            Win32FreePool(p_pvIn, v16);
          if ( pvOut )
            Win32FreePool(pvOut, v16);
        }
        goto LABEL_21;
      }
    }
    else
    {
      p_pvIn = &pvIn;
      pvOut = &v21;
    }
    if ( (unsigned int)bSafeReadBits(p_pvIn, a4, 8 * v7)
      && XFORMOBJ_bApplyXform(pxo, iMode, v7, p_pvIn, pvOut)
      && (unsigned int)bSafeCopyBits(a5, pvOut, 8 * v7) )
    {
      v9 = 1;
    }
    goto LABEL_16;
  }
LABEL_22:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v18);
  return v5;
}
