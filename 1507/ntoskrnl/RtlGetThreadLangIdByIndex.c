/*
 * XREFs of RtlGetThreadLangIdByIndex @ 0x14012D730
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlGetThreadLangIdByIndex(int a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v6; // r9
  _QWORD *Teb; // rax
  unsigned __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned int v12; // eax
  unsigned __int16 v14; // [rsp+20h] [rbp-48h]
  unsigned int v15; // [rsp+24h] [rbp-44h]
  unsigned int v16; // [rsp+28h] [rbp-40h]

  v6 = a2;
  v15 = 0;
  v14 = 0;
  v16 = 0;
  if ( a1 || !a3 )
    return 3221225485LL;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  v8 = Teb[762];
  if ( v8 )
  {
    if ( (v8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)MmUserProbeAddress;
    if ( v8 + 64 > MmUserProbeAddress || v8 + 64 < v8 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v9 = (_BYTE *)MmUserProbeAddress;
    }
    v10 = *(_QWORD *)(v8 + 24);
    if ( v10 )
    {
      v16 = *(unsigned __int16 *)(v8 + 4);
      if ( (unsigned int)v6 < v16 )
      {
        if ( (v10 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = v10 + 6 * v6;
        if ( v11 + 6 > (unsigned __int64)v9 || v11 + 6 < v11 )
          *v9 = 0;
        if ( (unsigned __int16)*(_DWORD *)v11 == 1 )
          v14 = *(_WORD *)(v11 + 4);
        else
          v15 = -1073741595;
      }
    }
  }
  *a3 = v14;
  if ( a4 )
    *a4 = v16;
  v12 = v15;
  if ( !v15 )
  {
    if ( !v14 )
      return (unsigned int)-1073741275;
    return v12;
  }
  return v15;
}
