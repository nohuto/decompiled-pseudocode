/*
 * XREFs of MiMapImageInSystemProcess @ 0x1406212CC
 * Callers:
 *     MiMapImageInSystemSpace @ 0x1403C72D4 (MiMapImageInSystemSpace.c)
 * Callees:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 */

__int64 __fastcall MiMapImageInSystemProcess(__int64 a1, char a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  __int64 v4; // r10
  struct _KPROCESS *Process; // r8
  _BYTE v9[40]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v10; // [rsp+88h] [rbp-20h]
  int v11; // [rsp+98h] [rbp-10h]
  __int64 v12; // [rsp+B0h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a1;
  *a4 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)a1 + 24LL), -1LL, -1LL);
  if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), -1LL, -1LL) >= 0x100000000LL
    || (char *)MmHighestUserAddress - 0x10000 < (char *)*a4 )
  {
    return 3221225503LL;
  }
  *a3 = 0LL;
  v12 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = 0x80000;
  v10 = 0LL;
  return MiMapViewOfImageSection(a1, (__int64)Process, Process, a3, &v12, a4, (__int64)v9, 2, 1, 0LL, 0, a2);
}
