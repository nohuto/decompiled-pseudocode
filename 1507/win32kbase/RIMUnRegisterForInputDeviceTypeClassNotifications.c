/*
 * XREFs of RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0071CD8
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0071410 (RIMRemoveInputOfType.c)
 *     RIMUnregisterForInput @ 0x1C00719C0 (RIMUnregisterForInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMUnRegisterForInputDeviceTypeClassNotifications(_DWORD *Object, unsigned int a2)
{
  unsigned int v3; // ecx
  int v4; // eax
  __int64 v6; // rdi
  unsigned int v7; // eax

  v3 = 0;
  v4 = Object[19];
  if ( _bittest(&v4, a2) )
  {
    v6 = a2;
    if ( *(_QWORD *)&Object[2 * a2 + 90] )
    {
      ObfDereferenceObject(Object);
      v7 = IoUnregisterPlugPlayNotification(*(PVOID *)&Object[2 * v6 + 90]);
      *(_QWORD *)&Object[2 * v6 + 90] = 0LL;
      return v7;
    }
  }
  return v3;
}
