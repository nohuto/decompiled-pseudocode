/*
 * XREFs of NVMeFreeHostMemoryBuffer @ 0x1C000753C
 * Callers:
 *     NVMeControllerRemove @ 0x1C0007134 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C0007424 (NVMeControllerStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C000DFF0 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeFreeHostMemoryBuffer(__int64 a1)
{
  int *v1; // rdx
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 v5; // r11
  _DWORD *v6; // rdx
  __int64 result; // rax
  size_t Size; // [rsp+28h] [rbp-A0h]
  _BYTE v9[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v10[120]; // [rsp+38h] [rbp-90h] BYREF

  v1 = *(int **)(a1 + 3232);
  LODWORD(Size) = v1[1];
  NVMeSetHostMemoryBuffer(a1, 0, 0, *v1, v1 + 2, Size);
  v3 = *(_QWORD *)(a1 + 3232);
  v4 = *(_DWORD *)(v3 + 4) >> 4;
  if ( v4 > 8 )
    v4 = 8;
  if ( v4 )
  {
    v5 = v4;
    v6 = (_DWORD *)(v3 + 16);
    do
    {
      *(_QWORD *)&v9[(_QWORD)v6 - v3 - 16] = *((_QWORD *)v6 - 1);
      *(_DWORD *)&v10[(_QWORD)v6 - v3 - 16] = *v6;
      v6 += 4;
      --v5;
    }
    while ( v5 );
  }
  StorPortExtendedFunction(70LL, a1, v9);
  result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 3232));
  *(_QWORD *)(a1 + 3232) = 0LL;
  return result;
}
