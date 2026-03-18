/*
 * XREFs of NtGdiXFORMOBJ_bApplyXform @ 0x1400D8E90
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1400D9034 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1400D9610 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     XFORMOBJ_bApplyXform @ 0x1400D9680 (XFORMOBJ_bApplyXform.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400D9968 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_bApplyXform(__int64 a1, ULONG a2, ULONG a3, void *a4, void *a5)
{
  unsigned int v5; // ebx
  int v9; // r14d
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v11; // r15d
  char *p_pvIn; // rsi
  char *pvOut; // rdi
  __int64 v15; // rax
  XFORMOBJ *pxo; // [rsp+38h] [rbp-F0h]
  UMPDOBJ *v18[4]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-C8h]
  char pvIn; // [rsp+A0h] [rbp-88h] BYREF
  char v21; // [rsp+C0h] [rbp-68h] BYREF

  v5 = 0;
  v9 = 0;
  if ( a3 <= 0x4E2000 )
  {
    CurrentThread = GreGetCurrentThread(a1);
    UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v18, CurrentThread);
    if ( !v19 )
    {
LABEL_15:
      UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v18);
      return v5;
    }
    pxo = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(v19, a1);
    if ( !pxo || !a4 || !a5 || !a3 )
    {
LABEL_14:
      v5 = v9;
      goto LABEL_15;
    }
    v11 = 8 * a3;
    if ( a3 > 4 )
    {
      p_pvIn = (char *)PALLOCNOZ(v11, 1886221639LL);
      v15 = PALLOCNOZ(v11, 1886221639LL);
      pvOut = (char *)v15;
      if ( !p_pvIn )
        goto LABEL_22;
      if ( !v15 )
      {
LABEL_21:
        Win32FreePool(p_pvIn);
LABEL_22:
        if ( pvOut )
          Win32FreePool(pvOut);
        goto LABEL_14;
      }
    }
    else
    {
      p_pvIn = &pvIn;
      pvOut = &v21;
    }
    if ( (unsigned int)bSafeReadBits(p_pvIn, a4, v11)
      && XFORMOBJ_bApplyXform(pxo, a2, a3, p_pvIn, pvOut)
      && (unsigned int)bSafeCopyBits(a5, pvOut, v11) )
    {
      v9 = 1;
    }
    if ( a3 <= 4 )
      goto LABEL_14;
    if ( !p_pvIn )
      goto LABEL_22;
    goto LABEL_21;
  }
  return 0LL;
}
