/*
 * XREFs of AMLIGetNameSpaceObjectPath @ 0x1C00167B0
 * Callers:
 *     ACPIAmliBuildObjectPathname @ 0x1C0016898 (ACPIAmliBuildObjectPathname.c)
 *     AcpiDiagTraceDeviceReset @ 0x1C0033838 (AcpiDiagTraceDeviceReset.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C0014710 (GetObjectPathNoLock.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectPath(__int64 *a1, void *a2, _DWORD *a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  KIRQL v7; // bl
  _QWORD *ObjectPathNoLock; // rdi
  __int64 v9; // rbx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8

  v5 = -1073741823;
  if ( a1 )
  {
    v6 = *a1;
    v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    ObjectPathNoLock = GetObjectPathNoLock(v6);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
    if ( ObjectPathNoLock )
    {
      v9 = -1LL;
      if ( a2 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)ObjectPathNoLock + v11) );
        if ( (unsigned int)*a3 >= (unsigned __int64)(v11 + 1) )
        {
          v12 = -1LL;
          do
            ++v12;
          while ( *((_BYTE *)ObjectPathNoLock + v12) );
          memmove(a2, ObjectPathNoLock, v12 + 1);
          do
            ++v9;
          while ( *((_BYTE *)ObjectPathNoLock + v9) );
          v10 = v9 + 1;
          v5 = 0;
          goto LABEL_14;
        }
        do
          ++v9;
        while ( *((_BYTE *)ObjectPathNoLock + v9) );
      }
      else
      {
        do
          ++v9;
        while ( *((_BYTE *)ObjectPathNoLock + v9) );
      }
      v5 = -1073741789;
      v10 = v9 + 1;
LABEL_14:
      *a3 = v10;
      ExFreePoolWithTag(ObjectPathNoLock, 0);
    }
  }
  return v5;
}
