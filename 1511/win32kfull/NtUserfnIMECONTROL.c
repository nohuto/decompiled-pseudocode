/*
 * XREFs of NtUserfnIMECONTROL @ 0x1C02223A0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01E3564 (ProbeAndCaptureSoftKbdData.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z @ 0x1C022614C (-TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z.c)
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
  __int64 v12; // rbx
  _QWORD v14[3]; // [rsp+50h] [rbp-108h] BYREF
  __int128 v15; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v16; // [rsp+78h] [rbp-E0h]
  unsigned int v17; // [rsp+80h] [rbp-D8h]
  _OWORD v18[2]; // [rsp+88h] [rbp-D0h] BYREF
  _OWORD v19[5]; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+100h] [rbp-58h]
  unsigned int v21; // [rsp+108h] [rbp-50h]

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
      v18[0] = *(_OWORD *)a4;
      v18[1] = *((_OWORD *)a4 + 1);
      a4 = (unsigned int *)v18;
      break;
    case 9uLL:
      goto LABEL_26;
    case 0xAuLL:
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (unsigned int *)W32UserProbeAddress;
      v19[0] = *(_OWORD *)a4;
      v19[1] = *((_OWORD *)a4 + 1);
      v19[2] = *((_OWORD *)a4 + 2);
      v19[3] = *((_OWORD *)a4 + 3);
      v19[4] = *((_OWORD *)a4 + 4);
      v20 = *((_QWORD *)a4 + 10);
      v21 = a4[22];
      a4 = (unsigned int *)v19;
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
      v15 = *(_OWORD *)a4;
      v16 = *((_QWORD *)a4 + 2);
      v17 = a4[6];
      a4 = (unsigned int *)&v15;
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
      PushW32ThreadLock((__int64)v11, v14, (__int64)Win32FreePool);
      a4 = v10;
      break;
  }
  v12 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, unsigned int *, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
          a1,
          643LL,
          a3,
          a4,
          a5);
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v14);
  return v12;
}
