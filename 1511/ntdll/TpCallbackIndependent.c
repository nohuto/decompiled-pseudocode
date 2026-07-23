/*
 * XREFs of TpCallbackIndependent @ 0x18006BAA0
 * Callers:
 *     <none>
 * Callees:
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x18006BD10 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     NtSetInformationWorkerFactory @ 0x1800A8170 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpCallbackIndependent(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // rbx
  __int64 v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v6; // rdi
  signed __int32 v7; // eax
  int v8; // edx
  unsigned __int32 v9; // r8d
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v12; // [rsp+38h] [rbp+10h]

  v1 = 0;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1);
    return -1073741811;
  }
  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 136);
  else
    v3 = *(_QWORD *)(a1 + 128);
  if ( !v3 )
    return -1073741811;
  if ( TppPoolpSerializedPool == v3 )
    return v1;
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 416));
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 420));
  _m_prefetchw((const void *)(v3 + 8));
  v4 = *(_QWORD *)(v3 + 8);
  v12 = v4;
  do
  {
    LODWORD(v12) = (unsigned __int16)(v12 ^ (v12 + 1)) ^ (unsigned int)v12;
    v5 = v4;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8), v12, v4);
    v12 = v4;
  }
  while ( v5 != v4 );
  *(_DWORD *)(a1 + 144) |= 0x10u;
  v6 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 72) = 2;
  if ( v6 && (*(_BYTE *)(v6 + 280) & 3) == 3 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 + 276);
      v8 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(v6 + 208) + 420LL);
      v9 = v8 + MEMORY[0x7FFE03C0];
      if ( v7 >= v8 && v7 <= (int)(v9 + MEMORY[0x7FFE03C0]) )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 276), v9, v7) )
        AlpcAdjustCompletionListConcurrencyCount(*(HANDLE *)(v6 + 264), v9);
    }
  }
  WorkerFactoryInformation = 2;
  return NtSetInformationWorkerFactory(*(HANDLE *)(v3 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
}
