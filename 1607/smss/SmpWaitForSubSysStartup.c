/*
 * XREFs of SmpWaitForSubSysStartup @ 0x1400038CC
 * Callers:
 *     wmain @ 0x14000135C (wmain.c)
 *     SmpHandleConnectionRequest @ 0x140003F40 (SmpHandleConnectionRequest.c)
 *     SmpTerminateCSR @ 0x140004D8C (SmpTerminateCSR.c)
 *     SmpLoadSubSystem @ 0x1400127B4 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpLockKnownSubSysList @ 0x14000449C (SmpLockKnownSubSysList.c)
 *     SmpDereferenceKnownSubSys @ 0x1400047B4 (SmpDereferenceKnownSubSys.c)
 *     SmpCheckSubSysStatus @ 0x140004888 (SmpCheckSubSysStatus.c)
 *     SmpWaitForStatusChange @ 0x140013AB8 (SmpWaitForStatusChange.c)
 */

_QWORD *__fastcall SmpWaitForSubSysStartup(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v8; // r14d
  _QWORD *result; // rax
  _QWORD *v10; // rdi
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rdx

  v6 = (a2 >> 1) & 1;
  v8 = a1;
  result = (_QWORD *)SmpLockKnownSubSysList(a1, v6, a4);
  v10 = *(_QWORD **)(a4 + 8);
  if ( v6 )
  {
    while ( (_QWORD *)*v10 == v10 )
      result = (_QWORD *)RtlSleepConditionVariableSRW(&SmpSubSysReadyCondition, v10 + 2, 0LL, 1LL);
  }
  else
  {
LABEL_2:
    for ( result = (_QWORD *)*v10; result != v10; result = (_QWORD *)*result )
    {
      if ( *((_DWORD *)result - 2) == v8 )
      {
        v11 = (volatile signed __int32 *)(result - 9);
        if ( result != (_QWORD *)72 )
        {
          while ( 1 )
          {
            if ( (a2 & 1) == 0 || (v11[2] & 1) != 0 )
            {
              if ( !(unsigned int)SmpCheckSubSysStatus(v11) )
              {
                _InterlockedIncrement(v11);
                SmpWaitForStatusChange(v12, 0LL, a4);
                if ( (v11[2] & 4) != 0 )
                {
                  SmpDereferenceKnownSubSys((PVOID)v11);
                  goto LABEL_2;
                }
                SmpDereferenceKnownSubSys((PVOID)v11);
              }
              v13 = v11 + 18;
              result = (_QWORD *)*((_QWORD *)v11 + 9);
              if ( a3 )
              {
                _InterlockedOr(v11 + 2, 4u);
                v14 = *v13;
                v15 = (_QWORD *)*((_QWORD *)v11 + 10);
                if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
                  __fastfail(3u);
                *v15 = v14;
                *(_QWORD *)(v14 + 8) = v15;
                v16 = *(_QWORD **)(a3 + 8);
                if ( *v16 != a3 )
                  __fastfail(3u);
                *v13 = a3;
                *((_QWORD *)v11 + 10) = v16;
                *v16 = v13;
                *(_QWORD *)(a3 + 8) = v13;
              }
            }
            else
            {
              result = (_QWORD *)*result;
            }
            if ( result != v10 )
            {
              v11 = (volatile signed __int32 *)(result - 9);
              if ( *((_DWORD *)result - 2) == v8 )
                continue;
            }
            return result;
          }
        }
        return result;
      }
    }
  }
  return result;
}
