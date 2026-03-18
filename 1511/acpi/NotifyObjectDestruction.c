/*
 * XREFs of NotifyObjectDestruction @ 0x1C0044B70
 * Callers:
 *     ParseUnload @ 0x1C0049D10 (ParseUnload.c)
 * Callees:
 *     NewObjOwner @ 0x1C0005EB8 (NewObjOwner.c)
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     MarkNativeObjectsDefunct @ 0x1C00430C4 (MarkNativeObjectsDefunct.c)
 *     MigrateDefunctObjectsToNewOwner @ 0x1C0044ABC (MigrateDefunctObjectsToNewOwner.c)
 */

__int64 __fastcall NotifyObjectDestruction(__int64 a1)
{
  __int64 result; // rax
  KIRQL v3; // al
  __int64 v4; // rbx
  __int16 v5; // cx
  __int64 v6; // rdi
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // r15
  __int64 v10; // rbx
  __int16 v11; // ax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  char v16; // [rsp+68h] [rbp+10h] BYREF
  struct _EX_RUNDOWN_REF *v17; // [rsp+70h] [rbp+18h] BYREF

  result = NewObjOwner(gpheapGlobal, &v17);
  if ( (int)result >= 0 )
  {
    v3 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      do
      {
        v5 = *(_WORD *)(v4 + 58);
        v6 = *(_QWORD *)(v4 + 48);
        if ( v5 == 6 || (unsigned __int16)(v5 - 11) <= 2u )
        {
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v3);
          ((void (__fastcall *)(__int64, __int64, _QWORD))ghDestroyObj)(6LL, v4 + 112, *(unsigned __int16 *)(v4 + 58));
          v3 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        }
        v4 = v6;
      }
      while ( v6 );
    }
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v3);
    ((void (__fastcall *)(__int64, char *))ghDestroyObj)(1LL, &v16);
    v7 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v8 = *(_QWORD *)(a1 + 24);
    v9 = v7;
    while ( v8 )
    {
      *(_WORD *)(v8 + 56) |= 4u;
      v8 = *(_QWORD *)(v8 + 48);
    }
    MarkNativeObjectsDefunct(0LL, a1);
    MigrateDefunctObjectsToNewOwner(gpNativeNameSpaceOwner, v17);
    MigrateDefunctObjectsToNewOwner((__int64)v17, (struct _EX_RUNDOWN_REF *)a1);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 40));
    *(_DWORD *)(a1 + 48) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 40));
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 )
    {
      do
      {
        v11 = *(_WORD *)(v10 + 58);
        v12 = *(_QWORD *)(v10 + 48);
        if ( v11 == 6 || (unsigned __int16)(v11 - 11) <= 2u )
        {
          v14 = *(_QWORD *)(v10 + 16);
          if ( v14 )
          {
            ListRemoveEntry((_QWORD **)v10, v14 + 24);
            *(_QWORD *)(v10 + 16) = 0LL;
          }
          v15 = *(_QWORD *)(v10 + 24);
          if ( v15 )
          {
            do
            {
              if ( (*(_BYTE *)(v15 + 56) & 4) == 0 )
                ((void (__fastcall *)(__int64, __int64, _QWORD))ghDestroyObj)(4LL, v15, 0LL);
              v15 = *(_QWORD *)(v15 + 8);
            }
            while ( v15 != *(_QWORD *)(v10 + 24) );
          }
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 40));
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 40));
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v9);
          ((void (__fastcall *)(__int64, __int64, _QWORD))ghDestroyObj)(2LL, v10 + 112, *(unsigned __int16 *)(v10 + 58));
          v9 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        }
        else
        {
          v13 = *(_QWORD *)(v10 + 16);
          if ( !v13 || (*(_BYTE *)(v13 + 56) & 4) == 0 && (*(_WORD *)(v10 + 56) & 0x800) == 0 )
            ((void (__fastcall *)(__int64, __int64))ghDestroyObj)(5LL, v10);
        }
        v10 = v12;
      }
      while ( v12 );
    }
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v9);
    return ((__int64 (__fastcall *)(__int64, char *))ghDestroyObj)(3LL, &v16);
  }
  return result;
}
