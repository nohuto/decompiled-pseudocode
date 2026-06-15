/*
 * XREFs of ?Category@CProcess@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180029258
 * Callers:
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18001C9E0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18002A470 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002F360 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::Category(unsigned int *a1)
{
  if ( a1[111] )
    return a1[112];
  else
    return a1[78];
}
