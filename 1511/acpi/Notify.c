/*
 * XREFs of Notify @ 0x1C0046D70
 * Callers:
 *     <none>
 * Callees:
 *     ReferenceObjectEx @ 0x1C00056C0 (ReferenceObjectEx.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall Notify(__int64 a1, __int64 a2)
{
  const void *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax

  LODWORD(v4) = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"OI");
  if ( !(_DWORD)v4 )
  {
    v5 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v5 + 56) <= 0xFFuLL )
    {
      if ( ghNotify )
      {
        v6 = *(_QWORD *)(v5 + 16);
        *(_QWORD *)(a2 + 64) = v6;
        ReferenceObjectEx(v6);
        v7 = ghNotify(
               2LL,
               *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL),
               *(_QWORD *)(a2 + 64) + 112LL,
               qword_1C005AAC8,
               RestartCtxtCallback,
               a1 + 328);
        v4 = (const void *)v7;
        if ( v7 == 259 )
        {
          LODWORD(v4) = 32772;
        }
        else if ( v7 )
        {
          LogError(-1072431098);
          PrintDebugMessage(114, v4, 0LL, 0LL, 0LL);
          LODWORD(v4) = -1072431098;
        }
      }
    }
    else
    {
      LODWORD(v4) = -1072431089;
      LogError(-1072431089);
      PrintDebugMessage(115, *(const void **)(*(_QWORD *)(a2 + 80) + 56LL), 0LL, 0LL, 0LL);
    }
  }
  return (unsigned int)v4;
}
