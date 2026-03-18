/*
 * XREFs of ?SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C003C630
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     ?UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@_K@Z @ 0x1C003C068 (-UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@_K@Z.c)
 *     ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z @ 0x1C003C1DC (-AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CPropertyBagMarshaler::SetBufferProperty(
        const void **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        char *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  int v9; // r8d
  char *v10; // rbp
  size_t v11; // r14
  char *v12; // rcx
  char *v13; // rdx
  size_t v14; // r8
  int updated; // eax
  __int128 v17; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v18[80]; // [rsp+30h] [rbp-88h] BYREF

  v6 = 0;
  if ( Size < 0x10 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    if ( Size == 16 )
    {
      v17 = *(_OWORD *)a4;
      updated = DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(
                  (DirectComposition::CPropertyBagMarshaler *)this,
                  (const struct PropertyUpdate *)&v17);
      goto LABEL_19;
    }
    return (unsigned int)-1073741811;
  }
  v9 = a3 - 1;
  if ( !v9 )
  {
    if ( Size <= 0x50 )
    {
      memmove(v18, a4, Size);
      updated = DirectComposition::CPropertyBagMarshaler::UpdatePropertyValue(
                  (DirectComposition::CPropertyBagMarshaler *)this,
                  (const struct PropertyUpdate *)v18,
                  Size);
LABEL_19:
      v6 = updated;
      if ( updated < 0 )
        return v6;
      *((_DWORD *)this + 4) |= 0x20u;
LABEL_21:
      *a6 = 1;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 || Size < (unsigned __int64)this[7] )
    return (unsigned int)-1073741811;
  v10 = (char *)Win32AllocPoolWithQuota();
  if ( v10 )
  {
    v11 = (size_t)this[7];
    this[7] = (const void *)Size;
    v12 = v10;
    if ( Size - 16 < v11 )
    {
      v14 = Size;
      v13 = a4;
    }
    else
    {
      memmove(v10, this[6], v11);
      v13 = &a4[v11];
      v14 = (size_t)this[7] - v11;
      v12 = &v10[v11];
    }
    memmove(v12, v13, v14);
    if ( this[6] )
      Win32FreePool();
    this[6] = v10;
    goto LABEL_21;
  }
  return (unsigned int)-1073741801;
}
