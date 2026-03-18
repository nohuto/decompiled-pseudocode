/*
 * XREFs of ?W32kCddInitPdev@@YAJQEAUHDEV__@@QEAXPEAIPEAPEAU_devicemodeW@@PEAPEAX@Z @ 0x1C007D770
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z @ 0x1C007D914 (-GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z.c)
 */

__int64 __fastcall W32kCddInitPdev(HDEV a1, void *const a2, unsigned int *a3, struct _devicemodeW **a4, void **a5)
{
  struct tagGRAPHICS_DEVICE *GraphicsDeviceFromDevObjHandle; // rax
  _DWORD *v6; // r8
  _QWORD *v7; // r9
  unsigned int v8; // r10d

  if ( a1 && (GraphicsDeviceFromDevObjHandle = GetGraphicsDeviceFromDevObjHandle(a2)) != 0LL )
  {
    *v6 = *((_DWORD *)GraphicsDeviceFromDevObjHandle + 48);
    *v7 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 23);
    *a5 = &gDxgkWin32kEngInterface;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
