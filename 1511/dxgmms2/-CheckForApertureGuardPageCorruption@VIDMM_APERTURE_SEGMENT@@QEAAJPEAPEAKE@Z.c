/*
 * XREFs of ?CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C001E3B0
 * Callers:
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C001C8B8 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     ?CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C001E740 (-CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(
        VIDMM_APERTURE_SEGMENT *this,
        unsigned int **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int *v4; // rax
  int v5; // ebx
  unsigned int *v8; // rdi
  __int64 v9; // rdx
  char *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _DWORD *v13; // rdi
  __int64 i; // rcx
  __int64 result; // rax
  __int64 v16; // rax

  v4 = (unsigned int *)*((_QWORD *)this + 56);
  v5 = 0;
  v8 = v4;
  if ( !(_BYTE)a3 || !dword_1C002F108 )
  {
    while ( *v8 == 1685217607 )
    {
      ++v8;
      if ( (unsigned int)++v5 >= 0x400 )
        return 0LL;
    }
    goto LABEL_18;
  }
  if ( *v4 != 1685217607 || (v8 = v4 + 1023, v4[1023] != 1685217607) || (v8 = v4 + 512, v4[512] != 1685217607) )
  {
LABEL_18:
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = v8;
    *(_QWORD *)(v16 + 32) = this;
    WdLogEvent5_WdAssertion(v16);
    result = 2147483653LL;
    *a2 = v8;
    return result;
  }
  v9 = *((_QWORD *)this + 58);
  v10 = (char *)v4 + v9;
  v11 = *(_QWORD *)((char *)v4 + v9) - (_QWORD)ApertureCheckPattern;
  if ( !v11 )
    v11 = *((_QWORD *)v10 + 1) - qword_1C002F0B8;
  if ( v11 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11, v9, a3, a4);
    v12[4] = v10 + 16;
    v12[3] = v10;
    v12[5] = this;
    WdLogEvent5_WdAssertion(v12);
    dword_1C002F108 = 0;
    v13 = (_DWORD *)*((_QWORD *)this + 56);
    for ( i = 1024LL; i; --i )
      *v13++ = 1685217607;
  }
  else
  {
    *((_QWORD *)this + 58) = v9 + 16;
    if ( (unsigned __int64)(v9 + 16) >= 0x1000 )
      *((_QWORD *)this + 58) = 0LL;
  }
  return 0LL;
}
