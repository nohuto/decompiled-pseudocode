/*
 * XREFs of SmProcessConfigRequest @ 0x14057B968
 * Callers:
 *     SmSetStoreInformation @ 0x1403E472C (SmSetStoreInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     SmpSystemStoreCreate @ 0x14057BA6C (SmpSystemStoreCreate.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessConfigRequest(unsigned __int64 a1, int a2, KPROCESSOR_MODE a3)
{
  unsigned __int64 *v3; // rbx
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned __int64 v7; // rbx
  unsigned int v9; // eax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx

  v3 = (unsigned __int64 *)a1;
  if ( a2 != 8 )
    return (unsigned int)-1073741306;
  v4 = 0;
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_BYTE *)a1 = *(_BYTE *)a1;
    *(_BYTE *)(a1 + 7) = *(_BYTE *)(a1 + 7);
  }
  v5 = *v3;
  if ( (_BYTE)v5 != 2 )
    return (unsigned int)-1073741735;
  if ( (v5 & 0xFFFF00) != 0 )
    return (unsigned int)-1073741811;
  v6 = BYTE3(v5);
  if ( BYTE3(v5) >= 3u )
    return (unsigned int)-1073741811;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return v4;
      v10 = HIDWORD(v5);
      if ( (unsigned int)(v10 - 4) <= 0x1C && (((_DWORD)v10 - 1) & (unsigned int)v10) == 0 )
      {
        dword_14032767C = v10;
        return v4;
      }
    }
    else
    {
      v11 = HIDWORD(v5);
      if ( (unsigned int)v11 <= 1 )
      {
        PspOutSwapSharedPages = v11;
        return v4;
      }
    }
    return (unsigned int)-1073741811;
  }
  v7 = HIDWORD(v5);
  if ( (v7 & 0xFFFFFFC0) != 0 || (((unsigned int)v7 >> 2) & 3) == 3 || (((unsigned int)v7 >> 4) & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( ((((unsigned int)v7 >> 2) & 3) == 2 || (((unsigned int)v7 >> 4) & 3) == 2)
    && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    dword_1403BF148 = dword_1403BF148 & 0xFFFFFFC0 | ((unsigned int)v7 >> 2) & 0xF | (16 * (v7 & 3));
    if ( (dword_1403BF148 & 3) != 0 )
      SmpSystemStoreCreate();
  }
  return v4;
}
