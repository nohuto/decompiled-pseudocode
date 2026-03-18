/*
 * XREFs of MiPfExecuteReadList @ 0x1403F70AC
 * Callers:
 *     MiPrefetchControlArea @ 0x1404AF248 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x1404D9A0C (MmPrefetchForCacheManager.c)
 *     MmPrefetchPagesEx @ 0x1404D9B80 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiReferenceInPageFile @ 0x140039C9C (MiReferenceInPageFile.c)
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     SmPageRead @ 0x140109CEC (SmPageRead.c)
 */

char __fastcall MiPfExecuteReadList(__int64 a1, char a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v4; // r12
  __int64 v5; // rbx
  int v7; // edx
  char Teb; // r13
  int v9; // eax
  int v10; // edi
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  int v15; // [rsp+78h] [rbp+10h]
  unsigned int v16; // [rsp+80h] [rbp+18h]

  v16 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = a1 + 88;
  v5 = *(_QWORD *)(a1 + 88);
  v7 = 3;
  Teb = 0;
  LOBYTE(v9) = a2 & 2;
  if ( (a2 & 2) != 0 )
    v7 = 1;
  v15 = v7;
  if ( v5 != v4 )
  {
    v10 = a2 & 1;
    do
    {
      v11 = *(_QWORD *)(v5 + 248);
      *(_WORD *)(v11 + 10) |= 0x42u;
      *(_DWORD *)(v5 + 180) = *(_DWORD *)(v11 + 40);
      v12 = MiReferenceInPageFile(v5, a3);
      v13 = v12;
      if ( v12 )
        *(_QWORD *)(v5 + 192) = v12;
      else
        v13 = *(_QWORD *)(v5 + 192);
      *(_QWORD *)(v5 + 168) = 0LL;
      *(_QWORD *)(v5 + 224) = *(_QWORD *)(v5 + 232);
      if ( v10 )
      {
        Teb = (char)CurrentThread[1].Teb;
        LOBYTE(CurrentThread[1].Teb) = 1;
      }
      if ( *(char *)(v5 + 189) < 0 )
        v9 = SmPageRead((union _MM_STORE_KEY *)(v5 + 96), v15 | (unsigned int)(v5 + 256));
      else
        v9 = IoPageRead(
               (PFILE_OBJECT)(v13 | 2),
               (PMDL)(v11 | 1),
               (PLARGE_INTEGER)(v5 + 96),
               (PKEVENT)(v5 + 32),
               (PIO_STATUS_BLOCK)(v5 + 80));
      if ( v10 )
        LOBYTE(CurrentThread[1].Teb) = Teb;
      if ( v9 < 0 )
      {
        *(_QWORD *)(v5 + 88) = 0LL;
        *(_DWORD *)(v5 + 80) = v9;
        LOBYTE(v9) = KeSetEvent((PRKEVENT)(v5 + 32), 0, 0);
      }
      v5 = *(_QWORD *)v5;
      a3 = v16;
    }
    while ( v5 != v4 );
  }
  return v9;
}
