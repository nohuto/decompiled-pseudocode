/*
 * XREFs of TpCallbackIndependent @ 0x180065190
 * Callers:
 *     <none>
 * Callees:
 *     AlpcAdjustCompletionListConcurrencyCount @ 0x1800653F0 (AlpcAdjustCompletionListConcurrencyCount.c)
 *     NtSetInformationWorkerFactory @ 0x1800A9590 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpCallbackIndependent(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rbx
  __int64 v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rdi
  signed __int32 v8; // eax
  int v9; // edx
  unsigned __int32 v10; // r8d
  int v12; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v13; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1, a2, 0LL, a1);
    return (unsigned int)-1073741811;
  }
  v3 = *(_QWORD *)(a1 + 184);
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 144);
  else
    v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    return (unsigned int)-1073741811;
  if ( TppPoolpSerializedPool == v4 )
    return v2;
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 416));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 420));
  _m_prefetchw((const void *)(v4 + 8));
  v5 = *(_QWORD *)(v4 + 8);
  v13 = v5;
  do
  {
    LODWORD(v13) = (unsigned __int16)(v13 ^ (v13 + 1)) ^ (unsigned int)v13;
    v6 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v13, v5);
    v13 = v5;
  }
  while ( v6 != v5 );
  *(_DWORD *)(a1 + 144) |= 0x10u;
  v7 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 72) = 2;
  if ( v7 && (*(_BYTE *)(v7 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 284);
      v9 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(v7 + 216) + 420LL);
      v10 = v9 + MEMORY[0x7FFE03C0];
      if ( v8 >= v9 && v8 <= (int)(v10 + MEMORY[0x7FFE03C0]) )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 284), v10, v8) )
        AlpcAdjustCompletionListConcurrencyCount(*(_QWORD *)(v7 + 272), v10);
    }
  }
  v12 = 2;
  return NtSetInformationWorkerFactory(*(_QWORD *)(v4 + 56), 9LL, &v12);
}
