/*
 * XREFs of NtGdiGetStats @ 0x1C00B3760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetStats(int a1, int a2, unsigned int a3, volatile void *a4, unsigned int Length)
{
  int v9; // ebx
  unsigned int v10; // esi
  __int64 i; // rcx
  __int64 v12; // rax

  v9 = 0;
  if ( (RtlGetNtGlobalFlags() & 0x400) == 0 )
    v9 = -1073741790;
  if ( a2 )
  {
    if ( a2 <= 0 || a2 > 4 )
      v9 = -1073741822;
  }
  else if ( Length < 0x7C )
  {
    v9 = -1073741789;
  }
  if ( v9 >= 0 )
  {
    ProbeForWrite(a4, Length, 1u);
    if ( a2 )
    {
      if ( a2 <= 0 || a2 > 4 )
        return (unsigned int)-1073741822;
    }
    else
    {
      if ( a3 == -2147483646 )
        v10 = a1 & 0xFFFFFFFC;
      else
        v10 = a3;
      for ( i = 0LL; (unsigned int)i < gcMaxHmgr; i = (unsigned int)(i + 1) )
      {
        if ( v10 == 1 || v10 == (*(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * i + 8) & 0xFFFFFFFE) )
        {
          v12 = *(unsigned __int8 *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * i + 14);
          ++*((_DWORD *)a4 + v12);
        }
      }
    }
  }
  return (unsigned int)v9;
}
