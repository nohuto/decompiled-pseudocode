/*
 * XREFs of PnpCallDriverQueryServiceHelper @ 0x1403F4410
 * Callers:
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E72F8 (_CmGetInstallerClassRegProp.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538F54 (PipCallDriverAddDeviceQueryRoutine.c)
 */

__int64 __fastcall PnpCallDriverQueryServiceHelper(
        __int64 *a1,
        _DWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v9; // si
  int v10; // r12d
  int InstallerClassRegProp; // eax
  int v15; // ecx
  unsigned int v17; // edx
  _WORD *v18; // rdi
  int v19; // esi
  __int64 v20; // rbx
  __int64 v21; // rbx
  int v22; // r8d
  SIZE_T v23; // rdx
  PVOID PoolWithTag; // rax
  int DeviceRegProp; // eax
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+38h] BYREF

  v9 = a6;
  v10 = a5;
  LODWORD(NumberOfBytes) = *a2;
  if ( (_BYTE)a6 )
    InstallerClassRegProp = CmGetInstallerClassRegProp(
                              PiPnpRtlCtx,
                              a4,
                              a5,
                              a3,
                              (__int64)&a6,
                              *a1,
                              (__int64)&NumberOfBytes);
  else
    InstallerClassRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, a4, a5, a3, (__int64)&a6, *a1, (__int64)&NumberOfBytes, 0);
  v15 = InstallerClassRegProp;
  if ( InstallerClassRegProp == -1073741789 )
  {
    ExFreePoolWithTag((PVOID)*a1, 0);
    v23 = (unsigned int)NumberOfBytes;
    *a2 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v23, 0x6E657050u);
    *a1 = (__int64)PoolWithTag;
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
                        PiPnpRtlCtx,
                        a4,
                        v10,
                        a3,
                        (__int64)&a6,
                        (__int64)PoolWithTag,
                        (__int64)&NumberOfBytes,
                        0);
    v15 = DeviceRegProp;
  }
  if ( v15 >= 0 )
  {
    if ( a6 == 7 )
    {
      if ( *a2 < 2u )
        return (unsigned int)-1073741823;
      v17 = NumberOfBytes;
      if ( (unsigned int)NumberOfBytes < 2 )
      {
        return (unsigned int)-1073741823;
      }
      else
      {
        v18 = (_WORD *)*a1;
        if ( *(_WORD *)*a1 )
        {
          v19 = a7;
          while ( 1 )
          {
            v20 = -1LL;
            do
              ++v20;
            while ( v18[v20] );
            v21 = (unsigned int)(v20 + 1);
            v22 = 2 * v21;
            if ( v17 < 2 * (int)v21 )
              break;
            LODWORD(NumberOfBytes) = v17 - v22;
            v15 = PipCallDriverAddDeviceQueryRoutine(1, (_DWORD)v18, v22, a8, v19);
            if ( v15 >= 0 )
            {
              v17 = NumberOfBytes;
              if ( (unsigned int)NumberOfBytes >= 2 )
              {
                v18 += v21;
                if ( *v18 )
                  continue;
              }
            }
            return (unsigned int)v15;
          }
          return 0;
        }
      }
    }
    else
    {
      return (unsigned int)PipCallDriverAddDeviceQueryRoutine(a6, *a1, NumberOfBytes, a8, a7);
    }
  }
  return (unsigned int)v15;
}
