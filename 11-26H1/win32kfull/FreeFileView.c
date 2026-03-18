/*
 * XREFs of FreeFileView @ 0x1400D3C10
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1400D3914 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 * Callees:
 *     ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1400D2C78 (-Remove@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?vUnmapRemoteFonts@@YAXPEAUFONTFILEVIEW@@@Z @ 0x1400D3E7C (-vUnmapRemoteFonts@@YAXPEAUFONTFILEVIEW@@@Z.c)
 */

void __fastcall FreeFileView(struct FONTFILEVIEW **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 SessionState; // rax
  struct W32_PUSH_LOCK *v10; // rbx
  struct FONTFILEVIEW **v11; // rsi
  struct FONTFILEVIEW **i; // rbx
  struct FONTFILEVIEW *v13; // rcx
  char *v14; // rbp
  char *v15; // rsi
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF

  v3 = (unsigned int)a2;
  v5 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  SessionState = W32GetSessionState(v7, v6, v8);
  v10 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24232LL);
  if ( *(_QWORD *)(SessionState + 96) != -24232LL )
    GreAcquirePushLockExclusive(v10);
  if ( *(_QWORD *)(v5 + 24152) )
  {
    v14 = (char *)&a1[v3];
    v15 = (char *)a1;
    if ( a1 < (struct FONTFILEVIEW **)v14 )
    {
      do
      {
        v16 = *(_DWORD *)(*(_QWORD *)v15 + 64LL);
        NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Remove(
          *(NSInstrumentation::CPlatformReaderWriterLock **)(v5 + 24152),
          &v16);
        v15 += 8;
      }
      while ( v15 < v14 );
    }
  }
  if ( v10 )
    GreReleasePushLockExclusive(v10);
  v11 = &a1[v3];
  for ( i = a1; i < v11; ++i )
  {
    v13 = *i;
    if ( *((_QWORD *)*i + 11) )
      vUnmapRemoteFonts(v13);
    else
      vUnreferenceFileviewSection(v13);
  }
  Win32FreePool(a1);
}
