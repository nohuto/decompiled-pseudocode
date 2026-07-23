/*
 * XREFs of SepMakeLogonSessionsSiblings @ 0x140693944
 * Callers:
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x140693C2C (SepRmMakeLogonSessionsSiblingsWrkr.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SepMakeLogonSessionsSiblings(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edi
  char v7; // bl
  __int64 **v8; // rbp
  __int64 **v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v11; // r13
  struct _KTHREAD *v12; // rax
  struct _ERESOURCE *v13; // rcx
  struct _KTHREAD *v14; // rax
  __int64 *v15; // rdi
  unsigned int v16; // esi
  __int64 *i; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _ERESOURCE *Resource; // [rsp+50h] [rbp+8h]

  v4 = (unsigned int)(1529154084 * *a2) >> 28;
  v5 = (unsigned int)(1529154084 * *a1) >> 28;
  v6 = (unsigned int)(1529154084 * *a1) >> 28;
  v7 = (unsigned int)(1529154084 * *a2) >> 28;
  v8 = (__int64 **)(SepLogonSessions + 8 * v4);
  v9 = (__int64 **)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (unsigned int)v5 >= (unsigned int)v4 )
  {
    Resource = &SepRmDbLock + (v4 & 3);
    ExAcquireResourceExclusiveLite(Resource, 1u);
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v11 = &SepRmDbLock + (v6 & 3);
    v13 = v11;
  }
  else
  {
    v11 = &SepRmDbLock + (v6 & 3);
    ExAcquireResourceExclusiveLite(v11, 1u);
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    Resource = &SepRmDbLock + (v7 & 3);
    v13 = Resource;
  }
  ExAcquireResourceExclusiveLite(v13, 1u);
  v15 = *v9;
  v16 = 0;
  while ( v15 && (v15[20] != PsGetCurrentServerSilo() || *a1 != *((_DWORD *)v15 + 2) || a1[1] != *((_DWORD *)v15 + 3)) )
    v15 = (__int64 *)*v15;
  for ( i = *v8;
        i && (i[20] != PsGetCurrentServerSilo() || *a2 != *((_DWORD *)i + 2) || a2[1] != *((_DWORD *)i + 3));
        i = (__int64 *)*i )
  {
    ;
  }
  if ( v15 && i )
  {
    v18 = *(_QWORD *)a2;
    *((_DWORD *)v15 + 8) |= 0x40u;
    v15[21] = v18;
    v19 = *(_QWORD *)a1;
    *((_DWORD *)i + 8) |= 0x40u;
    i[21] = v19;
  }
  else
  {
    v16 = -1073741729;
  }
  ExReleaseResourceLite(v11);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
  ExReleaseResourceLite(Resource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
  return v16;
}
