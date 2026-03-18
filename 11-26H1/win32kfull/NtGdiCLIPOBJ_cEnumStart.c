/*
 * XREFs of NtGdiCLIPOBJ_cEnumStart @ 0x14025B530
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1400D88A4 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_cEnumStart(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v10; // rdi
  unsigned int v11; // ebx
  XCLIPOBJ *v12; // rax
  UMPDOBJ *v14[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v15; // [rsp+50h] [rbp-58h]

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v14, CurrentThread);
  v10 = v15;
  v11 = -1;
  if ( v15 )
  {
    v12 = (XCLIPOBJ *)UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(v15, a1);
    if ( v12 )
    {
      if ( (*(_DWORD *)(v10 + 428) & 0x100) == 0 || *((_QWORD *)v12 + 7) )
        v11 = XCLIPOBJ::cEnumStart(v12, a2, a3, a4, a5);
    }
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v14);
  return v11;
}
