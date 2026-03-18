/*
 * XREFs of ToString @ 0x1C0049000
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C000D340 (IsCompatableDSDTRevision.c)
 *     ValidateTarget @ 0x1C000E694 (ValidateTarget.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 *     ConvertToString @ 0x1C0049480 (ConvertToString.c)
 */

__int64 __fastcall ToString(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // eax
  int v8; // ecx
  char v10; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 76) == 2 )
  {
    v3 = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"B");
    if ( !v3 )
    {
      v3 = ValidateTarget(*(_QWORD *)(a2 + 80) + 40LL, 0x85u, (__int64)&v10);
      if ( !v3 )
        goto LABEL_12;
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 76) != 3 )
    {
      LogError(-1072431098);
      PrintDebugMessage(191, (const void *)*(unsigned int *)(a2 + 76), 0LL, 0LL, 0LL);
      return (unsigned int)-1072431098;
    }
    v3 = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"BI");
    if ( !v3 )
    {
      v3 = ValidateTarget(*(_QWORD *)(a2 + 80) + 80LL, 0x85u, (__int64)&v10);
      if ( !v3 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) )
        {
          v4 = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
          v5 = *(_QWORD *)(a2 + 80);
          if ( *(_QWORD *)(v5 + 56) != v4 )
          {
            v6 = *(unsigned int *)(v5 + 56);
            goto LABEL_13;
          }
        }
LABEL_12:
        v6 = 0LL;
LABEL_13:
        v7 = ConvertToString(*(_QWORD *)(a2 + 80), v6, *(_QWORD *)(a2 + 88));
        v3 = v7;
        switch ( v7 )
        {
          case 0xC000009A:
            LogError(-1073741670);
            v8 = 190;
            break;
          case 0xC0000206:
            LogError(-1072431098);
            PrintDebugMessage(189, 0LL, 0LL, 0LL, 0LL);
            return (unsigned int)-1072431098;
          case 0xC0140006:
            LogError(-1072431098);
            v8 = 192;
            break;
          default:
            return v3;
        }
        PrintDebugMessage(v8, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  return v3;
}
