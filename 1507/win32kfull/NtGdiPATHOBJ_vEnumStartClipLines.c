/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AF700
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02A98D4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9B5C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A9C28 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A9E5C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02AA470 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C02B5860 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  unsigned int v8; // ebx
  UMPDOBJ *v9; // rsi
  SURFOBJ *v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  PATHOBJ *v15; // r14
  struct _CLIPOBJ *DDIOBJ; // rax
  CLIPOBJ *v17; // rbp
  LINEATTRS *v18; // rdi
  CLIPOBJ *v19; // rdx
  PFLOAT_LONG pstyle; // rcx
  struct _LINEATTRS v22; // [rsp+20h] [rbp-98h] BYREF
  SURFOBJ *pso[8]; // [rsp+50h] [rbp-68h] BYREF
  LINEATTRS *pla; // [rsp+D8h] [rbp+20h] BYREF
  va_list plaa; // [rsp+D8h] [rbp+20h]
  va_list va1; // [rsp+E0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = 0;
  v9 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return (unsigned int)-1073741811;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a3, (struct _SURFOBJ **)ThreadCurrentObj);
  v10 = pso[0];
  v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v9, a1);
  v15 = (PATHOBJ *)v11;
  if ( v10 && v11 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, &v22) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v9, a2, &v10->sizlBitmap);
    v17 = DDIOBJ;
    if ( (*((_DWORD *)v9 + 103) & 0x100) == 0 )
    {
      v18 = pla;
      v19 = DDIOBJ;
      goto LABEL_16;
    }
    if ( !DDIOBJ && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pco == NULL\n",
        4023);
    v18 = pla;
    if ( !pla && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pla == NULL\n",
        4028);
    if ( !v17 )
      goto LABEL_17;
    if ( v18 )
    {
      v19 = v17;
LABEL_16:
      PATHOBJ_vEnumStartClipLines(v15, v19, v10, v18);
LABEL_17:
      if ( v18 )
      {
        pstyle = v18->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso, v12, v13, v14);
  --*((_DWORD *)v9 + 108);
  return v8;
}
