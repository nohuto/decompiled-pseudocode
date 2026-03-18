/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F6BBC
 * Callers:
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F70C0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // r10d
  unsigned int v5; // r11d

  if ( !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1362LL), 1LL) )
    return (unsigned int)InternalSetProp(v3, v5, a2, (unsigned __int16)v4 + 5);
  return v4;
}
