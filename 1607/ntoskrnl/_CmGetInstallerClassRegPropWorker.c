/*
 * XREFs of _CmGetInstallerClassRegPropWorker @ 0x140504104
 * Callers:
 *     _CmGetInstallerClassRegProp @ 0x140504368 (_CmGetInstallerClassRegProp.c)
 * Callees:
 *     _MapCmClassPropertyToRegValue @ 0x1400C45C8 (_MapCmClassPropertyToRegValue.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404F7A60 (_CmOpenInstallerClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x1404FAC30 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x140501594 (_PnpCtxRegQueryValueIndirect.c)
 */

__int64 __fastcall CmGetInstallerClassRegPropWorker(
        __int64 *a1,
        int a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int *a7,
        __int16 a8)
{
  int v8; // ebx
  HANDLE v9; // rsi
  int v10; // edi
  unsigned int v11; // r13d
  const wchar_t *v12; // rax
  int ValueIndirect; // eax
  HANDLE v15; // rdx
  __int64 v16; // [rsp+28h] [rbp-38h]
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v18; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+90h] [rbp+30h]

  v19 = (__int64)a1;
  v8 = 0;
  Handle = 0LL;
  v9 = a3;
  v18 = 0LL;
  v10 = a4;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
  {
    v8 = -1073741811;
    goto LABEL_21;
  }
  v11 = *a7;
  if ( *a7 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  *a7 = 0;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 || !ClassPropertyRead[(int)a4] )
    return (unsigned int)-1073741264;
  if ( a3 )
  {
LABEL_11:
    if ( v10 == 8 || v10 == 13 || v10 <= 19 && v10 > 17 )
    {
      if ( !v9 )
        v9 = Handle;
    }
    else
    {
      v15 = Handle;
      if ( v9 )
        v15 = v9;
      v8 = PnpOpenPropertiesKey(a1, (__int64)v15, 0LL, 1u, 0, v16, &v18);
      if ( v8 < 0 )
      {
LABEL_37:
        v8 = -1073741275;
        goto LABEL_21;
      }
      v9 = v18;
    }
    v12 = MapCmClassPropertyToRegValue((__int64)a1, v10);
    if ( !v12 )
    {
      v8 = -1073741264;
      goto LABEL_21;
    }
    ValueIndirect = PnpCtxRegQueryValueIndirect(v19, (__int64)v9, (__int64)v12);
    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
    {
      if ( (int)(ValueIndirect + 0x80000000) < 0 || ValueIndirect == -1073741789 )
      {
        if ( v11 > 0x40 && v10 == 8 )
        {
          v8 = -1073741595;
        }
        else
        {
          *a7 = v11;
          *a5 = 0;
          if ( ValueIndirect || !v11 )
            v8 = -1073741789;
        }
      }
      else
      {
        v8 = ValueIndirect;
      }
      goto LABEL_21;
    }
    goto LABEL_37;
  }
  v8 = CmOpenInstallerClassRegKey((int)a1, a2, (__int64)ClassPropertyRead, a4, 33554433, 0, (__int64)&Handle, 0LL);
  if ( v8 >= 0 )
  {
    a1 = (__int64 *)v19;
    goto LABEL_11;
  }
LABEL_21:
  if ( v18 )
    ZwClose(v18);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
