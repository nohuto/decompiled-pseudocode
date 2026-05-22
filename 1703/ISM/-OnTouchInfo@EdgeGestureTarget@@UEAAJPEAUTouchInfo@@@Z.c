/*
 * XREFs of ?OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x180024250
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x180024398 (-OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 *     ?OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z @ 0x180024678 (-OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnTouchInfo(EdgeGestureTarget *this, struct TouchInfo *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v9 = 0;
  if ( (a2->Flags & 0x400) != 0 )
  {
    *((_DWORD *)this + 6) = 1;
    return v2;
  }
  if ( (a2->Flags & 1) != 0 )
  {
    v5 = EdgeGestureTarget::OnTouchSessionBegin((EdgeGestureTarget *)((char *)this - 16), a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v2;
      v7 = 377;
LABEL_7:
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, v7, v5);
      return v2;
    }
  }
  if ( a2->TimeStamp >= *((_DWORD *)this + 9) )
  {
    if ( *((_DWORD *)this + 6) )
      goto LABEL_21;
    *((_DWORD *)this + 6) = 1;
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct TouchInfo *))(**((_QWORD **)this + 9) + 32LL))(
           *((_QWORD *)this + 9),
           a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v2;
      v7 = 389;
      goto LABEL_7;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 64LL))(
           *((_QWORD *)this + 9),
           &v9);
    v2 = v5;
    if ( v5 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v2;
      v7 = 390;
      goto LABEL_7;
    }
    v5 = EdgeGestureTarget::OnGestureUpdate((char *)this - 16, v9);
    v2 = v5;
    if ( v5 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v2;
      v7 = 392;
      goto LABEL_7;
    }
  }
LABEL_21:
  if ( (a2->Flags & 4) != 0 && !*((_DWORD *)this + 6) )
    *((_DWORD *)this + 6) = 1;
  return v2;
}
