/*
 * XREFs of OPMInitialize @ 0x1C0052E28
 * Callers:
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     ??0CMutex@@QEAA@PEAJ@Z @ 0x1C0052FD0 (--0CMutex@@QEAA@PEAJ@Z.c)
 *     ?OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C00813D0 (-OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 */

__int64 OPMInitialize()
{
  unsigned int v0; // ebx
  int v1; // esi
  struct _DEVOBJ_EXTENSION *v2; // rax
  struct _DEVOBJ_EXTENSION *v3; // rdi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  v5 = 0;
  v2 = (struct _DEVOBJ_EXTENSION *)OPMAllocateMemory(0x20uLL, PagedPool);
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v2->Type = 0LL;
    v2->DeviceObject = 0LL;
    v2->PowerFlags = -1071774452;
    CMutex::CMutex((CMutex *)&v2->Dope, &v5);
    v1 = v5;
    WPP_MAIN_CB.DeviceObjectExtension = v3;
  }
  else
  {
    v3 = 0LL;
    WPP_MAIN_CB.DeviceObjectExtension = 0LL;
  }
  if ( !v3 )
    return 3221225495LL;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v0;
}
