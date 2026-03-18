/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AE9A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00DFB80 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02A90CC (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02A9354 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02A93C0 (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C02A959C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02A9B14 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C02B4D20 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  unsigned int v8; // ebx
  UMPDOBJ *v9; // rsi
  unsigned __int64 v10; // rax
  SURFOBJ *v11; // r15
  PATHOBJ *v12; // r14
  struct _CLIPOBJ *DDIOBJ; // rax
  CLIPOBJ *v14; // rbp
  LINEATTRS *v15; // rdi
  CLIPOBJ *v16; // rdx
  PFLOAT_LONG pstyle; // rcx
  SURFOBJ *pso[2]; // [rsp+20h] [rbp-68h] BYREF
  struct _LINEATTRS v20; // [rsp+30h] [rbp-58h] BYREF
  LINEATTRS *pla; // [rsp+A8h] [rbp+20h] BYREF
  va_list plaa; // [rsp+A8h] [rbp+20h]
  va_list va1; // [rsp+B0h] [rbp+28h] BYREF

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
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a3, ThreadCurrentObj);
  v10 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v9, a1);
  v11 = pso[0];
  v12 = (PATHOBJ *)v10;
  if ( pso[0] && v10 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, &v20) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v9, a2, &v11->sizlBitmap);
    v14 = DDIOBJ;
    if ( (*((_DWORD *)v9 + 103) & 0x100) == 0 )
    {
      v15 = pla;
      v16 = DDIOBJ;
      goto LABEL_16;
    }
    if ( !DDIOBJ && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pco == NULL\n",
        3962);
    v15 = pla;
    if ( !pla && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pla == NULL\n",
        3967);
    if ( !v14 )
      goto LABEL_17;
    if ( v15 )
    {
      v16 = v14;
LABEL_16:
      PATHOBJ_vEnumStartClipLines(v12, v16, v11, v15);
LABEL_17:
      if ( v15 )
      {
        pstyle = v15->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  UMPDSURFOBJ::~UMPDSURFOBJ(pso);
  --*((_DWORD *)v9 + 108);
  return v8;
}
