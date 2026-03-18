/*
 * XREFs of Interrupter_AffinitizeMSIXDescriptors @ 0x1C00505D8
 * Callers:
 *     Controller_WdfEvtDeviceFilterAddResourceRequirements @ 0x1C004A550 (Controller_WdfEvtDeviceFilterAddResourceRequirements.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C001C5D8 (WPP_RECORDER_SF_DDX.c)
 */

void __fastcall Interrupter_AffinitizeMSIXDescriptors(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // edi
  int v10; // r15d
  __int64 v11; // r14
  unsigned int i; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-78h]
  __int128 v19; // [rsp+40h] [rbp-68h] BYREF
  __int64 v20; // [rsp+50h] [rbp-58h]
  __int64 v21; // [rsp+58h] [rbp-50h]

  v3 = *(_DWORD *)(a1 + 20);
  if ( v3 )
  {
    v7 = KeQueryActiveProcessorCountEx(0) / v3;
    v8 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2328))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           a2,
           a3);
    v9 = 0;
    v10 = 0;
    v11 = v8;
    for ( i = 0;
          i < (*(unsigned int (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 2384))(
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                v11);
          ++i )
    {
      v13 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2392))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              v11,
              i);
      if ( *(_BYTE *)(v13 + 1) == 2 && (*(_BYTE *)(v13 + 4) & 3) == 3 )
      {
        v14 = 0LL;
        ++v10;
        v19 = *(_OWORD *)v13;
        v20 = *(_QWORD *)(v13 + 16);
        LOWORD(v20) = 4;
        v21 = 0LL;
        WORD2(v19) |= 4u;
        if ( v10 != 1 && (_DWORD)v7 )
        {
          v15 = v7;
          do
          {
            v16 = v9++;
            v14 |= 1LL << v16;
            --v15;
          }
          while ( v15 );
          v21 = v14;
        }
        (*(void (__fastcall **)(_LIST_ENTRY *, __int64, __int128 *, _QWORD))(WdfFunctions_01015 + 2376))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          v11,
          &v19,
          i);
        LODWORD(v18) = i;
        LODWORD(v17) = a3;
        WPP_RECORDER_SF_DDX(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          4u,
          8u,
          0x33u,
          (__int64)&WPP_b5cbcd348d84cc97a8629183b7c53e9f_Traceguids,
          v17,
          v18,
          v21,
          v19,
          v20);
      }
    }
  }
}
