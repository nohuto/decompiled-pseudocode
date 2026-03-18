/*
 * XREFs of PspServerSiloDelete @ 0x1406C2868
 * Callers:
 *     PsSetSiloObjectServerPropertyByPointer @ 0x14024411C (PsSetSiloObjectServerPropertyByPointer.c)
 *     PspSiloDelete @ 0x1406C2AE8 (PspSiloDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PspNotifySeverSiloDeletion @ 0x1406C2388 (PspNotifySeverSiloDeletion.c)
 */

void __fastcall PspServerSiloDelete(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  v4 = a1[32];
  if ( v4 )
  {
    PspNotifySeverSiloDeletion(a1, a2, a3, a4);
    v6 = *(void **)(v4 + 64);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x416C6953u);
      *(_QWORD *)(v4 + 64) = 0LL;
    }
    v7 = *(void **)(v4 + 40);
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      *(_QWORD *)(v4 + 40) = 0LL;
    }
    v8 = *(void **)(v4 + 48);
    if ( v8 )
    {
      ObfDereferenceObject(v8);
      *(_QWORD *)(v4 + 48) = 0LL;
    }
    v9 = *(void **)(v4 + 24);
    if ( v9 )
    {
      ZwClose(v9);
      *(_QWORD *)(v4 + 24) = 0LL;
    }
    v10 = *(void **)(v4 + 56);
    if ( v10 )
    {
      ObfDereferenceObject(v10);
      *(_QWORD *)(v4 + 56) = 0LL;
    }
    v11 = *(void **)(v4 + 120);
    if ( v11 )
    {
      ObfDereferenceObject(v11);
      *(_QWORD *)(v4 + 120) = 0LL;
    }
    RtlFreeAnsiString((PUNICODE_STRING)(v4 + 8));
    ExFreePoolWithTag((PVOID)v4, 0x476C6953u);
    a1[32] = 0LL;
  }
}
