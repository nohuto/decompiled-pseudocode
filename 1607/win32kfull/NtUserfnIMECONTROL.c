/*
 * XREFs of NtUserfnIMECONTROL @ 0x1C021C530
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01D9E28 (ProbeAndCaptureSoftKbdData.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z @ 0x1C021F198 (-TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z.c)
 */

__int64 __fastcall NtUserfnIMECONTROL(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int *v10; // rdi
  unsigned int *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v18[3]; // [rsp+50h] [rbp-108h] BYREF
  __int128 v19; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v20; // [rsp+78h] [rbp-E0h]
  unsigned int v21; // [rsp+80h] [rbp-D8h]
  _OWORD v22[2]; // [rsp+88h] [rbp-D0h] BYREF
  _OWORD v23[5]; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+100h] [rbp-58h]
  unsigned int v25; // [rsp+108h] [rbp-50h]

  v10 = 0LL;
  if ( a2 != 643 || a6 != 689 )
    TraceLoggingStubInvalidParamEvent(a2, a6, "NtUserfnIMECONTROL");
  if ( a2 != 643 || a3 > 0x22 )
    return 0LL;
  switch ( a3 )
  {
    case 7uLL:
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      *(_OWORD *)a4 = *(_OWORD *)a4;
      *((_OWORD *)a4 + 1) = *((_OWORD *)a4 + 1);
      break;
    case 8uLL:
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (unsigned int *)W32UserProbeAddress;
      v22[0] = *(_OWORD *)a4;
      v22[1] = *((_OWORD *)a4 + 1);
      a4 = (unsigned int *)v22;
      break;
    case 9uLL:
      goto LABEL_26;
    case 0xAuLL:
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (unsigned int *)W32UserProbeAddress;
      v23[0] = *(_OWORD *)a4;
      v23[1] = *((_OWORD *)a4 + 1);
      v23[2] = *((_OWORD *)a4 + 2);
      v23[3] = *((_OWORD *)a4 + 3);
      v23[4] = *((_OWORD *)a4 + 4);
      v24 = *((_QWORD *)a4 + 10);
      v25 = a4[22];
      a4 = (unsigned int *)v23;
      break;
    case 0xBuLL:
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      *(_OWORD *)a4 = *(_OWORD *)a4;
      *((_QWORD *)a4 + 2) = *((_QWORD *)a4 + 2);
      a4[6] = a4[6];
      break;
    case 0xCuLL:
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (unsigned int *)W32UserProbeAddress;
      v19 = *(_OWORD *)a4;
      v20 = *((_QWORD *)a4 + 2);
      v21 = a4[6];
      a4 = (unsigned int *)&v19;
      break;
    case 0x11uLL:
LABEL_26:
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      *(_OWORD *)a4 = *(_OWORD *)a4;
      *((_OWORD *)a4 + 1) = *((_OWORD *)a4 + 1);
      *((_OWORD *)a4 + 2) = *((_OWORD *)a4 + 2);
      *((_OWORD *)a4 + 3) = *((_OWORD *)a4 + 3);
      *((_OWORD *)a4 + 4) = *((_OWORD *)a4 + 4);
      *((_QWORD *)a4 + 10) = *((_QWORD *)a4 + 10);
      a4[22] = a4[22];
      break;
    case 0x18uLL:
      v11 = ProbeAndCaptureSoftKbdData((char *)a4);
      v10 = v11;
      if ( !v11 )
        return 0LL;
      PushW32ThreadLock((__int64)v11, v18, (__int64)Win32FreePool, v12);
      a4 = v10;
      break;
  }
  v13 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, unsigned int *, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
          a1,
          643LL,
          a3,
          a4,
          a5);
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v18, v14, v15, v16);
  return v13;
}
