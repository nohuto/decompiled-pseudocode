/*
 * XREFs of PiDqQueryGetObjectManager @ 0x14045F51C
 * Callers:
 *     PiDqDispatch @ 0x14045DCD4 (PiDqDispatch.c)
 *     PiDqQuerySerializeActionQueue @ 0x14045E458 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *__fastcall PiDqQueryGetObjectManager(__int64 a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL) )
  {
    case 1:
      return &PiDqDeviceInterfaceManager;
    case 2:
      return &PiDqDeviceContainerManager;
    case 3:
      return &PiDqDeviceManager;
    case 4:
      return &PiDqDeviceInterfaceClassManager;
    case 7:
      return &PiDqDeviceInstallerClassManager;
  }
  return (struct _ERESOURCE *)v1;
}
