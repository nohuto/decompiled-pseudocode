/*
 * XREFs of ?IsDeviceAllowed@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z @ 0x1C01C5820
 * Callers:
 *     ?ReassessContactDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTER_INFO@@H@Z @ 0x1C01C5CD0 (-ReassessContactDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTER_INFO@@H@Z.c)
 *     ValidatePointerDeviceCurrentState @ 0x1C01CD2A4 (ValidatePointerDeviceCurrentState.c)
 * Callees:
 *     AbortDeviceActivity @ 0x1C01C71D0 (AbortDeviceActivity.c)
 *     IsPTPPointerDeviceAllowed @ 0x1C01CFA5C (IsPTPPointerDeviceAllowed.c)
 */

_BOOL8 __fastcall IsDeviceAllowed(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  BOOL v3; // ebx
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY **p_Blink; // rax

  v3 = 1;
  Flink = gActivePointerDeviceList.Flink;
  if ( (HIDWORD(a1[14].Blink) & 4) != 0 && !(_DWORD)a2 )
  {
    a3 = (unsigned int)-(int)a3;
    v3 = a3 != 0;
  }
  if ( LODWORD(a1[1].Blink) == 8 )
  {
    return (BOOL)IsPTPPointerDeviceAllowed(a1, a2, a3, gActivePointerDeviceList.Flink);
  }
  else
  {
    while ( Flink != &gActivePointerDeviceList )
    {
      p_Blink = &Flink[-1].Blink;
      Flink = Flink->Flink;
      if ( (unsigned int)(LODWORD((*p_Blink)[1].Blink) - 6) <= 1 && *p_Blink != a1 )
      {
        v3 = 0;
        AbortDeviceActivity((struct tagHID_POINTER_DEVICE_INFO *)a1);
        return v3;
      }
    }
  }
  return v3;
}
