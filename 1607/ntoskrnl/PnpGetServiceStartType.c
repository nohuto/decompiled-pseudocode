/*
 * XREFs of PnpGetServiceStartType @ 0x14053947C
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538F54 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall PnpGetServiceStartType(__int64 a1, void *a2, _DWORD *a3)
{
  int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  HANDLE Handle[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+30h] BYREF
  int v17; // [rsp+78h] [rbp+38h] BYREF

  Handle[0] = 0LL;
  *a3 = 4;
  if ( (ExpManufacturingInformation & 1) != 0 )
  {
    v8 = qword_140342100;
    if ( qword_140342100 )
    {
      if ( qword_140342100 == -1 )
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
              2147483650LL,
              (__int64)L"System\\CurrentControlSet\\Control\\ManufacturingMode\\Current\\Services\\",
              0,
              0x20019u,
              (__int64)&qword_140342100);
      if ( v10 == -1073741772 )
      {
        v8 = -1LL;
        qword_140342100 = -1LL;
      }
      else
      {
        v8 = qword_140342100;
      }
    }
    if ( v10 >= 0 )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v11 = **(_QWORD **)&PiPnpRtlCtx;
      else
        v11 = 0LL;
      if ( (int)SysCtxRegOpenKey(v11, v8, a1, 0, 0x20019u, (__int64)Handle) >= 0 )
      {
        v16 = 4;
        v6 = PnpCtxRegQueryValue(a1, Handle[0], L"Start", &v17, a3, &v16);
        if ( v6 >= 0 && v17 == 4 )
          goto LABEL_5;
      }
      v12 = qword_1403420F8;
      if ( qword_1403420F8 )
      {
        if ( qword_1403420F8 == -1 )
          goto LABEL_2;
        v14 = 0;
      }
      else
      {
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v13 = **(_QWORD **)&PiPnpRtlCtx;
        else
          v13 = 0LL;
        v14 = SysCtxRegOpenKey(v13, qword_140342100, (__int64)L"*Driver", 0, 0x20019u, (__int64)&qword_1403420F8);
        if ( v14 == -1073741772 )
        {
          v12 = -1LL;
          qword_1403420F8 = -1LL;
        }
        else
        {
          v12 = qword_1403420F8;
        }
      }
      if ( v14 >= 0 )
      {
        v16 = 4;
        v6 = PnpCtxRegQueryValue(a1, (void *)v12, L"Start", &v17, a3, &v16);
        if ( v6 >= 0 && v17 == 4 )
          goto LABEL_5;
      }
    }
  }
LABEL_2:
  v16 = 4;
  v6 = PnpCtxRegQueryValue(a1, a2, L"Start", &v17, a3, &v16);
  if ( v6 >= 0 && v17 != 4 )
  {
    v6 = -1073741772;
    *a3 = 4;
  }
LABEL_5:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v6;
}
