/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryTable@@QEAA_NI_N@Z @ 0x1C002B280
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     HmgReplaceObject @ 0x1C0036E20 (HmgReplaceObject.c)
 * Callees:
 *     <none>
 */

char __fastcall GdiHandleEntryTable::AcquireEntryLock(GdiHandleEntryTable *this, unsigned int a2, char a3)
{
  char v3; // si
  __int64 v4; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // r13

  v3 = 0;
  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 5) )
    return 0;
  v7 = 8 * ((unsigned __int64)a2 >> 8);
  v8 = *(_QWORD *)(**((_QWORD **)this + 3) + v7) + 16LL * (unsigned __int8)a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  if ( a3
    || (unsigned int)v4 < *((_DWORD *)this + 5)
    && *(_QWORD *)(*(_QWORD *)(**((_QWORD **)this + 3) + v7) + 16LL * (unsigned __int8)v4 + 8) )
  {
    v3 = 1;
    *(_DWORD *)(*(_QWORD *)this + 24 * v4 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
