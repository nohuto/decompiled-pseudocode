/*
 * XREFs of FreeFileView @ 0x1C00213DC
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C0026C80 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00214C8 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C0021514 (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C025A298 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     vUnmapRemoteFonts @ 0x1C027D0D0 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall FreeFileView(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  struct _FILEVIEW **v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  char v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock((AutoExclusiveUmfdFileViewLock *)&v15);
  if ( UmfdFileviewLookup )
  {
    v11 = a1;
    v12 = 0LL;
    v13 = (unsigned __int64)(8 * v3 + 7) >> 3;
    if ( a1 > a1 + 8 * v3 )
      v13 = 0LL;
    if ( v13 )
    {
      do
      {
        v14 = *(_QWORD *)v11;
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 40LL) & 0x20) != 0 )
        {
          v16 = *(_DWORD *)(v14 + 64);
          NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v14, &v16);
        }
        v11 += 8LL;
        ++v12;
      }
      while ( v12 < v13 );
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v15);
  v6 = a1 + 8 * v3;
  v7 = (struct _FILEVIEW **)a1;
  v8 = 0LL;
  v9 = (v6 - a1 + 7) >> 3;
  if ( a1 > v6 )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      if ( *((_QWORD *)*v7 + 11) )
        vUnmapRemoteFonts();
      else
        vUnreferenceFileviewSection(*v7);
      ++v7;
      ++v8;
    }
    while ( v8 < v9 );
  }
  return Win32FreePool(a1, v4, v5);
}
