/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1402B3840
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _GetPointerDeviceRects @ 0x140030CA8 (_GetPointerDeviceRects.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _MonitorFromPoint @ 0x14008A650 (_MonitorFromPoint.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     GetScreenRect @ 0x14025BAE8 (GetScreenRect.c)
 *     GetHimetricScaleForMonitor @ 0x140260D78 (GetHimetricScaleForMonitor.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // r14d
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v17[5]; // [rsp+24h] [rbp-84h] BYREF
  __int64 v18; // [rsp+38h] [rbp-70h] BYREF
  __m128i Buf2; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v20[16]; // [rsp+50h] [rbp-58h] BYREF
  __m128i Buf1; // [rsp+60h] [rbp-48h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
  Buf1 = 0LL;
  v18 = 0LL;
  if ( !a1 || !a3 || !a4 )
    goto LABEL_12;
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v18, 0LL) || *(_DWORD *)(v18 + 24) != 7 )
  {
    if ( (unsigned int)GetPointerDeviceRects(a1, 0LL, &Buf1) )
    {
      v8 = 1;
      v9 = 1;
      v17[0] = 1;
      v10 = 1;
      v16 = 1;
      if ( ***(_DWORD ***)(W32GetUserSessionState(v12, v11) + 56968) > 1u )
      {
        Buf2 = *GetScreenRect(&Buf2);
        if ( !memcmp(&Buf1, &Buf2, 0x10uLL) )
        {
          v13 = MonitorFromPoint(a2, 2LL, 0);
          GetHimetricScaleForMonitor(v13, &v16, v17);
          v10 = v16;
          v9 = v17[0];
        }
      }
      goto LABEL_11;
    }
LABEL_12:
    v8 = 0;
    UserSetLastError(87);
    goto LABEL_13;
  }
  v8 = 1;
  v9 = 1;
  v10 = 1;
LABEL_11:
  RtlWriteULongToUser(a3, v10);
  RtlWriteULongToUser(a4, v9);
  v17[4] = 1;
LABEL_13:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20);
  UserSessionSwitchLeaveCrit(v14);
  return v8;
}
