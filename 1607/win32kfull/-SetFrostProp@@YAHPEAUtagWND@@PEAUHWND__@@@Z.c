/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01EE1FC
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C01EE750 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     InternalSetProp @ 0x1C00A782C (InternalSetProp.c)
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v5; // r11

  v3 = *(unsigned __int16 *)(gpsi + 1362LL);
  if ( !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1362LL), 1LL) )
    return (unsigned int)InternalSetProp(v5, v3, a2, (unsigned __int16)v4 + 5);
  return v4;
}
