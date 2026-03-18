/*
 * XREFs of ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z @ 0x1C001810C
 * Callers:
 *     NtDCompositionRetireFrame @ 0x1C0017390 (NtDCompositionRetireFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C0017640 (NtDCompositionDiscardFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CConnection::FindCompositionFrame(
        DirectComposition::CConnection *this,
        __int64 a2,
        struct DirectComposition::CCompositionFrame **a3)
{
  char *v3; // rdi
  unsigned int v7; // esi
  __int64 v8; // rcx
  char *v9; // rbx
  volatile signed __int32 *v10; // rax

  *a3 = 0LL;
  v3 = (char *)this + 200;
  v7 = -1073741275;
  ExAcquirePushLockSharedEx((char *)this + 200, 0LL);
  v3[8] = 0;
  v8 = *((_QWORD *)this + 24);
  v9 = (char *)this + 184;
  while ( (char *)v8 != v9 )
  {
    v10 = (volatile signed __int32 *)(v8 - 8);
    if ( *(_QWORD *)(v8 - 8 + 64) == a2 )
    {
      _InterlockedIncrement(v10);
      *a3 = (struct DirectComposition::CCompositionFrame *)v10;
      v7 = 0;
      break;
    }
    v8 = *(_QWORD *)(v8 + 8);
  }
  if ( v3[8] )
    ExReleasePushLockExclusiveEx(v3, 0LL);
  else
    ExReleasePushLockSharedEx(v3);
  return v7;
}
