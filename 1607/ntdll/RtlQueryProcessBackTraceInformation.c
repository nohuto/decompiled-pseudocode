/*
 * XREFs of RtlQueryProcessBackTraceInformation @ 0x1800D4F70
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18006D3A0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x18006DF7C (RtlpCommitQueryDebugInfo.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800D5714 (RtlpDeCommitQueryDebugInfo.c)
 */

__int64 __fastcall RtlQueryProcessBackTraceInformation(_QWORD *a1)
{
  __int64 v2; // rbx
  char *DebugInfo; // rax
  char *v5; // r14
  int v6; // eax
  char *v7; // r12
  int v8; // edi
  int v9; // esi
  _QWORD *v10; // r13
  _WORD *v12; // rdx

  v2 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0LL;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 0x18u);
  v5 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_BYTE *)(v2 + 129) = 1;
  *(_QWORD *)DebugInfo = *(_QWORD *)(v2 + 152) - *(_QWORD *)(v2 + 136);
  *((_QWORD *)DebugInfo + 1) = *(_QWORD *)(v2 + 184) - *(_QWORD *)(v2 + 136);
  *((_DWORD *)DebugInfo + 4) = *(_DWORD *)(v2 + 176);
  v6 = *(_DWORD *)(v2 + 180);
  *((_DWORD *)v5 + 5) = v6;
  v7 = RtlpCommitQueryDebugInfo(a1, 272 * v6);
  if ( v7 )
  {
    v8 = 0;
    v9 = *(_DWORD *)(v2 + 180);
    v10 = *(_QWORD **)(v2 + 184);
    while ( v9-- )
    {
      v12 = (_WORD *)*--v10;
      *(_QWORD *)v7 = 0LL;
      *((_DWORD *)v7 + 2) = v12[4] & 0x7FF;
      *((_WORD *)v7 + 6) = v12[6];
      *((_WORD *)v7 + 7) = v12[7];
      memmove(v7 + 16, v12 + 8, 8LL * (unsigned __int16)v12[7]);
      v7 += 272;
    }
  }
  else
  {
    v8 = -1073741801;
    RtlpDeCommitQueryDebugInfo(a1, v5, 24LL);
  }
  *(_BYTE *)(v2 + 129) = 0;
  if ( v8 >= 0 )
    a1[13] = v5;
  return (unsigned int)v8;
}
