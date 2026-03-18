/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B0F80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AAD24 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z @ 0x1C02AAFAC (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAV1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02AAFF4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1C02AB0C0 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02AB128 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02AB35C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02AB964 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C02B7E50 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rdi
  unsigned int v8; // ebx
  SURFOBJ *v9; // rbp
  unsigned __int64 v10; // rax
  PATHOBJ *v11; // r14
  struct _CLIPOBJ *DDIOBJ; // rax
  __int64 v13; // rdx
  CLIPOBJ *v14; // rsi
  LINEATTRS *v15; // rdi
  CLIPOBJ *v16; // rdx
  PFLOAT_LONG pstyle; // rcx
  UMPDOBJ *v19; // [rsp+20h] [rbp-88h] BYREF
  struct _LINEATTRS v20; // [rsp+28h] [rbp-80h] BYREF
  SURFOBJ *pso[8]; // [rsp+50h] [rbp-58h] BYREF
  LINEATTRS *pla; // [rsp+C8h] [rbp+20h] BYREF
  va_list plaa; // [rsp+C8h] [rbp+20h]
  va_list va1; // [rsp+D0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread(
                                             (__int64)KeGetCurrentThread(),
                                             (__int64)a2,
                                             (__int64)a3,
                                             (__int64)pla);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL(&v19, ThreadCurrentObj);
  v8 = 0;
  if ( v19 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a3, (struct _SURFOBJ **)ThreadCurrentObj);
    v9 = pso[0];
    v10 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
    v11 = (PATHOBJ *)v10;
    if ( v9 && v10 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, &v20) )
    {
      DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a2, &v9->sizlBitmap);
      v14 = DDIOBJ;
      if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) == 0 )
      {
        v15 = pla;
        v16 = DDIOBJ;
        goto LABEL_17;
      }
      if ( !DDIOBJ && gfUMPDDebug )
        DbgPrint(
          "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pco == NULL\n",
          4064);
      v15 = pla;
      if ( !pla && gfUMPDDebug )
        DbgPrint(
          "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pla == NULL\n",
          4069);
      if ( !v14 )
        goto LABEL_18;
      if ( v15 )
      {
        v16 = v14;
LABEL_17:
        PATHOBJ_vEnumStartClipLines(v11, v16, v9, v15);
LABEL_18:
        if ( v15 )
        {
          pstyle = v15->pstyle;
          if ( pstyle )
            Win32FreePool(pstyle, v13);
        }
      }
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    goto LABEL_22;
  }
  v8 = -1073741811;
LABEL_22:
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)&v19);
  return v8;
}
