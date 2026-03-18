/*
 * XREFs of IsPTPPointerDeviceAllowed @ 0x1C01D16BC
 * Callers:
 *     ?IsDeviceAllowed@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z @ 0x1C01C73E0 (-IsDeviceAllowed@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z.c)
 * Callees:
 *     AbortDeviceActivity @ 0x1C01C8D90 (AbortDeviceActivity.c)
 */

__int64 __fastcall IsPTPPointerDeviceAllowed(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int v2; // ebx
  struct _LIST_ENTRY **p_Blink; // rax
  struct _LIST_ENTRY *v4; // r8

  Flink = gActivePointerDeviceList.Flink;
  v2 = 1;
  while ( Flink != &gActivePointerDeviceList )
  {
    p_Blink = &Flink[-1].Blink;
    Flink = Flink->Flink;
    v4 = *p_Blink;
    if ( ((unsigned int)(LODWORD((*p_Blink)[1].Blink) - 6) <= 1 || (unsigned int)(LODWORD(v4[1].Blink) - 1) <= 4)
      && v4 != (struct _LIST_ENTRY *)a1 )
    {
      v2 = 0;
      AbortDeviceActivity(a1);
      return v2;
    }
  }
  return v2;
}
