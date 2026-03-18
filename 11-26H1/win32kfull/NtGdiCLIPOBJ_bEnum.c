/*
 * XREFs of NtGdiCLIPOBJ_bEnum @ 0x1400D9DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1400D88A4 (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400D9968 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_bEnum(__int64 a1, unsigned int a2, void *a3)
{
  int v4; // edi
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  XCLIPOBJ *v11; // rbp
  void *v12; // rax
  void *v13; // rsi
  UMPDOBJ *v15[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v16; // [rsp+40h] [rbp-68h]
  unsigned int v17; // [rsp+C8h] [rbp+20h] BYREF

  v4 = -1;
  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v15, CurrentThread);
  v8 = v16;
  v9 = 0;
  if ( v16 )
  {
    v10 = UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(v16, a1);
    v11 = (XCLIPOBJ *)v10;
    if ( v10 )
    {
      if ( (*(_DWORD *)(v8 + 428) & 0x100) != 0 && !*(_QWORD *)(v10 + 56) )
      {
        v9 = -1;
        goto LABEL_12;
      }
      if ( a2 <= 0x2710000 )
      {
        v12 = (void *)PALLOCNOZ(a2, 1886221639LL);
        v13 = v12;
        if ( v12 )
        {
          v17 = 0;
          v4 = XCLIPOBJ::bEnum(v11, a2, v12, &v17);
          if ( v4 != -1 && !(unsigned int)bSafeCopyBits(a3, v13, v17) )
            v4 = -1;
          Win32FreePool(v13);
        }
      }
    }
    v9 = v4;
  }
LABEL_12:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v15);
  return v9;
}
