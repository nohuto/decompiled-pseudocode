/*
 * XREFs of TppInitializeTimer @ 0x18003DAB8
 * Callers:
 *     TpAllocTimer @ 0x18003C6C0 (TpAllocTimer.c)
 *     TpAllocWait @ 0x18007CFD0 (TpAllocWait.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18003DB58 (TpAdjustBindingCount.c)
 *     TppWorkInitialize @ 0x18003DDB8 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18007D9B4 (TppCleanupGroupAddMember.c)
 */

__int64 __fastcall TppInitializeTimer(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 result; // rax

  v6 = a4;
  if ( a4 )
    LODWORD(a4) = *(_DWORD *)(a4 + 56);
  result = TppWorkInitialize(a1, a3, v6, a4, a5, a6);
  if ( (int)result >= 0 )
  {
    TpAdjustBindingCount(*(_QWORD *)(a1 + 136), 1LL);
    *(_QWORD *)(a1 + 232) = 0LL;
    *(_BYTE *)(a1 + 345) = a2;
    if ( v6 )
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(v6 + 48);
    if ( *(_QWORD *)(a1 + 16) )
      TppCleanupGroupAddMember(a1);
    return 0LL;
  }
  return result;
}
