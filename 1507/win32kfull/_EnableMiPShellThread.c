/*
 * XREFs of _EnableMiPShellThread @ 0x1C01E24B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 EnableMiPShellThread()
{
  __int64 v0; // r8
  unsigned int v1; // ecx
  _QWORD *v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rcx
  int v5; // ecx

  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( v0 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8LL) + 168LL)
    && (*(_DWORD *)(v0 + 776) & 0xC) == 8
    && *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 336LL) == 1 )
  {
    v1 = 0;
    v2 = gaptiShellMiP;
    do
    {
      if ( gptiCurrent == *v2 )
      {
        v5 = 1242;
        goto LABEL_14;
      }
      ++v1;
      ++v2;
    }
    while ( v1 < 5 );
    v3 = 0LL;
    v4 = gaptiShellMiP;
    while ( *v4 )
    {
      v3 = (unsigned int)(v3 + 1);
      ++v4;
      if ( (unsigned int)v3 >= 5 )
      {
        v5 = 1450;
        goto LABEL_14;
      }
    }
    gaptiShellMiP[v3] = gptiCurrent;
    return 1LL;
  }
  else
  {
    v5 = 5;
LABEL_14:
    UserSetLastError(v5);
    return 0LL;
  }
}
