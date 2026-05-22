/*
 * XREFs of ??0MobileCursor@@IEAA@PEAVMobileCursorBroker@@PEAUIInputDisplay@@UCursorId@@W4InputType@@@Z @ 0x180026A74
 * Callers:
 *     ?Create@MobileCursor@@SAJPEAVMobileCursorBroker@@PEAUIInputDisplay@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180026DC0 (-Create@MobileCursor@@SAJPEAVMobileCursorBroker@@PEAUIInputDisplay@@UCursorId@@W4InputType@@PEAP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MobileCursor::MobileCursor(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, int a5)
{
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)(a1 + 8) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = &MobileCursor::`vftable'{for `ICursor'};
  *(_QWORD *)(a1 + 8) = &MobileCursor::`vftable'{for `RefCountedObject'};
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *(_QWORD *)(a1 + 24) = a2;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v10 = *(_QWORD *)(a1 + 32);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *(_QWORD *)(a1 + 32) = a3;
  *(_OWORD *)(a1 + 40) = *a4;
  *(_DWORD *)(a1 + 60) = a5;
  *(_WORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  return a1;
}
