/*
 * XREFs of CommonBuffer_AllocateBuffers @ 0x1C0009530
 * Callers:
 *     CommonBuffer_AcquireBuffers @ 0x1C0009294 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009960 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_WorkItem @ 0x1C001D830 (CommonBuffer_WorkItem.c)
 *     CommonBuffer_Create @ 0x1C004B100 (CommonBuffer_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00079B0 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddqDddd @ 0x1C001DAC0 (WPP_RECORDER_SF_ddqDddd.c)
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
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  KIRQL v18; // al
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 *v21; // rcx
  unsigned int v22; // edi
  _QWORD *v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rax
  PWDF_DRIVER_GLOBALS v26; // rcx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  __int64 **v33; // rcx
  _QWORD *v34; // [rsp+20h] [rbp-91h]
  __int64 v35; // [rsp+28h] [rbp-89h]
  __int64 *v36; // [rsp+28h] [rbp-89h]
  __int64 v37; // [rsp+30h] [rbp-81h]
  __int64 v38; // [rsp+60h] [rbp-51h] BYREF
  int v39; // [rsp+68h] [rbp-49h]
  __int64 v40; // [rsp+70h] [rbp-41h] BYREF
  int v41; // [rsp+78h] [rbp-39h]
  unsigned int v42; // [rsp+7Ch] [rbp-35h]
  __int64 i; // [rsp+80h] [rbp-31h]
  _QWORD v44[13]; // [rsp+88h] [rbp-29h] BYREF
  unsigned int v45; // [rsp+100h] [rbp+4Fh]
  KIRQL v47; // [rsp+110h] [rbp+5Fh]

  v7 = a2;
  v38 = 0LL;
  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1[1] + 64),
      5u,
      7u,
      0x12u,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
      a5,
      *a5);
    v11 = WPP_GLOBAL_Control;
  }
  if ( LOWORD(v11->DeviceType) )
  {
    LODWORD(v37) = *a6;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1[1] + 64),
      5u,
      7u,
      0x13u,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
      a6,
      v37);
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 6);
  result = ((a3 * v7) & 0xFFF) != 0;
  v13 = result + ((a3 * v7) >> 12);
  v42 = v13;
  if ( v7 == 4096 )
  {
    v14 = 1;
    v45 = 1;
  }
  else
  {
    result = 0x1000 / v7;
    v14 = 0x1000 / v7;
    v45 = 0x1000 / v7;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v37) = v14;
    LODWORD(v35) = v13;
    result = WPP_RECORDER_SF_dd(
               *(_QWORD *)(a1[1] + 64),
               5u,
               7u,
               0x14u,
               (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
               v35,
               v37);
  }
  v39 = 0;
  if ( v13 )
  {
    v15 = 80LL * v14 + 24;
    for ( i = v15; ; v15 = i )
    {
      v16 = *a1;
      v44[5] = v15;
      v44[1] = 0LL;
      v44[2] = 0LL;
      v44[4] = 0LL;
      v36 = &v38;
      v44[6] = off_1C0041278;
      v44[0] = 56LL;
      v44[3] = 0x100000001LL;
      v40 = 8LL;
      v34 = v44;
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64 *))(WdfFunctions_01015 + 3064))(
              WdfDriverGlobals,
              v16,
              4096LL,
              &v40);
      v41 = v17;
      if ( v17 < 0 )
        break;
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 15);
      v19 = WdfFunctions_01015;
      ++*((_DWORD *)a1 + 4);
      v47 = v18;
      v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v19 + 1616))(
              WdfDriverGlobals,
              v38,
              off_1C0041278);
      *(_BYTE *)(v20 + 16) = 1;
      v21 = *(__int64 **)(a7 + 8);
      *(_QWORD *)v20 = a7;
      *(_QWORD *)(v20 + 8) = v21;
      if ( *v21 != a7 )
        __fastfail(3u);
      v22 = 0;
      *v21 = v20;
      *(_QWORD *)(a7 + 8) = v20;
      if ( v14 )
      {
        v23 = (_QWORD *)(v20 + 72);
        while ( 1 )
        {
          v24 = v22 * v7;
          v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 176))(
                  WdfDriverGlobals,
                  v38);
          v26 = WdfDriverGlobals;
          *(v23 - 4) = v24 + v25;
          v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 184))(v26, v38);
          *(v23 - 3) = v27;
          if ( !v22 && (v27 & 0xFFF) != 0 )
            break;
          v30 = v24 + v27;
          v7 = a2;
          *(v23 - 3) = v30;
          *(v23 - 2) = v38;
          v31 = v23 - 6;
          *((_DWORD *)v23 - 2) = a2;
          v32 = *(_QWORD **)(a4 + 8);
          *(v23 - 6) = a4;
          *(v23 - 5) = v32;
          if ( *v32 != a4 )
            __fastfail(3u);
          *v32 = v31;
          *(_QWORD *)(a4 + 8) = v31;
          v33 = (__int64 **)a1[26];
          *v23 = a1 + 25;
          v23[1] = v33;
          if ( *v33 != a1 + 25 )
            __fastfail(3u);
          *v33 = v23;
          a1[26] = (__int64)v23;
          ++*a5;
          ++*a6;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_ddqDddd(
              *(_QWORD *)(a1[1] + 64),
              *a6,
              v28,
              v29,
              (_DWORD)v34,
              v39,
              v22,
              *(v23 - 4),
              *((_DWORD *)v23 - 6),
              *((_DWORD *)v23 - 2),
              *a5,
              *a6);
          ++v22;
          v23 += 10;
          if ( v22 >= v45 )
            goto LABEL_22;
        }
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1[1] + 64),
          3u,
          7u,
          0x16u,
          (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v38);
        v7 = a2;
        v38 = 0LL;
LABEL_22:
        v14 = v45;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 15, v47);
      result = (unsigned int)(v39 + 1);
      v39 = result;
      if ( (unsigned int)result >= v42 )
        goto LABEL_25;
    }
    LODWORD(v36) = v17;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1[1] + 64),
               3u,
               7u,
               0x15u,
               (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
               v36);
LABEL_25:
    if ( v41 < 0 )
    {
      if ( v38 )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    }
  }
  return result;
}
