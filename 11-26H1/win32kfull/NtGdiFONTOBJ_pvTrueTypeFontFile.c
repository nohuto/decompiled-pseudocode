/*
 * XREFs of NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x14024E7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1400701C0 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D7FD8 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D80A8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?bFontFile@UMPDOBJ@@QEAA_NAEAVRFONTOBJ@@@Z @ 0x140292838 (-bFontFile@UMPDOBJ@@QEAA_NAEAVRFONTOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_pvTrueTypeFontFile(__int64 a1, void *a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v5; // rdi
  struct PFT *v6; // rax
  __int64 v7; // rbx
  UMPDOBJ *v9[4]; // [rsp+30h] [rbp-68h] BYREF
  UMPDOBJ *v10; // [rsp+50h] [rbp-48h]
  int v11; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+20h] BYREF

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v9, CurrentThread);
  v5 = v10;
  if ( !v10 )
    goto LABEL_12;
  v6 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v10, a1);
  if ( !v6 )
    goto LABEL_12;
  v11 = *((_DWORD *)v5 + 93);
  v7 = *((_QWORD *)v5 + 45);
  if ( !v7 )
  {
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v12, v6);
    if ( v12 && UMPDOBJ::bFontFile(v5, (struct RFONTOBJ *)&v12) )
    {
      v11 = *((_DWORD *)v5 + 93);
      v7 = *((_QWORD *)v5 + 45);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v12);
      if ( !v7 )
        v11 = 0;
      goto LABEL_8;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v12);
LABEL_12:
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v9);
    return 0LL;
  }
LABEL_8:
  if ( a2 )
    GreProbeAndWriteToUntrustedVa(a2, 4uLL, &v11, 4uLL, 1uLL);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v9);
  return v7;
}
