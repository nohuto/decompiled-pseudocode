/*
 * XREFs of PnpGetServiceStartType @ 0x1405728B0
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405724D8 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall PnpGetServiceStartType(const WCHAR *a1, void *a2, _DWORD *a3)
{
  int Value; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  HANDLE Handle; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+70h] [rbp+30h] BYREF
  int v17; // [rsp+78h] [rbp+38h] BYREF

  Handle = 0LL;
  *a3 = 4;
  if ( (ExpManufacturingInformation & 1) != 0 )
  {
    v8 = qword_14036E100;
    if ( qword_14036E100 )
    {
      if ( qword_14036E100 == -1 )
        goto LABEL_2;
      v10 = 0;
    }
    else
    {
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v9 = **(_QWORD **)&PiPnpRtlCtx;
      else
        v9 = 0LL;
      v10 = SysCtxRegOpenKey(
              v9,
              (char *)0x80000002LL,
              L"System\\CurrentControlSet\\Control\\ManufacturingMode\\Current\\Services\\",
              0,
              0x20019u,
              (HANDLE *)&qword_14036E100);
      if ( v10 == -1073741772 )
      {
        v8 = -1LL;
        qword_14036E100 = -1LL;
      }
      else
      {
        v8 = qword_14036E100;
      }
    }
    if ( v10 >= 0 )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v11 = **(_QWORD **)&PiPnpRtlCtx;
      else
        v11 = 0LL;
      if ( (int)SysCtxRegOpenKey(v11, (char *)v8, a1, 0, 0x20019u, &Handle) >= 0 )
      {
        v16 = 4;
        Value = PnpCtxRegQueryValue((__int64)a1, Handle, (__int64)L"Start", (__int64)&v17, (__int64)a3, (__int64)&v16);
        if ( Value >= 0 && v17 == 4 )
          goto LABEL_5;
      }
      v12 = qword_14036E0F8;
      if ( qword_14036E0F8 )
      {
        if ( qword_14036E0F8 == -1 )
          goto LABEL_2;
        v14 = 0;
      }
      else
      {
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v13 = **(_QWORD **)&PiPnpRtlCtx;
        else
          v13 = 0LL;
        v14 = SysCtxRegOpenKey(v13, (char *)qword_14036E100, L"*Driver", 0, 0x20019u, (HANDLE *)&qword_14036E0F8);
        if ( v14 == -1073741772 )
        {
          v12 = -1LL;
          qword_14036E0F8 = -1LL;
        }
        else
        {
          v12 = qword_14036E0F8;
        }
      }
      if ( v14 >= 0 )
      {
        v16 = 4;
        Value = PnpCtxRegQueryValue(
                  (__int64)a1,
                  (void *)v12,
                  (__int64)L"Start",
                  (__int64)&v17,
                  (__int64)a3,
                  (__int64)&v16);
        if ( Value >= 0 && v17 == 4 )
          goto LABEL_5;
      }
    }
  }
LABEL_2:
  v16 = 4;
  Value = PnpCtxRegQueryValue((__int64)a1, a2, (__int64)L"Start", (__int64)&v17, (__int64)a3, (__int64)&v16);
  if ( Value >= 0 && v17 != 4 )
  {
    Value = -1073741772;
    *a3 = 4;
  }
LABEL_5:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)Value;
}
