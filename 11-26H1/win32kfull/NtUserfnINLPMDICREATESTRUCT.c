/*
 * XREFs of NtUserfnINLPMDICREATESTRUCT @ 0x1402C1790
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlInitLargeUnicodeString @ 0x1401BC6E8 (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1401E7948 (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlReadUCharFromUser @ 0x1403E2190 (RtlReadUCharFromUser.c)
 */

__int64 __fastcall NtUserfnINLPMDICREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v11; // rcx
  volatile void *v12; // rdx
  volatile void *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  volatile void *v16; // rax
  volatile void *v17; // rcx
  __int64 v18; // rdx
  __int64 UserSessionState; // rax
  volatile void *Address[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v22; // [rsp+50h] [rbp-68h]
  __int128 v23; // [rsp+60h] [rbp-58h]
  __int64 v24; // [rsp+70h] [rbp-48h]
  _BYTE v25[16]; // [rsp+78h] [rbp-40h] BYREF
  _BYTE v26[40]; // [rsp+88h] [rbp-30h] BYREF

  memset_0(Address, 0, 0x58uLL);
  PtiCurrent(v11);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a4;
  v22 = *(_OWORD *)(a4 + 16);
  v23 = *(_OWORD *)(a4 + 32);
  v24 = *(_QWORD *)(a4 + 48);
  if ( a7 )
  {
    v12 = Address[1];
    if ( Address[1] )
    {
      RtlReadUCharFromUser(Address[1]);
      v12 = Address[1];
    }
    RtlInitLargeAnsiString((__int64)v25, (__int64)v12);
    v13 = Address[0];
    if ( ((unsigned __int64)Address[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( Address[0] )
      {
        RtlReadUCharFromUser(Address[0]);
        v13 = Address[0];
      }
    }
    else
    {
      v13 = 0LL;
    }
    RtlInitLargeAnsiString((__int64)v26, (__int64)v13);
  }
  else
  {
    v16 = Address[1];
    if ( Address[1] )
    {
      ProbeForRead(Address[1], 1uLL, 2u);
      v16 = Address[1];
    }
    RtlInitLargeUnicodeString((__int64)v25, (__int64)v16);
    v17 = Address[0];
    if ( ((unsigned __int64)Address[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( Address[0] )
      {
        ProbeForRead(Address[0], 1uLL, 2u);
        v17 = Address[0];
      }
      v18 = (__int64)v17;
    }
    else
    {
      v18 = 0LL;
    }
    RtlInitLargeUnicodeString((__int64)v26, v18);
  }
  UserSessionState = W32GetUserSessionState(v15, v14);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, volatile void **, __int64))(UserSessionState
                                                                                        + 8LL * ((a6 + 6) & 0x1F)
                                                                                        + 70904))(
           a1,
           a2,
           a3,
           Address,
           a5);
}
