/*
 * XREFs of FreeFileView @ 0x1C00D8F3C
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C0021E98 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00D9028 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C00D911C (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C025CDD8 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     vUnmapRemoteFonts @ 0x1C027EE60 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall FreeFileView(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  struct _FILEVIEW **v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  char v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock((AutoExclusiveUmfdFileViewLock *)&v13);
  if ( UmfdFileviewLookup )
  {
    v9 = a1;
    v10 = 0LL;
    v11 = (unsigned __int64)(8 * v3 + 7) >> 3;
    if ( a1 > a1 + 8 * v3 )
      v11 = 0LL;
    if ( v11 )
    {
      do
      {
        v12 = *(_QWORD *)v9;
        if ( (*(_DWORD *)(*(_QWORD *)v9 + 40LL) & 0x20) != 0 )
        {
          v14 = *(_DWORD *)(v12 + 64);
          NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v12, &v14);
        }
        v9 += 8LL;
        ++v10;
      }
      while ( v10 < v11 );
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v13);
  v4 = a1 + 8 * v3;
  v5 = (struct _FILEVIEW **)a1;
  v6 = 0LL;
  v7 = (v4 - a1 + 7) >> 3;
  if ( a1 > v4 )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      if ( *((_QWORD *)*v5 + 11) )
        vUnmapRemoteFonts();
      else
        vUnreferenceFileviewSection(*v5);
      ++v5;
      ++v6;
    }
    while ( v6 < v7 );
  }
  return Win32FreePool(a1);
}
