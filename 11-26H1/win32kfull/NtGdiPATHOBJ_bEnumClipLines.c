/*
 * XREFs of NtGdiPATHOBJ_bEnumClipLines @ 0x14032FA30
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D7794 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1400E1918 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

_BOOL8 __fastcall NtGdiPATHOBJ_bEnumClipLines(__int64 a1, unsigned int a2, void *a3)
{
  unsigned __int64 v4; // rsi
  BOOL v6; // edi
  struct _CLIPLINE *v7; // rbx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v9; // r15
  __int64 v10; // r8
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // r8
  __int64 v15; // rax
  UMPDOBJ *v17[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18; // [rsp+50h] [rbp-58h]

  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v17, CurrentThread);
  v9 = v18;
  if ( !v18 || (unsigned int)(v4 - 33) > 0x270FFDF )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v17);
    return 0LL;
  }
  v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v18, a1);
  if ( v11 )
  {
    v12 = PALLOCNOZ(v4, 1886221639LL, v10);
    v7 = (struct _CLIPLINE *)v12;
    if ( v12 )
    {
      v13 = (unsigned int)v4;
      v14 = (_BYTE *)v12;
      if ( (_DWORD)v4 )
      {
        do
        {
          *v14++ = 0;
          --v13;
        }
        while ( v13 );
      }
      if ( (*(_DWORD *)(v9 + 428) & 0x100) != 0 )
      {
        v15 = *(_QWORD *)(v11 + 72);
        if ( !v15 )
        {
          v6 = 1;
          goto LABEL_14;
        }
        if ( !*(_QWORD *)(v15 + 144) )
          v6 = 1;
      }
      if ( !v6 )
        v6 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)(v11 + 72), (struct _PATHOBJ *)v11, v4, v7, 0);
    }
  }
LABEL_14:
  GreProbeForWriteToUntrustedVa(a3, v4, 4uLL);
  if ( v7 )
    memmove(a3, v7, v4);
  else
    memset_0(a3, 0, v4);
  if ( v7 )
    Win32FreePool(v7);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v17);
  return v6;
}
