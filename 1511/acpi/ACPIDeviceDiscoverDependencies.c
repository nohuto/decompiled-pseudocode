/*
 * XREFs of ACPIDeviceDiscoverDependencies @ 0x1C001CA0C
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x1C001C82C (ACPIDeviceRecordDependencies.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C000BC9C (ExAllocateFromNPagedLookasideList.c)
 */

void __fastcall ACPIDeviceDiscoverDependencies(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  char v16; // [rsp+50h] [rbp+8h] BYREF
  char v17; // [rsp+60h] [rbp+18h] BYREF

  v2 = a1[5];
  if ( *(_QWORD *)(v2 + 728) )
  {
    v5 = (_QWORD *)*a2;
    if ( (_QWORD *)*a2 != a2 )
    {
      while ( 1 )
      {
        v6 = v5[5];
        v7 = v5;
        v5 = (_QWORD *)*v5;
        if ( a1 == v7 )
          goto LABEL_5;
        if ( (v7[7] & 0x4000000) != 0 )
          goto LABEL_5;
        v8 = *(_QWORD *)(v6 + 728);
        if ( !v8 )
          goto LABEL_5;
        if ( (*(_BYTE *)(v2 + 904) & 0x40) == 0
          || (int)IoTestDependency(*(_QWORD *)(v2 + 728), v8, &v17, &v16) < 0
          || (v16 & 1) == 0 )
        {
          break;
        }
        v9 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
        if ( v9 )
        {
          v10 = (_QWORD *)a1[9];
          v11 = v9 + 2;
          v9[2] = a1 + 8;
          v9[3] = v10;
          if ( (_QWORD *)*v10 != a1 + 8 )
            __fastfail(3u);
          *v10 = v11;
          a1[9] = v11;
          v12 = v7 + 10;
          v13 = (_QWORD *)v7[11];
          *v9 = v7 + 10;
          v9[1] = v13;
          if ( (_QWORD *)*v13 != v7 + 10 )
            __fastfail(3u);
LABEL_23:
          *v13 = v9;
          v12[1] = v9;
        }
LABEL_5:
        if ( v5 == a2 )
          return;
      }
      if ( (*(_BYTE *)(v6 + 904) & 0x40) == 0 )
        goto LABEL_5;
      if ( (int)IoTestDependency(*(_QWORD *)(v6 + 728), *(_QWORD *)(v2 + 728), &v17, &v16) < 0 )
        goto LABEL_5;
      if ( (v16 & 1) == 0 )
        goto LABEL_5;
      v9 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
      if ( !v9 )
        goto LABEL_5;
      v14 = (_QWORD *)v7[9];
      v15 = v9 + 2;
      v9[2] = v7 + 8;
      v9[3] = v14;
      if ( (_QWORD *)*v14 != v7 + 8 )
        __fastfail(3u);
      *v14 = v15;
      v7[9] = v15;
      v12 = a1 + 10;
      v13 = (_QWORD *)a1[11];
      *v9 = a1 + 10;
      v9[1] = v13;
      if ( (_QWORD *)*v13 != a1 + 10 )
        __fastfail(3u);
      goto LABEL_23;
    }
  }
}
