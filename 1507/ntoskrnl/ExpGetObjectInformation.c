/*
 * XREFs of ExpGetObjectInformation @ 0x1406EE520
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     ObGetObjectInformation @ 0x1406AC304 (ObGetObjectInformation.c)
 */

__int64 __fastcall ExpGetObjectInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int ObjectInformation; // ebx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  struct _MDL *v9; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v8, &v9);
  if ( (int)result >= 0 )
  {
    ObjectInformation = ObGetObjectInformation(a1, v8, a2, a3);
    ExUnlockUserBuffer(v9);
    return ObjectInformation;
  }
  return result;
}
