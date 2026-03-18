/*
 * XREFs of SetManifestWinVer @ 0x1401BD1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SbGetProcessSwitchContext @ 0x1401BD330 (SbGetProcessSwitchContext.c)
 */

__int64 __fastcall SetManifestWinVer(__int64 a1)
{
  struct tagTHREADINFO *v1; // rsi
  unsigned __int16 v2; // di
  _QWORD *v3; // rcx
  char *v4; // rbx
  __int64 v5; // rcx
  __int64 ProcessSwitchContext; // rax
  _QWORD *v7; // r9
  int v8; // edx
  unsigned int i; // ecx
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 result; // rax
  __int64 ProcessWow64Process; // [rsp+68h] [rbp+10h]

  v1 = PtiCurrent(a1);
  v2 = -26368;
  v3 = (_QWORD *)*((_QWORD *)v1 + 57);
  if ( v3 )
  {
    v4 = 0LL;
    ProcessWow64Process = PsGetProcessWow64Process(*v3);
    v5 = ProcessWow64Process
       ? *(unsigned int *)(ProcessWow64Process + 488)
       : *(_QWORD *)(PsGetProcessPeb(**((_QWORD **)v1 + 57)) + 728);
    ProcessSwitchContext = SbGetProcessSwitchContext(v5);
    if ( ProcessSwitchContext )
    {
      v7 = (_QWORD *)(ProcessSwitchContext + 48);
      v8 = 0;
      if ( ProcessSwitchContext != -48 )
      {
        for ( i = 0; i < 5; ++i )
        {
          v10 = 32LL * i;
          v11 = *v7 - *(_QWORD *)((char *)&SbSupportedOsList + v10 + 4);
          if ( *v7 == *(_QWORD *)((char *)&SbSupportedOsList + v10 + 4) )
            v11 = *(_QWORD *)(ProcessSwitchContext + 56) - *(_QWORD *)((char *)&SbSupportedOsList + v10 + 12);
          if ( !v11 )
          {
            v8 = 1;
            v4 = (char *)&SbSupportedOsList + v10;
            break;
          }
        }
      }
      if ( v8 )
        v2 = *((_WORD *)v4 + 11) | (*((_WORD *)v4 + 10) << 8);
    }
  }
  result = v2;
  *((_DWORD *)v1 + 167) = v2;
  return result;
}
