/*
 * XREFs of ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x180094ADC
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x180096120 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180099364 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ATL::CEvent::Create(ATL::CEvent *this, struct _SECURITY_ATTRIBUTES *a2)
{
  HANDLE EventW; // rax

  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *(_QWORD *)this = EventW;
  return EventW != 0LL;
}
