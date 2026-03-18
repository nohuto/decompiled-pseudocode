/*
 * XREFs of ExpGetHandleInformationEx @ 0x1406EE448
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     ObGetHandleInformationEx @ 0x1406ABD38 (ObGetHandleInformationEx.c)
 */

__int64 __fastcall ExpGetHandleInformationEx(unsigned __int64 a1, unsigned int a2, int *a3)
{
  __int64 result; // rax
  unsigned int HandleInformation; // ebx
  _QWORD *v7; // [rsp+50h] [rbp+18h] BYREF
  struct _MDL *v8; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v7, &v8);
  if ( (int)result >= 0 )
  {
    HandleInformation = ObGetHandleInformationEx(v7, a2, a3);
    ExUnlockUserBuffer(v8);
    return HandleInformation;
  }
  return result;
}
