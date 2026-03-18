/*
 * XREFs of CondRefOf @ 0x1C0018BB0
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     ValidateTarget @ 0x1C0015618 (ValidateTarget.c)
 *     IsCompatableDSDTRevision @ 0x1C001875C (IsCompatableDSDTRevision.c)
 */

__int64 __fastcall CondRefOf(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  bool v6; // al
  __int64 v7; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = ValidateTarget(*(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v8);
  if ( !v4 )
  {
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL) - 128) <= 1u )
    {
      v6 = IsCompatableDSDTRevision();
      v7 = v8;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = (-(__int64)v6 & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
      return (unsigned int)WriteObject(a1, v7, *(_QWORD *)(a2 + 80));
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    }
  }
  return v4;
}
