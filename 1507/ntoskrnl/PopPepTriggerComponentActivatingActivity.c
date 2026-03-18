/*
 * XREFs of PopPepTriggerComponentActivatingActivity @ 0x140028824
 * Callers:
 *     <none>
 * Callees:
 *     PopPepUpdateIdleState @ 0x140028640 (PopPepUpdateIdleState.c)
 *     PopPepTryPowerUpComponent @ 0x140028898 (PopPepTryPowerUpComponent.c)
 */

__int64 __fastcall PopPepTriggerComponentActivatingActivity(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  __int64 result; // rax

  if ( a2 )
  {
    v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 136);
    if ( *(_QWORD *)(a2 + 128) < v4 )
      v4 = *(_QWORD *)(a2 + 128);
    *(_QWORD *)(a2 + 120) = v4;
    *(_DWORD *)(a2 + 152) = 0;
    PopPepTryPowerUpComponent();
    return PopPepUpdateIdleState(a1, a2, 1);
  }
  return result;
}
