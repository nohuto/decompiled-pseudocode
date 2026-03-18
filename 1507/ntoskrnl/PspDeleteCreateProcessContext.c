/*
 * XREFs of PspDeleteCreateProcessContext @ 0x140450BA4
 * Callers:
 *     PspBuildCreateProcessContext @ 0x14044EA2C (PspBuildCreateProcessContext.c)
 *     NtCreateThreadEx @ 0x140450950 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 */

void __fastcall PspDeleteCreateProcessContext(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  v2 = *(void **)(a1 + 160);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = *(void **)(a1 + 168);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = *(void **)(a1 + 144);
  if ( v4 )
    ObfDereferenceObject(v4);
  v5 = *(void **)(a1 + 120);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x72437350u);
  v6 = *(void **)(a1 + 176);
  if ( v6 )
    ObCloseHandle(v6, 0);
  v7 = *(void **)(a1 + 184);
  if ( v7 )
    ObCloseHandle(v7, 0);
  v8 = *(void **)(a1 + 192);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 200), 0);
  v9 = *(void **)(a1 + 272);
  if ( v9 && v9 != (void *)(a1 + 256) )
    ExFreePoolWithTag(v9, 0);
  v10 = *(void **)(a1 + 288);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = *(void **)(a1 + 376);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 224));
}
