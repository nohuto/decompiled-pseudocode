/*
 * XREFs of SmpSearchKnownSubSysDatabase @ 0x1400043D0
 * Callers:
 *     wmain @ 0x14000135C (wmain.c)
 *     SmpExecPgm @ 0x140002FB0 (SmpExecPgm.c)
 *     SmpSbCreateSession @ 0x14000331C (SmpSbCreateSession.c)
 *     SmpHandleConnectionRequest @ 0x140003F40 (SmpHandleConnectionRequest.c)
 * Callees:
 *     SmpUnlockKnownSubSysList @ 0x140004478 (SmpUnlockKnownSubSysList.c)
 *     SmpLockKnownSubSysList @ 0x14000449C (SmpLockKnownSubSysList.c)
 */

volatile signed __int32 *__fastcall SmpSearchKnownSubSysDatabase(unsigned int a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  _BYTE *v4; // rcx
  _QWORD **v6; // r10
  _QWORD *i; // rdx
  _QWORD *v9; // r8
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  v4 = *(_BYTE **)(a2 + 8);
  if ( !v4 )
  {
    SmpLockKnownSubSysList(a1, 1LL, v10);
    v4 = v10;
  }
  v6 = (_QWORD **)*((_QWORD *)v4 + 1);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v9 = i - 9;
    if ( *((_DWORD *)i - 2) == a1 )
    {
      if ( *(_DWORD *)a2 )
      {
        if ( *(_DWORD *)a2 == 1 && *((_DWORD *)v9 + 6) == *(_DWORD *)(a2 + 16) )
          v3 = (volatile signed __int32 *)(i - 9);
      }
      else if ( v9[6] == *(_QWORD *)(a2 + 16) )
      {
        v3 = (volatile signed __int32 *)(i - 9);
      }
      if ( v3 )
      {
        _InterlockedIncrement(v3);
        break;
      }
    }
  }
  if ( v4 == v10 )
    SmpUnlockKnownSubSysList(v4);
  return v3;
}
