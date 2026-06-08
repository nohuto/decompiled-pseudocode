/*
 * XREFs of PepRegisterBootVetoes @ 0x1C001A0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PepRegisterBootVetoes(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  IoFreeWorkItem(Context);
  PoFxProcessorNotification(*((_QWORD *)DeviceObject->DeviceExtension + 131), 26LL, 0LL);
  ((void (*)(void))qword_1C00095C8)();
}
