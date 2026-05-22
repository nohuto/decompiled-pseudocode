/*
 * XREFs of ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x18001E5F8
 * Callers:
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x18001E190 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?OnOrientationChanged@DWMCursorBroker@@UEAAJPEAUIInputDisplay@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x18001EC50 (-OnOrientationChanged@DWMCursorBroker@@UEAAJPEAUIInputDisplay@@W4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x18001F194 (--1DWMCursor@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::SendAndVerifyEndpoints(DWMCursorBroker *this, struct CursorMessage *a2)
{
  int v2; // esi
  _DWORD *v3; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx

  v2 = 0;
  v3 = (_DWORD *)((char *)this + 1316);
  v6 = 10LL;
  do
  {
    v7 = (unsigned int)*v3;
    if ( (_DWORD)v7 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct CursorMessage *, int))(**((_QWORD **)this + 159)
                                                                                            + 152LL))(
             *((_QWORD *)this + 159),
             v7,
             4LL,
             a2,
             64);
      if ( v2 < 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 159) + 144LL))(
          *((_QWORD *)this + 159),
          (unsigned int)*v3);
        *v3 = 0;
      }
    }
    v3 += 2;
    --v6;
  }
  while ( v6 );
  return (unsigned int)v2;
}
