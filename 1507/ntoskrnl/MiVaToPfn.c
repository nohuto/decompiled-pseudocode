/*
 * XREFs of MiVaToPfn @ 0x14021F070
 * Callers:
 *     MiInitializeShadowPageTable @ 0x1406A7E80 (MiInitializeShadowPageTable.c)
 *     MiCheckLargePageOk @ 0x1407E074C (MiCheckLargePageOk.c)
 *     MxConsumeLargePageSlush @ 0x1407FB3AC (MxConsumeLargePageSlush.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiVaToPfn(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  _KPROCESS *Process; // rcx
  __int64 v5; // r11
  __int64 v6; // r9
  unsigned __int64 *v7; // r10
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int16 v16; // ax
  __int64 v17; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v20[4]; // [rsp+28h] [rbp-30h] BYREF

  v1 = 4LL;
  v2 = a1;
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = (_KPROCESS *)v20;
  LODWORD(v5) = 4;
  v6 = 1LL;
  do
  {
    *(_QWORD *)&Process->Header.Lock = v3;
    Process = (_KPROCESS *)((char *)Process + 8);
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v1;
  }
  while ( v1 );
  do
  {
    v5 = (unsigned int)(v5 - 1);
    v7 = (unsigned __int64 *)v20[v5];
    v8 = *v7;
    if ( (unsigned __int64)(v7 + 0x12090482600LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v8)
      && ((unsigned __int8)v8 & (unsigned __int8)v6) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8 * ((v9 >> 3) & 0x1FF));
        if ( (v11 & 0x20) != 0 )
          v8 |= 0x20uLL;
        if ( (v11 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
    }
    v19 = v8;
  }
  while ( (v8 & 0x80u) == 0LL && (_DWORD)v5 );
  if ( (unsigned __int64)&STACK[0x90482413020] <= 0x7F8
    && (unsigned int)MiPteHasShadow(Process, v8)
    && ((unsigned __int8)v8 & (unsigned __int8)v6) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v12 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8 * (((unsigned __int64)&v19 >> 3) & 0x1FF));
      if ( (v13 & 0x20) != 0 )
        v8 |= 0x20uLL;
      if ( (v13 & 0x42) != 0 )
        v8 |= 0x42uLL;
    }
  }
  v14 = (v8 >> 12) & 0xFFFFFFFFFLL;
  if ( (_DWORD)v5 )
  {
    v15 = v2 >> 12;
    do
    {
      v16 = v15;
      v15 >>= 9;
      v17 = v6 * (v16 & 0x1FF);
      v6 <<= 9;
      v14 += v17;
      LODWORD(v5) = v5 - 1;
    }
    while ( (_DWORD)v5 );
  }
  return v14;
}
