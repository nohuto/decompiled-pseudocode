/*
 * XREFs of ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C0258300
 * Callers:
 *     CLIPOBJ_ppoGetPath @ 0x1C0258530 (CLIPOBJ_ppoGetPath.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02844FC (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C028F430 (VerifierCLIPOBJ_ppoGetPath.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C0258470 (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x1C02BB550 (-bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z.c)
 */

struct _PATHOBJ *__fastcall XCLIPOBJ::ppoGetPath(XCLIPOBJ *this)
{
  struct _PATHOBJ *result; // rax
  struct _PATHOBJ *v3; // rbx
  struct _PATHOBJ *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  _BYTE v9[8]; // [rsp+28h] [rbp-E0h] BYREF
  _OWORD v10[5]; // [rsp+38h] [rbp-D0h] BYREF
  struct _PATHOBJ v11; // [rsp+88h] [rbp-80h]
  _BYTE v12[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v13; // [rsp+C0h] [rbp-48h]

  result = (struct _PATHOBJ *)PALLOCMEM2(0x58uLL, 1869639751LL, 0);
  v3 = 0LL;
  v4 = result;
  if ( result )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v10);
    if ( *((_QWORD *)&v10[0] + 1) )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v9, 1u, 8u);
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v12);
      if ( v13
        && RGNOBJ::bCreate((XCLIPOBJ *)((char *)this + 56), (struct EPATHOBJ *)v12, (struct EXFORMOBJ *)v9)
        && (unsigned int)RTP_PATHMEMOBJ::bDiagonalizePath((RTP_PATHMEMOBJ *)v12, (struct EPATHOBJ *)v10) )
      {
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v12);
        *(_OWORD *)&v4->fl = v10[0];
        *(_OWORD *)&v4[2].fl = v10[1];
        *(_OWORD *)&v4[4].fl = v10[2];
        *(_OWORD *)&v4[6].fl = v10[3];
        *(_OWORD *)&v4[8].fl = v10[4];
        v4[10] = v11;
        EPATHOBJ::vLock((EPATHOBJ *)v4, **((struct HPATH__ ***)&v10[0] + 1));
        v3 = v4;
        *v4 = *(struct _PATHOBJ *)&v10[0];
      }
      else
      {
        Win32FreePool(v4, v7, v8);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v12);
      }
    }
    else
    {
      Win32FreePool(v4, v5, v6);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v10);
    return v3;
  }
  return result;
}
