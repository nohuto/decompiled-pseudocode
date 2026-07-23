/*
 * XREFs of IopFreePoDeviceNotifyListHead @ 0x1403D0960
 * Callers:
 *     IoFreePoDeviceNotifyList @ 0x1403D08F8 (IoFreePoDeviceNotifyList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreePoDeviceNotifyListHead(__int64 **a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  void *v4; // rcx
  void *v5; // rcx

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (__int64 *)a1 )
      break;
    v3 = *v2;
    if ( (__int64 **)v2[1] != a1 || *(__int64 **)(v3 + 8) != v2 )
      __fastfail(3u);
    *a1 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = a1;
    ObfDereferenceObject((PVOID)v2[8]);
    ObfDereferenceObject((PVOID)v2[6]);
    v4 = (void *)v2[9];
    if ( v4 )
      ExFreePoolWithTag(v4, 0x72775044u);
    v5 = (void *)v2[10];
    if ( v5 )
      ExFreePoolWithTag(v5, 0x72775044u);
  }
}
