/*
 * XREFs of _CmGetDeviceContainerMappedPropertyKeys @ 0x1406DA584
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140513084 (_PnpDispatchDeviceContainer.c)
 *     _CmDeleteDeviceContainerWorker @ 0x1406D9F40 (_CmDeleteDeviceContainerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDeviceContainerMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  DEVPROPKEY **v7; // r9
  __int64 result; // rax
  unsigned int v9; // r8d
  DEVPROPKEY *v10; // r10
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ecx

  v7 = &off_14025D6F0;
  result = 0LL;
  *a7 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = *v7;
    if ( *v7 )
      break;
LABEL_8:
    ++v9;
    v7 += 2;
    if ( v9 >= 4 )
      goto LABEL_11;
  }
  if ( a5 )
  {
    v11 = *a7;
    if ( (unsigned int)v11 < a6 )
    {
      v12 = 5 * v11;
      *(DEVPROPGUID *)(a5 + 4 * v12) = v10->fmtid;
      *(_DWORD *)(a5 + 4 * v12 + 16) = v10->pid;
    }
  }
  v13 = *a7 + 1;
  if ( v13 >= *a7 )
  {
    *a7 = v13;
    result = 0LL;
    goto LABEL_8;
  }
  *a7 = -1;
  result = 3221225621LL;
  *a7 = 0;
LABEL_11:
  if ( (int)result >= 0 )
    return a6 < *a7 ? 0xC0000023 : 0;
  return result;
}
