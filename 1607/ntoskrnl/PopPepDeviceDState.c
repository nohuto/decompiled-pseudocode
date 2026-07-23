/*
 * XREFs of PopPepDeviceDState @ 0x14012C810
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x140124C40 (PoFxReportDevicePoweredOn.c)
 *     PopRequestCompletion @ 0x14012BB00 (PopRequestCompletion.c)
 *     PopIrpWorker @ 0x14012C0E4 (PopIrpWorker.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x14012C8E4 (PopPepUpdateConstraints.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x140130D78 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140130DD8 (PopPepUpdateIdleStateRefCount.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x140203FF8 (PopFxUpdateComponentPerfStateNominalChange.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x1402040CC (PopFxUpdateDeviceAccountingEnhanced.c)
 */

__int64 __fastcall PopPepDeviceDState(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v4; // ebp
  char v5; // bl
  char v6; // r12
  __int64 result; // rax
  unsigned int v10; // edi
  int v11; // edx
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int i; // ebx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-40h]
  char v23; // [rsp+2Ch] [rbp-3Ch]
  char v24; // [rsp+2Dh] [rbp-3Bh]
  unsigned int v25; // [rsp+70h] [rbp+8h]
  char v26; // [rsp+80h] [rbp+18h]

  v26 = a3;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  if ( (_BYTE)a3 )
  {
    if ( a2 == 1 )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 132), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        LOBYTE(a3) = 1;
        result = PopPepUpdateConstraints(a1, 4LL, a3);
      }
    }
  }
  else if ( (int)a2 > 1 )
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 132), 2);
    result = PopPepUpdateConstraints(a1, 4LL, 0LL);
    if ( v5 )
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 132));
  }
  if ( *(_BYTE *)(a1 + 124) )
  {
    if ( a2 == 4 )
      v10 = 0;
    else
      v10 = *(_DWORD *)(a1 + 4LL * (int)(a2 - 1) + 144);
    v11 = *(_DWORD *)(a1 + 156);
    v25 = v10;
    if ( v11 == 4 )
      v12 = 0;
    else
      v12 = *(_DWORD *)(a1 + 4LL * (v11 - 1) + 144);
    if ( !v6 && v11 != a2 )
    {
      if ( a2 == 1 && *(_DWORD *)(a1 + 168) )
      {
        v13 = 0;
        do
        {
          v14 = 200LL * v13;
          v15 = *(unsigned int *)(v14 + a1 + 352);
          PopPepUpdateIdleStateRefCount(0LL, *(unsigned int *)(*(_QWORD *)(v14 + a1 + 368) + 24 * v15 + 16), 1LL);
          PopFxUpdateComponentAccountingEnhanced(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(v14 + a1 + 184),
            (unsigned int)v15,
            0LL);
          ++v13;
        }
        while ( v13 < *(_DWORD *)(a1 + 168) );
        v6 = v26;
        v10 = v25;
        v5 = a4;
      }
      PopPepUpdateIdleStateRefCount(v12, v10, 1LL);
      PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), a2, 0LL);
    }
    v16 = *(_QWORD *)(a1 + 32);
    v22 = a2;
    v23 = v6;
    v24 = v5;
    v21 = *(_QWORD *)(v16 + 72);
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v16 + 64) + 96LL))(5LL, &v21);
    if ( v6 && *(_DWORD *)(a1 + 156) != a2 )
    {
      if ( PopFxPerfQueryOnDevicePowerChanges && (*(_BYTE *)(a1 + 165) || *(_BYTE *)(a1 + 164) && a2 == 1) )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 168); ++i )
        {
          v19 = 200LL * i;
          if ( *(_BYTE *)(v19 + a1 + 360) )
          {
            LOBYTE(v17) = 1;
            PopFxUpdateComponentPerfStateNominalChange(*(_QWORD *)(a1 + 32), *(unsigned int *)(v19 + a1 + 184), v17, a2);
          }
        }
      }
      if ( *(_DWORD *)(a1 + 156) == 1 && *(_DWORD *)(a1 + 168) )
      {
        do
        {
          v20 = 200LL * v4;
          PopPepUpdateIdleStateRefCount(
            *(unsigned int *)(*(_QWORD *)(v20 + a1 + 368) + 24LL * *(unsigned int *)(v20 + a1 + 352) + 16),
            0LL,
            0LL);
          PopFxUpdateComponentAccountingEnhanced(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(v20 + a1 + 184),
            (unsigned int)(*(_DWORD *)(v20 + a1 + 364) - 1),
            1LL);
          ++v4;
        }
        while ( v4 < *(_DWORD *)(a1 + 168) );
      }
      PopPepUpdateIdleStateRefCount(v12, v10, 0LL);
      result = PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), a2, 1LL);
      *(_DWORD *)(a1 + 156) = a2;
    }
  }
  return result;
}
