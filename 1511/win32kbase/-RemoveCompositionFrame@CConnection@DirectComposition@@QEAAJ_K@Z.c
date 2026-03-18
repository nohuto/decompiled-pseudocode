/*
 * XREFs of ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C00A8E7C
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C003AE80 (NtDCompositionBeginFrame.c)
 * Callees:
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C00A89F4 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::RemoveCompositionFrame(
        DirectComposition::CConnection *this,
        __int64 a2)
{
  char *v2; // rdi
  unsigned int v5; // esi
  char *v6; // rax
  char *v7; // rbx
  __int64 v8; // r8
  char **v9; // rdx

  v2 = (char *)this + 200;
  v5 = -1073741275;
  ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
  v2[8] = 1;
  v6 = (char *)*((_QWORD *)this + 24);
  v7 = (char *)this + 184;
  while ( v6 != v7 )
  {
    if ( *((_QWORD *)v6 + 7) == a2 )
    {
      v8 = *(_QWORD *)v6;
      v9 = (char **)*((_QWORD *)v6 + 1);
      if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || *v9 != v6 )
        __fastfail(3u);
      *v9 = (char *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      DirectComposition::CCompositionFrame::Release((DirectComposition::CCompositionFrame *)(v6 - 8), (unsigned int)v9);
      v5 = 0;
      break;
    }
    v6 = (char *)*((_QWORD *)v6 + 1);
  }
  if ( v2[8] )
    ExReleasePushLockExclusiveEx(v2);
  else
    ExReleasePushLockSharedEx(v2);
  return v5;
}
