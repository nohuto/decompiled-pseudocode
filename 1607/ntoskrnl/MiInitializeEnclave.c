/*
 * XREFs of MiInitializeEnclave @ 0x14065F64C
 * Callers:
 *     NtInitializeEnclave @ 0x14065FDAC (NtInitializeEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiReturnReservedEnclavePages @ 0x14065F980 (MiReturnReservedEnclavePages.c)
 *     KeInitializeEnclave @ 0x1406E6034 (KeInitializeEnclave.c)
 */

__int64 __fastcall MiInitializeEnclave(__int64 a1, int a2)
{
  unsigned __int64 v3; // rax
  int v4; // r8d
  unsigned __int64 v5; // rdi
  int v7; // ebx
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = MiObtainReferencedVad(a1, &v8);
  v5 = v3;
  if ( !v3 )
    return v8;
  if ( (*(_BYTE *)(v3 + 48) & 7) == 3 && (*(_DWORD *)(v3 + 48) & 0x40000) != 0 && (*(_DWORD *)(v3 + 88) & 1) == 0 )
  {
    v7 = KeInitializeEnclave((__int64)(*(_QWORD *)(v3 + 64) << 25) >> 16, a2, v4, a2 + 2048);
    if ( v7 >= 0 )
    {
      MiReturnReservedEnclavePages(v5);
      *(_DWORD *)(v5 + 88) |= 1u;
      v7 = 0;
    }
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad((char *)v5);
  return (unsigned int)v7;
}
