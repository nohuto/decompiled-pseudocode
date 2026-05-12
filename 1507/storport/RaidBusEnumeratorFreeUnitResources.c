/*
 * XREFs of RaidBusEnumeratorFreeUnitResources @ 0x1C0009B64
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C000A158 (RaidDeleteBusEnumerator.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidBusEnumeratorFreeUnitResources(__int64 a1)
{
  IRP *v2; // rcx
  char v3; // di
  __int64 v4; // rdx
  void *v5; // rcx
  void *v6; // rcx
  struct _MDL *v7; // rcx
  IRP *v8; // rcx
  __int64 v9; // rdx
  void *v10; // rcx
  void *v11; // rcx
  struct _MDL *v12; // rcx
  unsigned int i; // r8d
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char v16; // r10
  unsigned int j; // r8d
  __int64 v18; // rcx
  unsigned __int64 v19; // rax

  v2 = *(IRP **)(a1 + 8);
  v3 = 0;
  if ( v2 )
  {
    IoFreeIrp(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 2) == 40 )
    {
      *(_QWORD *)(v4 + 80) = 0LL;
      if ( !*(_DWORD *)(v4 + 20) )
      {
        for ( i = 0; i < *(_DWORD *)(v4 + 56); ++i )
        {
          v14 = *(unsigned int *)(v4 + 4LL * i + 120);
          if ( (unsigned int)v14 >= 0x80 )
          {
            v15 = *(unsigned int *)(v4 + 16);
            if ( (unsigned int)v14 <= (unsigned int)v15 )
            {
              if ( *(_DWORD *)(v14 + v4) == 64 && v14 + 40 <= v15 )
              {
                *(_QWORD *)((unsigned int)v14 + v4 + 16) = 0LL;
                v3 = 1;
              }
              if ( v3 )
                break;
            }
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(v4 + 48) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0x72536152u);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v5 = *(void **)(a1 + 32);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x4E536152u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v6 = *(void **)(a1 + 40);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
  }
  v7 = *(struct _MDL **)(a1 + 16);
  if ( v7 )
    IoFreeMdl(v7);
  v8 = *(IRP **)(a1 + 64);
  if ( v8 )
  {
    IoFreeIrp(v8);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v9 = *(_QWORD *)(a1 + 80);
  if ( v9 )
  {
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      *(_QWORD *)(v9 + 80) = 0LL;
      if ( !*(_DWORD *)(v9 + 20) )
      {
        v16 = 0;
        for ( j = 0; j < *(_DWORD *)(v9 + 56); ++j )
        {
          v18 = *(unsigned int *)(v9 + 4LL * j + 120);
          if ( (unsigned int)v18 >= 0x80 )
          {
            v19 = *(unsigned int *)(v9 + 16);
            if ( (unsigned int)v18 <= (unsigned int)v19 )
            {
              if ( *(_DWORD *)(v18 + v9) == 64 && v18 + 40 <= v19 )
              {
                *(_QWORD *)((unsigned int)v18 + v9 + 16) = 0LL;
                v16 = 1;
              }
              if ( v16 )
                break;
            }
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x72536152u);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v10 = *(void **)(a1 + 88);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x4E536152u);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v11 = *(void **)(a1 + 96);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x32316152u);
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_DWORD *)(a1 + 104) = 0;
  }
  v12 = *(struct _MDL **)(a1 + 72);
  if ( v12 )
    IoFreeMdl(v12);
}
