/*
 * XREFs of NtGdiFONTOBJ_vGetInfo @ 0x14023A510
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D7FD8 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400D9968 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     FONTOBJ_vGetInfo @ 0x14023A650 (FONTOBJ_vGetInfo.c)
 */

__int64 __fastcall NtGdiFONTOBJ_vGetInfo(__int64 a1, unsigned int a2, void *a3)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v7; // r8
  FONTOBJ *v8; // r14
  FONTINFO *v9; // rax
  FONTINFO *v10; // rdi
  UMPDOBJ *v12[4]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h]

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12, CurrentThread);
  if ( v13 )
  {
    v8 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(v13, a1);
    if ( v8 && a2 && a3 && a2 <= 0x2710000 )
    {
      v9 = (FONTINFO *)PALLOCNOZ(a2, 1886221639LL, v7);
      v10 = v9;
      if ( v9 )
      {
        memset(v9, 0, a2);
        FONTOBJ_vGetInfo(v8, a2, v9);
        bSafeCopyBits(a3, v10, a2);
        Win32FreePool(v10);
      }
    }
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v12);
    return 0LL;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v12);
    return 3221225485LL;
  }
}
