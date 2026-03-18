/*
 * XREFs of ACPIDeviceDiscoverDependencies @ 0x1C0025B04
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x1C0025914 (ACPIDeviceRecordDependencies.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C000CFF4 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 */

void __fastcall ACPIDeviceDiscoverDependencies(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edx
  _QWORD *v11; // rax
  int v12; // edx
  _QWORD *v13; // r8
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  int v17; // r9d
  int v18; // eax
  int v19; // edx
  _QWORD *v20; // r8
  _QWORD *v21; // rdx
  char v22; // [rsp+70h] [rbp+8h] BYREF
  char v23; // [rsp+80h] [rbp+18h] BYREF

  v2 = a1[5];
  if ( *(_QWORD *)(v2 + 736) )
  {
    v5 = (_QWORD *)*a2;
    while ( v5 != a2 )
    {
      v6 = v5[5];
      v7 = v5;
      v5 = (_QWORD *)*v5;
      if ( a1 == v7 )
        continue;
      if ( (v7[7] & 0x4000000) != 0 )
        continue;
      v8 = *(_QWORD *)(v6 + 736);
      if ( !v8 )
        continue;
      if ( (*(_BYTE *)(v2 + 912) & 0x40) != 0 )
      {
        v9 = IoTestDependency(*(_QWORD *)(v2 + 736), v8, &v23, &v22);
        if ( v9 < 0 )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            21,
            20,
            (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
            v9);
        }
        else if ( (v22 & 1) != 0 )
        {
          v11 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( !v11 )
          {
            v17 = 19;
LABEL_27:
            LOBYTE(v12) = 2;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v12,
              21,
              v17,
              (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids);
            continue;
          }
          v13 = (_QWORD *)a1[9];
          v14 = v11 + 2;
          if ( (_QWORD *)*v13 != a1 + 8 )
            __fastfail(3u);
          *v14 = a1 + 8;
          v11[3] = v13;
          *v13 = v14;
          a1[9] = v14;
          v15 = v7 + 10;
          v16 = (_QWORD *)v7[11];
          if ( (_QWORD *)*v16 != v7 + 10 )
            __fastfail(3u);
LABEL_16:
          *v11 = v15;
          v11[1] = v16;
          *v16 = v11;
          v15[1] = v11;
          continue;
        }
      }
      if ( (*(_BYTE *)(v6 + 912) & 0x40) != 0 )
      {
        v18 = IoTestDependency(*(_QWORD *)(v6 + 736), *(_QWORD *)(v2 + 736), &v23, &v22);
        if ( v18 < 0 )
        {
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            21,
            22,
            (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
            v18);
          continue;
        }
        if ( (v22 & 1) != 0 )
        {
          v11 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( !v11 )
          {
            v17 = 21;
            goto LABEL_27;
          }
          v20 = (_QWORD *)v7[9];
          v21 = v11 + 2;
          if ( (_QWORD *)*v20 != v7 + 8 )
            __fastfail(3u);
          *v21 = v7 + 8;
          v11[3] = v20;
          *v20 = v21;
          v7[9] = v21;
          v15 = a1 + 10;
          v16 = (_QWORD *)a1[11];
          if ( (_QWORD *)*v16 != a1 + 10 )
            __fastfail(3u);
          goto LABEL_16;
        }
      }
    }
  }
}
