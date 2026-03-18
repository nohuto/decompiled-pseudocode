/*
 * XREFs of ?RemoveFromCurrentPointerDevicesList@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C7B58
 * Callers:
 *     FreePointerDevice @ 0x1C01CC4B0 (FreePointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RemoveFromCurrentPointerDevicesList(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rax
  unsigned int v2; // edx
  struct _LIST_ENTRY *v3; // r8
  struct _LIST_ENTRY *v5; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  Flink = gPointerDeviceInfoList.Flink;
  v2 = 0;
  while ( Flink != &gPointerDeviceInfoList )
  {
    v3 = Flink - 95;
    Flink = Flink->Flink;
    if ( v3 == a1 )
    {
      v5 = v3[95].Flink;
      Blink = v3[95].Blink;
      if ( v5->Blink != &v3[95] || Blink->Flink != &v3[95] )
        __fastfail(3u);
      Blink->Flink = v5;
      v5->Blink = Blink;
      return 1;
    }
  }
  return v2;
}
