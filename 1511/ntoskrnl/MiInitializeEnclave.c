/*
 * XREFs of MiInitializeEnclave @ 0x140629DFC
 * Callers:
 *     NtInitializeEnclave @ 0x14062A548 (NtInitializeEnclave.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiReturnReservedEnclavePages @ 0x14062A128 (MiReturnReservedEnclavePages.c)
 *     KeInitializeEnclave @ 0x14069EFA0 (KeInitializeEnclave.c)
 */

__int64 __fastcall MiInitializeEnclave(__int64 a1, int a2)
{
  unsigned int *v3; // rax
  int v4; // r8d
  unsigned int *v5; // rdi
  int v7; // ebx
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = MiObtainReferencedVad(a1, &v8);
  v5 = v3;
  if ( !v3 )
    return v8;
  if ( (v3[12] & 7) == 3 && (v3[12] & 0x40000) != 0 && (v3[22] & 1) == 0 )
  {
    v7 = KeInitializeEnclave((__int64)(*((_QWORD *)v3 + 8) << 25) >> 16, a2, v4, a2 + 2048);
    if ( v7 >= 0 )
    {
      MiReturnReservedEnclavePages(v5);
      v5[22] |= 1u;
      v7 = 0;
    }
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad(v5);
  return (unsigned int)v7;
}
