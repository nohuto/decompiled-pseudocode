/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x14012F1C0
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x140030FBC (KeRemoveProcessorAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400968D0 (KeOrAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400C8A70 (KeCountSetBitsAffinityEx.c)
 *     KeGetPrcb @ 0x1400D3FF8 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D53B0 (KeEnumerateNextProcessor.c)
 *     PpmPerfApplyProcessorState @ 0x14012F3B0 (PpmPerfApplyProcessorState.c)
 *     PpmPerfQueueAction @ 0x14012F6DC (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x140204F10 (PpmPerfApplyHiddenProcessorState.c)
 */

char PpmPerfApplyProcessorStates()
{
  char v0; // bl
  __int64 i; // rdi
  __int64 v2; // r8
  unsigned int v3; // r14d
  __int64 v4; // rsi
  __int64 Prcb; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // [rsp+28h] [rbp-99h] BYREF
  unsigned __int16 *v13; // [rsp+30h] [rbp-91h] BYREF
  __int64 v14; // [rsp+38h] [rbp-89h]
  __int16 v15; // [rsp+40h] [rbp-81h]
  __int64 v16; // [rsp+48h] [rbp-79h] BYREF
  __int64 v17; // [rsp+50h] [rbp-71h]
  _BYTE v18[152]; // [rsp+58h] [rbp-69h] BYREF

  v0 = 0;
  v16 = 1310721LL;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 407) )
    {
      KeOrAffinityEx((unsigned __int16 *)(i + 24), (unsigned __int16 *)&v16, &v16);
      v3 = 0;
      LODWORD(v12) = 0;
      if ( *(_DWORD *)(i + 192) )
      {
        do
        {
          v4 = *(_QWORD *)(i + 200) + 96LL * v3;
          if ( *(_BYTE *)(v4 + 16) )
          {
            if ( *(_BYTE *)(v4 + 88) )
            {
              LOBYTE(v2) = 1;
              PpmPerfApplyHiddenProcessorState(i, *(_QWORD *)(i + 200) + 96LL * v3, v2);
              *(_BYTE *)(v4 + 88) = 0;
            }
            PpmPerfApplyHiddenProcessorState(i, v4, 0LL);
          }
          ++v3;
        }
        while ( v3 < *(_DWORD *)(i + 192) );
        LODWORD(v12) = v3;
      }
      *(_BYTE *)(i + 407) = 0;
    }
  }
  v14 = v17;
  v13 = (unsigned __int16 *)&v16;
  v15 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v13) )
  {
    Prcb = KeGetPrcb(v12);
    v9 = Prcb;
    if ( *(_BYTE *)(*(_QWORD *)(Prcb + 24184) + 88LL) )
    {
      LOBYTE(v6) = 1;
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, v6, v7, v8) )
      {
        *(_BYTE *)(*(_QWORD *)(v9 + 24184) + 88LL) = 0;
        goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( (unsigned __int8)PpmPerfApplyProcessorState(v9, 0LL, v7, v8) )
        KeRemoveProcessorAffinityEx((unsigned __int16 *)&v16, v12);
    }
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&v16);
  if ( !PpmCheckCount )
    return 1;
  v14 = v17;
  v13 = (unsigned __int16 *)&v16;
  v15 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v13) )
  {
    v10 = KeGetPrcb(v12);
    PpmPerfQueueAction(v10, 2LL);
  }
  return v0;
}
