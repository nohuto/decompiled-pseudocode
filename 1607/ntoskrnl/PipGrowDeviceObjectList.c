/*
 * XREFs of PipGrowDeviceObjectList @ 0x14064BCB4
 * Callers:
 *     PipDeviceObjectListAdd @ 0x14048607C (PipDeviceObjectListAdd.c)
 * Callees:
 *     PipFreeDeviceObjectList @ 0x140485E14 (PipFreeDeviceObjectList.c)
 *     PiAllocateDeviceObjectList @ 0x140485E34 (PiAllocateDeviceObjectList.c)
 *     PipDeviceObjectListAdd @ 0x14048607C (PipDeviceObjectListAdd.c)
 *     PipDeviceObjectListElementAt @ 0x1404CFEE0 (PipDeviceObjectListElementAt.c)
 */

__int64 __fastcall PipGrowDeviceObjectList(unsigned int **a1)
{
  unsigned int *v1; // rdi
  unsigned int v2; // ebx
  int v4; // edx
  unsigned int *DeviceObjectList; // rax
  unsigned int i; // r14d
  int v8; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+38h] BYREF
  unsigned int *v10; // [rsp+70h] [rbp+40h] BYREF
  void *v11; // [rsp+78h] [rbp+48h] BYREF

  v1 = *a1;
  v2 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v9 = 0;
  v4 = 2 * v1[1];
  v8 = 0;
  DeviceObjectList = PiAllocateDeviceObjectList(v1[3], v4);
  v10 = DeviceObjectList;
  if ( DeviceObjectList )
  {
    for ( i = 0; i < *v1; ++i )
    {
      PipDeviceObjectListElementAt(v1, i, &v11, &v9, &v8);
      PipDeviceObjectListAdd(&v10, v11, v9, v8);
    }
    PipFreeDeviceObjectList(v1);
    DeviceObjectList = v10;
  }
  else
  {
    v2 = -1073741670;
  }
  *a1 = DeviceObjectList;
  return v2;
}
