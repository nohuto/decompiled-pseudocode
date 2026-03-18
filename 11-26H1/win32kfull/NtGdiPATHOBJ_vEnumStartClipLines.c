/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x14032FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D7794 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400F5E04 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x140291A24 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x140334FE0 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v7; // rdi
  unsigned int v8; // ebx
  SURFOBJ *v9; // r14
  unsigned __int64 v10; // rax
  PATHOBJ *v11; // rsi
  CLIPOBJ *DDIOBJ; // rdx
  int v13; // eax
  LINEATTRS *v14; // rdi
  PFLOAT_LONG pstyle; // rcx
  struct _LINEATTRS v17; // [rsp+20h] [rbp-A1h] BYREF
  __int64 v18; // [rsp+48h] [rbp-79h]
  SURFOBJ *pso[8]; // [rsp+58h] [rbp-69h] BYREF
  UMPDOBJ *v20[4]; // [rsp+98h] [rbp-29h] BYREF
  UMPDOBJ *v21; // [rsp+B8h] [rbp-9h]
  LINEATTRS *pla; // [rsp+140h] [rbp+7Fh] BYREF
  va_list plaa; // [rsp+140h] [rbp+7Fh]
  va_list va1; // [rsp+148h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  memset(&v17.iEndCap, 0, 32);
  v18 = 0LL;
  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v20, CurrentThread);
  v7 = v21;
  v8 = 0;
  if ( v21 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a3, v21);
    v9 = pso[0];
    v10 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v7, a1);
    v11 = (PATHOBJ *)v10;
    if ( v9 && v10 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, (struct _LINEATTRS *)&v17.iEndCap) )
    {
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v7, a2, &v9->sizlBitmap);
      v13 = *((_DWORD *)v7 + 107);
      v14 = pla;
      if ( (v13 & 0x100) == 0 )
        goto LABEL_9;
      if ( !DDIOBJ )
      {
LABEL_10:
        if ( v14 )
        {
          pstyle = v14->pstyle;
          if ( pstyle )
            Win32FreePool(pstyle);
        }
        goto LABEL_13;
      }
      if ( pla )
      {
LABEL_9:
        PATHOBJ_vEnumStartClipLines(v11, DDIOBJ, v9, pla);
        goto LABEL_10;
      }
    }
LABEL_13:
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    goto LABEL_14;
  }
  v8 = -1073741811;
LABEL_14:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v20);
  return v8;
}
