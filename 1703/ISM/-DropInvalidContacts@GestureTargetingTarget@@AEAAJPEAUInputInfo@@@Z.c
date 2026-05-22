/*
 * XREFs of ?DropInvalidContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800102D4
 * Callers:
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z @ 0x18000F80C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJIPEAX0AEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x18000934C (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall GestureTargetingTarget::DropInvalidContacts(GestureTargetingTarget *this, struct InputInfo *a2)
{
  __int64 v4; // rdi
  int PointersFromInput; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rbp
  struct Pointer *v9; // rdx
  int v10; // r9d
  __int64 v11; // r8
  struct Pointer *v12; // rdx
  unsigned int v14[4]; // [rsp+30h] [rbp-D8h] BYREF
  struct Pointer *v15[20]; // [rsp+40h] [rbp-C8h] BYREF

  v14[0] = 0;
  v4 = 0LL;
  PointersFromInput = GetPointersFromInput(a2, (__int64)a2, v15, v14);
  v7 = PointersFromInput;
  if ( PointersFromInput < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v6, &MinInput_Warning_CheckResult, 4, 670, PointersFromInput);
LABEL_16:
    if ( (v7 & 0x80000000) == 0 )
      return v7;
    goto LABEL_21;
  }
  v8 = 0LL;
  if ( v14[0] )
  {
    do
    {
      v9 = v15[v8];
      v10 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 == *((_DWORD *)this + 26) || (v6 = 0LL, !*((_DWORD *)this + 24)) )
      {
LABEL_9:
        if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
          Template_qqq(v6, &MinInput_Log_PointerFrameRouting_PointerDropped, 4, v10, *(_DWORD *)v9);
      }
      else
      {
        while ( *(_DWORD *)(*((_QWORD *)this + 11) + 8 * v6) != v10 )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= *((_DWORD *)this + 24) )
            goto LABEL_9;
        }
        v15[v4 + 10] = v9;
        v4 = (unsigned int)(v4 + 1);
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (_DWORD)v8 != v14[0] );
    if ( (_DWORD)v4 != v14[0] )
    {
      v11 = 0LL;
      *((_DWORD *)a2 + 12) = v4;
      if ( !(_DWORD)v4 )
        goto LABEL_19;
      do
      {
        v6 = (__int64)v15[v11 + 10];
        v12 = v15[v11];
        v11 = (unsigned int)(v11 + 1);
        *(_OWORD *)v12 = *(_OWORD *)v6;
        *((_OWORD *)v12 + 1) = *(_OWORD *)(v6 + 16);
        *((_OWORD *)v12 + 2) = *(_OWORD *)(v6 + 32);
      }
      while ( (_DWORD)v11 != (_DWORD)v4 );
    }
    if ( (_DWORD)v4 )
      goto LABEL_16;
  }
LABEL_19:
  v7 = -2147418113;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    return v7;
  Template_qqq(v6, &MinInput_Warning_CheckResult, 4, 692, 255);
LABEL_21:
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v6, &MinInput_Warning_CheckResult, 4, 634, v7);
  return v7;
}
