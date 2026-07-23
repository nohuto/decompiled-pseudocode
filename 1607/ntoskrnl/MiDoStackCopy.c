/*
 * XREFs of MiDoStackCopy @ 0x1401E6130
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400EEE30 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiJumpStackTarget @ 0x1401E6214 (MiJumpStackTarget.c)
 */

__int64 __fastcall MiDoStackCopy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // rdx
  __int16 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 result; // rax
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_QWORD *)a2;
  v11[2] = a4;
  v11[0] = a2;
  v11[1] = a3;
  if ( MiIsPfnInline(v4)
    && ((*(_QWORD *)(v9 + 40) >> 54) & 7) == 2
    && (*(_BYTE *)(v9 + 34) & 7) == 6
    && *(_WORD *)(v9 + 32) == v7
    && v6 != -5 )
  {
    if ( v6 == -3 && *(_QWORD *)(a2 + 24) != (v8 | (unsigned __int64)KeGetCurrentThread()) )
    {
      result = KeExpandKernelStackAndCalloutInternal(
                 (void (__fastcall *)(__int64))MiJumpStackTarget,
                 (__int64)v11,
                 24576,
                 5,
                 0LL);
      if ( (int)result >= 0 )
        return result;
      *(_DWORD *)(a2 + 32) = result;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 32) = -1073740748;
  }
  return MiJumpStackTarget(v11);
}
