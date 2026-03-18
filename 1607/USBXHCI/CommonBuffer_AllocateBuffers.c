/*
 * XREFs of CommonBuffer_AllocateBuffers @ 0x1C00080E0
 * Callers:
 *     CommonBuffer_AcquireBuffers @ 0x1C0007E44 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009010 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_WorkItem @ 0x1C001DC90 (CommonBuffer_WorkItem.c)
 *     CommonBuffer_Create @ 0x1C004B870 (CommonBuffer_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0007070 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddqDddd @ 0x1C001DF20 (WPP_RECORDER_SF_ddqDddd.c)
 */

__int64 __fastcall CommonBuffer_AllocateBuffers(
        __int64 *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned int v7; // r15d
  PDEVICE_OBJECT v11; // rax
  __int64 result; // rax
  unsigned int v13; // edi
  unsigned int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ebx
  KIRQL v19; // al
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rcx
  unsigned int v23; // edi
  _QWORD *v24; // rbx
  __int64 v25; // r15
  __int64 v26; // rax
  PWDF_DRIVER_GLOBALS v27; // rcx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // r9d
  _QWORD *v31; // rcx
  __int64 **v32; // rcx
  _QWORD *v33; // [rsp+20h] [rbp-91h]
  __int64 v34; // [rsp+28h] [rbp-89h]
  __int64 *v35; // [rsp+28h] [rbp-89h]
  __int64 v36; // [rsp+30h] [rbp-81h]
  __int64 v37; // [rsp+60h] [rbp-51h] BYREF
  int v38; // [rsp+68h] [rbp-49h]
  unsigned int v39; // [rsp+6Ch] [rbp-45h]
  __int64 v40; // [rsp+70h] [rbp-41h] BYREF
  __int64 i; // [rsp+78h] [rbp-39h]
  _QWORD v42[14]; // [rsp+80h] [rbp-31h] BYREF
  int v43; // [rsp+100h] [rbp+4Fh]
  KIRQL v45; // [rsp+110h] [rbp+5Fh]

  v7 = a2;
  v37 = 0LL;
  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1[1] + 64),
      5u,
      7u,
      0x12u,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
      a5,
      *a5);
    v11 = WPP_GLOBAL_Control;
  }
  if ( LOWORD(v11->DeviceType) )
  {
    LODWORD(v36) = *a6;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1[1] + 64),
      5u,
      7u,
      0x13u,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
      a6,
      v36);
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 6);
  result = ((a3 * v7) & 0xFFF) != 0;
  v13 = result + ((a3 * v7) >> 12);
  v39 = v13;
  if ( v7 == 4096 )
  {
    v14 = 1;
  }
  else
  {
    result = 0x1000 / v7;
    v14 = 0x1000 / v7;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v36) = v14;
    LODWORD(v34) = v13;
    result = WPP_RECORDER_SF_dd(
               *(_QWORD *)(a1[1] + 64),
               5u,
               7u,
               0x14u,
               (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
               v34,
               v36);
  }
  v43 = 0;
  if ( v13 )
  {
    v15 = 80LL * v14 + 24;
    for ( i = v15; ; v15 = i )
    {
      v16 = *a1;
      v42[5] = v15;
      v42[1] = 0LL;
      v42[2] = 0LL;
      v42[4] = 0LL;
      v35 = &v37;
      v42[6] = off_1C0043048;
      v42[0] = 56LL;
      v42[3] = 0x100000001LL;
      v40 = 8LL;
      v33 = v42;
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64 *))(WdfFunctions_01015 + 3064))(
              WdfDriverGlobals,
              v16,
              4096LL,
              &v40);
      v38 = v17;
      v18 = v17;
      if ( v17 < 0 )
        break;
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 15);
      v20 = WdfFunctions_01015;
      ++*((_DWORD *)a1 + 4);
      v45 = v19;
      v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v20 + 1616))(
              WdfDriverGlobals,
              v37,
              off_1C0043048);
      *(_BYTE *)(v21 + 16) = 1;
      v22 = *(__int64 **)(a7 + 8);
      if ( *v22 != a7 )
        __fastfail(3u);
      *(_QWORD *)v21 = a7;
      v23 = 0;
      *(_QWORD *)(v21 + 8) = v22;
      *v22 = v21;
      *(_QWORD *)(a7 + 8) = v21;
      if ( v14 )
      {
        v24 = (_QWORD *)(v21 + 72);
        while ( 1 )
        {
          v25 = v23 * v7;
          v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 176))(
                  WdfDriverGlobals,
                  v37);
          v27 = WdfDriverGlobals;
          *(v24 - 4) = v25 + v26;
          v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 184))(v27, v37);
          *(v24 - 3) = v28;
          if ( !v23 && (v28 & 0xFFF) != 0 )
            break;
          *(v24 - 3) = v25 + v28;
          *(v24 - 2) = v37;
          *((_DWORD *)v24 - 2) = a2;
          v31 = *(_QWORD **)(a4 + 8);
          if ( *v31 != a4 )
            __fastfail(3u);
          *(v24 - 6) = a4;
          *(v24 - 5) = v31;
          *v31 = v24 - 6;
          *(_QWORD *)(a4 + 8) = v24 - 6;
          v32 = (__int64 **)a1[26];
          if ( *v32 != a1 + 25 )
            __fastfail(3u);
          *v24 = a1 + 25;
          v24[1] = v32;
          *v32 = v24;
          a1[26] = (__int64)v24;
          ++*a5;
          ++*a6;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_ddqDddd(
              *(_QWORD *)(a1[1] + 64),
              *a6,
              v29,
              v30,
              (_DWORD)v33,
              v43,
              v23,
              *(v24 - 4),
              *((_DWORD *)v24 - 6),
              *((_DWORD *)v24 - 2),
              *a5,
              *a6);
          v7 = a2;
          ++v23;
          v24 += 10;
          if ( v23 >= v14 )
            goto LABEL_22;
        }
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1[1] + 64),
          3u,
          7u,
          0x16u,
          (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v37);
        v7 = a2;
        v37 = 0LL;
LABEL_22:
        v18 = v38;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 15, v45);
      result = (unsigned int)(v43 + 1);
      v43 = result;
      if ( (unsigned int)result >= v39 )
        goto LABEL_25;
    }
    LODWORD(v35) = v17;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1[1] + 64),
               3u,
               7u,
               0x15u,
               (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids,
               v35);
LABEL_25:
    if ( v18 < 0 )
    {
      if ( v37 )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    }
  }
  return result;
}
