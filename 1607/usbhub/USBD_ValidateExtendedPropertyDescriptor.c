/*
 * XREFs of USBD_ValidateExtendedPropertyDescriptor @ 0x1C003FF88
 * Callers:
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0040714 (UsbhInstallMsOsExtendedProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBD_ValidateExtendedPropertyDescriptor(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  int v4; // r11d
  __int64 v5; // r10
  unsigned __int16 v6; // bx
  unsigned int *v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r10
  char *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // r9

  v2 = 0;
  v4 = 0;
  if ( a2 < 0xA )
    return (unsigned int)-1073741811;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v5 = *a1;
  if ( (unsigned int)v5 > a2 || (unsigned int)(v5 - 10) > 0xFF6 || *((_WORD *)a1 + 3) != 5 )
    return (unsigned int)-1073741811;
  v6 = *((_WORD *)a1 + 4);
  if ( v6 )
  {
    v7 = (unsigned int *)((char *)a1 + 10);
    v8 = (unsigned __int64)a1 + v5;
    if ( v7 < (unsigned int *)((char *)a1 + v5) )
    {
      while ( (unsigned __int64)v7 + 14 <= v8 )
      {
        v9 = *v7;
        v10 = (char *)v7 + v9;
        if ( (unsigned __int64)v7 + v9 > v8 )
          break;
        if ( (unsigned int)v9 < 0xE )
          break;
        v11 = v7[1];
        if ( !v11 )
          break;
        if ( v11 > 7 )
          break;
        v12 = *((unsigned __int16 *)v7 + 4);
        if ( (int)v12 + 14 > (unsigned int)v9
          || !*((_WORD *)v7 + 4)
          || (v12 & 1) != 0
          || !*((_WORD *)v7 + 5)
          || *((_WORD *)v7 + ((unsigned __int64)*((unsigned __int16 *)v7 + 4) >> 1) + 4)
          || *(unsigned int *)((char *)v7 + v12 + 10) + (_DWORD)v12 + 14 > (unsigned int)v9 )
        {
          break;
        }
        if ( ++v4 != v6 )
        {
          v7 = (unsigned int *)((char *)v7 + v9);
          if ( (unsigned __int64)v10 < v8 )
            continue;
        }
        goto LABEL_21;
      }
      return (unsigned int)-1073741811;
    }
LABEL_21:
    if ( v4 != v6 )
      return (unsigned int)-1073741811;
  }
  return v2;
}
