/*
 * XREFs of EngAllocMem @ 0x1C0024420
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00349B0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00B4BE0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngCreateClip @ 0x1C00BE210 (EngCreateClip.c)
 * Callees:
 *     MultiUserGreTrackAddEngResource @ 0x1C00244B0 (MultiUserGreTrackAddEngResource.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  char v3; // si
  ULONG v4; // edx
  size_t v5; // rdi
  char *v6; // rax
  char *v7; // rbx

  v3 = fl;
  if ( cjMemSize )
  {
    if ( cjMemSize <= 0xFFFFFFDF )
    {
      v4 = cjMemSize + 32;
      if ( v4 < 0x2710000 )
      {
        v5 = v4;
        if ( (fl & 2) != 0 )
          v6 = (char *)Win32AllocPoolNonPaged(v4, ulTag);
        else
          v6 = (char *)Win32AllocPool(v4, ulTag);
        v7 = v6;
        if ( (v3 & 1) != 0 )
        {
          if ( !v6 )
            return v7;
          memset(v6, 0, v5);
        }
        if ( v7 )
        {
          MultiUserGreTrackAddEngResource(v7);
          v7 += 32;
        }
        return v7;
      }
    }
  }
  return 0LL;
}
