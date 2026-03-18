/*
 * XREFs of PnpCallDriverQueryServiceHelper @ 0x1404E2B34
 * Callers:
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E4C04 (_CmGetInstallerClassRegProp.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405724D8 (PipCallDriverAddDeviceQueryRoutine.c)
 */

__int64 __fastcall PnpCallDriverQueryServiceHelper(
        PVOID *a1,
        _DWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v9; // si
  __int64 v10; // r12
  PVOID v13; // rax
  int InstallerClassRegProp; // eax
  int v16; // ecx
  unsigned int v18; // edx
  _WORD *v19; // rdi
  int v20; // esi
  __int64 v21; // rbx
  __int64 v22; // rbx
  int v23; // r8d
  SIZE_T v24; // rdx
  PVOID PoolWithTag; // rax
  int DeviceRegProp; // eax
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+38h] BYREF

  v9 = a6;
  v10 = a5;
  LODWORD(NumberOfBytes) = *a2;
  v13 = *a1;
  if ( (_BYTE)a6 )
    InstallerClassRegProp = CmGetInstallerClassRegProp(
                              PiPnpRtlCtx,
                              a4,
                              a5,
                              a3,
                              (__int64)&a6,
                              (__int64)v13,
                              (__int64)&NumberOfBytes);
  else
    InstallerClassRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              a4,
                              a5,
                              a3,
                              (__int64)&a6,
                              (__int64)v13,
                              (__int64)&NumberOfBytes);
  v16 = InstallerClassRegProp;
  if ( InstallerClassRegProp == -1073741789 )
  {
    ExFreePoolWithTag(*a1, 0);
    v24 = (unsigned int)NumberOfBytes;
    *a2 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x6E657050u);
    *a1 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( v9 )
      DeviceRegProp = CmGetInstallerClassRegProp(
                        PiPnpRtlCtx,
                        a4,
                        v10,
                        a3,
                        (__int64)&a6,
                        (__int64)PoolWithTag,
                        (__int64)&NumberOfBytes);
    else
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        a4,
                        v10,
                        a3,
                        (__int64)&a6,
                        (__int64)PoolWithTag,
                        (__int64)&NumberOfBytes);
    v16 = DeviceRegProp;
  }
  if ( v16 >= 0 )
  {
    if ( a6 == 7 )
    {
      if ( *a2 < 2u )
        return (unsigned int)-1073741823;
      v18 = NumberOfBytes;
      if ( (unsigned int)NumberOfBytes < 2 )
      {
        return (unsigned int)-1073741823;
      }
      else
      {
        v19 = *a1;
        if ( *(_WORD *)*a1 )
        {
          v20 = a7;
          while ( 1 )
          {
            v21 = -1LL;
            do
              ++v21;
            while ( v19[v21] );
            v22 = (unsigned int)(v21 + 1);
            v23 = 2 * v22;
            if ( v18 < 2 * (int)v22 )
              break;
            LODWORD(NumberOfBytes) = v18 - v23;
            v16 = PipCallDriverAddDeviceQueryRoutine(1, (_DWORD)v19, v23, a8, v20);
            if ( v16 >= 0 )
            {
              v18 = NumberOfBytes;
              if ( (unsigned int)NumberOfBytes >= 2 )
              {
                v19 += v22;
                if ( *v19 )
                  continue;
              }
            }
            return (unsigned int)v16;
          }
          return 0;
        }
      }
    }
    else
    {
      return (unsigned int)PipCallDriverAddDeviceQueryRoutine(a6, (unsigned int)*a1, NumberOfBytes, a8, a7);
    }
  }
  return (unsigned int)v16;
}
