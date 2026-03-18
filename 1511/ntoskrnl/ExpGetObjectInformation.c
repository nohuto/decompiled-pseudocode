/*
 * XREFs of ExpGetObjectInformation @ 0x14066AED8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x1400E718C (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     ObGetObjectInformation @ 0x14062E584 (ObGetObjectInformation.c)
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
