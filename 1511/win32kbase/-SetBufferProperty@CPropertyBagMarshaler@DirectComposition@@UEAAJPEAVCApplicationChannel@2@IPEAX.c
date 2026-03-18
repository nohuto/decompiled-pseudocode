/*
 * XREFs of ?SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAX_KPEA_N@Z @ 0x1C00D9B20
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@@Z @ 0x1C00D9300 (-AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@@Z.c)
 *     ?UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@_K@Z @ 0x1C00D9D84 (-UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEAUPropertyUpdate@@_K@Z.c)
 */

__int64 __fastcall DirectComposition::CPropertyBagMarshaler::SetBufferProperty(
        const void **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct PropertyUpdate *a4,
        unsigned __int64 a5,
        DirectComposition::CPropertyBagMarshaler *a6)
{
  int updated; // ebx
  int v9; // r8d
  char *v10; // rax
  size_t v11; // r8

  updated = 0;
  if ( !a3 )
  {
    if ( a5 == 16 )
    {
      updated = DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(
                  (DirectComposition::CPropertyBagMarshaler *)this,
                  a4);
      if ( updated < 0 )
        return (unsigned int)updated;
      *((_DWORD *)this + 4) |= 0x40u;
      *(_BYTE *)a6 = 1;
      goto LABEL_17;
    }
    return (unsigned int)-1073741811;
  }
  v9 = a3 - 1;
  if ( !v9 )
  {
    if ( a5 >= 0x10 )
    {
      updated = DirectComposition::CPropertyBagMarshaler::UpdatePropertyValue(
                  (DirectComposition::CPropertyBagMarshaler *)this,
                  a4,
                  a5);
      if ( updated < 0 )
        return (unsigned int)updated;
      *((_DWORD *)this + 4) |= 0x40u;
      *(_BYTE *)a6 = 1;
LABEL_17:
      Win32FreePool();
      return (unsigned int)updated;
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 )
    return (unsigned int)-1073741811;
  v10 = (char *)this[7];
  if ( (char *)a5 != v10 )
    return (unsigned int)-1073741811;
  v11 = (size_t)this[8];
  if ( (unsigned __int64)(v10 - 16) >= v11 )
    memmove(a4, this[6], v11);
  if ( this[6] )
    Win32FreePool();
  this[6] = a4;
  *(_BYTE *)a6 = 1;
  return (unsigned int)updated;
}
