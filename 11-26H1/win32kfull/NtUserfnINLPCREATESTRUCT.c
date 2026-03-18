/*
 * XREFs of NtUserfnINLPCREATESTRUCT @ 0x1401BCEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlReadUCharFromUser @ 0x1403E2190 (RtlReadUCharFromUser.c)
 */

__int64 __fastcall NtUserfnINLPCREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  __int64 v14; // rbx
  _OWORD *v15; // rax
  _BYTE *v16; // rax
  __int64 v17; // rdi
  _WORD *v18; // rax
  __int64 v19; // rdi
  _BYTE *v20; // rax
  __int64 UserSessionState; // rax
  _OWORD v23[3]; // [rsp+30h] [rbp-B8h] BYREF
  volatile void *Address[2]; // [rsp+60h] [rbp-88h]
  volatile void *v25[2]; // [rsp+70h] [rbp-78h]
  unsigned __int64 v26; // [rsp+80h] [rbp-68h]
  _BYTE *v27; // [rsp+88h] [rbp-60h]
  unsigned __int64 v28; // [rsp+90h] [rbp-58h]
  _BYTE *v29; // [rsp+98h] [rbp-50h]
  __int64 v30; // [rsp+A0h] [rbp-48h]
  __int64 v31; // [rsp+A8h] [rbp-40h]

  v10 = a1;
  memset_0(v23, 0, 0x70uLL);
  PtiCurrent(v11);
  v14 = 0LL;
  if ( a4 )
  {
    v13 = MmUserProbeAddress;
    v15 = (_OWORD *)a4;
    if ( a4 >= MmUserProbeAddress )
      v15 = (_OWORD *)MmUserProbeAddress;
    v23[0] = *v15;
    v23[1] = v15[1];
    v23[2] = v15[2];
    *(_OWORD *)Address = v15[3];
    *(_OWORD *)v25 = v15[4];
    v16 = Address[1];
    if ( a7 )
    {
      if ( Address[1] )
      {
        RtlReadUCharFromUser(Address[1]);
        v16 = Address[1];
      }
      v27 = v16;
      HIDWORD(v26) |= 0x80000000;
      v19 = -1LL;
      if ( v16 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( v16[v13] );
        LODWORD(v26) = v13;
        HIDWORD(v26) = (v13 + 1) | 0x80000000;
      }
      else
      {
        v26 = 0x8000000000000000uLL;
      }
      v20 = v25[0];
      if ( ((unsigned __int64)v25[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( v25[0] )
        {
          RtlReadUCharFromUser(v25[0]);
          v20 = v25[0];
        }
        v29 = v20;
        HIDWORD(v28) |= 0x80000000;
        if ( v20 )
        {
          do
            ++v19;
          while ( v20[v19] );
          LODWORD(v28) = v19;
          HIDWORD(v28) = (v19 + 1) | 0x80000000;
        }
        else
        {
          v28 = 0x8000000000000000uLL;
        }
      }
    }
    else
    {
      if ( Address[1] )
      {
        v30 = 1LL;
        ProbeForRead(Address[1], 1uLL, 2u);
        v16 = Address[1];
      }
      v27 = v16;
      v12 = 0x7FFFFFFFLL;
      HIDWORD(v26) &= ~0x80000000;
      v17 = -1LL;
      if ( v16 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( *(_WORD *)&v16[2 * v13] );
        LODWORD(v26) = 2 * v13;
        HIDWORD(v26) = (2 * v13 + 2) & 0x7FFFFFFF;
      }
      else
      {
        v26 = 0LL;
      }
      v18 = v25[0];
      if ( ((unsigned __int64)v25[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( v25[0] )
        {
          v31 = 1LL;
          ProbeForRead(v25[0], 1uLL, 2u);
          v18 = v25[0];
          v12 = 0x7FFFFFFFLL;
        }
        v29 = v18;
        HIDWORD(v28) &= ~0x80000000;
        if ( v18 )
        {
          do
            ++v17;
          while ( v18[v17] );
          LODWORD(v28) = 2 * v17;
          HIDWORD(v28) = (2 * v17 + 2) & 0x7FFFFFFF;
        }
        else
        {
          v28 = 0LL;
        }
      }
      v10 = a1;
    }
  }
  else if ( a2 == 129 )
  {
    return v14;
  }
  UserSessionState = W32GetUserSessionState(v13, v12);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64, __int64))(UserSessionState
                                                                                        + 8LL * ((a6 + 6) & 0x1F)
                                                                                        + 70904))(
           v10,
           a2,
           a3,
           (unsigned __int64)v23 & -(__int64)(a4 != 0),
           a5);
}
