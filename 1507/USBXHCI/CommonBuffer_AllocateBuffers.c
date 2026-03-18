/*
 * XREFs of CommonBuffer_AllocateBuffers @ 0x1C0005B40
 * Callers:
 *     CommonBuffer_AcquireBuffer @ 0x1C0005400 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C00058A4 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_WorkItem @ 0x1C0014290 (CommonBuffer_WorkItem.c)
 *     CommonBuffer_Create @ 0x1C0048950 (CommonBuffer_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0004990 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddqDddd @ 0x1C0014520 (WPP_RECORDER_SF_ddqDddd.c)
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
  __int64 v19; // rax
  __int64 *v20; // rcx
  unsigned int v21; // edi
  _QWORD *v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  __int64 **v30; // rcx
  _QWORD *v31; // [rsp+20h] [rbp-91h]
  __int64 v32; // [rsp+28h] [rbp-89h]
  __int64 *v33; // [rsp+28h] [rbp-89h]
  __int64 v34; // [rsp+30h] [rbp-81h]
  __int64 v35; // [rsp+60h] [rbp-51h] BYREF
  int v36; // [rsp+68h] [rbp-49h]
  __int64 v37; // [rsp+70h] [rbp-41h] BYREF
  int v38; // [rsp+78h] [rbp-39h]
  unsigned int v39; // [rsp+7Ch] [rbp-35h]
  __int64 i; // [rsp+80h] [rbp-31h]
  _QWORD v41[13]; // [rsp+88h] [rbp-29h] BYREF
  unsigned int v42; // [rsp+100h] [rbp+4Fh]
  KIRQL v44; // [rsp+110h] [rbp+5Fh]

  v7 = a2;
  v35 = 0LL;
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
    LODWORD(v34) = *a6;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(a1[1] + 64),
      5u,
      7u,
      0x13u,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
      a6,
      v34);
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 6);
  result = ((a3 * v7) & 0xFFF) != 0;
  v13 = result + ((a3 * v7) >> 12);
  v39 = v13;
  if ( v7 == 4096 )
  {
    v14 = 1;
    v42 = 1;
  }
  else
  {
    result = 0x1000 / v7;
    v14 = 0x1000 / v7;
    v42 = 0x1000 / v7;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v34) = v14;
    LODWORD(v32) = v13;
    result = WPP_RECORDER_SF_dd(
               *(_QWORD *)(a1[1] + 64),
               5u,
               7u,
               0x14u,
               (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
               v32,
               v34);
  }
  v36 = 0;
  if ( v13 )
  {
    v15 = 80LL * v14 + 24;
    for ( i = v15; ; v15 = i )
    {
      v16 = *a1;
      v41[5] = v15;
      v41[1] = 0LL;
      v41[2] = 0LL;
      v41[4] = 0LL;
      v33 = &v35;
      v41[6] = off_1C0040248;
      v41[0] = 56LL;
      v41[3] = 0x100000001LL;
      v37 = 8LL;
      v31 = v41;
      v17 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, __int64, __int64 *))(WdfFunctions_01015 + 3064))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              v16,
              4096LL,
              &v37);
      v38 = v17;
      if ( v17 < 0 )
        break;
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 15);
      ++*((_DWORD *)a1 + 4);
      v44 = v18;
      v19 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              v35,
              off_1C0040248);
      *(_BYTE *)(v19 + 16) = 1;
      v20 = *(__int64 **)(a7 + 8);
      *(_QWORD *)v19 = a7;
      *(_QWORD *)(v19 + 8) = v20;
      if ( *v20 != a7 )
        __fastfail(3u);
      v21 = 0;
      *v20 = v19;
      *(_QWORD *)(a7 + 8) = v19;
      if ( v14 )
      {
        v22 = (_QWORD *)(v19 + 72);
        while ( 1 )
        {
          v23 = v21 * v7;
          *(v22 - 4) = v23
                     + (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 176))(
                         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                         v35);
          v24 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 184))(
                  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                  v35);
          *(v22 - 3) = v24;
          if ( !v21 && (v24 & 0xFFF) != 0 )
            break;
          v27 = v23 + v24;
          v7 = a2;
          *(v22 - 3) = v27;
          *(v22 - 2) = v35;
          v28 = v22 - 6;
          *((_DWORD *)v22 - 2) = a2;
          v29 = *(_QWORD **)(a4 + 8);
          *(v22 - 6) = a4;
          *(v22 - 5) = v29;
          if ( *v29 != a4 )
            __fastfail(3u);
          *v29 = v28;
          *(_QWORD *)(a4 + 8) = v28;
          v30 = (__int64 **)a1[26];
          *v22 = a1 + 25;
          v22[1] = v30;
          if ( *v30 != a1 + 25 )
            __fastfail(3u);
          *v30 = v22;
          a1[26] = (__int64)v22;
          ++*a5;
          ++*a6;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_ddqDddd(
              *(_QWORD *)(a1[1] + 64),
              *a6,
              v25,
              v26,
              (_DWORD)v31,
              v36,
              v21,
              *(v22 - 4),
              *((_DWORD *)v22 - 6),
              *((_DWORD *)v22 - 2),
              *a5,
              *a6);
          ++v21;
          v22 += 10;
          if ( v21 >= v42 )
            goto LABEL_22;
        }
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1[1] + 64),
          3u,
          7u,
          0x16u,
          (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids);
        (*(void (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 1664))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          v35);
        v7 = a2;
        v35 = 0LL;
LABEL_22:
        v14 = v42;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 15, v44);
      result = (unsigned int)(v36 + 1);
      v36 = result;
      if ( (unsigned int)result >= v39 )
        goto LABEL_25;
    }
    LODWORD(v33) = v17;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1[1] + 64),
               3u,
               7u,
               0x15u,
               (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids,
               v33);
LABEL_25:
    if ( v38 < 0 )
    {
      if ( v35 )
        return (*(__int64 (__fastcall **)(_LIST_ENTRY *))(WdfFunctions_01015 + 1664))(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
    }
  }
  return result;
}
