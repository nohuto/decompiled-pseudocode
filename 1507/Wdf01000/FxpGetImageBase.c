/*
 * XREFs of FxpGetImageBase @ 0x1C00220F0
 * Callers:
 *     FxRegisterBugCheckCallback @ 0x1C0021EB4 (FxRegisterBugCheckCallback.c)
 * Callees:
 *     AuxKlibQueryModuleInformation @ 0x1C00D3060 (AuxKlibQueryModuleInformation.c)
 *     AuxKlibInitialize @ 0x1C00D30E8 (AuxKlibInitialize.c)
 */

int __fastcall FxpGetImageBase(_DRIVER_OBJECT *DriverObject, void **ImageBase, unsigned int *ImageSize)
{
  char *DriverStart; // rbx
  int result; // eax
  unsigned int v7; // edx
  unsigned int v8; // edi
  unsigned int *PoolWithTag; // rax
  unsigned int v10; // edx
  unsigned int *v11; // rbp
  int v12; // esi
  int v13; // edx
  unsigned int *v14; // rax
  char *v15; // r8
  unsigned int modulesSize; // [rsp+40h] [rbp+8h] BYREF

  modulesSize = 0;
  if ( !DriverObject || !ImageBase || !ImageSize )
    return -1073741811;
  DriverStart = (char *)DriverObject->DriverStart;
  result = AuxKlibInitialize();
  if ( result >= 0 )
  {
    result = AuxKlibQueryModuleInformation(&modulesSize, v7, 0LL);
    if ( result >= 0 )
    {
      if ( modulesSize )
      {
        v8 = modulesSize / 0x110;
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, modulesSize, 0x33304C57u);
        v11 = PoolWithTag;
        if ( PoolWithTag )
        {
          v12 = AuxKlibQueryModuleInformation(&modulesSize, v10, PoolWithTag);
          if ( v12 >= 0 )
          {
            v13 = 0;
            v14 = v11;
            if ( v8 )
            {
              while ( 1 )
              {
                v15 = *(char **)v14;
                if ( (unsigned __int64)DriverStart >= *(_QWORD *)v14 && DriverStart < &v15[v14[2]] )
                  break;
                v14 += 68;
                if ( ++v13 >= v8 )
                  goto LABEL_13;
              }
              *ImageBase = v15;
              v12 = 0;
              *ImageSize = v14[2];
            }
            else
            {
LABEL_13:
              v12 = -1073741275;
            }
          }
          ExFreePoolWithTag(v11, 0);
          return v12;
        }
        else
        {
          return -1073741670;
        }
      }
    }
  }
  return result;
}
