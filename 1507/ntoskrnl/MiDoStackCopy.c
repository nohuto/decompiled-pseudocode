/*
 * XREFs of MiDoStackCopy @ 0x1401346F8
 * Callers:
 *     <none>
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140021700 (KeExpandKernelStackAndCalloutInternal.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiJumpStackTarget @ 0x1401347E4 (MiJumpStackTarget.c)
 */

__int64 __fastcall MiDoStackCopy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // r9
  __int64 v7; // r10
  __int16 v8; // r11
  __int64 result; // rax
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_QWORD *)a2;
  v10[0] = a2;
  v10[1] = a3;
  v10[2] = a4;
  if ( !MI_IS_PFN(v4)
    || ((*(_QWORD *)(v7 + 40) >> 54) & 7) != 2
    || (*(_BYTE *)(v7 + 34) & 7) != 6
    || *(_WORD *)(v7 + 32) != v8
    || v6 == -5 )
  {
    *(_DWORD *)(a2 + 32) = -1073740748;
    return MiJumpStackTarget(v10);
  }
  if ( v6 != -3 || *(_QWORD *)(a2 + 24) == ((unsigned __int64)KeGetCurrentThread() | 1) )
    return MiJumpStackTarget(v10);
  result = KeExpandKernelStackAndCalloutInternal(
             (void (__fastcall *)(__int64))MiJumpStackTarget,
             (__int64)v10,
             24576,
             5,
             0LL);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a2 + 32) = result;
    return MiJumpStackTarget(v10);
  }
  return result;
}
