/*
 * XREFs of CondRefOf @ 0x1C0025180
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTarget @ 0x1C001476C (ValidateTarget.c)
 *     WriteObject @ 0x1C00191F0 (WriteObject.c)
 *     IsCompatableDSDTRevision @ 0x1C002563C (IsCompatableDSDTRevision.c)
 */

__int64 __fastcall CondRefOf(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v11);
  v5 = v4;
  if ( !v4 )
  {
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    v6 = *(_QWORD *)(a2 + 80);
    v7 = *(unsigned __int16 *)(v6 + 2);
    LOWORD(v7) = v7 - 128;
    if ( (unsigned __int16)v7 <= 1u )
    {
      v9 = IsCompatableDSDTRevision(v6, v7, v4, 1LL);
      v10 = v11;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)(v9 != 0) & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      return (unsigned int)WriteObject(a1, v10, *(_QWORD *)(a2 + 80));
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    }
  }
  return v5;
}
