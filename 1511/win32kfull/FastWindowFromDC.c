/*
 * XREFs of FastWindowFromDC @ 0x1C006B908
 * Callers:
 *     _ScrollDC @ 0x1C006A430 (_ScrollDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastWindowFromDC(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  _QWORD *v8; // r8

  v2 = 0LL;
  GreLockVisRgn(*gpDispInfo);
  v3 = (_QWORD *)gpDispInfo;
  v4 = gpDispInfo + 64LL;
  v5 = *(_QWORD *)(gpDispInfo + 64LL);
  if ( !v5 )
  {
LABEL_11:
    v3 = (_QWORD *)gpDispInfo;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(v5 + 8) != a1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)v4;
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) == a1 )
        break;
      v4 = *(_QWORD *)v4;
      if ( !*(_QWORD *)v7 )
        goto LABEL_11;
    }
    v8 = *(_QWORD **)v4;
    if ( (*(_DWORD *)(v7 + 64) & 0x401000) == 0x1000 )
    {
      *(_QWORD *)v4 = *v8;
      *v8 = *(_QWORD *)(gpDispInfo + 64LL);
      *(_QWORD *)(gpDispInfo + 64LL) = v8;
      v2 = v8[2];
    }
    goto LABEL_11;
  }
  v6 = *(_DWORD *)(v5 + 64);
  if ( (v6 & 0x1000) != 0 && (v6 & 0x400000) == 0 )
    v2 = *(_QWORD *)(v5 + 16);
LABEL_12:
  GreUnlockVisRgn(*v3);
  return v2;
}
